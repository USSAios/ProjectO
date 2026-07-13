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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGameplayAttributeData Health;
 
 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGameplayAttributeData MaxHealth;

	ATTRIBUTE_ACCESSORS_BASIC(UCharacterAttributeSet, Health);
	ATTRIBUTE_ACCESSORS_BASIC(UCharacterAttributeSet, MaxHealth);
	
};
