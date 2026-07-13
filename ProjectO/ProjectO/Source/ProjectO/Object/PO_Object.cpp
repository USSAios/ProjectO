// Fill out your copyright notice in the Description page of Project Settings.


#include "Object/PO_Object.h"

#include "ProjectOPlayerController.h"
#include "Enemy/PO_Enemy.h"

class AProjectOPlayerController;
// Sets default values
APO_Object::APO_Object()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(MeshComponent);


	MeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	
	MeshComponent->SetCollisionObjectType(ECC_PhysicsBody);
	
	MeshComponent->SetCollisionResponseToChannel(ECC_Visibility,ECR_Block);

	MeshComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);

	MeshComponent->SetNotifyRigidBodyCollision(true);

	MeshComponent->SetSimulatePhysics(true);
	
	
}

// Called when the game starts or when spawned
void APO_Object::BeginPlay()
{
	Super::BeginPlay();

	MeshComponent->OnBeginCursorOver.AddDynamic(this, &APO_Object::OnHoverBegin);

	MeshComponent->OnEndCursorOver.AddDynamic(this, &APO_Object::OnHoverEnd);

	MeshComponent->OnComponentHit.AddDynamic(this, &APO_Object::OnMeshHit);

	Mass = MeshComponent->GetMass();
	
}

// Called every frame
void APO_Object::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateThrownState();

}

void APO_Object::UpdateThrownState()
{
	if (!bThrown)
	{
		return;
	}

	float Speed = MeshComponent->GetPhysicsLinearVelocity().Length();

	if (Speed < MinThrownSpeed)
	{

		EndThrow();
	}
}

void APO_Object::UpdateOverlay()
{
	if (!MeshComponent)
	{
		return;
	}

	if (bHovered || bGrabbed)
	{
		MeshComponent->SetOverlayMaterial(
			HoverOverlayMaterial);
	}
	else
	{
		MeshComponent->SetOverlayMaterial(nullptr);
	}
}

void APO_Object::OnHoverBegin(UPrimitiveComponent* TouchedComponent)
{

	bHovered = true;

	UpdateOverlay();

	if (AProjectOPlayerController* PC =
		Cast<AProjectOPlayerController>(
			GetWorld()->GetFirstPlayerController()))
	{
		PC->SetHoveredObject(this);
	}
}

void APO_Object::OnHoverEnd(UPrimitiveComponent* TouchedComponent)
{
	bHovered = false;

	UpdateOverlay();

	AProjectOPlayerController* PC =
		Cast<AProjectOPlayerController>(
			GetWorld()->GetFirstPlayerController());

	if (PC)
	{
		PC->SetHoveredObject(nullptr);
	}
}

void APO_Object::SetHovered(bool bInHovered)
{
	if (!MeshComponent)
	{
		return;
	}

	if (bInHovered)
	{
		MeshComponent->SetOverlayMaterial(HoverOverlayMaterial);
	}
	else
	{
		MeshComponent->SetOverlayMaterial(nullptr);
	}
}

void APO_Object::BeginThrow()
{
	bThrown = true;

}

void APO_Object::EndThrow()
{
	bThrown = false;
}

void APO_Object::BeginGrab()
{
	bGrabbed = true;

	bThrown = false;

	HitEnemies.Empty();

	UpdateOverlay();
}

void APO_Object::EndGrab()
{
	bGrabbed = false;

	UpdateOverlay();
}

void APO_Object::OnMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{
	
	if (!bThrown)
	{
		
		return;
	}

	APO_Enemy* Enemy = Cast<APO_Enemy>(OtherActor);
	
	if (!Enemy)
	{
		
		return;
	}

	if (HitEnemies.Contains(Enemy))
	{

	}

	
	HitEnemies.Add(Enemy);
	
	Enemy->TakeDamage(CalculateDamage());
	
}

float APO_Object::CalculateDamage() const
{
	float Speed = MeshComponent->GetPhysicsLinearVelocity().Length();

	UE_LOG(LogTemp, Warning, TEXT("Damage %f"), (Mass * Speed) * 0.0001f);
	
	return (Mass * Speed) * 0.0001f;
}

