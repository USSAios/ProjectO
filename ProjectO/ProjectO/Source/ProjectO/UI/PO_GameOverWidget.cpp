// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PO_GameOverWidget.h"

#include "ProjectOGameMode.h"
#include "Components/TextBlock.h"

void UPO_GameOverWidget::ShowGameOver(float Time)
{
	AProjectOGameMode* GM =
		Cast<AProjectOGameMode>(
			GetWorld()->GetAuthGameMode());

	int32 TotalSeconds = FMath::FloorToInt(Time);

	int32 Minutes = TotalSeconds / 60;
	int32 Seconds = TotalSeconds % 60;

	FString TimeString =
		FString::Printf(TEXT("%02d:%02d"),
			Minutes,
			Seconds);
	
	TimerText->SetText(FText::FromString(TimeString));
}
