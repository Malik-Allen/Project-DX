// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "TurnInterface.h"
#include "GameplayDefinitions.h"
#include "CharacterStats.h"
#include "ModifierSystem.h"
#include "AbilitySystem.h"

#include "Tile.h"

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
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character")
		UCharacterStats* character_stats;
	// Abilities Vector
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character")
		FVector position_on_grid;

	ModifierManager* modifier_manager;
	void Init_CharacterStats();
	void Init_ModifierManager();

	// Called at the begining of each turn by Turn Game Mode, when its this players turn
	virtual void Begin_Turn_Implementation() override;

	// Called at the end of each turn by Turn Game Mode, when its this player ends their turn
	virtual void End_Turn_Implementation() override;

	UTile* current_tile;

};
