// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abillity/Active/Metalic_Ability.h"

#include "ProjectOCharacter.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "Object/PO_Object.h"

void UMetalic_Ability::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                       const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                       const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	UE_LOG(LogTemp, Log, TEXT("어빌리티 시작"));

	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		UE_LOG(LogTemp, Warning, TEXT("Metalic 어빌리티 커밋 실패! (쿨타임 중이거나 자원 부족)"));
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	// 어빌리티의 소유 캐릭터 가져오기
	if (AProjectOCharacter* PlayerCharacter = Cast<AProjectOCharacter>(ActorInfo->AvatarActor.Get()))
	{
		UE_LOG(LogTemp, Log, TEXT("플레이어 가져옴"));

		
		if (APO_Object* Object = PlayerCharacter->GetObject())
		{
			UE_LOG(LogTemp, Log, TEXT("오브젝트 가져옴"));

			if (UStaticMeshComponent* Mesh = Object->GetMeshComponent())
			{
				UE_LOG(LogTemp, Log, TEXT("메쉬 가져옴"));

				bool bWasSimulating = Mesh->IsSimulatingPhysics();
				if (bWasSimulating)
				{
					Mesh->SetSimulatePhysics(false);
				}
				
				// 💡 BodyInstance를 거쳐서 가져와야 합니다!
				UPhysicalMaterial* PhysMat = Mesh->GetBodyInstance() ? Mesh->GetBodyInstance()->GetSimplePhysicalMaterial() : nullptr;

				if (PhysMat)
				{
					UE_LOG(LogTemp, Log, TEXT("직접 지정된 피지컬 머티리얼: %s"), *PhysMat->GetName());
				}

				// 1. 💡 나중을 위해 원래 사용 중이던 피지컬 머티리얼을 백업해둡니다.
				OriginalPhysMaterial = PhysMat;

				// 2. 💡 새로운 피지컬 머티리얼로 강제 덮어쓰기!
				if (NewPhysMaterial)
				{
					Mesh->SetPhysMaterialOverride(NewPhysMaterial);
                
					// 런타임에 물리 데이터가 즉시 갱신되도록 컴포넌트 플래그를 업데이트합니다.
					Mesh->RecreatePhysicsState();
                
					UE_LOG(LogTemp, Log, TEXT("피지컬 머티리얼 변경 완료: %s"), *NewPhysMaterial->GetName());
				}

				// 1. 💡 원래 입고 있던 모든 슬롯의 머티리얼을 백업합니다.
				OriginalMaterials.Empty();
				const int32 NumMaterials = Mesh->GetNumMaterials();
				for (int32 i = 0; i < NumMaterials; ++i)
				{
					OriginalMaterials.Add(Mesh->GetMaterial(i));
				}

				// 1. 💡 지정한 덮어씌우기용 머티리얼(OverlayMaterial)이 있다면 모든 슬롯에 적용합니다.
				if (OverlayMaterial)
				{
					for (int32 i = 0; i < NumMaterials; ++i)
					{
						Mesh->SetMaterial(i, OverlayMaterial);
					}
					UE_LOG(LogTemp, Log, TEXT("시각 머티리얼 덮어씌우기 완료: %s"), *OverlayMaterial->GetName());
				}

				Mesh->RecreatePhysicsState();
				if (bWasSimulating)
				{
					Mesh->SetSimulatePhysics(true);
				}
			}
			
			
		}
	}
	
	EndAbility(Handle, ActorInfo, ActivationInfo, false, false);
}
