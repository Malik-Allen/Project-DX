// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UndoRedo/CommandManager.h"
#include "ActionInterface.h"
#include "GameplayDefinitions.h"
#include "GameplayTags.h"
#include "GridPatterns.h"
#include "Actions.generated.h"

/**
 * 
 */
class PROJECTDX_API Actions
{
public:
	Actions();
	~Actions();
};

class Modifier;


UCLASS(Transient)
class PROJECTDX_API UAction : public UObject, public ICommand, public IActionInterface {

	GENERATED_BODY()

public:
	
	UAction();
	virtual ~UAction();

	/*----- Command Interface Overridable Functions -----*/
	virtual bool Execute();
	virtual bool Undo();
	virtual bool Redo();

	/*----- Action Interface Overridable Functions -----*/
	virtual void OnRegister();
	virtual void Show();
	virtual void Hide();
	virtual void Pre_Calculation();
	virtual void Execute_Action();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void BeginVisualSequence();
	virtual void BeginVisualSequence_Implementation();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void OnEndVisualSequence();
	virtual void OnEndVisualSequence_Implementation();

};


UCLASS(Transient, Blueprintable)
class PROJECTDX_API USkill : public UAction {

	GENERATED_BODY()

public:

	USkill();
	~USkill();

	UPROPERTY(Category = "Skill", EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "Name"))
	FString name;

	UPROPERTY(Category = "Skill", EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "Is Skill Locked"))
	bool bIsLocked;

	UPROPERTY(Category = "Skill", EditDefaultsOnly, BlueprintReadWrite, meta = (DisplayName = "Movement Pattern"))
	FGridPattern MovementGridPattern;
	
	UPROPERTY(Category = "Skill", EditDefaultsOnly, BlueprintReadWrite, meta = (DisplayName = "Effect Pattern"))
	FGridPattern EffectGridPattern;

	UPROPERTY(Category = "Skill", BlueprintReadOnly, meta = (DisplayName = "Movement Grids"))
	TArray<UGrid*> MovementGrids;
	UPROPERTY(Category = "Skill", BlueprintReadOnly, meta = (DisplayName = "Effected Grids"))
	TArray<UGrid*> EffectedGrids;

	GridPattern* AreaOfMovement;
	GridPattern* EffectPattern;

	FGameplayTag MovementTag;
	FGameplayTag EffectTag;

	UPROPERTY(Category = "Skill", EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "Movement"))
	EActionMovement ActionMovement;

	UPROPERTY(Category = "Skill", EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "Targeting"))
	EActionTargeting ActionTargeting;

	UPROPERTY(Category = "Skill", EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "Cost"))
	float Cost;

	UPROPERTY(Category = "Skill", EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "Cool Down"))
	int CoolDown;
	int CoolDownCount;

	class ADXCharacter* Owner;
	ADXCharacter* Target;
	TArray<ADXCharacter*> Participants;

	bool bHideVisuals;

	// Visual Sequence Reference (Animations, Effects, etc..)
	UPROPERTY(Category = "Skill", EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "Modifiers"))
	TArray<EModifierType> ActionModifiers;

	UPROPERTY(Category = "Skill", EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "Effected Attributes"))
	TArray<EAttributeType> EffectedAttributes;

	// Initialize this Skill
	virtual void OnRegister() override;

	// Show this skill's area of movement and area of effected on the grid
	virtual void Show() override;

	// Hide this skill's area of movement and area of effected on the grid
	virtual void Hide() override;

	virtual void Pre_Calculation() override;
	virtual void Execute_Action() override;
	virtual void BeginVisualSequence_Implementation() override;
	virtual void OnEndVisualSequence_Implementation() override;

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Used to assign the home grid for the area of movement for this skill"))
		void SetCenterOfMovementGrid(UGrid* Center);

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Used to update the effect grid pattern, moving it the new center"))
		void UpdateEffectGrid(UGrid* NewCenter);

	void SetOwner(ADXCharacter* Owner);

	
};