// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "UndoRedo/CommandManager.h"

#include "GameFramework/Actor.h"

class UGrid;
class ADXCharacter;

/**
 * 
 */
class PROJECTDX_API CommandSystem
{
public:
	CommandSystem();
	~CommandSystem();



};

class Cmd_SpawnActorAtGrid : public ICommand {
	UObject* Owner;
	UGrid* Grid;
	TSubclassOf<ADXCharacter> ActorClass;
	ADXCharacter* Actor;
	FVector LocationToSpawn;
	TArray<ADXCharacter*>* ListOfActors;
public:
	Cmd_SpawnActorAtGrid(UObject* owner, UGrid* grid, TSubclassOf<ADXCharacter> actor, TArray<ADXCharacter*> list);
	~Cmd_SpawnActorAtGrid();

	virtual void Execute() override;
	virtual void Undo() override;
	virtual void Redo() override;

};




