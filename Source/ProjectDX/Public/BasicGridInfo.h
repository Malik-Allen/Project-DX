// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GridInfo.h"
#include "BasicGridInfo.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class PROJECTDX_API UBasicGridInfo : public UGridInfo
{
	GENERATED_BODY()

	// Is this tile occupied
	bool bIsOccupied;

	// Reference to the current occupant of this tile, if none this will be Null
	class ADXCharacter* occupant;


public:

	UBasicGridInfo();
	~UBasicGridInfo();




	virtual void Clear_Implementation() override;

	// Is this tile occupied
	bool IsOccupied() const;

	// Assigns this tile an occupant and assigns this tile to said occupant
	void Set_Occupant(ADXCharacter* character);

	// Will remove occupant reference from this tile, and tile reference of occupant
	void Evict_Occupant();



	
};
