// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Containers/PQueue.h"
#include "PriorityQueue.generated.h"



/**
 * 
 */

UCLASS(BlueprintType)
class UPriorityQueue : public UObject {
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable)
		// Insert a data value sorted by priority 
		void Push(int priority, UObject* object);

	UFUNCTION(BlueprintCallable)
		/* Remove first element from priority queue
		Precondition: Priority queue not empty*/
		void Pop();

	UFUNCTION(BlueprintCallable)
		/* return reference to first value in priority queue
		precondition: list is not empty*/
		UObject* Peek();

	UFUNCTION(BlueprintCallable)
		// check for empty priority queue
		bool IsEmpty() const;

	UFUNCTION(BlueprintCallable)
		// return number of members
		int GetSize() const;

	UFUNCTION(BlueprintCallable)
		// remove all nodes
		void Clear();

private:
	
	PQueue<UObject*> priority_queue;
};