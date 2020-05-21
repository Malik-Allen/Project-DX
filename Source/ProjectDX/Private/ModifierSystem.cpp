// Fill out your copyright notice in the Description page of Project Settings.


#include "ModifierSystem.h"
#include "CharacterStats.h"
#include "Engine.h"

Modifier::~Modifier() {
	isActivated = false;
	if (origin) origin = nullptr;
	if (modified_data) modified_data = nullptr;
}

Modifier::Modifier(EModifierType new_modifier_type, UObject* new_origin, UAttribute* new_modified_data,
	EValueType new_value_type, float new_value) :
	modifier_type(new_modifier_type),
	origin(new_origin),
	modified_data(new_modified_data),
	effect_type(EEffectType::Immediate),
	effect_lifetime(0),
	computative_type(EComputativeType::Additive),
	value(new_value),
	value_type(new_value_type),
	isActivated(false)
{
	Assign_Modifier_Variables();
}


void Modifier::Assign_Modifier_Variables() {

	if (modifier_type == EModifierType::Damage) {				// Damage Modifier
		effect_type = EEffectType::Immediate;
		computative_type = EComputativeType::Subtractive;
		effect_lifetime = 0;
	}

	else if (modifier_type == EModifierType::Healing) {			// Healing Modifier
		effect_type = EEffectType::Immediate;
		computative_type = EComputativeType::Additive;
		effect_lifetime = 0;
	}

}

void Modifier::Activate() {
	if (modified_data == nullptr) {
		isActivated = false;
		Remove();
		return;
	}

	isActivated = true; 

	modified_data->Apply_StatChange(computative_type, value_type, value);

	FString outputTxt = "Modifier Actiavted on: " + modified_data->Get_Name();
	outputTxt.Append(" Old: " + FString::SanitizeFloat(modified_data->Get_OldValue()));
	outputTxt.Append(" Cur: " + FString::SanitizeFloat(modified_data->Get_BaseValue()));
	outputTxt.Append(" Diff: " + FString::SanitizeFloat(modified_data->Get_Difference()));

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Green, outputTxt);

	UE_LOG(LogTemp, Warning, TEXT("Mod Info: %s"), *outputTxt);

	if (effect_type == EEffectType::Immediate)								// In the case when we activate and this modifier is immediate,
		Remove();																// We Remove it upon successful activation
}

void Modifier::Remove() {
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, "Removing Mod");

	isActivated = false; 
	if (origin) origin = nullptr;
	if (modified_data) modified_data = nullptr;
	this->~Modifier();
}

void Modifier::Update() {
	if (effect_lifetime == 0) {											// If the effect lifetime is 0 on update, Remove it
		Remove(); 
		return;
	}

	if (effect_lifetime > 0 && effect_type == EEffectType::Active) {	// When the effect is active, it is activated each update/turn
		effect_lifetime--;
		Activate();
		return;
	}

	if (effect_lifetime > 0 && effect_type == EEffectType::Passive) {	// When the effect is passive & activated each turn, it is activated each update/turn
		effect_lifetime--;
		Activate();
		return;
	}
	
	if (effect_lifetime == -1 && effect_type == EEffectType::Active) {	// When the effect is active and infinite, it is activated each update/turn
		Activate();
		return;
	}
	
}
