// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayDefinitions.h"
#include "CharacterStats.h"



class ModifierInterface {
public:
	ModifierInterface() {}
	virtual ~ModifierInterface() {}

	virtual void Update() = 0;
	virtual void Activate() = 0;
	virtual void Remove() = 0;
};

class ModifierManager {

};



/*
Modifier Class is used to applied changes to attributes
Can have an immediate effect, passive or active effect on each turn
Contains a reference to whom originated this modifier as well as a ref to the modified data
*/ 
class Modifier {	
	~Modifier();
public:

	Modifier(EModifierType new_modifier_type, UObject* new_origin, UAttribute* new_modified_data, EValueType new_value_type, float new_value);
	
	
	void Activate();
	void Remove();
	void Update();

	// This modifier's type
	EModifierType modifier_type;

	// Original Object this Ability is coming from
	UObject* origin;

	// The target data to be modified
	UAttribute* modified_data;

	// Type of effect, Immediate(One time use), Passive(Activated and applied once for the duration of its lifecycle), 
			// or Active(Activated and applied for each turn of its lifecycle)
	EEffectType effect_type;

	// Life cycle represent how many turns the effect will last, (-1 being infinite)
	int effect_lifetime;

	// The way the data will be modified
	EComputativeType computative_type;

	// The value to modifiy the data with
	float value;

	// The value type, fixed number or percentage
	EValueType value_type;

	// Is this Ability Active
	bool isActivated;


private:

	// Based on the Type of Modifier the class variables will be assigned their values
	void Assign_Modifier_Variables();

	
};



