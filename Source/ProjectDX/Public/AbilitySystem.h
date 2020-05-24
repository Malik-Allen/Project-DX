// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Math/Matrix.h"

/**
 * 
 */



class Ability {
	
	

private:

	enum { MAXMIUM_ATTACK_RANGE = 5 };

	class ADXCharacter* owner;	

public:

	// Constructor with all the neccessaary variables
	Ability();
	~Ability();

	int id;

	FString name;
	FString description;
	
	int ability_range[MAXMIUM_ATTACK_RANGE][MAXMIUM_ATTACK_RANGE];

	TArray<class Modifier*> ability_modifiers;

	TArray<ADXCharacter*> targets;

	bool isAbilityActive;

};

