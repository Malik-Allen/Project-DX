// Fill out your copyright notice in the Description page of Project Settings.


#include "Tile.h"
#include "DXCharacter.h"

UTile::UTile() :
	bIsOccupied(false),
	occupant(nullptr),
	grid_position(FVector2D(0.0f))
{}

UTile::~UTile() {}

bool UTile::IsOccupied() const {
	UE_LOG(LogTemp, Warning, TEXT("Grid: %s isOccupied = %s"), *grid_position.ToString(), *FString::FromInt(bIsOccupied));
	return bIsOccupied;
}

// Assigns this tile an occupant and assigns this tile to said occupant
void UTile::Set_Occupant(ADXCharacter* character) {
	if (character == nullptr) {
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 25.0f, FColor::Yellow, "Warning! Tried to set Null Occupant at Grid: " + grid_position.ToString());
		UE_LOG(LogTemp, Warning, TEXT("Warning! Tried to set Null Occupant at Grid: "), *grid_position.ToString());
		bIsOccupied = false;
		return;
	}

	if (character->current_tile != nullptr) {				// When this character is moving from another grid, lets clear up all references
		character->current_tile->Evict_Occupant();
	}

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 25.0f, FColor::Cyan, "Assigning " + character->name + " to Grid Location: " + grid_position.ToString());
	UE_LOG(LogTemp, Warning, TEXT("Assigning %s to Grid Location: "), *character->name, *grid_position.ToString());
	character->current_tile = this;						// Assign the character's tile to this tile and occupant to that character
	occupant = character;
	bIsOccupied = true;
}

// Will remove occupant reference from this tile, and tile reference of occupant
void UTile::Evict_Occupant() {
	if (occupant == nullptr) {										// If there is no occupant, no problem
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 25.0f, FColor::Yellow, "Warning! Tried to Remove a Null Occupant at Grid Location: " + grid_position.ToString());
		UE_LOG(LogTemp, Warning, TEXT("Warning! Tried to Remove a Null Occupant at Grid Location: "), *grid_position.ToString());
		bIsOccupied = false;
		return; 
	}

	if (occupant->current_tile != nullptr) {						// When there is a valid tile set to the occupant and its this tile, we will remove the reference from the character
		if (occupant->current_tile->grid_position == this->grid_position) {
			occupant->current_tile = nullptr;
		}
	}

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 25.0f, FColor::Cyan, "Removing " + occupant->name + " from Grid Location: " + grid_position.ToString());
	UE_LOG(LogTemp, Warning, TEXT("Removing %s to Grid Location: "), *occupant->name, *grid_position.ToString());
	occupant = nullptr;
	bIsOccupied = false;
}
