// Fill out your copyright notice in the Description page of Project Settings.


#include "DXCharacter.h"
#include "Grid.h"

// Sets default values
ADXCharacter::ADXCharacter() :
	name(""),
	turn_order(0),
	team_number(0),
	modifier_manager(new ModifierManager()),
	current_grid(nullptr)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	character_attributes = CreateDefaultSubobject<UCharacterAttributes>(TEXT("Character Attributes"));
	character_attributes->SetAutoActivate(true);
	// character_attributes->Init();

}

ADXCharacter::~ADXCharacter() {
	if(modifier_manager) delete modifier_manager, modifier_manager = nullptr;
}

// Called when the game starts or when spawned
void ADXCharacter::BeginPlay()
{
	AssignAttributes();
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

// Called at the begining of each turn by Turn Game Mode, when its this players turn
void ADXCharacter::Begin_Turn_Implementation() {
	UE_LOG(LogTemp, Warning, TEXT("Begin Turn Recieved from Game Mode"));
	modifier_manager->Update();
}

// Called at the end of each turn by Turn Game Mode, when its this player ends their turn
void ADXCharacter::End_Turn_Implementation() {

}
