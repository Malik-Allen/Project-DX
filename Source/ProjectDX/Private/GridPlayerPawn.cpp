// Fill out your copyright notice in the Description page of Project Settings.


#include "GridPlayerPawn.h"
#include "Grid.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Grid.h"

// Sets default values
AGridPlayerPawn::AGridPlayerPawn() :
	current_grid(nullptr),
	movement_speed(5.0f),
	bIsMovementLocked(false),
	bIsMoving(false),
	direction(EMovementDirection::Left)
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
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AGridPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AGridPlayerPawn::MoveByGrid(EMovementDirection new_direction) {
	
	direction = new_direction;

	UE_LOG(LogTemp, Warning, TEXT("Getting Neighbours"));

	TArray<UGrid*> neighbours;
	current_grid->GetNeighbors(neighbours);

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(8, 15.0f, FColor::White, "Neighbours Length: " + FString::FromInt(neighbours.Num()));
	UE_LOG(LogTemp, Warning, TEXT("Neighbours Count: %s"), *FString::FromInt(neighbours.Num()));

	for (int i = 0; i < neighbours.Num(); i++) {
		if (!neighbours[i]->GetVisibility())
			continue;
		UE_LOG(LogTemp, Warning, TEXT("Found Neighbour Index: %s"), *FString::FromInt(i));
		if (direction == EMovementDirection::Left) {
			if (neighbours[i]->Coord.X < current_grid->Coord.X) {
				target_grid = neighbours[i];
				break;
			}
		}
		else if (direction == EMovementDirection::Right) {
			if (neighbours[i]->Coord.X > current_grid->Coord.X) {
				target_grid = neighbours[i];
				break;
			}
		}
		else if (direction == EMovementDirection::Up) {
			if (neighbours[i]->Coord.Y < current_grid->Coord.Y) {
				target_grid = neighbours[i];
				break;
			}
		}
		else if (direction == EMovementDirection::Down) {
			if (neighbours[i]->Coord.Y > current_grid->Coord.Y) {
				target_grid = neighbours[i];
				break;
			}
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Looked through all the neighbours"));

	if (target_grid == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Did Not Find Target Grid"));
		bIsMoving = false;
		target_grid = nullptr;
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 55.0f, FColor::Orange, "Could not find target grid, Neighbour length: " + FString::FromInt(neighbours.Num()));
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

void AGridPlayerPawn::MoveToGrid(UGrid* target) {
	if (target == nullptr) {
		target_grid = nullptr;
		bIsMoving = false;
	}
	else {
		target_grid = target;
		bIsMoving = true;
	}
}

void AGridPlayerPawn::OnReachedDestination_Implementation() {
	if (current_grid) {
		// current_grid->GridInfo->GameplayTags.RemoveAllTags();
	}
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(4, 15.0f, FColor::Green, "Reached Desitination: " + target_grid->GetCenter().ToString());
	FGameplayTag cursor_tag;
	// target_grid->GridInfo->GameplayTags.AddTag();
	current_grid = target_grid;
	target_grid = nullptr;
	bIsMoving = false;

}

void AGridPlayerPawn::UpdatePosititon(float deltaTime) {
	if (target_grid == nullptr) {
		bIsMoving = false;
		return;
	}

	FVector target_grid_location = target_grid->GetCenter();
	FVector capsule_location = capsule_component->GetRelativeLocation();

	FVector direction_normal = target_grid_location - capsule_location;
	direction_normal = FVector(direction_normal.X, direction_normal.Y, 0.0f);
	direction_normal.Normalize();

	float speed = movement_speed * deltaTime;

	FVector new_location = capsule_location + (direction_normal * speed);

	if (FVector::Distance(new_location, target_grid_location) > FVector::Distance(capsule_location, target_grid_location)) {
		new_location = FVector(target_grid_location.X, target_grid_location.Y, capsule_location.Z);
	}
	
	capsule_component->SetWorldLocation(new_location);
	capsule_location = capsule_component->GetRelativeLocation();

	FVector final_location = FVector(target_grid_location.X, target_grid_location.Y, capsule_location.Z);
	
	
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

void AGridPlayerPawn::AssignCurrentGrid(UGrid* grid) {
	current_grid = grid;
}