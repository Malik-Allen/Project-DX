// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UndoRedo/CommandManager.h"
#include "Components/ActorComponent.h"
#include "CommandSystem.generated.h"

class UGrid;
class ADXCharacter;

UCLASS()
class PROJECTDX_API UCommandSystem : public UActorComponent {

	GENERATED_BODY()

public:
	UCommandSystem();
	~UCommandSystem();

	virtual void OnRegister() override;

	CommandManager* command_manager;

};

class Cmd_MoveCharacterToGrid : public ICommand {
	ADXCharacter* CharacterToMove;
	UGrid* OriginalGrid;
	UGrid* TargetGrid;

public:
	Cmd_MoveCharacterToGrid(ADXCharacter* TargetCharacter, UGrid* TargetGrid_);
	~Cmd_MoveCharacterToGrid();

	void SetTargetGrid(UGrid* TargetGrid_);

	virtual bool Execute() override;
	virtual bool Undo() override;
	virtual bool Redo() override;

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

	virtual bool Execute() override;
	virtual bool Undo() override;
	virtual bool Redo() override;

};




