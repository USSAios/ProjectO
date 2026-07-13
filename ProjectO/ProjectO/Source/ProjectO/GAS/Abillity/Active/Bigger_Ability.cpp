// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abillity/Active/Bigger_Ability.h"

UBigger_Ability::UBigger_Ability()
{
}

void UBigger_Ability::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}
