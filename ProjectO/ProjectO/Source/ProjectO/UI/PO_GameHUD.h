// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PO_GameHUD.generated.h"

class UTextBlock;
/**
 * 
 */
UCLASS()
class PROJECTO_API UPO_GameHUD : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TimerText;

	virtual bool Initialize() override;

	void SetTime(float TimeSeconds);
	
};
