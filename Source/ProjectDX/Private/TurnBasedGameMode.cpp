// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedGameMode.h"
#include "TurnInterface.h"
#include "Kismet/GameplayStatics.h"
#include "UndoRedo/CommandManager.h"
#include "Grid.h"
#include "CommandSystem.h"
#include "BasicGridInfo.h"

ATurnBasedGameMode::ATurnBasedGameMode() :
	Active_Character(nullptr),
	priority_queue(nullptr),
	FirstTeam(ETeamNumber::TeamOne),
	WinningTeamNumber(ETeamNumber::TeamOne),
	Command_Manager(new CommandManager())
{
	
}

ATurnBasedGameMode::~ATurnBasedGameMode() {}

void ATurnBasedGameMode::InitGameState() {
	priority_queue = NewObject<UPriorityQueue>();
	team_one.Reserve(MAX_TEAM_SIZE);
	team_two.Reserve(MAX_TEAM_SIZE);
	combined_ordered_list.Reserve(MAX_TEAM_SIZE + MAX_TEAM_SIZE);
	Super::InitGameState();
}

// Used to add a character to the desired team
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

// Will combine both team lists into the combined list with ordering
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
			UE_LOG(LogTemp, Warning, TEXT("Bad Cast, could not find a character"));
		}
		priority_queue->Pop();
	}
}

// Sets Active Character to the next up character from the combined list
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
	
	if (combined_ordered_list.Num() > 0) {
		ADXCharacter* temp = combined_ordered_list[0];
		Active_Character = temp;

		for (int i = 1; i < combined_ordered_list.Num(); i++)
			combined_ordered_list[i - 1] = combined_ordered_list[i];
		
		int lastIndex = combined_ordered_list.Num() - 1;
		if (combined_ordered_list.IsValidIndex(lastIndex))
			combined_ordered_list[lastIndex] = temp;
	}
	
	for (int i = 0; i < combined_ordered_list.Num(); i++) {
		combined_ordered_list[i]->turn_order = i;										// Gives each player its position in the array as the turn order
	}

	OrderList(combined_ordered_list);

	UE_LOG(LogTemp, Warning, TEXT("Next Turn Has reach interface call"));
	ITurnInterface* turn_interface = Cast<ITurnInterface>(Active_Character);			// Now that this list has been order, we can call begin turn
	if (turn_interface) {
		UE_LOG(LogTemp, Warning, TEXT("Interface is valid"));
		turn_interface->Execute_Begin_Turn(Active_Character);
	}
}

// Returns true if all requirements for the game mode have been met, false if not
bool ATurnBasedGameMode::OnBeginGame_Implementation() {
	// Next_Turn();
	// APlayerController* controller = UGameplayStatics::GetPlayerController(this, 0);
	// if (controller)
	// 	controller->Possess(Active_Character);
	// Call Next Turn to set up the first player in the ordered list
	// Posses that player with the player controller
	// Add a call to apply all passive modifiers/ abilities(once that has been set up)

	return true;
}

void ATurnBasedGameMode::Spawn_Character( UGrid* Grid, TSubclassOf<ADXCharacter> CharcaterClass) {
	Command_Manager->Exec_Command(new Cmd_SpawnActorAtGrid(UGameplayStatics::GetPlayerController(this, 0), Grid, CharcaterClass, all_characters));
}

void ATurnBasedGameMode::Undo() {
	Command_Manager->Undo_Command();
}

void ATurnBasedGameMode::Redo() {
	Command_Manager->Redo_Command();
}

void ATurnBasedGameMode::AssignCharacterToGrid(ADXCharacter* Character, UGrid* Grid) {
	UBasicGridInfo* grid_info = nullptr;
	if (Cast<UBasicGridInfo>(Grid->GridInfo)) {
		grid_info = Cast<UBasicGridInfo>(Grid->GridInfo);
		grid_info->Set_Occupant(Character);
		Character->SetActorLocation(Grid->GetCenterSpawnableLocation());
	}
}