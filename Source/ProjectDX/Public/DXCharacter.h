// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "TurnInterface.h"
#include "GameplayDefinitions.h"
#include "CharacterStats.h"
#include "ModifierSystem.h"
#include "AbilitySystem.h"

#include "DXCharacter.generated.h"

UCLASS()
class PROJECTDX_API ADXCharacter : public ACharacter, public ITurnInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADXCharacter();
	~ADXCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character")
	FString name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character")
	int turn_order;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character")
	int team_number;

	UPROPERTY(Category = "Character Attributes", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true", DisplayName = "Character Attributes"))
	UCharacterAttributes* character_attributes;

	UPROPERTY(Category = "Character Attributes", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true", DisplayName = "Character Attributes"))
	class UGridNavigationComponent* GridNavigation;
	
	ModifierManager* modifier_manager;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character")
	class UGrid* current_grid;

	UGrid* GridOnStartOfTurn;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, meta = (BlueprintProtected), Category = "Character Attributes")
		void AssignAttributes();
	virtual void AssignAttributes_Implementation() {}



	/*----- Turn Interface Functions -----*/

	// Called at the begining of each turn by Turn Game Mode, when its this players turn
	virtual void Begin_Turn_Implementation() override;

	// Called at the end of each turn by Turn Game Mode, when its this player ends their turn
	virtual void End_Turn_Implementation() override;



	/*----- Command Functions -----*/

	
	void MoveToGrid(UGrid* TargetGrid);

	void UndoMove();


private:

	class UCommandSystem* CommandSystem;

	class IInteractionInterface* ControllerInteractionInterface;

	class Cmd_MoveCharacterToGrid* LastMoveCommand;

};
