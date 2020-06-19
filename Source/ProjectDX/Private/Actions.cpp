// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions.h"

Actions::Actions()
{
}

Actions::~Actions()
{
}

UAction::UAction() {}

UAction::~UAction() {}

bool UAction::Execute() {

	return true;
}

bool UAction::Undo() {
	return true;
}

bool UAction::Redo() {
	return true;
}

void UAction::OnRegister() {

}


void UAction::Show() {

}

void UAction::Hide() {

}

void UAction::Pre_Calculation() {

}

void UAction::Execute_Action() {

}


void UAction::BeginVisualSequence_Implementation() {

}


void UAction::OnEndVisualSequence_Implementation() {

}

USkill::USkill() :
	name(""),
	bIsLocked(false),
	MovementGridPattern(FGridPattern()),
	EffectGridPattern(FGridPattern()),
	AreaOfMovement(nullptr),
	EffectPattern(nullptr),
	MovementTag(FGameplayTag()),
	EffectTag(FGameplayTag()),
	ActionMovement(EActionMovement::Stationary),
	ActionTargeting(EActionTargeting::Single),
	Cost(0.0f),
	CoolDown(0),
	CoolDownCount(0),
	Owner(nullptr),
	Target(nullptr),
	bHideVisuals(false)
{}

USkill::~USkill() {
	if (AreaOfMovement) delete AreaOfMovement, AreaOfMovement = nullptr;
	if (EffectPattern) delete EffectPattern, EffectPattern = nullptr;
}

// Initialize this Skill
void USkill::OnRegister() {
	AreaOfMovement = new GridPattern(MovementGridPattern);
	EffectPattern = new GridPattern(EffectGridPattern);
}

// Show this skill's area of movement and area of effected on the grid
void USkill::Show() {
	AreaOfMovement->SetPatternIsHidden(false);
	EffectPattern->SetPatternIsHidden(false);
}

// Hide this skill's area of movement and area of effected on the grid
void USkill::Hide() {
	AreaOfMovement->SetPatternIsHidden(true);
	EffectPattern->SetPatternIsHidden(true);
}

void USkill::Pre_Calculation() {

}

void USkill::Execute_Action() {

}

void USkill::BeginVisualSequence_Implementation() {

}

void USkill::OnEndVisualSequence_Implementation() {

}

// Used to assign the home grid for the area of movement for this skill
void USkill::SetCenterOfMovementGrid(UGrid* Center) {
	AreaOfMovement->UpdateHomeGrid(Center);
	AreaOfMovement->GetEffectedGrids(MovementGrids);
}

// Used to update the effect grid pattern, moving it the new center
void USkill::UpdateEffectGrid(UGrid* NewCenter) {
	EffectPattern->UpdateHomeGrid(NewCenter);
	EffectPattern->GetEffectedGrids(EffectedGrids);
}

void USkill::SetOwner(ADXCharacter* Owner_) {
	Owner = Owner_;
}


