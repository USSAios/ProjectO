// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PO_ObjectSpawner.generated.h"

class APO_Object;

UCLASS()
class PROJECTO_API APO_ObjectSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APO_ObjectSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	
	UPROPERTY(EditAnywhere, Category="Spawn")
	TArray<TSubclassOf<APO_Object>> ObjectClasses;
	
	UPROPERTY(EditAnywhere)
	float SpawnInterval = 3.f;

	UPROPERTY(EditAnywhere)
	float SpawnRadius = 500.f;

	FTimerHandle SpawnTimer;

	UFUNCTION()
	void SpawnObject();
};
