// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/PO_EnemySpawner.h"

#include "NavigationSystem.h"
#include "ProjectOCharacter.h"
#include "ProjectOGameMode.h"
#include "TwinStickNPC.h"
#include "TwinStickSpawner.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NavMesh/RecastNavMesh.h"

// Sets default values
APO_EnemySpawner::APO_EnemySpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	DetectSphere = CreateDefaultSubobject<USphereComponent>(TEXT("DetectSphere"));
	DetectSphere->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void APO_EnemySpawner::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Log, TEXT("Spawn start"));

	if (!bEnableSpawn)
	{
		return;
	}

	DetectSphere->OnComponentBeginOverlap.AddDynamic(this, &APO_EnemySpawner::OnPlayerOverlap);
	DetectSphere->OnComponentEndOverlap.AddDynamic(this, &APO_EnemySpawner::OnPlayerEndOverlap);


	// find the recast navmesh actor on the level
	TArray<AActor*> ActorList;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ARecastNavMesh::StaticClass(), ActorList);

	if (ActorList.Num() > 0)
	{
		NavData = Cast<ARecastNavMesh>(ActorList[0]);
	} else {

		UE_LOG(LogTemp, Log, TEXT("Could not find recast navmesh"));

	}

	// set up the spawn timer
	GetWorld()->GetTimerManager().SetTimer(SpawnGroupTimer, this, &APO_EnemySpawner::SpawnNPCGroup, SpawnGroupDelay, true);

	// spawn the first group of NPCs
	SpawnNPCGroup();
}

void APO_EnemySpawner::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	GetWorld()->GetTimerManager().ClearTimer(SpawnGroupTimer);
	GetWorld()->GetTimerManager().ClearTimer(SpawnNPCTimer);
}

void APO_EnemySpawner::SpawnNPCGroup()
{
	UE_LOG(LogTemp, Warning, TEXT("SpawnNPCGroup"));

	if (bIsNearbyPlayer)
	{
		return;
	}
	
	// reset the group spawn counter
	SpawnCount = 0;

	// check if we're still under the max NPC cap
	if (AProjectOGameMode* GM = Cast<AProjectOGameMode>(GetWorld()->GetAuthGameMode()))
	{
		UE_LOG(LogTemp, Warning,
			TEXT("GameMode=%s"),
			*GetNameSafe(GM));
		
		UE_LOG(LogTemp, Warning,
			TEXT("CanSpawnEnemys = %d"),
			GM->CanSpawnEnemys());
		
		
		if (GM->CanSpawnEnemys())
		{
			SpawnNPC();
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("GameMode is null"));
	}
	
}

void APO_EnemySpawner::SpawnNPC()
{
	
	FTransform SpawnTransform;

	// find a random point around the spawner
	FVector SpawnLoc;
	if (UNavigationSystemV1::K2_GetRandomReachablePointInRadius(GetWorld(), GetActorLocation(), SpawnLoc, SpawnRadius, NavData))
	{
		SpawnTransform.SetLocation(SpawnLoc);

		UE_LOG(LogTemp, Log, TEXT("Spawn Enemy"));
		
		// spawn the NPC
		APO_Enemy* NPC = GetWorld()->SpawnActor<APO_Enemy>(EnemyClass, SpawnTransform);

		if (NPC)
		{
			NPC->SpawnDefaultController();
		}
	}

	// increase the spawn counter
	++SpawnCount;

	// do we still have enemies left to spawn?
	if (SpawnCount < SpawnGroupSize)
	{
		GetWorld()->GetTimerManager().SetTimer(SpawnNPCTimer, this, &APO_EnemySpawner::SpawnNPC, FMath::RandRange(MinSpawnDelay, MaxSpawnDelay), false);
	}
}

void APO_EnemySpawner::OnPlayerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AProjectOCharacter* Player = Cast<AProjectOCharacter>(OtherActor);
	
	if (!Player)
	{
		return;
	}
	
	bIsNearbyPlayer = true;
}

void APO_EnemySpawner::OnPlayerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AProjectOCharacter* Player = Cast<AProjectOCharacter>(OtherActor);
	
	if (!Player)
	{
		return;
	}

	bIsNearbyPlayer = false;
}


