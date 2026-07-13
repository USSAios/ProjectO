// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PO_HealthBarWidget.generated.h"

class UProgressBar;
/**
 * 
 */
UCLASS()
class PROJECTO_API UPO_HealthBarWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	UPROPERTY(meta=(BindWidget))
	UProgressBar* HealthBar;

public:

	void SetHealthPercent(float Percent);
	
};
