// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Tile.generated.h"


UCLASS(BlueprintType)
class PROJECTDX_API UTile : public UObject {

	GENERATED_BODY()

private:

	// Is this tile occupied
	bool bIsOccupied;

	// Reference to the current occupant of this tile, if none this will be Null
	class ADXCharacter* occupant;

public:

	UTile();
	~UTile();

	UPROPERTY(BlueprintReadWrite, Category = "Tile")
		// The position of this tile in the grid
		FVector2D grid_position;

	bool IsOccupied() const;
	
	// Assigns this tile an occupant and assigns this tile to said occupant
	void Set_Occupant(ADXCharacter* character);

	// Will remove occupant reference from this tile, and tile reference of occupant
	void Evict_Occupant();

};
