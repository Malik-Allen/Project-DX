// Fill out your copyright notice in the Description page of Project Settings.


#include "CommandSystem.h"
#include "Grid.h"
#include "BasicGridInfo.h"
#include "DXCharacter.h"
#include "Engine/World.h"

CommandSystem::CommandSystem()
{
}

CommandSystem::~CommandSystem()
{
}


Cmd_SpawnActorAtGrid::Cmd_SpawnActorAtGrid(UObject* owner, UGrid* grid, TSubclassOf<ADXCharacter> actor, TArray<ADXCharacter*> list) :
	Owner(owner), Grid(grid), ActorClass(actor), Actor(nullptr), LocationToSpawn(FVector()), ListOfActors(&list)
{}

Cmd_SpawnActorAtGrid::~Cmd_SpawnActorAtGrid() {}

void Cmd_SpawnActorAtGrid::Execute() {
	if (Owner == nullptr)
		return;

	if (Grid == nullptr)
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
	
	ListOfActors->Add(Actor);
	grid_info->Set_Occupant(Actor);
	
}

void Cmd_SpawnActorAtGrid::Undo() {
	if (Actor == nullptr)
		return;

	if (Grid == nullptr)
		return;

	UBasicGridInfo* grid_info = nullptr;
	if (Cast<UBasicGridInfo>(Grid->GridInfo)) {
		grid_info = Cast<UBasicGridInfo>(Grid->GridInfo);
		grid_info->Evict_Occupant();
	}

	ListOfActors->Remove(Actor);

	Actor->SetActorHiddenInGame(true);
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

	// ListOfActors->Add(Actor);
	grid_info->Set_Occupant(Actor);

}