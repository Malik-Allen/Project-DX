// Fill out your copyright notice in the Description page of Project Settings.


#include "DXCharacter.h"

// Sets default values
ADXCharacter::ADXCharacter() :
	name(""),
	turn_order(0),
	team_number(0),
	character_stats(nullptr),
	position_on_grid(FVector(0.0f)),
	modifier_manager(nullptr),
	current_tile(nullptr)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

ADXCharacter::~ADXCharacter() {
	if(modifier_manager) delete modifier_manager, modifier_manager = nullptr;
}

// Called when the game starts or when spawned
void ADXCharacter::BeginPlay()
{
	Init_CharacterStats();
	Init_ModifierManager();
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

void ADXCharacter::Init_ModifierManager() {
	modifier_manager = new ModifierManager();
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, name + " initialized Modifier Manager");
}

void ADXCharacter::Init_CharacterStats() {
	character_stats = NewObject<UCharacterStats>();
	if (character_stats)
		character_stats->Init_Attributes();
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, name + " initialized Character Stats");
}

// Called at the begining of each turn by Turn Game Mode, when its this players turn
void ADXCharacter::Begin_Turn_Implementation() {
	modifier_manager->Update();
}

// Called at the end of each turn by Turn Game Mode, when its this player ends their turn
void ADXCharacter::End_Turn_Implementation() {

}
