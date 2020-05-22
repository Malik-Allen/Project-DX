// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TurnInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UTurnInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PROJECTDX_API ITurnInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void Begin_Turn();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void End_Turn();
};
