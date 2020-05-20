// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DXCharacter.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ModifierFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTDX_API UModifierFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
		static void Apply_Mod(UObject* Origin, ADXCharacter* Target, EModifierType TypeOfModifier, EValueType TypeOfValue, float Value);
	
};
