// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/PO_Enemy.h"

#include "ProjectOCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APO_Enemy::APO_Enemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

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
	if (bIsDead) return;
	bIsDead = true;

	// 💡 1. 게임 월드에서 플레이어 캐릭터를 가져옵니다.
	AProjectOCharacter* PlayerChar = Cast<AProjectOCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (PlayerChar)
	{
		// 💡 2. 플레이어의 Ability System Component를 가져옵니다.
		if (UAbilitySystemComponent* PlayerASC = PlayerChar->GetAbilitySystemComponent())
		{
			// 💡 3. 현재 플레이어가 가지고 있는 'CurrentExp'의 최신 수치를 긁어옵니다.
			float CurrentExp = PlayerASC->GetNumericAttribute(UCharacterAttributeSet::GetCurrentExpAttribute());
            
			// 💡 4. 기존 경험치에 적이 들고 있던 보상 경험치를 더합니다.
			float NewExp = CurrentExp + ExpReward;

			// 💡 5. 플레이어의 경험치 어트리뷰트 베이스 값을 강제로 갱신합니다.
			PlayerASC->SetNumericAttributeBase(UCharacterAttributeSet::GetCurrentExpAttribute(), NewExp);
            
			// (선택) 이전 단계에서 만들어둔 if-else 로그가 정상 작동하는지 확인용
			UE_LOG(LogTemp, Log, TEXT("적 처치! 플레이어에게 경험치 %f 지급 (총 경험치: %f)"), ExpReward, NewExp);
		}
	}

	if (DeathEffect)
	{
		GetWorld()->SpawnActor<APO_DeathEffect>(
		DeathEffect,
		GetActorTransform());
	}
	

	Destroy();
}

