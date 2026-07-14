// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abillity/Active/Bigger_Ability.h"

UBigger_Ability::UBigger_Ability()
{
}

void UBigger_Ability::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	// 1. 기본 시스템 활성화
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	// 2. 💡 [핵심] 어빌리티의 쿨타임 및 코스트를 실제로 반영(커밋)합니다!
	// 이 함수가 실행되는 순간 에디터에 등록해둔 'GE_Bigger_Skill_Cooldown'이 비로소 캐릭터에게 적용됩니다.
	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		// 만약 쿨타임 중이거나 마나가 부족해 커밋에 실패했다면 즉시 어빌리티를 종료시킵니다.
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	// 3. 💡 이후 블루프린트에 넘겨줄 실제 스킬 발동 로직 연동
	// 만약 블루프린트의 ActivateAbility 이벤트 노드를 사용하여 연출하신다면 
	// 아래처럼 SendGameplayEvent 등을 쓰거나 혹은 그대로 두셔도 무방합니다.
}
