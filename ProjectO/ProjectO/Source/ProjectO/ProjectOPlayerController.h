// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
//#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "ProjectOPlayerController.generated.h"

class UPO_GameOverWidget;
class APO_Object;
class UNiagaraSystem;
class UInputMappingContext;
class UInputAction;
class UPathFollowingComponent;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

/**
 *  Player controller for a top-down perspective game.
 *  Implements point and click based controls
 */
UCLASS()
class PROJECTO_API AProjectOPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AProjectOPlayerController();

protected:
	
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY()
	TObjectPtr<APO_Object> HoveredObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI")
	TSubclassOf<UUserWidget> HUDWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI")
	TSubclassOf<UUserWidget> GameOverClass;

	UPROPERTY()
	UUserWidget* GameOverWidget;

	UPROPERTY()
	UUserWidget* HUDWidget;

	FTimerHandle HUDUpdateTimer;
	

public:

	void SetHoveredObject(APO_Object* NewObject);

	APO_Object* GetHoveredObject() const;

	void UpdateHUD();

	UFUNCTION()
	void ShowGameOver(float Time);
};


