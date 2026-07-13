// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PO_DeathEffect.h"
#include "GameFramework/Character.h"
#include "PO_Enemy.generated.h"

class USphereComponent;

UCLASS()
class PROJECTO_API APO_Enemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APO_Enemy();

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UStaticMeshComponent> MeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TObjectPtr<USphereComponent> DamageSphere;

	

	UPROPERTY(EditAnywhere, Category="Destruction")
	TSubclassOf<APO_DeathEffect> DeathEffect;
	
	float Health = 100.0f;

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsDead = false;

	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	float GetHealth() const { return Health; }
	
	void TakeDamage(float Damage);

	void OnDeath();
	
};
