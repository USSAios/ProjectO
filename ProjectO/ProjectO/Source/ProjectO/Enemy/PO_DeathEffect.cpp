// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/PO_DeathEffect.h"

#include "GeometryCollection/GeometryCollectionComponent.h"

// Sets default values
APO_DeathEffect::APO_DeathEffect()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//GeometryCollection =
	//	CreateDefaultSubobject<UGeometryCollectionComponent>(
	//		TEXT("GeometryCollection"));
//
	//SetRootComponent(GeometryCollection);
}

void APO_DeathEffect::BeginPlay()
{
	Super::BeginPlay();

	
	//UE_LOG(LogTemp, Warning, TEXT("DeathEffect BeginPlay"));
//
	//if (!GeometryCollection)
	//{
	//	UE_LOG(LogTemp, Error, TEXT("GeometryCollection nullptr"));
	//	return;
	//}
//
	//UE_LOG(LogTemp, Warning, TEXT("GC Valid"));
//
	//GeometryCollection->SetSimulatePhysics(true);
//
	//GeometryCollection->AddRadialImpulse(
	//	GetActorLocation(),
	//	ImpulseRadius,
	//	ImpulseStrength,
	//	ERadialImpulseFalloff::RIF_Constant,
	//	true);
//
	//
//
	//GetWorldTimerManager().SetTimerForNextTick(
	//	[this]()
	//	{
	//		SetLifeSpan(LifeTime);
	//	});
}

void APO_DeathEffect::DestroySelf()
{
	Destroy();
}


