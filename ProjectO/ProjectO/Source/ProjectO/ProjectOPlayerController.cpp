// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectOPlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "ProjectOCharacter.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "Navigation/PathFollowingComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "ProjectO.h"
#include "ProjectOGameMode.h"
#include "Object/PO_Object.h"
#include "UI/PO_GameHUD.h"
#include "UI/PO_GameOverWidget.h"

class AProjectOGameMode;

AProjectOPlayerController::AProjectOPlayerController()
{
	bShowMouseCursor = true;

	bEnableClickEvents = true;

	bEnableMouseOverEvents = true;
	
	//PrimaryActorTick.bCanEverTick = true;
}

void AProjectOPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (HUDWidgetClass)
	{
		HUDWidget = CreateWidget<UUserWidget>(
			this,
			HUDWidgetClass);

		if (HUDWidget)
		{
			HUDWidget->AddToViewport();
			UE_LOG(LogProjectO, Log, TEXT("HUD Widget Created"));
		}
	}

	if (GameOverClass)
	{
		GameOverWidget = CreateWidget<UUserWidget>(
			this,
			GameOverClass);

		if (GameOverWidget)
		{		
			UE_LOG(LogProjectO, Log, TEXT("HUD Widget Created"));
		}
	}
	
	GetWorldTimerManager().SetTimer(
		HUDUpdateTimer,
		this,
		&AProjectOPlayerController::UpdateHUD,
		0.1f,
		true);

}

void AProjectOPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	APlayerController* PC = Cast<APlayerController>(this);

	if (!PC)
	{
		return;
	}

	FHitResult Hit;

	APO_Object* NewHoveredObject = nullptr;

	if (PC->GetHitResultUnderCursor(ECC_Visibility,false,Hit))
	{
		NewHoveredObject = Cast<APO_Object>(Hit.GetActor());
	}

	if (HoveredObject != NewHoveredObject)
	{
		if (HoveredObject)
		{
			HoveredObject->SetHovered(false);
		}
		
		SetHoveredObject(NewHoveredObject);

		if (HoveredObject)
		{
			HoveredObject->SetHovered(true);
		}
	}
}

void AProjectOPlayerController::SetHoveredObject(APO_Object* NewObject)
{
	HoveredObject = NewObject;
}

APO_Object* AProjectOPlayerController::GetHoveredObject() const
{
	return HoveredObject;
}

void AProjectOPlayerController::UpdateHUD()
{
	AProjectOGameMode* GM =
		Cast<AProjectOGameMode>(
			GetWorld()->GetAuthGameMode());

	UPO_GameHUD* HUD =
		Cast<UPO_GameHUD>(HUDWidget);

	if (!GM || !HUD)
	{
		return;
	}

	HUD->SetTime(GM->GetElapsedTime());
}

void AProjectOPlayerController::ShowGameOver(float Time)
{
	UPO_GameOverWidget* HUD =
		Cast<UPO_GameOverWidget>(GameOverWidget);

	if (!HUD)
	{
		UE_LOG(LogTemp, Error,
			TEXT("GameOverWidget Cast Failed"));
		return;
	}

	UE_LOG(LogTemp, Warning,
		TEXT("Game Over UI"));

	HUD->ShowGameOver(Time);

	GameOverWidget->AddToViewport();

	
}

