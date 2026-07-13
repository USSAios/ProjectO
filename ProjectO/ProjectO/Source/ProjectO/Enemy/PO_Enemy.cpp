// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/PO_Enemy.h"

#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
APO_Enemy::APO_Enemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	MeshComponent->SetupAttachment(RootComponent);
	
	MeshComponent->SetRelativeLocation(
		FVector(0.f, 0.f, -90.f));

	MeshComponent->SetRelativeScale3D(
		FVector(1.f));


	DamageSphere =
	CreateDefaultSubobject<USphereComponent>(
		TEXT("DamageSphere"));

	DamageSphere->SetupAttachment(RootComponent);

	DamageSphere->SetSphereRadius(80.f);

}

// Called when the game starts or when spawned
void APO_Enemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APO_Enemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APO_Enemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APO_Enemy::TakeDamage(float Damage)
{

	UE_LOG(LogTemp, Warning, TEXT("Take Damage %f"), Damage);
	
	Health -= Damage;

	if (Health <= 0.0f)
	{
		OnDeath();
	}
	
}

void APO_Enemy::OnDeath()
{
	bIsDead = true;

	if (!DeathEffect)
	{
		UE_LOG(LogTemp, Error,
			TEXT("DeathEffect nullptr"));

		return;
	}

	GetWorld()->SpawnActor<APO_DeathEffect>(
		DeathEffect,
		GetActorTransform());

	Destroy();
}

