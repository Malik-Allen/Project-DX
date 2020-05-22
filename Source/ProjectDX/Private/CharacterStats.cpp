// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterStats.h"



UAttribute::UAttribute() : 
	type(EAttributeType::HealthPoints),
	base_value(100.0f), new_value(0.0f), old_value(0.0f), difference(0.0f),
	value_type(EValueType::FixedValue), computative_type(EComputativeType::Additive),
	name("HP")
{}

UAttribute::~UAttribute() {}

void UAttribute::Set_AttributeType(EAttributeType new_type) {
	type = new_type;
}

void UAttribute::Set_BaseValue(float new_base_value) {
	base_value = new_base_value;
}

void UAttribute::Calaculate_StatChange(EComputativeType new_computative_type, EValueType new_value_type, float value) {
	value_type = new_value_type;
	computative_type = new_computative_type;

	if (computative_type == EComputativeType::Additive) {	// Additive Stat Change
		if (value_type == EValueType::FixedValue) {
			new_value = base_value + value;
			if (new_value < 0.0f)
				new_value = 0;
			difference = new_value - base_value;
		}
		else if (value_type == EValueType::Percentage) {
			new_value = base_value + (base_value * (value / 100.0f));
			difference = new_value - base_value;
		}
		else {
			new_value = base_value;
			difference = 0.0f;
		}
	}
	else if (computative_type == EComputativeType::Subtractive) {	// Subtractive Stat Change
		if (value_type == EValueType::FixedValue) {
			new_value = base_value - value;
			if (new_value < 0.0f)
				new_value = 0;
			difference = new_value - base_value;
		}
		else if (value_type == EValueType::Percentage) {
			new_value = base_value - (base_value * (value / 100.0f));
			difference = new_value - base_value;
		}
		else {
			new_value = base_value;
			difference = 0.0f;
		}
	}
	else if (computative_type == EComputativeType::Multiplicative) {	// Multiplicative Stat Change
		if (value_type == EValueType::FixedValue) {
			new_value = base_value * value;
			if (new_value < 0.0f)
				new_value = 0;
			difference = new_value - base_value;
		}
		else if (value_type == EValueType::Percentage) {
			new_value = base_value * (base_value * (value / 100.0f));
			difference = new_value - base_value;
		}
		else {
			new_value = base_value;
			difference = 0.0f;
		}
	}
	else if (computative_type == EComputativeType::Divisive) {			// Divisive Stat Change
		if (value_type == EValueType::FixedValue) {
			new_value = base_value / value;
			if (new_value < 0.0f)
				new_value = 0;
			difference = new_value - base_value;
		}
		else if (value_type == EValueType::Percentage) {
			new_value = base_value / (base_value * (value / 100.0f));
			difference = new_value - base_value;
		}
		else {
			new_value = base_value;
			difference = 0.0f;
		}
	}
	
}

void UAttribute::Apply_StatChange(EComputativeType new_computative_type, EValueType new_value_type, float value) {
	Calaculate_StatChange(new_computative_type, new_value_type, value);
	old_value = base_value;
	base_value = new_value;
}

UCharacterStats::UCharacterStats() :
	HealthPoints(nullptr), ActionPoints(nullptr), Mobility(nullptr),
	Attack(nullptr), Defense(nullptr), Armor(nullptr),
	CriticalChance(nullptr), ExperiencePoints(nullptr), ThrowPower(nullptr),
	Rank(nullptr), TurnOrder(nullptr)
{}

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

	if (HealthPoints) {
		HealthPoints->Set_AttributeType(EAttributeType::HealthPoints);
		HealthPoints->Set_Name("HP");
		All_Attributes.Add(HealthPoints);
	}
		
	if (ActionPoints) {
		ActionPoints->Set_AttributeType(EAttributeType::ActionPoints);
		ActionPoints->Set_Name("AP");
		All_Attributes.Add(ActionPoints);
	}

	if (Mobility) {
		Mobility->Set_AttributeType(EAttributeType::Mobility);
		Mobility->Set_Name("Movement");
		All_Attributes.Add(Mobility);
	}

	if (Attack) {
		Attack->Set_AttributeType(EAttributeType::Attack);
		Attack->Set_Name("Attack");
		All_Attributes.Add(Attack);
	}
		
	if (Defense) {
		Defense->Set_AttributeType(EAttributeType::Defense);
		Defense->Set_Name("Defense");
		All_Attributes.Add(Defense);
	}

	if (Armor) {
		Armor->Set_AttributeType(EAttributeType::Armor);
		Armor->Set_Name("Armor");
		All_Attributes.Add(Armor);
	}

	if (CriticalChance) {
		CriticalChance->Set_AttributeType(EAttributeType::CriticalChance);
		CriticalChance->Set_Name("Crit");
		All_Attributes.Add(CriticalChance);
	}

	if (ExperiencePoints) {
		ExperiencePoints->Set_AttributeType(EAttributeType::ExperiencePoints);
		ExperiencePoints->Set_Name("XP");
		All_Attributes.Add(ExperiencePoints);
	}
		
	if (ThrowPower) {
		ThrowPower->Set_AttributeType(EAttributeType::ThrowPower);
		ThrowPower->Set_Name("Throw");
		All_Attributes.Add(ThrowPower);
	}
		
	if (Rank) {
		Rank->Set_AttributeType(EAttributeType::Rank);
		Rank->Set_Name("Rank");
		All_Attributes.Add(Rank);
	}
		
	if (TurnOrder) {
		TurnOrder->Set_AttributeType(EAttributeType::TurnOrder);
		TurnOrder->Set_Name("Order");
		 // All_Attributes.Add(TurnOrder);, Turn Order will not be a stat that is traditionally assigned with the group of other
	}

}