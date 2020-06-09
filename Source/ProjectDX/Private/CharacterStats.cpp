// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterStats.h"



UAttribute::UAttribute() : 
	type(EAttributeType::HealthPoints),
	base_value(0.0f), new_value(0.0f), old_value(0.0f), difference(0.0f),
	value_type(EValueType::FixedValue), computative_type(EComputativeType::Additive),
	name("HP")
{}

UAttribute::~UAttribute() {}

void UAttribute::Set_AttributeType(EAttributeType new_type) {
	type = new_type;
	switch (type) {
	case EAttributeType::HealthPoints:
		name = "Health Points";
		break;
	case EAttributeType::ActionPoints:
		name = "Action Points";
		break;
	case EAttributeType::Mobility:
		name = "Mobility";
		break;
	case EAttributeType::Attack:
		name = "Attack";
		break;
	case EAttributeType::Defense:
		name = "Defense";
		break;
	case EAttributeType::Armor:
		name = "Armor";
		break;
	case EAttributeType::CriticalChance:
		name = "Critical Chance";
		break;
	case EAttributeType::ThrowPower:
		name = "Throw Power";
		break;
	default:
		name = "Error!";
		break;
	}
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

UCharacterAttributes::UCharacterAttributes() :
HealthPoints(nullptr),
ActionPoints(nullptr),
Mobility(nullptr),
Attack(nullptr),
Defense(nullptr),
Armor(nullptr),
CriticalChance(nullptr),
ThrowPower(nullptr)
{}

UCharacterAttributes::~UCharacterAttributes() {}

void UCharacterAttributes::OnRegister() {
	HealthPoints = NewObject<UAttribute>(this, TEXT("Health Points"));
	HealthPoints->Set_AttributeType(EAttributeType::HealthPoints);
	All_Attributes.Add(HealthPoints);

	ActionPoints = NewObject<UAttribute>(this, TEXT("Action Points"));
	ActionPoints->Set_AttributeType(EAttributeType::ActionPoints);
	All_Attributes.Add(ActionPoints);

	Mobility = NewObject<UAttribute>(this, TEXT("Mobility"));
	Mobility->Set_AttributeType(EAttributeType::Mobility);
	All_Attributes.Add(Mobility);

	Attack = NewObject<UAttribute>(this, TEXT("Attack"));
	Attack->Set_AttributeType(EAttributeType::Attack);
	All_Attributes.Add(Attack);

	Defense = NewObject<UAttribute>(this, TEXT("Defense"));
	Defense->Set_AttributeType(EAttributeType::Defense);
	All_Attributes.Add(Defense);

	Armor = NewObject<UAttribute>(this, TEXT("Armor"));
	Armor->Set_AttributeType(EAttributeType::Armor);
	All_Attributes.Add(Armor);

	CriticalChance = NewObject<UAttribute>(this, TEXT("Critical Chance"));
	CriticalChance->Set_AttributeType(EAttributeType::CriticalChance);
	All_Attributes.Add(CriticalChance);

	ThrowPower = NewObject<UAttribute>(this, TEXT("Throw Power"));
	ThrowPower->Set_AttributeType(EAttributeType::ThrowPower);
	All_Attributes.Add(ThrowPower);

	Super::OnRegister();
}

void UCharacterAttributes::BeginPlay() {
	Super::BeginPlay();
}
