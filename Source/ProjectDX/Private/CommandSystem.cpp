// Fill out your copyright notice in the Description page of Project Settings.


#include "CommandSystem.h"
#include "Grid.h"
#include "BasicGridInfo.h"
#include "DXCharacter.h"
#include "Components/GridNavigationComponent.h"
#include "Engine/World.h"

UCommandSystem::UCommandSystem() :
	command_manager(nullptr)
{}

UCommandSystem::~UCommandSystem() {
	if (command_manager) delete command_manager, command_manager = nullptr;
}

void UCommandSystem::OnRegister() {
	command_manager = new CommandManager();
	Super::OnRegister();
}

Cmd_MoveCharacterToGrid::Cmd_MoveCharacterToGrid(ADXCharacter* TargetToMove, UGrid* TargetGrid_) :
	CharacterToMove(TargetToMove),
	OriginalGrid(TargetToMove->current_grid),
	TargetGrid(TargetGrid_) 
{}

Cmd_MoveCharacterToGrid::~Cmd_MoveCharacterToGrid() {
	if (CharacterToMove) CharacterToMove = nullptr;
	if (OriginalGrid) OriginalGrid = nullptr;
	if (TargetGrid) TargetGrid = nullptr;
}

void Cmd_MoveCharacterToGrid::SetTargetGrid(UGrid* TargetGrid_) {
	TargetGrid = TargetGrid_;
}

bool Cmd_MoveCharacterToGrid::Execute() {
	if (CharacterToMove == nullptr)
		return false;

	UBasicGridInfo* basic_grid_info = nullptr;
	if (CharacterToMove->GridNavigation->RequestMove(TargetGrid)) {
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, "Cmd_MoveCharacterToGrid: Executed Move");
		UE_LOG(LogTemp, Warning, TEXT("Cmd_MoveCharacterToGrid: Executed New Move"));

		basic_grid_info = Cast<UBasicGridInfo>(CharacterToMove->current_grid->GridInfo);
		basic_grid_info->Evict_Occupant();

		basic_grid_info = Cast<UBasicGridInfo>(TargetGrid->GridInfo);
		CharacterToMove->current_grid = TargetGrid;
		basic_grid_info->Set_Occupant(CharacterToMove);
		
		return true;
	}
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "Cmd_MoveCharacterToGrid: Failed to Execute Move");
	UE_LOG(LogTemp, Warning, TEXT("Cmd_MoveCharacterToGrid: Failed to Execute New Move"));

	return false;
}

bool Cmd_MoveCharacterToGrid::Undo() {
	if (CharacterToMove == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Cmd_MoveCharacterToGrid: Unable To Perform Undo Move, Character is null"));
		return false;
	}

	if (CharacterToMove->GridOnStartOfTurn == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Cmd_MoveCharacterToGrid: Unable To Perform Undo Move, GridOnStartOfTurn is null"));
		return false;
	}

	if (Cast<UBasicGridInfo>(CharacterToMove->GridOnStartOfTurn->GridInfo)->IsOccupied()) {
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "Cmd_MoveCharacterToGrid: Unable To Perform Undo Move, Original Grid is occupied");
		UE_LOG(LogTemp, Warning, TEXT("Cmd_MoveCharacterToGrid: Unable To Perform Undo Move, Original Grid is occupied"));
		return false;
	}
	
	if (CharacterToMove->SetActorLocation(CharacterToMove->GridOnStartOfTurn->GetCenterSpawnableLocation())) {
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, "Cmd_MoveCharacterToGrid: Undo Move Performed on Actor");
		UE_LOG(LogTemp, Warning, TEXT("Cmd_MoveCharacterToGrid: Undo Move Performed on Actor"));
		Cast<UBasicGridInfo>(CharacterToMove->current_grid->GridInfo)->Evict_Occupant();
		CharacterToMove->current_grid = CharacterToMove->GridOnStartOfTurn;
		Cast<UBasicGridInfo>(CharacterToMove->current_grid->GridInfo)->Set_Occupant(CharacterToMove);
		return true;
	}

	UE_LOG(LogTemp, Warning, TEXT("Cmd_MoveCharacterToGrid: Unable To Perform Undo Move, Set Actor Location Failed"));

	return false;
}

void Cmd_MoveCharacterToGrid::Redo() {
	// No Redo for move
}



Cmd_SpawnActorAtGrid::Cmd_SpawnActorAtGrid(UObject* owner, UGrid* grid, TSubclassOf<ADXCharacter> actor, TArray<ADXCharacter*> list) :
	Owner(owner), 
	Grid(grid), 
	ActorClass(actor), 
	Actor(nullptr), 
	LocationToSpawn(FVector()), 
	ListOfActors(&list)
{}

Cmd_SpawnActorAtGrid::~Cmd_SpawnActorAtGrid() {}

bool Cmd_SpawnActorAtGrid::Execute() {
	if (Owner == nullptr)
		return false;

	if (Grid == nullptr)
		return false;

	UBasicGridInfo* grid_info = nullptr;
	if (Cast<UBasicGridInfo>(Grid->GridInfo)) {
		grid_info = Cast<UBasicGridInfo>(Grid->GridInfo);
		if (grid_info->IsOccupied())
			return false;
	}
	else {
		return false;
	}
	
	if (Actor)
		Actor->ConditionalBeginDestroy();

	LocationToSpawn = Grid->GetCenterSpawnableLocation();
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	Actor = Owner->GetWorld()->SpawnActor<ADXCharacter>(ActorClass, LocationToSpawn, FRotator(), SpawnInfo);

	if (Actor == nullptr) {
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, "Warning! Tried spawn Occupant at Grid: " + Grid->Coord.ToString());
	}
	else {
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, "Success! Spawned Occupant at Grid: " + Grid->Coord.ToString());
	}

	grid_info->Set_Occupant(Actor);
	Actor->GridOnStartOfTurn = Actor->current_grid;

	return true;
	
}

bool Cmd_SpawnActorAtGrid::Undo() {
	if (Actor == nullptr)
		return false;

	if (Grid == nullptr)
		return false;

	UBasicGridInfo* grid_info = nullptr;
	if (Cast<UBasicGridInfo>(Grid->GridInfo)) {
		grid_info = Cast<UBasicGridInfo>(Grid->GridInfo);
		grid_info->Evict_Occupant();
	}

	Actor->SetActorHiddenInGame(true);

	return true;
}

void Cmd_SpawnActorAtGrid::Redo() {
	if (Owner == nullptr)
		return;

	if (Grid == nullptr)
		return;

	if (Actor == nullptr)
		return;

	UBasicGridInfo* grid_info = nullptr;
	if (Cast<UBasicGridInfo>(Grid->GridInfo)) {
		grid_info = Cast<UBasicGridInfo>(Grid->GridInfo);
		if (grid_info->IsOccupied())
			return;
	}
	else {
		return;
	}

	LocationToSpawn = Grid->GetCenterSpawnableLocation();

	Actor->SetActorLocation(LocationToSpawn); 
	Actor->SetActorHiddenInGame(false);

	grid_info->Set_Occupant(Actor);

}