// Fill out your copyright notice in the Description page of Project Settings.


#include "ModifierSystem.h"
#include "CharacterStats.h"


BaseModifier::BaseModifier() :
	origin(nullptr),
	modified_data(nullptr),
	effect_type(EEffectType::Immediate),
	effect_lifecycle(0),
	computative_type(EComputativeType::Additive),
	value(0.0f),
	value_type(EValueType::FixedValue),
	isActivated(false)
{}

BaseModifier::~BaseModifier() {}

Damage_Modifier::Damage_Modifier(UObject* new_origin, UObject* new_modified_data, EValueType new_value_type, float new_value):
	BaseModifier()
{
	origin = new_origin;
	modified_data = new_modified_data;
	value_type = new_value_type;
	value = new_value;

	effect_type = EEffectType::Immediate;
	computative_type = EComputativeType::Subtractive;
	effect_lifecycle = 0;
}

Damage_Modifier::~Damage_Modifier() {}

bool Damage_Modifier::HasConditionBeenMet() const {
	return isActivated;
}

void Damage_Modifier::Activate() {
	UCharacterStats* stats = nullptr;

	if (Cast<UCharacterStats>(modified_data))
		stats = Cast<UCharacterStats>(modified_data);
	else
		return;

	stats->HealthPoints->Apply_StatChange(computative_type, value_type, value);
	
	BaseModifier::Activate();
}

void Damage_Modifier::Remove() {}

void Damage_Modifier::Update() {}
