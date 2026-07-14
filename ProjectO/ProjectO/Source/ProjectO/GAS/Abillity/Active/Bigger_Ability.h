// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GAS/Abillity/Active/ActiveSkillGameplayAbility.h"
#include "Bigger_Ability.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTO_API UBigger_Ability : public UActiveSkillGameplayAbility
{
	GENERATED_BODY()

public:
	UBigger_Ability();

	// 어빌리티가 발동될 때 엔진에 의해 호출되는 핵심 가상 함수
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

protected:
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Skill|Settings")
	float SizeMultiplier = 2.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Skill|Settings")
	float CoolDown = 2.0f;
	
};
