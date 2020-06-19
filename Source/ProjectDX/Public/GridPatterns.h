// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GridPatterns.generated.h"

/**
 * 
 */

class UGrid;

class PROJECTDX_API GridPatterns
{
public:
	GridPatterns();
	~GridPatterns();
};

UENUM(BlueprintType)
enum class EPattern : uint8 {
	Single		UMETA(DisplayName = "Single"),
	tCross		UMETA(DsiaplayName = "t_Cross"),
	xCross		UMETA(DsiaplayName = "x_Cross"),
	vCross		UMETA(DsiaplayName = "v_Cross"),
	vCone		UMETA(DsiaplayName = "v_Cone"),
	txCross		UMETA(DsiaplayName = "tx_Cross"),
	vtCross		UMETA(DsiaplayName = "vt_Cross"),
	TCross		UMETA(DsiaplayName = "T_Cross"),
	OCross		UMETA(DsiaplayName = "O_Rectangle")
};

USTRUCT(BlueprintType)
struct PROJECTDX_API FGridPattern {

	GENERATED_USTRUCT_BODY()

public:

	FGridPattern():
		Range(0),
		Pattern(EPattern::Single),
		HomeGrid(nullptr),
		Tag(FGameplayTag())
	{}

	~FGridPattern() {}


	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Range"))
	int Range;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Pattern"))
	EPattern Pattern;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Home Grid"))
	UGrid* HomeGrid;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Grid Tag"))
	FGameplayTag Tag;

};

class GridPattern {

public:
	GridPattern(uint32 Range, EPattern Pattern, UGrid* HomeGrid, FGameplayTag Tag);
	GridPattern(FGridPattern grid_pattern);
	~GridPattern();
	
	// Expands this grid pattern to the desired range
	void ExpandToRange(uint32 Range);

	// Repositions this grid pattern at this grid
	void UpdateHomeGrid(UGrid* HomeGrid);

	// Gets the grids effected by this pattern
	void GetEffectedGrids(TArray<UGrid*>& Grids);

	// Shows and hides the grid pattern
	void SetPatternIsHidden(bool isHidden);

private:
	
	uint32 range;
	EPattern pattern;
	TArray<UGrid*> effectedGrids;
	UGrid* homeGrid;
	FGameplayTag tag;
	bool bIsHidden;

	void PrintEffectedGridCoords();
	void RemoveTags();
	void AddTags();

	void Expand_Single();
	void Expand_tCross();
};