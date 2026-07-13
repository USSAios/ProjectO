// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PO_HealthBarWidget.h"
#include "Components/ProgressBar.h"

void UPO_HealthBarWidget::SetHealthPercent(float Percent)
{
	if (HealthBar)
	{
		HealthBar->SetPercent(Percent);
	}
}
