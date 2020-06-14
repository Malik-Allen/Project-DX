// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GridInterface.h"
#include "GameplayDefinitions.h"
#include "GameplayTags.h"
#include "GridPlayerPawn.generated.h"

class UGrid;
class UCapsuleComponent;
class UCameraComponent;
class USpringArmComponent;


UCLASS(Transient)
class PROJECTDX_API AGridPlayerPawn : public APawn, public IGridPawnInterface
{
	GENERATED_BODY()

	// friend class AGridPlayerController;
public:

	// Sets default values for this pawn's properties
	AGridPlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UGrid* current_grid;

	UPROPERTY(Category = Collider, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UCapsuleComponent* capsule_component;

	UPROPERTY(Category = Camera, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		USpringArmComponent* springArm_component;

	UPROPERTY(Category = Camera, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UCameraComponent* camera_component;

	UPROPERTY(Category = Movement, BlueprintReadWrite)
		float movement_speed;

	UPROPERTY(Category = Movement, BlueprintReadWrite)
		float rotation_speed;



	UFUNCTION(BlueprintCallable, meta = (BlueprintProtected = "true"))
	// Used to link pawn to grid, ideally used on start of any map or gamemode
	void AssignCurrentGrid(UGrid* grid);

	UFUNCTION(BlueprintCallable, Category = "Movement")
	// Moves Pawn by one grid in the given direction
	void MoveByGrid(EMovementDirection new_direction);

	UFUNCTION(BlueprintCallable, Category = "Movement")
	// Moves Pawn to directly target grid, ignoring all navigation
	void MoveToGrid(UGrid* target);

	UFUNCTION(BlueprintCallable, Category = "Movement")
	// Rotates Camera to Fixed Location in the Given Direction
	void RotateCamera(EMovementDirection direction);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Movement")
	void OnReachedDestination();
	virtual void OnReachedDestination_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Movement")
	void OnFinishedRotation();
	virtual void OnFinishedRotation_Implementation();
	
	UFUNCTION(BlueprintCallable)
	bool IsMovementLocked() const { return bIsMovementLocked; }

	UFUNCTION(BlueprintCallable)
	// Is this pawn currently moving
	bool IsMoving() const { return bIsMoving; }

	UFUNCTION(BlueprintCallable)
	bool IsRotationLocked() const { return bIsRotationLocked; }

	UFUNCTION(BlueprintCallable)
	// Is this pawn currently rotating
	bool IsRotating() const { return bIsRotating; }

	static const float camera_rotation_offset;

	FGameplayTag IsSelectedTag;
	FGameplayTag IsMovableTag;

	void SetMovementLocked(bool isMovementLocked) { bIsMovementLocked = isMovementLocked; }
	void SetRotationLocked(bool isRotationLocked) { bIsRotationLocked = isRotationLocked; }

private:

	bool bIsMovementLocked;
	bool bIsMoving;
	bool bIsRotationLocked;
	bool bIsRotating;

	UGrid* target_grid;

	EMovementDirection movement_direction;

	EMovementDirection rotation_direction;
	FRotator target_camera_rotation;
	float current_rotation_speed;

	// Moves Capule Component to the target grid location, if target grid is null movement will not happen
	void UpdatePosititon(float delatTime);

	// Rotates SpringArm towards the target rotation, if target rotation has not been assigned, rotation will not happen
	void UpdateRotation(float delatTime);

	enum {
		CAMERA_POSITION_MIN = 0,
		CAMERA_POSITION_ONE = 1,
		CAMERA_POSITION_TWO = 2,
		CAMERA_POSITION_THREE = 3,
		CAMERA_POSITION_FOUR = 4,
		CAMERA_POSITION_MAX = 5
	};

	int camera_fixed_position;
	
	void IncrementCameraPosition();
	void DecrementCameraPosition();

	// Changes the movement direction to allign with the user's expected grid movement based on the camera's orientation (fixed camera positon)
	void InfluenceMovementDirection();

};
