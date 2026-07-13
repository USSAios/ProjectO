// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PO_GameOverWidget.generated.h"

class UTextBlock;
/**
 * 
 */
UCLASS()
class PROJECTO_API UPO_GameOverWidget : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TimerText;

public:
	void ShowGameOver(float Time);
};
