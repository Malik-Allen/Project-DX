// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PriorityQueue.h"
#include "DXCharacter.h"
#include "TurnBasedGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTDX_API ATurnBasedGameMode : public AGameModeBase
{
	GENERATED_BODY()
	

public:

	ATurnBasedGameMode();
	~ATurnBasedGameMode();

	UFUNCTION(BlueprintCallable, Category = "Turn Based")
		TArray<ADXCharacter*> Get_OrderedList() const { return combined_ordered_list; }

	UFUNCTION(BlueprintCallable, Category = "Turn Based")
		// Used to add a character to the desired team
		void AddCharacterToTeam(ETeamNumber teamNumber, ADXCharacter* character);

	UFUNCTION(BlueprintCallable, Category = "Turn Based")
		// Will combine both team lists into the combined list with ordering
		void AddTeamsToCombinedList(ETeamNumber first_team);

	UFUNCTION(BlueprintCallable, Category = "Turn Based")
		void OrderCombinedList();

	UFUNCTION(BlueprintCallable, Category = "Turn Based")
		// Sets Active Character to the next up character from the combined list
		void Next_Turn();
	
	UPROPERTY(BlueprintReadWrite, Category = "Turn Based")
		// The Active Character, the current turn owner
		ADXCharacter* Active_Character;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Turn Based")
		// Returns true if all requirements for the game mode have been met, false if not
		bool OnBeginGame();

	// Returns true if all requirements for the game mode have been met, false if not
	virtual bool OnBeginGame_Implementation();
	
private:

	UPriorityQueue* priority_queue;

	TArray<ADXCharacter*> team_one;
	TArray<ADXCharacter*> team_two;

	TArray<ADXCharacter*> combined_ordered_list;

	enum { MAX_TEAM_SIZE = 4 };

	ETeamNumber FirstTeam;
	ETeamNumber WinningTeamNumber;

	void OrderList(TArray<ADXCharacter*> list);

};
