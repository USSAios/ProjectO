// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ProjectOGameMode.generated.h"

/**
 *  Simple Game Mode for a top-down perspective game
 *  Sets the default gameplay framework classes
 *  Check the Blueprint derived class for the set values
 */
UCLASS(abstract)
class AProjectOGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	/** Constructor */
	AProjectOGameMode();

	virtual void BeginPlay() override;

	bool CanSpawnEnemys();

	bool CanSpawnObjects();

	float GetElapsedTime() const { return ElapsedTime; }
	
	void UpdateGameTime();

	void GameOver();

public:

	FTimerHandle GameTimerHandle;
	
	UPROPERTY(BlueprintReadOnly)
	float ElapsedTime = 0.f;

	int EnemyCap = 15;
	
	int TotalEnemy;

	int ObjectCap = 12;

	int TotalObject;
};



