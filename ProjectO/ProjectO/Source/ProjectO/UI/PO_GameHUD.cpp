// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PO_GameHUD.h"

#include "Components/TextBlock.h"

void UPO_GameHUD::SetTime(float TimeSeconds)
{
	int32 TotalSeconds = FMath::FloorToInt(TimeSeconds);

	int32 Minutes = TotalSeconds / 60;
	int32 Seconds = TotalSeconds % 60;

	FString TimeString =
		FString::Printf(TEXT("%02d:%02d"),
			Minutes,
			Seconds);

	TimerText->SetText(FText::FromString(TimeString));
}

bool UPO_GameHUD::Initialize()
{
	return Super::Initialize();
}