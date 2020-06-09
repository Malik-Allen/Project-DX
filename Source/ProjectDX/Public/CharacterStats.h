// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayDefinitions.h"
#include "Components/ActorComponent.h"
#include "CharacterStats.generated.h"



/**
 * 
 */
UCLASS()
// Base Attribute Class which contains the attribute type and the value
class PROJECTDX_API UAttribute : public UObject
{
	GENERATED_BODY()

	friend class UCharacterAttributes;

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
		float Get_OldValue() const { return old_value; }

	UFUNCTION(BlueprintCallable, Category = "Attribute")
		float Get_Difference() const { return difference; }

	UFUNCTION(BlueprintCallable, Category = "Attribute")
		EValueType Get_ChangeType() const { return value_type; }

	UFUNCTION(BlueprintCallable, Category = "Attribute")
		FString Get_Name() const { return name; }

	UFUNCTION(BlueprintCallable, Category = "Attribute")
		void Set_Name(FString new_name) { name =  new_name; }

	/*Setters for attribute class*/
	UFUNCTION(BlueprintCallable, Category = "Attribute")
		void Set_AttributeType(EAttributeType new_type);

	UFUNCTION(BlueprintCallable, Category = "Attribute")
		// Assign this stat's base value before stat change calculations
		void Set_BaseValue(float new_base_value);

	UFUNCTION(BlueprintCallable, Category = "Attribute")
		// Calculate stat changes, populating difference and new stat values
		void Calaculate_StatChange(EComputativeType new_computative_type, EValueType new_type_of_value, float value);

	UFUNCTION(BlueprintCallable, Category = "Attribute")
		// Applies the changes to stats keeping the differences
		void Apply_StatChange(EComputativeType new_computative_type, EValueType new_type_of_value, float value);

private:

	EAttributeType type;
	float base_value;
	float new_value;
	float old_value;
	float difference;
	EValueType value_type;
	EComputativeType computative_type;
	FString name;

};

UCLASS(BlueprintType)
class PROJECTDX_API UCharacterAttributes : public UActorComponent {
	GENERATED_BODY()

public:
	UCharacterAttributes();
	~UCharacterAttributes();

	/*When adding a new stat, you must add the desired stat to enum-->GameplayDefinitions::EAttributeType, and define that stat type in Init() of this class*/

	UPROPERTY(BlueprintReadWrite, Category = "Character Attributes")
		UAttribute* HealthPoints;
	UPROPERTY(BlueprintReadWrite, Category = "Character Attributes")
		UAttribute* ActionPoints;
	UPROPERTY(BlueprintReadWrite, Category = "Character Attributes")
		UAttribute* Mobility;
	UPROPERTY(BlueprintReadWrite, Category = "Character Attributes")
		UAttribute* Attack;
	UPROPERTY(BlueprintReadWrite, Category = "Character Attributes")
		UAttribute* Defense;
	UPROPERTY(BlueprintReadWrite, Category = "Character Attributes")
		UAttribute* Armor;
	UPROPERTY(BlueprintReadWrite, Category = "Character Attributes")
		UAttribute* CriticalChance;
	UPROPERTY(BlueprintReadWrite, Category = "Character Attributes")
		UAttribute* ThrowPower;

	
	TArray<UAttribute*> GetAllAttributes() { return All_Attributes; }

	virtual void OnRegister() override;

	virtual void BeginPlay() override;

	
	

private:

	TArray<UAttribute*> All_Attributes;
	
	

};




