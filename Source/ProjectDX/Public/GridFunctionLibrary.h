// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "Tile.h"
#include "DXCharacter.h"

#include "GridFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTDX_API UGridFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
		// Returns true if assignment is success, returns false if failed
		static bool AssignCharacterToTile(UTile* tile, ADXCharacter* character);

	UFUNCTION(BlueprintCallable)
		// Check to see if this tile has an occupant
		static bool IsTileOccupied(UTile* tile);
	
};
