// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GridInterface.h"
#include "GameplayDefinitions.h"
#include "GridPlayerPawn.generated.h"

class UGrid;
class UCapsuleComponent;
class UCameraComponent;
class USpringArmComponent;




UCLASS(Transient)
class PROJECTDX_API AGridPlayerPawn : public APawn, public IGridPawnInterface
{
	GENERATED_BODY()

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

	UFUNCTION(BlueprintCallable, Category = "Movement")
		void MoveByGrid(EMovementDirection new_direction);

	UFUNCTION(BlueprintCallable, Category = "Movement")
		void MoveToGrid(UGrid* target);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Movement")
		void OnReachedDestination();
	virtual void OnReachedDestination_Implementation();
	
	UFUNCTION(BlueprintCallable)
	bool IsMovementLocked() const { return bIsMovementLocked; }

	UFUNCTION(BlueprintCallable)
	bool IsMoving() const { return bIsMoving; }

	
	UFUNCTION(BlueprintCallable, meta = (BlueprintProtected = "true"))
		void AssignCurrentGrid(UGrid* grid);

private:

	bool bIsMovementLocked;
	bool bIsMoving;

	UGrid* target_grid;

	EMovementDirection direction;

	void UpdatePosititon(float delatTime);

};
