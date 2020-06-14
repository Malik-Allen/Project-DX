// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicGridInfo.h"
#include "DXCharacter.h"
#include "Grid.h"

UBasicGridInfo::UBasicGridInfo() :
	UGridInfo(),
	bIsOccupied(false),
	occupant(nullptr)
{}

UBasicGridInfo::~UBasicGridInfo() {}

void UBasicGridInfo::Clear_Implementation() {
	Evict_Occupant();
}

bool UBasicGridInfo::IsOccupied() const {
	
	UE_LOG(LogTemp, Warning, TEXT("UBasicGridInfo::Grid: %s isOccupied = %s"), *ParentGrid->GetCenterSpawnableLocation().ToString(), *FString::FromInt(bIsOccupied));
	return bIsOccupied;
}

// Assigns this tile an occupant and assigns this tile to said occupant
void UBasicGridInfo::Set_Occupant(ADXCharacter* character) {
	if (character == nullptr) {
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, "UBasicGridInfo::Warning! Failed to Assign Character to grid: " + ParentGrid->GetCenterSpawnableLocation().ToString());
		UE_LOG(LogTemp, Warning, TEXT("UBasicGridInfo::Warning! Character Reference! Failed to Assign Character to grid: "), *ParentGrid->GetCenterSpawnableLocation().ToString());
		bIsOccupied = false;
		HitResult.bBlockingHit = !bIsOccupied;
		return;
	}

	if (character->current_grid != nullptr) {				// When this character is moving from another grid, lets clear up all references
		if (Cast<UBasicGridInfo>(character->current_grid->GridInfo)) {
			Cast<UBasicGridInfo>(character->current_grid->GridInfo)->Evict_Occupant();
		}
	}

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, "UBasicGridInfo::Assigning " + character->name + " to Grid Location: " + ParentGrid->GetCenterSpawnableLocation().ToString());
	UE_LOG(LogTemp, Warning, TEXT("UBasicGridInfo::Assigning %s to Grid Location: "), *character->name, *ParentGrid->GetCenterSpawnableLocation().ToString());
	character->current_grid = this->ParentGrid;						// Assign the character's tile to this tile and occupant to that character
	occupant = character;
	bIsOccupied = true;
	HitResult.bBlockingHit = !bIsOccupied;
}

// Will remove occupant reference from this tile, and tile reference of occupant
void UBasicGridInfo::Evict_Occupant() {
	if (occupant == nullptr) {										// If there is no occupant, no problem
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, "UBasicGridInfo::Warning! Failed to Remove Occupant at Grid: " + ParentGrid->GetCenterSpawnableLocation().ToString());
		UE_LOG(LogTemp, Warning, TEXT("UBasicGridInfo::Warning! Null Character Reference! Failed to Remove Occupant at Grid: "), *ParentGrid->GetCenterSpawnableLocation().ToString());
		bIsOccupied = false;
		HitResult.bBlockingHit = !bIsOccupied;
		return;
	}

	//if (occupant->current_grid != nullptr) {						// When there is a valid tile set to the occupant and its this tile, we will remove the reference from the character
	//	if (occupant->current_grid->Coord == this->ParentGrid->Coord) {
	//		occupant->current_grid = nullptr;
	//	}
	//}

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, "UBasicGridInfo::Removing " + occupant->name + " from Grid Location: " + ParentGrid->GetCenterSpawnableLocation().ToString());
	UE_LOG(LogTemp, Warning, TEXT("UBasicGridInfo::Removing %s to Grid Location: "), *occupant->name, *ParentGrid->GetCenterSpawnableLocation().ToString());
	occupant = nullptr;
	bIsOccupied = false;
	HitResult.bBlockingHit = !bIsOccupied;
}