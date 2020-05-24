// Fill out your copyright notice in the Description page of Project Settings.


#include "GridFunctionLibrary.h"

bool UGridFunctionLibrary::AssignCharacterToTile(UTile* tile, ADXCharacter* character) {
	UE_LOG(LogTemp, Warning, TEXT("Assigning Character to Tile"),);
	tile->Set_Occupant(character);
	return !tile->IsOccupied();
}

bool UGridFunctionLibrary::IsTileOccupied(UTile* tile) {
	return tile->IsOccupied();
}