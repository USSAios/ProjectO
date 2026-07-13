// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/PO_AIController.h"

#include "PO_Enemy.h"

APO_AIController::APO_AIController()
{
	StateTreeAI = CreateDefaultSubobject<UStateTreeAIComponent>(TEXT("StateTreeAI"));
	check(StateTreeAI);
	
	bStartAILogicOnPossess = true;
	bAttachToPawn = true;
}

void APO_AIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	Enemy = Cast<APO_Enemy>(InPawn);
}