// Fill out your copyright notice in the Description page of Project Settings.


#include "GridPlayerPawn.h"
#include "Grid.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameplayTags.h"
#include "BasicGridInfo.h"

const float AGridPlayerPawn::camera_rotation_offset(90.0f);


// Sets default values
AGridPlayerPawn::AGridPlayerPawn() :
	current_grid(nullptr),
	movement_speed(750.0f),
	rotation_speed(2.0f),
	IsSelectedTag(FGameplayTag()),
	IsMovableTag(FGameplayTag()),
	bIsMovementLocked(false),
	bIsMoving(false),
	bIsRotationLocked(false),
	bIsRotating(false),
	target_grid(nullptr),
	movement_direction(EMovementDirection::Left),
	rotation_direction(EMovementDirection::Left),
	target_camera_rotation(FRotator()),
	current_rotation_speed(0.0f),
	camera_fixed_position(CAMERA_POSITION_ONE)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Init Physics/ Collision Capsule
	capsule_component = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	RootComponent = capsule_component;
	capsule_component->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	

	springArm_component = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	springArm_component->SetupAttachment(RootComponent);

	camera_component = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	camera_component->SetupAttachment(springArm_component, USpringArmComponent::SocketName);

}

// Called when the game starts or when spawned
void AGridPlayerPawn::BeginPlay()
{

	IsSelectedTag = FGameplayTag::RequestGameplayTag(TEXT("Grid.GridInfo.IsSelected"));
	IsMovableTag = FGameplayTag::RequestGameplayTag(TEXT("Grid.GridInfo.IsMovable"));
	Super::BeginPlay();

}

// Called every frame
void AGridPlayerPawn::Tick(float DeltaTime)
{
	if (!bIsMovementLocked) {
		if (bIsMoving) {
			UpdatePosititon(DeltaTime);
		}
	}

	if (!bIsRotationLocked) {
		if (bIsRotating) {
			UpdateRotation(DeltaTime);
		}
	}
	

	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AGridPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}


// Used to link pawn to grid, ideally used on start of any map or gamemode
void AGridPlayerPawn::AssignCurrentGrid(UGrid* grid) {
	current_grid = grid;
	// IsSelectedTag = FGameplayTag::RequestGameplayTag(TEXT("Gird.GridInfo.IsSelected"));
	current_grid->GridInfo->GameplayTags.AddTag(IsSelectedTag);
	
}


// Moves Pawn by one grid in the given direction
void AGridPlayerPawn::MoveByGrid(EMovementDirection new_direction) {
	if (bIsRotating)
		return;
	
	movement_direction = new_direction;

	TArray<UGrid*> neighbours;
	current_grid->GetNeighbors(neighbours);

	InfluenceMovementDirection();

	// Going through list of neighbours at current grid, in order to find target grid, given the movement direction
	for (int i = 0; i < neighbours.Num(); i++) {
		if (!neighbours[i]->GetVisibility())
			continue;

		if (movement_direction == EMovementDirection::Left) {
			if (neighbours[i]->Coord.X < current_grid->Coord.X) {
				target_grid = neighbours[i];
				break;
			}
		}
		else if (movement_direction == EMovementDirection::Right) {
			if (neighbours[i]->Coord.X > current_grid->Coord.X) {
				target_grid = neighbours[i];
				break;
			}
		}
		else if (movement_direction == EMovementDirection::Up) {
			if (neighbours[i]->Coord.Y < current_grid->Coord.Y) {
				target_grid = neighbours[i];
				break;
			}
		}
		else if (movement_direction == EMovementDirection::Down) {
			if (neighbours[i]->Coord.Y > current_grid->Coord.Y) {
				target_grid = neighbours[i];
				break;
			}
		}
	}

	if (target_grid == nullptr) {	// No target found, no movement will be made
		bIsMoving = false;
		target_grid = nullptr;
	}
	else {
		bIsMoving = true;
		UE_LOG(LogTemp, Warning, TEXT("Found Target Grid"));
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(1, 15.0f, FColor::Yellow, "Starting Capsule Location: " + capsule_component->GetRelativeLocation().ToString());
			GEngine->AddOnScreenDebugMessage(2, 15.0f, FColor::Yellow, "Starting Grid Location: " + current_grid->GetCenter().ToString());
			GEngine->AddOnScreenDebugMessage(3, 15.0f, FColor::Yellow, "Target Grid Location: " + target_grid->GetCenter().ToString());
		}
	}
	

	
}


// Moves Pawn to directly target grid, ignoring all navigation
void AGridPlayerPawn::MoveToGrid(UGrid* target) {
	if (bIsRotating)
		return;

	if (target == nullptr) {
		target_grid = nullptr;
		bIsMoving = false;
	}
	else {
		target_grid = target;
		bIsMoving = true;
	}
}


// Rotates Camera to Fixed Location in the Given Direction
void AGridPlayerPawn::RotateCamera(EMovementDirection direction) {
	if (bIsRotationLocked)
		return;
	if (bIsRotating)
		return;
	if (bIsMoving)
		return;

	rotation_direction = direction;
	
	// Assigning the target rotation based on the direction provided
	switch (rotation_direction) {
	case EMovementDirection::Left:
		target_camera_rotation = springArm_component->GetRelativeRotation() + FRotator(0.0f, camera_rotation_offset, 0.0f);
		target_camera_rotation.Normalize();
		break;
	case EMovementDirection::Right:
		target_camera_rotation = springArm_component->GetRelativeRotation() + FRotator(0.0f, -camera_rotation_offset, 0.0f);
		target_camera_rotation.Normalize();
		break;
	default:
		bIsRotating = false;
		return;
		break;
	}

	current_rotation_speed = 0.0f;

	bIsRotating = true;
}

void AGridPlayerPawn::OnReachedDestination_Implementation() {
	
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(4, 15.0f, FColor::Green, "Reached Target Grid Desitination at: " + target_grid->GetCenter().ToString());
	

	if (current_grid) {
		if(current_grid->GridInfo->GameplayTags.HasTag(IsSelectedTag))
			current_grid->GridInfo->GameplayTags.RemoveTag(IsSelectedTag);
		
	}

	target_grid->GridInfo->GameplayTags.AddTag(IsSelectedTag);
	
	current_grid = target_grid;
	target_grid = nullptr;
	bIsMoving = false;


	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(9, 15.0f, FColor::Cyan, "AGridPlayerPawn::Current Grid Location: " + current_grid->GetCenter().ToString());
		GEngine->AddOnScreenDebugMessage(10, 15.0f, FColor::Cyan, "AGridPlayerPawn::Current Grid Occupancy: " + FString::FromInt(Cast<UBasicGridInfo>(current_grid->GridInfo)->IsOccupied()));		
		GEngine->AddOnScreenDebugMessage(11, 15.0f, FColor::Cyan, "AGridPlayerPawn::Current Grid isSelected Status: " + FString::FromInt(current_grid->GridInfo->GameplayTags.HasTag(IsSelectedTag)));
		GEngine->AddOnScreenDebugMessage(12, 15.0f, FColor::Cyan, "AGridPlayerPawn::Current Grid IsMovable Status: " + FString::FromInt(current_grid->GridInfo->GameplayTags.HasTag(IsMovableTag)));
	}

}

void AGridPlayerPawn::OnFinishedRotation_Implementation() {
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(8, 5.0f, FColor::Green, "Finished Rotation");

	bIsRotating = false;

	// Update our current camera fixed position based on the movement that was made
	switch (rotation_direction) {
	case EMovementDirection::Left:
		IncrementCameraPosition();
		break;
	case EMovementDirection::Right:
		DecrementCameraPosition();
		break;
	default:
		break;
	}
}

// Moves the Capule Component to the target grid, if target grid is null movement will not happen
void AGridPlayerPawn::UpdatePosititon(float deltaTime) {
	if (target_grid == nullptr) {
		bIsMoving = false;
		return;
	}


	FVector target_grid_location = target_grid->GetCenter();
	FVector capsule_location = capsule_component->GetRelativeLocation();

	// Direction to target grid
	FVector direction_normal = target_grid_location - capsule_location;
	direction_normal = FVector(direction_normal.X, direction_normal.Y, 0.0f);
	direction_normal.Normalize();

	float speed = movement_speed * deltaTime;

	FVector new_location = capsule_location + (direction_normal * speed);

	// If we are about to or have passed out target, assign our new location to the target's location instead
	if (FVector::Distance(new_location, target_grid_location) > FVector::Distance(capsule_location, target_grid_location)) {
		new_location = FVector(target_grid_location.X, target_grid_location.Y, capsule_location.Z);
	}
	
	capsule_component->SetWorldLocation(new_location);
	capsule_location = capsule_component->GetRelativeLocation();

	FVector final_location = FVector(target_grid_location.X, target_grid_location.Y, capsule_location.Z);
	
	// Are we as close as we need to be? if so we have reached our destination
	if(FVector::Distance(capsule_location, final_location) <= 0.1f)
		OnReachedDestination();		
	else {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(5, 15.0f, FColor::Orange, "Current Capsule Location: " + capsule_component->GetRelativeLocation().ToString());
			GEngine->AddOnScreenDebugMessage(6, 15.0f, FColor::Orange, "Current Capsule Direction: " + direction_normal.ToString());
			GEngine->AddOnScreenDebugMessage(7, 15.0f, FColor::Orange, "Target Capsule Location: " + final_location.ToString());
		}
	}
}


// Rotates camera towards the target camera, target rotation will need to have been assigned
void AGridPlayerPawn::UpdateRotation(float deltaTime) {
	FRotator current_rotation = springArm_component->GetRelativeRotation();

	float speed = rotation_speed * deltaTime;
	current_rotation_speed += speed;
	float alpha = current_rotation_speed / rotation_speed;

	springArm_component->SetRelativeRotation(FMath::Lerp(current_rotation, target_camera_rotation, alpha));

	// Have we reached our target rotation, in the case of the camera rotation we compare the yaw axis, because it is the axis we are rotating on
	if (FMath::Abs(target_camera_rotation.Yaw - current_rotation.Yaw) <= 0.1f) {
		springArm_component->SetRelativeRotation(target_camera_rotation);
		OnFinishedRotation();
	}

	/*

	/// Yielded the same result as above, with the cost of going past the target rotation and then snaping back to it once it has been passed
	
	FRotator current_rotation = springArm_component->GetRelativeRotation();
	float speed = rotation_speed * deltaTime;
	FRotator new_camera_rotation = (camera_rotation_change * speed);

	springArm_component->AddRelativeRotation(new_camera_rotation);
	current_rotation = springArm_component->GetRelativeRotation();

	if (FMath::Abs(target_camera_rotation.Yaw - current_rotation.Yaw) <= 3.0f) {
		springArm_component->SetWorldRotation(target_camera_rotation);
		OnFinishedRotation();
	}
	else {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(10, 15.0f, FColor::Orange, "Current Camera Rotation: " + current_rotation.ToString());
			GEngine->AddOnScreenDebugMessage(11, 15.0f, FColor::Orange, "Current Camera Rotation Direction: " + camera_rotation_change.ToString());
			GEngine->AddOnScreenDebugMessage(12, 15.0f, FColor::Orange, "Target Camera Rotation: " + target_camera_rotation.ToString());
			GEngine->AddOnScreenDebugMessage(13, 15.0f, FColor::Orange, "Change in Rotation: " + camera_rotation_change.ToString());
		}
	}
	*/

}

void AGridPlayerPawn::IncrementCameraPosition() {
	if (camera_fixed_position + 1 == CAMERA_POSITION_MAX)
		camera_fixed_position = CAMERA_POSITION_ONE;
	else
		++camera_fixed_position;
}

void AGridPlayerPawn::DecrementCameraPosition() {
	if (camera_fixed_position - 1 == CAMERA_POSITION_MIN)
		camera_fixed_position = CAMERA_POSITION_FOUR;
	else
		--camera_fixed_position;
}

// Changes the movement direction to allign with the user's expected grid movement based on the camera's orientation (fixed camera positon)
void AGridPlayerPawn::InfluenceMovementDirection() {
	
	/*	--->	L- Left, R- Right, U- Up, D- Down	<---	*/

	switch (camera_fixed_position) {
		
	/*
		Camera Fixed Orientation 1:
			  U
			L	R
			  D
	*/

	case CAMERA_POSITION_ONE:
		if (movement_direction == EMovementDirection::Left)
			movement_direction = EMovementDirection::Left;
		else if (movement_direction == EMovementDirection::Right)
			movement_direction = EMovementDirection::Right;
		else if (movement_direction == EMovementDirection::Up)
			movement_direction = EMovementDirection::Up;
		else if (movement_direction == EMovementDirection::Down)
			movement_direction = EMovementDirection::Down;
		break;

	/*
		Camera Fixed Orientation 2:
			  R
			U	D
			  L
	*/

	case CAMERA_POSITION_TWO:
		if (movement_direction == EMovementDirection::Left)
			movement_direction = EMovementDirection::Up;
		else if (movement_direction == EMovementDirection::Right)
			movement_direction = EMovementDirection::Down;
		else if (movement_direction == EMovementDirection::Up)
			movement_direction = EMovementDirection::Right;
		else if (movement_direction == EMovementDirection::Down)
			movement_direction = EMovementDirection::Left;
		break;

	/*
		Camera Fixed Orientation 3:
			  D
			R	L
			  U
	*/

	case CAMERA_POSITION_THREE:
		if (movement_direction == EMovementDirection::Left)
			movement_direction = EMovementDirection::Right;
		else if (movement_direction == EMovementDirection::Right)
			movement_direction = EMovementDirection::Left;
		else if (movement_direction == EMovementDirection::Up)
			movement_direction = EMovementDirection::Down;
		else if (movement_direction == EMovementDirection::Down)
			movement_direction = EMovementDirection::Up;
		break;

	/*
		Camera Fixed Orientation 4:
			  L
			D	U
			  R
	*/

	case CAMERA_POSITION_FOUR:
		if (movement_direction == EMovementDirection::Left)
			movement_direction = EMovementDirection::Down;
		else if (movement_direction == EMovementDirection::Right)
			movement_direction = EMovementDirection::Up;
		else if (movement_direction == EMovementDirection::Up)
			movement_direction = EMovementDirection::Left;
		else if (movement_direction == EMovementDirection::Down)
			movement_direction = EMovementDirection::Right;
		break;
	default:
		break;
	}
}