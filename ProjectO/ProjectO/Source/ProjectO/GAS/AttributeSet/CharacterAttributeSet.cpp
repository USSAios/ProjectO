// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/AttributeSet/CharacterAttributeSet.h"

#include "ProjectOCharacter.h"

UCharacterAttributeSet::UCharacterAttributeSet()
{
	InitHealth(100.f);
	InitMaxHealth(100.f);
}

void UCharacterAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);

	// 변경된 어트리뷰트가 Health인 경우
	if (Attribute == GetHealthAttribute())
	{
		// OwnerActor를 내 캐릭터 클래스로 캐스팅
		if (AProjectOCharacter* TargetCharacter = Cast<AProjectOCharacter>(GetOwningActor()))
		{
			// 캐릭터의 델리게이트를 통해 현재체력과 최대체력을 동시에 던짐
			TargetCharacter->OnHealthChanged.Broadcast(NewValue, GetMaxHealth());
		}
	}
}