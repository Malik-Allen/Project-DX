// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ActionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UActionInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PROJECTDX_API IActionInterface
{
	GENERATED_BODY()

		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void OnRegister() = 0;

	virtual void Show() = 0;
	virtual void Hide() = 0;
	virtual void Pre_Calculation() = 0;
	virtual void Execute_Action() = 0;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void BeginVisualSequence();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void OnEndVisualSequence();
	
};


