// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Components/StateTreeAIComponent.h"
#include "PO_AIController.generated.h"

class APO_Enemy;
/**
 * 
 */
UCLASS()
class PROJECTO_API APO_AIController : public AAIController
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	UStateTreeAIComponent* StateTreeAI;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<APO_Enemy> Enemy;

	APO_AIController();
	
	 virtual void OnPossess(APawn* InPawn) override;
};
