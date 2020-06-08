// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayDefinitions.h"

/**
 * 
 */



class Ability {
	
	

private:

	enum { MAXMIUM_ATTACK_RANGE = 5 };

	class ADXCharacter* owner;	

	void AssignAbilitiyType();

public:

	// Constructor with all the neccessaary variables
	Ability();
	~Ability();

	EAbility ability_type;

	FString name;
	FString description;
	
	int area_of_effect[MAXMIUM_ATTACK_RANGE * MAXMIUM_ATTACK_RANGE];
	int range;
	
	
	TArray<class Modifier*> ability_modifiers;

	TArray<ADXCharacter*> targets;

	bool isAbilityActive;

};

