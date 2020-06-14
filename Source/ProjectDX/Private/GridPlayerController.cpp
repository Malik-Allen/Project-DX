// Fill out your copyright notice in the Description page of Project Settings.


#include "GridPlayerController.h"
#include "GridPlayerPawn.h"
#include "Grid.h"
#include "BasicGridInfo.h"
#include "DXCharacter.h"

AGridPlayerController::AGridPlayerController() :
	PlayerPawn(nullptr),
	ControllerState(EControllerState::FreeRoaming),
	CurrentCharacter(nullptr)
{}

AGridPlayerController::~AGridPlayerController() {}

void AGridPlayerController::BeginPlay() {
	Super::BeginPlay();
}

void AGridPlayerController::OnPossess(APawn* InPawn) {
	PlayerPawn = Cast<AGridPlayerPawn>(InPawn);
	
	Super::OnPossess(InPawn);
}

void AGridPlayerController::Confirm_Implementation() {
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, "GridPlayerController: Requested Confirm");
	UE_LOG(LogTemp, Warning, TEXT("GridPlayerController: Requested Confirm"));
}

void AGridPlayerController::Back_Implementation() {
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, "GridPlayerController: Requested Back");
	UE_LOG(LogTemp, Warning, TEXT("GridPlayerController: Requested Back"));
}

void AGridPlayerController::OnConfirmSuccess_Implementation() {
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, "GridPlayerController: Confirm Success");
	UE_LOG(LogTemp, Warning, TEXT("GridPlayerController: Confirm Success"));
}

void AGridPlayerController::OnConfirmFail_Implementation() {
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "GridPlayerController: Confirm Fail");
	UE_LOG(LogTemp, Warning, TEXT("GridPlayerController: Confirm Fail"));
}

void AGridPlayerController::OnBackSuccess_Implementation() {
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, "GridPlayerController: Back Success");
	UE_LOG(LogTemp, Warning, TEXT("GridPlayerController: Back Success"));
}

void AGridPlayerController::OnBackFail_Implementation() {
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "GridPlayerController: Back Fail");
	UE_LOG(LogTemp, Warning, TEXT("GridPlayerController: Back Fail"));
}

void AGridPlayerController::UpdateControllerState(EControllerState new_state) {
	if (PlayerPawn == nullptr)
		return;

	ControllerState = new_state;
	switch (ControllerState) {
		case EControllerState::FreeRoaming:
			PlayerPawn->SetMovementLocked(false);
			PlayerPawn->SetRotationLocked(false);
			break;
		case EControllerState::In_UI:
			PlayerPawn->SetMovementLocked(true);
			PlayerPawn->SetRotationLocked(true);
			break;
		case EControllerState::Placement:
			PlayerPawn->SetMovementLocked(false);
			PlayerPawn->SetRotationLocked(false);
			break;
		default:
			break;
	}
}

void AGridPlayerController::AssignCharacterToPerformAction() {
	CurrentCharacter = Cast<UBasicGridInfo>(PlayerPawn->current_grid->GridInfo)->occupant;
}

void AGridPlayerController::MoveAssignedCharacterToCurrentGrid() {
	if (CurrentCharacter)
		CurrentCharacter->MoveToGrid(PlayerPawn->current_grid);
}

void AGridPlayerController::UndoMoveOnAssignedCharacter() {
	if (CurrentCharacter)
		CurrentCharacter->UndoMove();
}

void AGridPlayerController::ResetAssignedCharacter() {
	CurrentCharacter = nullptr;
}