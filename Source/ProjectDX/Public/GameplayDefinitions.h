// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#define MAX_STAT_VALUE 100.0
#define MIN_STAT_VALUE 0.0


UENUM(BlueprintType)
// Attribute Types used in Character Stats
enum class EAttributeType : uint8 {
	HealthPoints		UMETA(DisplayName = "Health Points"),
	ActionPoints		UMETA(DisplayName = "Action Points"),
	Mobility			UMETA(DisplayName = "Mobility"),
	Attack				UMETA(DisplayName = "Attack"),
	Defense				UMETA(DisplayName = "Defense"),
	Armor				UMETA(DisplayName = "Armor"),
	CriticalChance		UMETA(DisplayName = "Critical Chance"),
	ExperiencePoints	UMETA(DisplayName = "Experience Points"),
	ThrowPower			UMETA(DisplayName = "Throw Power"),
	Rank				UMETA(DisplayName = "Rank"),
	TurnOrder			UMETA(DisplayName = "Turn Order"),
	All_Attributes		UMETA(DisplayName = "All Attributes")
};

UENUM()
enum class EComputativeType : uint8 {
	Additive		UMETA(DisplayName = "Additive"),
	Subtractive		UMETA(DisplayName = "Subtractive"),
	Multiplicative	UMETA(DisplayName = "Multiplicative"),
	Divisive		UMETA(DisplayName = "Divisive")
};

UENUM()
enum class EValueType : uint8 {
	FixedValue		UMETA(DisplayName = "Fixed Value"),
	Percentage		UMETA(DisplayName = "Percentage")
};

UENUM(BlueprintType)
enum class EEffectType : uint8 {
	Immediate		UMETA(DisplayName = "Immediate"),
	Passive			UMETA(DisplayName = "Passive"),
	Active			UMETA(DisplayName = "Active")
};

UENUM()
enum class EModifierType : uint8 {
	Damage			UMETA(DisplayName = "Damage"),
	Healing			UMETA(DisplayName = "Healing")
};


UENUM(BlueprintType)
enum class EElementalType : uint8 {
	None	UMETA(DisplayName = "None"),
	Fire	UMETA(DisplayName = "Fire"),
	Water	UMETA(DisplayName = "Water"),
	Earth	UMETA(DisplayName = "Earth")
};

UENUM(BlueprintType)
enum class ERank : uint8 {
	NoRank	UMETA(DisplayName = "No Tier"),
	First	UMETA(DisplayName = "First Tier"),
	Second	UMETA(DisplayName = "Second Tier"),
	Third	UMETA(DisplayName = "Third Tier"),
	Fourth	UMETA(DisplayName = "Fourth Tier"),
	Fifth	UMETA(DisplayName = "Fifth tier")
};



UENUM(BlueprintType)
enum class ETeamNumber : uint8 {
	TeamOne		UMETA(DisplayName = "Team 1"),
	TeamTwo		UMETA(DisplayName = "Team 2")
};
