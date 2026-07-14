// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "ActiveSkillDataAsset.generated.h"

struct FGameplayTag;
/**
 * 
 */
class UGameplayEffect;

USTRUCT(BlueprintType)
struct FSkillInfo
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	FText SkillName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	class UTexture2D* SkillIcon;

	// 💡 쿨타임에 사용할 GE 클래스
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat")
	TSubclassOf<UGameplayEffect> CooldownGameplayEffectClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat")
	float ThrowForceMultiplier = 1.0f;
};

UCLASS()
class PROJECTO_API UActiveSkillDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	// 💡 맵 구조를 사용해 "스킬 태그"를 Key로, "스킬 정보"를 Value로 묶어줍니다.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "SkillDatabase")
	TMap<FGameplayTag, FSkillInfo> SkillDatabase;
};
