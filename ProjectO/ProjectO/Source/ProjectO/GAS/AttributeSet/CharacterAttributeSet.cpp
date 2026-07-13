// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/AttributeSet/CharacterAttributeSet.h"

#include "ProjectOCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

UCharacterAttributeSet::UCharacterAttributeSet()
{
	InitHealth(100.f);
	InitMaxHealth(100.f);
	InitMoveSpeed(600.f);
	InitThrowForce(1000.f);
	InitLevel(1.f);
	InitCurrentExp(0.f);
	InitMaxExp(100.f);
	InitHealthRegen(0.f);
}

void UCharacterAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);

	AProjectOCharacter* TargetCharacter = Cast<AProjectOCharacter>(GetOwningActor())
	
	AProjectOCharacter* TargetCharacter = Cast<AProjectOCharacter>(GetOwningActor());
    if (!TargetCharacter) return;

    // ─────────────────────────────────────────────────────────────────
    // 💡 IF-ELSE IF 구조로 각 요소별 변경 사항 처리
    // ─────────────────────────────────────────────────────────────────

    // 1. 현재 체력이 변경된 경우
    if (Attribute == GetHealthAttribute())
    {
        TargetCharacter->OnHealthChanged.Broadcast(NewValue, GetMaxHealth());
        UE_LOG(LogTemp, Warning, TEXT("Health Changed: %f"), NewValue);

        if (NewValue <= 0.f)
        {
            // 캐릭터 클래스에 구현해둔 사망 함수 호출
            TargetCharacter->OnDeath(); 
        }
    }
    
    // 2. 최대 체력이 변경된 경우
    else if (Attribute == GetMaxHealthAttribute())
    {
        // 최대 체력이 버프 등으로 바뀌어도 UI 스케일 갱신을 위해 델리게이트 호출
        TargetCharacter->OnHealthChanged.Broadcast(GetHealth(), NewValue);
    }

    // 3. 이동 속도가 변경된 경우
    else if (Attribute == GetMoveSpeedAttribute())
    {
        if (auto* Movement = TargetCharacter->GetCharacterMovement())
        {
            // 변경된 스탯 수치를 언리얼 캐릭터 무브먼트 컴포넌트 속도에 즉시 반영
            Movement->MaxWalkSpeed = NewValue;
            UE_LOG(LogTemp, Log, TEXT("MoveSpeed Changed -> MaxWalkSpeed: %f"), NewValue);
        }
    }

    // 4. 던지는 힘이 변경된 경우
    else if (Attribute == GetThrowForceAttribute())
    {
        // 런타임에 던지는 힘 스탯이 변경되었을 때 처리할 로직 (로그라이크 유물/특성 등)
        UE_LOG(LogTemp, Log, TEXT("ThrowForce Changed: %f"), NewValue);
    }

    // 5. 레벨이 변경된 경우
    else if (Attribute == GetLevelAttribute())
    {
        // 레벨업 시 필요한 연출이나 시스템 연동 (예: 스킬 포인트 지급 등)
        UE_LOG(LogTemp, Warning, TEXT("Level Up! Current Level: %f"), NewValue);
    }

    // 6. 현재 경험치가 변경된 경우
    else if (Attribute == GetCurrentExpAttribute())
    {
        // 경험치 획득 로그 및 UI 연동 위치
        UE_LOG(LogTemp, Log, TEXT("Exp Changed: %f / %f"), NewValue, GetMaxExp());
    }

    // 7. 최대 경험치(요구량)가 변경된 경우
    else if (Attribute == GetMaxExpAttribute())
    {
        UE_LOG(LogTemp, Log, TEXT("MaxExp Changed: %f"), NewValue);
    }

    // 8. 체력 재생 수치가 변경된 경우
    else if (Attribute == GetHealthRegenAttribute())
    {
        // 초당 체력 회복 버프 등이 적용되었을 때의 처리
        UE_LOG(LogTemp, Log, TEXT("HealthRegen Changed: %f"), NewValue);
    }

	
}