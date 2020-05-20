// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterStats.h"



UAttribute::UAttribute() : 
	type(EAttributeType::HealthPoints),
	base_value(0.0f), new_value(0.0f), difference(0.0f),
	change_type(EChangeType::FixedValue), computative_type(EComputativeType::Additive)
{}

UAttribute::~UAttribute() {}

void UAttribute::Set_AttributeType(EAttributeType new_type) {
	type = new_type;
}

void UAttribute::Set_BaseValue(float new_base_value) {
	base_value = new_base_value;
}

void UAttribute::Calaculate_StateChange(EComputativeType new_computative_type, EChangeType new_change_type, float value) {
	change_type = new_change_type;
	computative_type = new_computative_type;

	if (computative_type == EComputativeType::Additive) {	// Additive Stat Change
		if (change_type == EChangeType::FixedValue) {
			new_value = base_value + value;
			if (new_value < 0.0f)
				new_value = 0;
			difference = new_value - base_value;
		}
		else if (change_type == EChangeType::Percentage) {
			new_value = base_value + (base_value * (value / 100.0f));
			difference = new_value - base_value;
		}
		else {
			new_value = base_value;
			difference = 0.0f;
		}
	}
	else if (computative_type == EComputativeType::Subtractive) {	// Subtractive Stat Change
		if (change_type == EChangeType::FixedValue) {
			new_value = base_value - value;
			if (new_value < 0.0f)
				new_value = 0;
			difference = new_value - base_value;
		}
		else if (change_type == EChangeType::Percentage) {
			new_value = base_value - (base_value * (value / 100.0f));
			difference = new_value - base_value;
		}
		else {
			new_value = base_value;
			difference = 0.0f;
		}
	}
	else if (computative_type == EComputativeType::Multiplicative) {	// Multiplicative Stat Change
		if (change_type == EChangeType::FixedValue) {
			new_value = base_value * value;
			if (new_value < 0.0f)
				new_value = 0;
			difference = new_value - base_value;
		}
		else if (change_type == EChangeType::Percentage) {
			new_value = base_value * (base_value * (value / 100.0f));
			difference = new_value - base_value;
		}
		else {
			new_value = base_value;
			difference = 0.0f;
		}
	}
	else if (computative_type == EComputativeType::Divisive) {			// Divisive Stat Change
		if (change_type == EChangeType::FixedValue) {
			new_value = base_value / value;
			if (new_value < 0.0f)
				new_value = 0;
			difference = new_value - base_value;
		}
		else if (change_type == EChangeType::Percentage) {
			new_value = base_value / (base_value * (value / 100.0f));
			difference = new_value - base_value;
		}
		else {
			new_value = base_value;
			difference = 0.0f;
		}
	}
	
}


UCharacterStats::UCharacterStats() :
	HealthPoints(nullptr), ActionPoints(nullptr), Mobility(nullptr),
	Attack(nullptr), Defense(nullptr), Armor(nullptr),
	CriticalChance(nullptr), ExperiencePoints(nullptr), ThrowPower(nullptr),
	Rank(nullptr), TurnOrder(nullptr)
{
	Init_Attributes();
}

UCharacterStats::~UCharacterStats() {}

void UCharacterStats::Init_Attributes() {

	/*!!!---INITIALIZE ALL NEW STATS HERE---!!!*/

	HealthPoints = NewObject<UAttribute>();
	ActionPoints = NewObject<UAttribute>();
	Mobility = NewObject<UAttribute>();
	Attack = NewObject<UAttribute>();
	Defense = NewObject<UAttribute>();
	Armor = NewObject<UAttribute>();
	CriticalChance = NewObject<UAttribute>();
	ExperiencePoints = NewObject<UAttribute>();
	ThrowPower = NewObject<UAttribute>();
	Rank = NewObject<UAttribute>();
	TurnOrder = NewObject<UAttribute>();

	if (HealthPoints)
		HealthPoints->Set_AttributeType(EAttributeType::HealthPoints);
	if (ActionPoints)
		ActionPoints->Set_AttributeType(EAttributeType::ActionPoints);
	if (Mobility)
		Mobility->Set_AttributeType(EAttributeType::Mobility);
	if (Attack)
		Attack->Set_AttributeType(EAttributeType::Attack);
	if (Defense)
		Defense->Set_AttributeType(EAttributeType::Defense);
	if (Armor)
		Armor->Set_AttributeType(EAttributeType::Armor);
	if (CriticalChance)
		CriticalChance->Set_AttributeType(EAttributeType::CriticalChance);
	if (ExperiencePoints)
		ExperiencePoints->Set_AttributeType(EAttributeType::ExperiencePoints);
	if (ThrowPower)
		ThrowPower->Set_AttributeType(EAttributeType::ThrowPower);
	if (Rank)
		Rank->Set_AttributeType(EAttributeType::Rank);
	if (TurnOrder)
		TurnOrder->Set_AttributeType(EAttributeType::TurnOrder);
}