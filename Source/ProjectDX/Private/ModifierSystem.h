// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayDefinitions.h"


/*
Modifier Class is used to applied changes to attributes
Can have an immediate effect, passive or active effect on each turn
Contains a reference to whom originated this modifier as well as a ref to the modified data
*/ 
class BaseModifier {

public:

	BaseModifier();
	virtual ~BaseModifier();

	virtual bool HasConditionBeenMet() const = 0;
	virtual void Activate() { isActivated = true; };
	virtual void Remove() = 0;
	virtual void Update() = 0;

	// Original Object this Ability is coming from
	UObject* origin;

	// The target data to be modified
	UObject* modified_data;

	// Type of effect, Immediate(One time use), Passive(Activated and applied once for the duration of its lifecycle), 
			// or Active(Activated and applied for each turn of its lifecycle)
	EEffectType effect_type;

	// Life cycle represent how many turns the effect will last, (-1 being infinite)
	int effect_lifecycle;

	// The way the data will be modified
	EComputativeType computative_type;

	// The value to modifiy the data with
	float value;

	// The value type, fixed number or percentage
	EValueType value_type;

	// Is this Ability Active
	bool isActivated;
};



class Damage_Modifier : public BaseModifier {

public:
	Damage_Modifier(UObject* new_origin, UObject* new_modified_data, EValueType new_value_type, float new_value);
	~Damage_Modifier();

	virtual bool HasConditionBeenMet() const;
	virtual void Activate();
	virtual void Remove();
	virtual void Update();

};