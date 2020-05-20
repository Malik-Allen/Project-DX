// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayDefinitions.h"
#include "UObject/Object.h"
#include "CharacterStats.generated.h"



/**
 * 
 */
UCLASS()
// Base Attribute Class which contains the attribute type and the value
class PROJECTDX_API UAttribute : public UObject
{
	GENERATED_BODY()

public:

	UAttribute();
	~UAttribute();


	/*Getters for attribute class*/
	UFUNCTION(BlueprintCallable, Category = "Attribute")
		EAttributeType Get_AttributeType() const { return type; }

	UFUNCTION(BlueprintCallable, Category = "Attribute")
		float Get_BaseValue() const { return base_value; }

	UFUNCTION(BlueprintCallable, Category = "Attribute")
		float Get_NewValue() const { return new_value; }

	UFUNCTION(BlueprintCallable, Category = "Attribute")
		float Get_Difference() const { return difference; }

	UFUNCTION(BlueprintCallable, Category = "Attribute")
		EChangeType Get_ChangeType() const { return change_type; }

	/*Setters for attribute class*/
	UFUNCTION(BlueprintCallable, Category = "Attribute")
		void Set_AttributeType(EAttributeType new_type);

	UFUNCTION(BlueprintCallable, Category = "Attribute")
		// Assign this stat's base value before stat change calculations
		void Set_BaseValue(float new_base_value);

	UFUNCTION(BlueprintCallable, Category = "Attribute")
		// Make an Subtractive Change to this stat
		void Calaculate_StateChange(EComputativeType new_computative_type, EChangeType new_change_type, float value);


private:
	EAttributeType type;
	float base_value;
	float new_value;
	float difference;
	EChangeType change_type;
	EComputativeType computative_type;
};

UCLASS(BlueprintType)
class PROJECTDX_API UCharacterStats : public UObject {
	GENERATED_BODY()

public:
	UCharacterStats();
	~UCharacterStats();

	/*When adding a new stat, you must add the desired stat to enum-->GameplayDefinitions::EAttributeType, and define that stat type in Init() of this class*/

	UPROPERTY(BlueprintReadWrite, Category = "Character Stats")
		UAttribute* HealthPoints;
	UPROPERTY(BlueprintReadWrite, Category = "Character Stats")
		UAttribute* ActionPoints;
	UPROPERTY(BlueprintReadWrite, Category = "Character Stats")
		UAttribute* Mobility;
	UPROPERTY(BlueprintReadWrite, Category = "Character Stats")
		UAttribute* Attack;
	UPROPERTY(BlueprintReadWrite, Category = "Character Stats")
		UAttribute* Defense;
	UPROPERTY(BlueprintReadWrite, Category = "Character Stats")
		UAttribute* Armor;
	UPROPERTY(BlueprintReadWrite, Category = "Character Stats")
		UAttribute* CriticalChance;
	UPROPERTY(BlueprintReadWrite, Category = "Character Stats")
		UAttribute* ExperiencePoints;
	UPROPERTY(BlueprintReadWrite, Category = "Character Stats")
		UAttribute* ThrowPower;
	UPROPERTY(BlueprintReadWrite, Category = "Character Stats")
		UAttribute* Rank;
	UPROPERTY(BlueprintReadWrite, Category = "Character Stats")
		UAttribute* TurnOrder;

	
	void Init_Attributes();

};




