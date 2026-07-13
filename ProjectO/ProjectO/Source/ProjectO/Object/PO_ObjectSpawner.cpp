// Fill out your copyright notice in the Description page of Project Settings.


#include "Object/PO_ObjectSpawner.h"

#include "PO_Object.h"
#include "ProjectOGameMode.h"

// Sets default values
APO_ObjectSpawner::APO_ObjectSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void APO_ObjectSpawner::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(
		SpawnTimer,
		this,
		&APO_ObjectSpawner::SpawnObject,
		SpawnInterval,
		true);
	
}

void APO_ObjectSpawner::SpawnObject()
{
	AProjectOGameMode* GM =
		Cast<AProjectOGameMode>(
			GetWorld()->GetAuthGameMode());

	if (!GM || !GM->CanSpawnObjects())
	{
		return;
	}

	if (ObjectClasses.Num() == 0)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("ObjectClasses is Empty"));
		return;
	}

	FVector RandomOffset =
		FMath::VRand() *
		FMath::RandRange(0.f, SpawnRadius);

	FVector SpawnLocation =
		GetActorLocation() + RandomOffset;

	SpawnLocation.Z += 100.f;

	int32 RandomIndex =
		FMath::RandRange(
			0,
			ObjectClasses.Num() - 1);

	TSubclassOf<APO_Object> SelectedClass =
		ObjectClasses[RandomIndex];

	GetWorld()->SpawnActor<APO_Object>(
		SelectedClass,
		SpawnLocation,
		FRotator::ZeroRotator);
}


