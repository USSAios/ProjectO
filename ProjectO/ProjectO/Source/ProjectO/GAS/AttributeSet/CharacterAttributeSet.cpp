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
    
    AProjectOCharacter* TargetCharacter = Cast<AProjectOCharacter>(GetOwningActor());
    if (!TargetCharacter) return;
    

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
        
        float CurrentMaxExp = GetMaxExp();
        
        if (NewValue >= CurrentMaxExp && CurrentMaxExp > 0.f)
        {
            // 1. 레벨 계산 (현재 레벨 + 1)
            float CurrentLevel = GetLevel();
            float NewLevel = CurrentLevel + 1.f;
            
            // 2. 남은 경험치 계산 (오버플로우된 경험치를 이월하기 위함)
            // 예: Max가 100인데 120을 얻었다면, 레벨업 후 20이 남도록 처리
            float RemainderExp = NewValue - CurrentMaxExp;
            if (RemainderExp < 0.f) RemainderExp = 0.f;

            // 3. 다음 레벨을 위한 새로운 최대 경험치 요구량 설정 (기획에 맞게 수정 가능)
            // 여기서는 매 레벨마다 필요 경험치가 1.5배씩 증가하도록 예시를 들었습니다.
            float NewMaxExp = CurrentMaxExp * 1.5f;

            // ⚠️ 주의: PostAttributeChange 내부에서 다시 자신의 어트리뷰트를 수정하므로 
            // 내부적으로 무한 루프가 돌지 않도록 SetNumericAttributeBase를 안전하게 순서대로 실행합니다.
            
            // 레벨 상승 적용
            SetLevel(NewLevel);
            
            // 최대 경험치 요구량 갱신
            SetMaxExp(NewMaxExp);
            
            // 현재 경험치를 남은 이월 경험치로 초기화 (또는 완전히 0으로 하려면 0.f 대입)
            SetCurrentExp(RemainderExp);

            UE_LOG(LogTemp, Warning, TEXT("★ LEVEL UP! ★ Level: %f -> %f (Next MaxExp: %f)"), CurrentLevel, NewLevel, NewMaxExp);
            
            // (선택) 만약 캐릭터 블루프린트나 UI에 레벨업 이펙트를 띄우고 싶다면 
            // 여기에 TargetCharacter->OnLevelUp.Broadcast(NewLevel); 같은 델리게이트를 추가하시면 됩니다.
        
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
}