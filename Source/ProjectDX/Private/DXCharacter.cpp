// Fill out your copyright notice in the Description page of Project Settings.


#include "DXCharacter.h"
#include "Grid.h"
#include "Components/GridNavigationComponent.h"
#include "CommandSystem.h"
#include "InteractionInterface.h"
#include "Engine/World.h"
#include "GridPlayerController.h"
#include "Actions.h"

// Sets default values
ADXCharacter::ADXCharacter() :
	name(""),
	turn_order(0),
	team_number(0),
	modifier_manager(new ModifierManager()),
	current_grid(nullptr),
	GridOnStartOfTurn(nullptr),
	ControllerInteractionInterface(nullptr),
	LastMoveCommand(nullptr)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	character_attributes = CreateDefaultSubobject<UCharacterAttributes>(TEXT("Character Attributes"));
	character_attributes->SetAutoActivate(true);

	GridNavigation = CreateDefaultSubobject<UGridNavigationComponent>(TEXT("Grid Navigation"));
	GridNavigation->NavMode = EGridNavMode::GridBased;
	
	CommandSystem = CreateDefaultSubobject<UCommandSystem>(TEXT("Command System"));
	CommandSystem->SetAutoActivate(true);


}

ADXCharacter::~ADXCharacter() {
	if(modifier_manager) delete modifier_manager, modifier_manager = nullptr;
}

// Called when the game starts or when spawned
void ADXCharacter::BeginPlay()
{
	AssignAttributes();
	ControllerInteractionInterface = Cast<AGridPlayerController>(GetWorld()->GetFirstPlayerController());
	Register_Skills();
	Super::BeginPlay();
}

// Called every frame
void ADXCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ADXCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

// Registers the vector of subclasses of skills onto this actor
void ADXCharacter::Register_Skills() {
	for (TSubclassOf<USkill> Skill : Skills) {
		RegisteredSkills.Add(NewObject<USkill>(this, Skill));
	}

	for (USkill* Skill : RegisteredSkills) {
		Skill->OnRegister();
		Skill->SetOwner(this);
	}

}

// Called at the begining of each turn by Turn Game Mode, when its this players turn
void ADXCharacter::Begin_Turn_Implementation() {
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Green, name + "::DXCharacter:: Begin Turn Implementation");
	UE_LOG(LogTemp, Warning, TEXT("%s::DXCharacter: Begin Turn Implementation"), *name);
	modifier_manager->Update();
	GridOnStartOfTurn = current_grid;
}

// Called at the end of each turn by Turn Game Mode, when its this player ends their turn
void ADXCharacter::End_Turn_Implementation() {
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::White, name + "::DXCharacter:: End Turn Implementation");
	UE_LOG(LogTemp, Warning, TEXT("%s::DXCharacter: End Turn Implementation"), *name);
}

void ADXCharacter::MoveToGrid(UGrid* TargetGrid) {
	if (LastMoveCommand) {
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, "DXCharacter: Last Movement Already Exists, Setting New Target");
		UE_LOG(LogTemp, Warning, TEXT("DXCharacter: Last Movement Already Exists, Setting New Target"));
		LastMoveCommand->SetTargetGrid(TargetGrid);
		if (LastMoveCommand->Execute()) {
			if (GEngine)
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, "DXCharacter: Executed Move, by setting new target");
			UE_LOG(LogTemp, Warning, TEXT("DXCharacter: Executed Move, by setting new target"));
			ControllerInteractionInterface->Execute_OnConfirmSuccess(Cast<AGridPlayerController>(GetWorld()->GetFirstPlayerController()));
			
		}
		else {
			if (GEngine)
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "DXCharacter: Failed to Execute Move, with new Target");
			UE_LOG(LogTemp, Warning, TEXT("DXCharacter: Failed to Execute New Move, with new Target"));
			ControllerInteractionInterface->Execute_OnConfirmFail(Cast<AGridPlayerController>(GetWorld()->GetFirstPlayerController()));
		}
	} 
	else {
		LastMoveCommand = new Cmd_MoveCharacterToGrid(this, TargetGrid);
		if (CommandSystem->command_manager->Exec_Command(LastMoveCommand)) {
			if (GEngine)
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, "DXCharacter: Executed New Move");
			UE_LOG(LogTemp, Warning, TEXT("DXCharacter: Executed New Move"));
				ControllerInteractionInterface->Execute_OnConfirmSuccess(Cast<AGridPlayerController>(GetWorld()->GetFirstPlayerController()));
		}
		else {
			if (GEngine)
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "DXCharacter: Failed to Execute New Move");
			UE_LOG(LogTemp, Warning, TEXT("DXCharacter: Failed to Execute New Move"));
			if (ControllerInteractionInterface)
				ControllerInteractionInterface->Execute_OnConfirmFail(Cast<AGridPlayerController>(GetWorld()->GetFirstPlayerController()));
		}
	}
		
}

void ADXCharacter::UndoMove() {
	if (LastMoveCommand) {
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, "DXCharacter: Last Movement Already Exists, Setting New Target");
		UE_LOG(LogTemp, Warning, TEXT("DXCharacter: Last Movement Already Exists, Setting New Target"));
		
		if (LastMoveCommand->Undo()) {
			if (GEngine)
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, "DXCharacter: Performed Undo of Last Move");
			UE_LOG(LogTemp, Warning, TEXT("DXCharacter: Performed Undo of Last Move"));
			ControllerInteractionInterface->Execute_OnConfirmSuccess(Cast<AGridPlayerController>(GetWorld()->GetFirstPlayerController()));

		}
		else {
			if (GEngine)
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "DXCharacter: Failed to Execute Move, with new Target");
			UE_LOG(LogTemp, Warning, TEXT("DXCharacter: Failed to Execute New Move, with new Target"));
			ControllerInteractionInterface->Execute_OnConfirmFail(Cast<AGridPlayerController>(GetWorld()->GetFirstPlayerController()));
		}
	}
	
}

