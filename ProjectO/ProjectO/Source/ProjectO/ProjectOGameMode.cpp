// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectOGameMode.h"

#include "ProjectOPlayerController.h"
#include "Kismet/GameplayStatics.h"

AProjectOGameMode::AProjectOGameMode()
{
	// stub
	TotalEnemy = 0;
}

void AProjectOGameMode::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(
		GameTimerHandle,
		this,
		&AProjectOGameMode::UpdateGameTime,
		1.0f,
		true);
		
	UE_LOG(LogTemp, Log, TEXT("Game started"));
}

bool AProjectOGameMode::CanSpawnEnemys()
{
	return TotalEnemy < EnemyCap;
}

bool AProjectOGameMode::CanSpawnObjects()
{
	return TotalObject < ObjectCap;
}

void AProjectOGameMode::UpdateGameTime()
{
	ElapsedTime += 1.f;
}

void AProjectOGameMode::GameOver()
{
	GetWorldTimerManager().ClearTimer(
		GameTimerHandle);

	APlayerController* PC =
	GetWorld()->GetFirstPlayerController();

	AProjectOPlayerController* MyPC =
		Cast<AProjectOPlayerController>(PC);

	if (MyPC)
	{
		MyPC->ShowGameOver(ElapsedTime);
	}

	UGameplayStatics::SetGamePaused(
		GetWorld(),
		true);

}


