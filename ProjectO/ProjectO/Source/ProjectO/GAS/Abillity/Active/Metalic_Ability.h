// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GAS/Abillity/Active/ActiveSkillGameplayAbility.h"
#include "Metalic_Ability.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTO_API UMetalic_Ability : public UActiveSkillGameplayAbility
{
	GENERATED_BODY()

protected:
	// 💡 에디터 디테일 패널에서 이 어빌리티가 켜졌을 때 적용할 새로운 피지컬 머티리얼 지정
	UPROPERTY(EditDefaultsOnly, Category = "Physics")
	class UPhysicalMaterial* NewPhysMaterial;

	// 💡 에디터 디테일 패널에서 이 어빌리티가 활성화될 때 덮어씌울 시각 머티리얼 지정
	UPROPERTY(EditDefaultsOnly, Category = "Visual")
	class UMaterialInterface* OverlayMaterial;

private:
	// 💡 원래 캐릭터가 입고 있던 머티리얼들을 임시 저장할 배열 (원상 복구용)
	UPROPERTY()
	TArray<class UMaterialInterface*> OriginalMaterials;

	// 스킬 종료 시 원래대로 되돌리기 위해 기존 피지컬 머티리얼을 보관할 포인터
	UPROPERTY()
	class UPhysicalMaterial* OriginalPhysMaterial;

	void ActivateAbility(FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	                     FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData);
};
