// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PO_Enemy.h"
#include "GameFramework/Actor.h"
#include "PO_EnemySpawner.generated.h"

class ARecastNavMesh;

UCLASS()
class PROJECTO_API APO_EnemySpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APO_EnemySpawner();

protected:
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;


protected:

	/** Type of NPC to spawn */
	UPROPERTY(EditAnywhere, Category="Enemy Spawner")
	TSubclassOf<APO_Enemy> EnemyClass;
	
	/** Time delay between enemy group spawns */
	UPROPERTY(EditAnywhere, Category="Enemy Spawner", meta = (ClampMin = 0, ClampMax = 20, Units = "s"))
	float SpawnGroupDelay = 5.0f;

	/** Min time delay between individual NPC spawns */
	UPROPERTY(EditAnywhere, Category="Enemy Spawner", meta = (ClampMin = 0, ClampMax = 2, Units = "s"))
	float MinSpawnDelay = 0.33f;

	/** Max time delay between individual NPC spawns */
	UPROPERTY(EditAnywhere, Category="Enemy Spawner", meta = (ClampMin = 0, ClampMax = 2, Units = "s"))
	float MaxSpawnDelay = 0.66f;

	/** Radius around the spawner where it can spawn NPCs */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Enemy Spawner", meta = (ClampMin = 0, ClampMax = 20, Units = "cm"))
	float SpawnRadius = 1000.0f;

	/** Number of NPCs to spawn per group */
	UPROPERTY(EditAnywhere, Category="Enemy Spawner", meta = (ClampMin = 0, ClampMax = 10))
	int32 SpawnGroupSize = 3;
	
	/** Number of NPCs spawned in the current group */
	int32 SpawnCount = 0;

	UPROPERTY(EditAnywhere, Category="Enemy Spawner")
	bool bEnableSpawn = true;
	
	bool bIsNearbyPlayer = false;

	/** NPC group spawn timer */
	FTimerHandle SpawnGroupTimer;

	/** NPC spawn timer */
	FTimerHandle SpawnNPCTimer;

	/** Pointer to the recast nav mesh actor, used to provide NPC spawn locations */
	TObjectPtr<ARecastNavMesh> NavData;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components")
	TObjectPtr<USphereComponent> DetectSphere;

	/** Spawns a new NPC group */
	void SpawnNPCGroup();

	/** Spawns an individual NPC */
	void SpawnNPC();

	UFUNCTION()
	void OnPlayerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnPlayerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	

};
