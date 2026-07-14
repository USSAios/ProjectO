// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abillity/Active/ActiveSkillGameplayAbility.h"

UActiveSkillGameplayAbility::UActiveSkillGameplayAbility()
{
	// 인스턴스 정책 설정
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

void UActiveSkillGameplayAbility::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilitySpec& Spec)
{
	Super::OnGiveAbility(ActorInfo, Spec);

	// 💡 어빌리티가 캐릭터에게 부여되는 순간, 데이터 에셋에서 내 태그에 맞는 정보만 쏙 파싱해옵니다.
	if (SkillDataAsset && SkillTag.IsValid())
	{
		if (FSkillInfo* FoundInfo = SkillDataAsset->SkillDatabase.Find(SkillTag))
		{
			CurrentSkillInfo = *FoundInfo;
            
			// 💡 기존에 하드코딩되던 쿨타임 GE 클래스를 데이터 에셋의 값으로 동적 대체합니다.
			CooldownGameplayEffectClass = CurrentSkillInfo.CooldownGameplayEffectClass;
		}
	}
}
