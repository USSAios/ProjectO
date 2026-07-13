// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Components/ProgressBar.h"
#include "Components/WidgetComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "GAS/AttributeSet/CharacterAttributeSet.h"
#include "ProjectOCharacter.generated.h"


class APO_Object;
class UCameraComponent;
class USpringArmComponent;
class UInputAction;
class UInputMappingContext;

/**
 *  A controllable top-down perspective character
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthChangedSignature, float, NewHealth, float, MaxHealth);

UCLASS(abstract)
class AProjectOCharacter : public ACharacter
{
	GENERATED_BODY()

private:

	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USpringArmComponent> CameraBoom;

	
protected:

	/** GAS **/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(EditDefaultsOnly, Category = "GAS|Abilities")
	TArray<TSubclassOf<UGameplayAbility>> AbilityArray;

	/** Character Attributes */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS")
	TObjectPtr<UCharacterAttributeSet> CharacterSet;

	UPROPERTY(EditDefaultsOnly, Category = "GAS|Damage")
	TSubclassOf<UGameplayEffect> DamageEffectClass;
	
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UPhysicsHandleComponent> PhysicsHandle;

	UPROPERTY()
	TObjectPtr<APO_Object> GrabbedObject;

	UPROPERTY(EditAnywhere, Category="Grab")
	float GrabDistance = 150.f;

	UPROPERTY(EditAnywhere, Category="Grab")
	float GrabHeight = 100.f;

	UPROPERTY(EditAnywhere, Category="launch")
	float ThrowForce = 1000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Stat")
	float MaxHP = 100.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Stat")
	float CurrentHP = 100.f;

protected:


public:

	/** Constructor */
	AProjectOCharacter();

	/** Initialization */
	virtual void BeginPlay() override;

	/** Update */
	virtual void Tick(float DeltaSeconds) override;

	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);

	void UpdateLookAtMouse(float DeltaSeconds);
	
	void Move(const FInputActionValue& Value);	
	void GrabStart();
	void GrabEnd();
	void GrabObject(APO_Object* Target);
	void ReleaseObject();
	void UpdateGrab(float DeltaTime);
	bool IsGrabbing() const;

	void Launch(const FInputActionValue& Value);

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const;
	
	//health
	UFUNCTION()
	void OnEnemyOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	UPROPERTY(BlueprintAssignable, Category = "GAS|UI")
	FOnHealthChangedSignature OnHealthChanged;

	// 초기 UI 세팅을 위해 위젯에 현재 값을 한 번 던져줄 때 사용할 함수
	UFUNCTION(BlueprintCallable, Category = "GAS|UI")
	void BroadcastInitialValues();

	void OnDeath();

	//skill
	UFUNCTION(BlueprintCallable)
	void Skill1();

	UFUNCTION(BlueprintCallable)
	void Skill2();

	UFUNCTION(BlueprintCallable)
	void Skill3();
	
	
	/** Returns the camera component **/
	UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent.Get(); }

	/** Returns the Camera Boom component **/
	USpringArmComponent* GetCameraBoom() const { return CameraBoom.Get(); }

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UWidgetComponent> HealthBarComponent;
public:

	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputMappingContext> DefaultMappingContext;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Input")
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Input")
	TObjectPtr<UInputAction> GrabAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Input")
	TObjectPtr<UInputAction> LaunchAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Input")
	TObjectPtr<UInputAction> Skill1Action;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Input")
	TObjectPtr<UInputAction> Skill2Action;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Input")
	TObjectPtr<UInputAction> Skill3Action;
	

};

