// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedGameMode.h"

ATurnBasedGameMode::ATurnBasedGameMode() :
	Active_Character(nullptr),
	priority_queue(nullptr),
	FirstTeam(ETeamNumber::TeamOne),
	WinningTeamNumber(ETeamNumber::TeamOne)
{
	priority_queue = NewObject<UPriorityQueue>();
	team_one.Reserve(MAX_TEAM_SIZE);
	team_two.Reserve(MAX_TEAM_SIZE);
	combined_ordered_list.Reserve(MAX_TEAM_SIZE + MAX_TEAM_SIZE);
}

ATurnBasedGameMode::~ATurnBasedGameMode() {}

void ATurnBasedGameMode::AddCharacterToTeam(ETeamNumber teamNumber, ADXCharacter* character) {
	if (character == nullptr) return;

	switch (teamNumber) {
		case ETeamNumber::TeamOne:
			team_one.Push(character);
			OrderList(team_one);
			break;
		case ETeamNumber::TeamTwo:
			team_two.Push(character);
			OrderList(team_two);
			break;
		default:
			break;
	}

}

void ATurnBasedGameMode::OrderList(TArray<ADXCharacter*> list) {
	priority_queue->Clear();
	if (list.Num() == 0) return;

	for (ADXCharacter* character : list) {
		priority_queue->Push(character->turn_order, character);
	}

	int listSize = list.Num();

	list.Reset(listSize);

	while (!priority_queue->IsEmpty()) {
		if (Cast<ADXCharacter>(priority_queue->Peek())) {
			list.Add(Cast<ADXCharacter>(priority_queue->Peek()));
		}
		else {
			if (GEngine)
				GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Red, "Bad Cast, could not find a character");
		}
		priority_queue->Pop();
	}
}

void ATurnBasedGameMode::AddTeamsToCombinedList(ETeamNumber first_team) {
	FirstTeam = first_team;
	TArray<ADXCharacter*> first;
	TArray<ADXCharacter*> second;

	switch (FirstTeam) {
		case ETeamNumber::TeamOne:
			first = team_one;
			second = team_two;
			break;
		case ETeamNumber::TeamTwo:
			first = team_two;
			second = team_one;
			break;
		default:
			return;
			break;
	}

	combined_ordered_list.Reset(MAX_TEAM_SIZE + MAX_TEAM_SIZE);

	for (int i = 0; i < MAX_TEAM_SIZE; i++) {
		if (first.IsValidIndex(i))
			combined_ordered_list.Add(first[i]);
		if (second.IsValidIndex(i))
			combined_ordered_list.Add(second[i]);
	}

	OrderList(combined_ordered_list);
}

void ATurnBasedGameMode::OrderCombinedList() {
	OrderList(combined_ordered_list);
}

void ATurnBasedGameMode::Next_Turn() {
	if (combined_ordered_list.Num() == 0) return;
	
	if (combined_ordered_list.IsValidIndex(0)) {
		ADXCharacter* temp = combined_ordered_list[0];
		Active_Character = temp;
		combined_ordered_list.RemoveAt(0);
		combined_ordered_list.Add(temp);
	}

	
	for (int i = 0; i < combined_ordered_list.Num(); i++) {
		combined_ordered_list[i]->turn_order = i;	// Gives each player its position in the array as the turn order
	}

	OrderList(combined_ordered_list);
}