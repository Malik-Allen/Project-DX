// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InteractionInterface.h"
#include "GridPlayerController.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EControllerState : uint8 {
	FreeRoaming		UMETA(DisplayName = "Free Roaming"),
	In_UI			UMETA(DisplayName = "In UI"),
	Placement		UMETA(DisplayName = "Placement")
};

UENUM(BlueprintType)
enum class EActionState : uint8 {
	None			UMETA(DisplayName = "None"),
	Move			UMETA(DisplayName = "Move"),
	Skill			UMETA(DisplayName = "Skill")
};



UCLASS(Transient)
class PROJECTDX_API AGridPlayerController : public APlayerController , public IInteractionInterface
{
	GENERATED_BODY()

public:
	AGridPlayerController();
	~AGridPlayerController();


	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;



	/*-----Interaction Interface Functions-----*/

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Interaction)
	void Confirm();
	virtual void Confirm_Implementation() override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Interaction)
	void Back();
	virtual void Back_Implementation() override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Interaction)
	void OnConfirmSuccess();
	virtual void OnConfirmSuccess_Implementation() override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Interaction)
	void OnConfirmFail();
	virtual void OnConfirmFail_Implementation() override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Interaction)
	void OnBackSuccess();
	virtual void OnBackSuccess_Implementation() override;
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Interaction)
	void OnBackFail();
	virtual void OnBackFail_Implementation() override;



	/*-----Grid Player Controller Functions-----*/

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Updating the Controller State will result in locking or unlocking the movement of the player pawn"))
	void UpdateControllerState(EControllerState new_state);

	UFUNCTION(BlueprintCallable)
	EControllerState GetControllerState() const { return ControllerState; }

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Uses the currently targeted grid's occupant to assign to perform action"))
	void AssignCharacterToPerformAction();

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Character must be assigned for this to function"))
	void MoveAssignedCharacterToCurrentGrid();

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Will return the assigned character to the tile at the beging of their turn, if not occupied"))
	void UndoMoveOnAssignedCharacter();

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Clears the assigned character from the player controller"))
	void ResetAssignedCharacter();


private:

	class AGridPlayerPawn* PlayerPawn;
	EControllerState ControllerState;

public:

	UPROPERTY(BlueprintReadOnly, Category = "Controlled Character")
	class ADXCharacter* CurrentCharacter;

};
