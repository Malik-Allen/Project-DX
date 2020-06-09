// Fill out your copyright notice in the Description page of Project Settings.


#include "ModifierFunctionLibrary.h"
#include "ModifierSystem.h"

void UModifierFunctionLibrary::Apply_Mod(UObject* Origin, ADXCharacter* Target, EModifierType TypeOfModifier, TArray<EAttributeType> effectedAttributes, EValueType TypeOfValue, float Value) {
	if (effectedAttributes.Num() == 0) {							// If No Attributes were selected, then return 
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 25.0f, FColor::Yellow, "Warning! No Attributes were selected in Apply Mod! No Modification in effect");
		return;
	}
	
	if (Target == nullptr) {										// If Target does not exist, then return 
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 25.0f, FColor::Red, "Error! Tried to Apply Mod to Target that does not exist");
		return;										
	}

	
	UCharacterAttributes* target_attributes = nullptr;

	target_attributes = Target->character_attributes;
	if (target_attributes == nullptr) {									// If Target exists but their stats do not, return
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 25.0f, FColor::Red, "Error! Tried to Apply Mod to Target, but Target Stats do not exist");
		return;
	}

	
	
	// First, we will check to see if All Attributes has been selected, in order to save computation time
	bool isAllAttributes = false;
	for (EAttributeType attributeType : effectedAttributes) {
		if (attributeType == EAttributeType::All_Attributes) {
			isAllAttributes = true;
			break;
		}
	}

	UAttribute* targetAttribute = nullptr;
	Modifier* modifier = nullptr;
	ModifierManager* mod_manager = Target->modifier_manager;
	if (mod_manager == nullptr) {
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Orange, "Warning! Mod Manager is null");
		return;

	}

	if (isAllAttributes) {											// If All attributes were selected, modifier is applied to them all instead of checking for specific attributes
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, "All Attrbutes Selected to be modified");

		for (UAttribute* attribute : target_attributes->GetAllAttributes()) {
			modifier = new Modifier(TypeOfModifier, Origin, attribute, TypeOfValue, Value);
			modifier->Activate();
			mod_manager->modifiers.Add(modifier);
		}

		return;
	}
	
	for (int i = 0; i < effectedAttributes.Num(); i++) {
		targetAttribute = nullptr;

		if (effectedAttributes[i] == EAttributeType::HealthPoints)
			targetAttribute = target_attributes->HealthPoints;
		else if (effectedAttributes[i] == EAttributeType::ActionPoints)
			targetAttribute = target_attributes->ActionPoints;
		else if (effectedAttributes[i] == EAttributeType::Mobility)
			targetAttribute = target_attributes->Mobility;
		else if (effectedAttributes[i] == EAttributeType::Attack)
			targetAttribute = target_attributes->Attack;
		else if (effectedAttributes[i] == EAttributeType::Defense)
			targetAttribute = target_attributes->Defense;
		else if (effectedAttributes[i] == EAttributeType::Armor)
			targetAttribute = target_attributes->Armor;
		else if (effectedAttributes[i] == EAttributeType::CriticalChance)
			targetAttribute = target_attributes->CriticalChance;
		else if (effectedAttributes[i] == EAttributeType::ThrowPower)
			targetAttribute = target_attributes->ThrowPower;
		else
			continue;

		modifier = new Modifier(TypeOfModifier, Origin, targetAttribute, TypeOfValue, Value);
		modifier->Activate();
		mod_manager->modifiers.Add(modifier);
	}

}