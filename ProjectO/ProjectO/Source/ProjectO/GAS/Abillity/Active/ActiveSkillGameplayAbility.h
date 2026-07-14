// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GAS/Abillity/SkillGameplayAbility.h"
#include "GameplayTagContainer.h"
#include "Data/ActiveSkillDataAsset.h"
#include "ActiveSkillGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTO_API UActiveSkillGameplayAbility : public USkillGameplayAbility
{
	GENERATED_BODY()

public:
	UActiveSkillGameplayAbility();


protected:

	// 에디터에서 방금 만든 전용 DA_SkillDatabase를 딱 한 번만 에셋으로 꽂아줍니다.
	UPROPERTY(EditDefaultsOnly, Category = "Data")
	class UActiveSkillDataAsset* SkillDataAsset;

	// 이 어빌리티 고유의 스킬 ID 태그 (예: Skill.Active.Bigger)
	UPROPERTY(EditDefaultsOnly, Category = "Data")
	FGameplayTag SkillTag;

	// 데이터 에셋에서 찾은 내 스킬 세부 정보 캐싱용
	FSkillInfo CurrentSkillInfo;

	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;

	// 💡 이 스킬의 쿨타임 상태를 나타낼 태그 (예: State.Cooldown.Skill1)
	// 에디터 패널에서 쿨타임 GE를 직접 만들지 않고 기본 태그 검사용으로도 확장하기 편리합니다.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Cooldown")
	FGameplayTagContainer CooldownTags;
};
