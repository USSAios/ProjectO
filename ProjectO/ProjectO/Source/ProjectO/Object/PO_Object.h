// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy/PO_Enemy.h"
#include "GameFramework/Actor.h"
#include "PO_Object.generated.h"



UCLASS()
class PROJECTO_API APO_Object : public AActor
{
	GENERATED_BODY()


protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
	TObjectPtr<USceneComponent> Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
	TObjectPtr<UStaticMeshComponent> MeshComponent;

	UPROPERTY(EditDefaultsOnly)
	UMaterialInterface* HoverOverlayMaterial;
	
public:	
	// Sets default values for this actor's properties
	APO_Object();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	
	bool bHovered = false;

	bool bGrabbed = false;

	bool bThrown = false;
	

	UPROPERTY(EditAnywhere)
	float DamageMultiplier = 1.0f;

	UPROPERTY(EditAnywhere)
	float MinThrownSpeed = 1.f;

	UPROPERTY()
	TSet<TObjectPtr<APO_Enemy>> HitEnemies;

public:

	UPROPERTY(EditAnywhere)
	float Mass;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void UpdateThrownState();

	void UpdateOverlay();

	UFUNCTION ()
	void OnHoverBegin(UPrimitiveComponent* TouchedComponent);
	
	UFUNCTION()
	void OnHoverEnd(UPrimitiveComponent* TouchedComponent);
	
	UFUNCTION()
	void SetHovered(bool bHovered);

	void BeginThrow();
	void EndThrow();
	void BeginGrab();
	void EndGrab();

	UFUNCTION()
	void OnMeshHit(
		UPrimitiveComponent* HitComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		FVector NormalImpulse,
		const FHitResult& Hit);

	float CalculateDamage() const;
	
	
	UStaticMeshComponent* GetMeshComponent() const
	{
		return MeshComponent;
	}
	
};
