// Fill out your copyright notice in the Description page of Project Settings.


#include "ModifierFunctionLibrary.h"
#include "ModifierSystem.h"

void UModifierFunctionLibrary::Apply_Mod(UObject* Origin, ADXCharacter* Target, EModifierType TypeOfModifier, EValueType TypeOfValue, float Value) {
	if (Target == nullptr) return;
	BaseModifier* modifier = nullptr;
	UCharacterStats* target_stats = nullptr;

	target_stats = Target->character_stats;
	if (target_stats == nullptr) return;

	if (TypeOfModifier == EModifierType::Damage) {
		modifier = new Damage_Modifier(Origin, target_stats, TypeOfValue, Value);
		modifier->Activate();
		// target_stats->HealthPoints->Apply_StatChange(modifier->computative_type, modifier->value_type, modifier->value);
	}

}