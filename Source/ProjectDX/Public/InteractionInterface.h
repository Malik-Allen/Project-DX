// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractionInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PROJECTDX_API IInteractionInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Interaction)
		void Confirm();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Interaction)
		void Back();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Interaction)
		void OnConfirmSuccess();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Interaction)
		void OnConfirmFail();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Interaction)
		void OnBackSuccess();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Interaction)
		void OnBackFail();

};
