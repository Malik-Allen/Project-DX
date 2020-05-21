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

	
	UCharacterStats* targetStats = nullptr;

	targetStats = Target->character_stats;
	if (targetStats == nullptr) {									// If Target exists but their stats do not, return
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

	if (isAllAttributes) {											// If All attributes were selected, modifier is applied to them all instead of checking for specific attributes
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 25.0f, FColor::Red, "All Attrbutes Selected to be modified");

		for (UAttribute* attribute : targetStats->All_Attributes) {
			modifier = new Modifier(TypeOfModifier, Origin, attribute, TypeOfValue, Value);
			modifier->Activate();
		}

		return;
	}
	
	for (int i = 0; i < effectedAttributes.Num(); i++) {
		targetAttribute = nullptr;

		if (effectedAttributes[i] == EAttributeType::HealthPoints)
			targetAttribute = targetStats->HealthPoints;
		else if (effectedAttributes[i] == EAttributeType::ActionPoints)
			targetAttribute = targetStats->ActionPoints;
		else if (effectedAttributes[i] == EAttributeType::Mobility)
			targetAttribute = targetStats->Mobility;
		else if (effectedAttributes[i] == EAttributeType::Attack)
			targetAttribute = targetStats->Attack;
		else if (effectedAttributes[i] == EAttributeType::Defense)
			targetAttribute = targetStats->Defense;
		else if (effectedAttributes[i] == EAttributeType::Armor)
			targetAttribute = targetStats->Armor;
		else if (effectedAttributes[i] == EAttributeType::CriticalChance)
			targetAttribute = targetStats->CriticalChance;
		else if (effectedAttributes[i] == EAttributeType::ExperiencePoints)
			targetAttribute = targetStats->ExperiencePoints;
		else if (effectedAttributes[i] == EAttributeType::ThrowPower)
			targetAttribute = targetStats->ThrowPower;
		else if (effectedAttributes[i] == EAttributeType::Rank)
			targetAttribute = targetStats->Rank;
		else if (effectedAttributes[i] == EAttributeType::TurnOrder)
			targetAttribute = targetStats->TurnOrder;
		else
			continue;

		modifier = new Modifier(TypeOfModifier, Origin, targetAttribute, TypeOfValue, Value);
		modifier->Activate();
		
	}

}