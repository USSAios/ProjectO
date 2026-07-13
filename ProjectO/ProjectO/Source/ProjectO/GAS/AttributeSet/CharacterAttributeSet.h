// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "CharacterAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTO_API UCharacterAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

	UCharacterAttributeSet();
	void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue);

public:

	// 현재 체력
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS_BASIC(UCharacterAttributeSet, Health);

	// 최대 체력
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS_BASIC(UCharacterAttributeSet, MaxHealth);

	// 이동속도
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData MoveSpeed;
	ATTRIBUTE_ACCESSORS_BASIC(UCharacterAttributeSet, MoveSpeed)
	

	// 던지는 힘
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData ThrowForce;
	ATTRIBUTE_ACCESSORS_BASIC(UCharacterAttributeSet, ThrowForce)

	// 레벨
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Level;
	ATTRIBUTE_ACCESSORS_BASIC(UCharacterAttributeSet, Level)

	// 경험치
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData CurrentExp;
	ATTRIBUTE_ACCESSORS_BASIC(UCharacterAttributeSet, CurrentExp)

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData MaxExp;
	ATTRIBUTE_ACCESSORS_BASIC(UCharacterAttributeSet, MaxExp)

	// 체력 재생
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData HealthRegen;
	ATTRIBUTE_ACCESSORS_BASIC(UCharacterAttributeSet, HealthRegen)
	
};
