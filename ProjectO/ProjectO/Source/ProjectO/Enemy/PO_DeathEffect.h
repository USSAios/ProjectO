// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PO_DeathEffect.generated.h"

UCLASS()
class PROJECTO_API APO_DeathEffect : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APO_DeathEffect();

	protected:

	virtual void BeginPlay() override;

	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	//TObjectPtr<UGeometryCollectionComponent> GeometryCollection;

	UPROPERTY(EditAnywhere, Category="Destruction")
	float ImpulseRadius = 600.f;

	UPROPERTY(EditAnywhere, Category="Destruction")
	float ImpulseStrength = 2500.f;

	UPROPERTY(EditAnywhere, Category="Destruction")
	float LifeTime = 2.f;

	UFUNCTION()
	void DestroySelf();

};
