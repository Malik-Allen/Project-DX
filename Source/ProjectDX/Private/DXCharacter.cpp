// Fill out your copyright notice in the Description page of Project Settings.


#include "DXCharacter.h"

// Sets default values
ADXCharacter::ADXCharacter() :
	name(""),
	turn_order(0),
	team_number(0),
	character_stats(nullptr),
	position_on_grid(FVector(0.0f))
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void ADXCharacter::BeginPlay()
{
	Super::BeginPlay();
	character_stats = NewObject<UCharacterStats>();
	if (character_stats)
		character_stats->Init_Attributes();
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

