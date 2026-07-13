// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectOCharacter.h"

#include "EnhancedInputComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputSubsystems.h"
#include "ProjectOGameMode.h"
#include "ProjectOPlayerController.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "Object/PO_Object.h"
#include "UI/PO_HealthBarWidget.h"

class AProjectOPlayerController;



AProjectOCharacter::AProjectOCharacter()
{

	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create the camera boom component
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));

	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true);
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false;

	// Create the camera component
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));

	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false;

	PhysicsHandle = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("PhysicsHandle"));

	//GAS
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("ASC"));

	AbilitySystemComponent->SetIsReplicated(false);
	CharacterSet = CreateDefaultSubobject<UCharacterAttributeSet>(TEXT("CharacterSet"));
	
	

	//Widget Component
	HealthBarComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthBar"));

	HealthBarComponent->SetupAttachment(RootComponent);

	HealthBarComponent->SetWidgetSpace(EWidgetSpace::Screen);

	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
}

void AProjectOCharacter::BeginPlay()
{
	Super::BeginPlay();

	
	GetCapsuleComponent()->SetGenerateOverlapEvents(true);
	
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AProjectOCharacter::OnEnemyOverlap);
	
	GetCharacterMovement()->bOrientRotationToMovement = false;

	APlayerController* PC = Cast<APlayerController>(GetController());

	if (PC)
	{
		if (ULocalPlayer* LocalPlayer = PC->GetLocalPlayer())
		{
			if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
				LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
			{
				Subsystem->AddMappingContext(DefaultMappingContext, 0);

				UE_LOG(LogTemp, Warning, TEXT("Mapping Context Added"));
			}
		}
	}

	if (AbilitySystemComponent)
	{
		// OwnerActor와 AvatarActor를 자기 자신으로 설정
		AbilitySystemComponent->InitAbilityActorInfo(this, this);

		if (CharacterSet)
		{
			// 만약 캐릭터 생성자에서 CreateDefaultSubobject로 생성했다면 자동으로 등록되지만,
			// 런타임에 안전하게 접근하기 위해 기획된 초기값을 할당하는 로직을 여기에 둡니다.
			CharacterSet->SetMaxHealth(MaxHP);
			CharacterSet->SetHealth(MaxHP);

			BroadcastInitialValues();
		}
	}

}



void AProjectOCharacter::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
	
	UpdateLookAtMouse(DeltaSeconds);
	
	UpdateGrab(DeltaSeconds);

	// stub
}

void AProjectOCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction,ETriggerEvent::Triggered,this,&AProjectOCharacter::Move);
		EnhancedInputComponent->BindAction(GrabAction,ETriggerEvent::Started,this,&AProjectOCharacter::GrabStart);
		EnhancedInputComponent->BindAction(GrabAction,ETriggerEvent::Completed,this,&AProjectOCharacter::GrabEnd);
		EnhancedInputComponent->BindAction(LaunchAction,ETriggerEvent::Completed,this,&AProjectOCharacter::Launch);
		EnhancedInputComponent->BindAction(Skill1Action,ETriggerEvent::Completed,this,&AProjectOCharacter::Skill1);
		EnhancedInputComponent->BindAction(Skill2Action,ETriggerEvent::Completed,this,&AProjectOCharacter::Skill2);
		EnhancedInputComponent->BindAction(Skill3Action,ETriggerEvent::Completed,this,&AProjectOCharacter::Skill3);
	}

}

void AProjectOCharacter::UpdateLookAtMouse(float DeltaSeconds)
{
	APlayerController* PC = Cast<APlayerController>(GetController());

	if (!PC)
	{
		return;
	}

	FHitResult HitResult;

	if (PC->GetHitResultUnderCursor(ECC_Visibility, false, HitResult))
	{
		FVector MouseLocation = HitResult.Location;
		FVector CharacterLocation = GetActorLocation();

		FVector Direction = MouseLocation - CharacterLocation;
		Direction.Z = 0.f;

		FRotator TargetRotation = Direction.Rotation();

		FRotator NewRotation = FMath::RInterpTo(GetActorRotation(),TargetRotation,DeltaSeconds,5.f);

		SetActorRotation(NewRotation);
	}
}

void AProjectOCharacter::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();
	
	if (Controller == nullptr)
	{
		return;
	}

	FRotator Rotation = Controller->GetControlRotation();
	Rotation.Pitch = 0.f;
	Rotation.Roll = 0.f;

	const FVector Forward = FRotationMatrix(Rotation).GetUnitAxis(EAxis::X);

	const FVector Right = FRotationMatrix(Rotation).GetUnitAxis(EAxis::Y);

	AddMovementInput(Forward, MovementVector.Y);
	AddMovementInput(Right, MovementVector.X);
}

void AProjectOCharacter::GrabStart()
{


	AProjectOPlayerController* PC =
		Cast<AProjectOPlayerController>(GetController());


	APO_Object* HoveredObject = PC->GetHoveredObject();

	if (PC)
	{

	}

	if (!HoveredObject)
	{
		return;
	}

	GrabObject(HoveredObject);
	
}

void AProjectOCharacter::GrabEnd()
{
	ReleaseObject();
}

void AProjectOCharacter::GrabObject(APO_Object* TargetObject)
{


	if (!TargetObject)
	{
		return;
	}

	UPrimitiveComponent* Primitive = TargetObject->GetMeshComponent();

	if (!Primitive)
	{

		return;
	}

	if (!Primitive->IsSimulatingPhysics())
	{
		return;
	}
	
	PhysicsHandle->GrabComponentAtLocationWithRotation(
		Primitive,
		NAME_None,
		Primitive->GetComponentLocation(),
		Primitive->GetComponentRotation());
	
	GrabbedObject = TargetObject;
	
	TargetObject->BeginGrab();
}

void AProjectOCharacter::ReleaseObject()
{
	if (!GrabbedObject)
	{
		return;
	}

	UPrimitiveComponent* Primitive = PhysicsHandle->GetGrabbedComponent();

	PhysicsHandle->ReleaseComponent();

	if (Primitive)
	{
		Primitive->SetPhysicsLinearVelocity(FVector::ZeroVector);

		Primitive->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
	}

	GrabbedObject->EndGrab();
	
	GrabbedObject = nullptr;
}

void AProjectOCharacter::UpdateGrab(float DeltaTime)
{
	if (!PhysicsHandle)
	{
		return;
	}

	if (!PhysicsHandle->GetGrabbedComponent())
	{
		return;
	}

	FVector TargetLocation = GetActorLocation() + GetActorForwardVector() * GrabDistance;

	TargetLocation.Z += GrabHeight;

	PhysicsHandle->SetTargetLocation(TargetLocation);
}

bool AProjectOCharacter::IsGrabbing() const
{
	return GrabbedObject != nullptr;
}

void AProjectOCharacter::Launch(const FInputActionValue& Value)
{

	if (!GrabbedObject)
	{
		return;
	}

	UPrimitiveComponent* Primitive = PhysicsHandle->GetGrabbedComponent();

	if (!Primitive)
	{
		return;
	}

	PhysicsHandle->ReleaseComponent();

	
	Primitive->AddImpulse(GetActorForwardVector() * ThrowForce, NAME_None, true);
	

	GrabbedObject->EndGrab();
	GrabbedObject->BeginThrow();

	GrabbedObject = nullptr;
}

UAbilitySystemComponent* AProjectOCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}


void AProjectOCharacter::OnEnemyOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                                        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// 1. 안전성 검사: OtherActor가 유효하고 자기 자신과 충돌한 게 아닌지 확인
	if (OtherActor && OtherActor != this)
	{
		// 🔍 [디버그 로그] 충돌한 컴포넌트와 액터의 이름, 그리고 클래스명을 출력합니다.
		UE_LOG(LogTemp, Warning, TEXT("[Overlap Debug] MyComp: '%s' <-> OtherActor: '%s' (Class: '%s'), OtherComp: '%s'"), 
			OverlappedComp ? *OverlappedComp->GetName() : TEXT("None"),
			*OtherActor->GetName(), 
			*OtherActor->GetClass()->GetName(),
			OtherComp ? *OtherComp->GetName() : TEXT("None"));

		// 2. 원하는 적(Enemy) 클래스 타입이 맞는지 검사
		if (OtherActor->IsA(APO_Enemy::StaticClass()))
		{
			if (AbilitySystemComponent && DamageEffectClass)
			{
				FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
				EffectContext.AddSourceObject(OtherActor);

				FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(DamageEffectClass, 1.f, EffectContext);

				if (SpecHandle.IsValid())
				{
					AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
					UE_LOG(LogTemp, Log, TEXT("적('%s')과 정식 충돌: 데미지 GameplayEffect 적용됨"), *OtherActor->GetName());
				}
			}
		}
	}
}

void AProjectOCharacter::OnDeath()
{
	AProjectOGameMode* GM = Cast<AProjectOGameMode>(GetWorld()->GetAuthGameMode());

	GM->GameOver();
}

void AProjectOCharacter::Skill1()
{
	if (AbilitySystemComponent)
	{
		// 1. 클래스 기반으로 직접 실행하는 방법
		// 만약 DefaultAbilities[0]에 있는 스킬을 실행하고 싶다면:
		// AbilitySystemComponent->TryActivateAbilityByClass(DefaultAbilities[0]);

		// 2. [추천] 태그 기반으로 실행하는 방법
		// 어빌리티 내부 설정에 'Ability.Skill.Fireball' 같은 태그를 지정해두고 호출합니다.
		FGameplayTagContainer TargetTags;
		TargetTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability.Skill.Skill1")));
        
		AbilitySystemComponent->TryActivateAbilityByClass(AbilityArray[0]);
	}
}

void AProjectOCharacter::Skill2()
{
}

void AProjectOCharacter::Skill3()
{
}

void AProjectOCharacter::BroadcastInitialValues()
{
	if (AbilitySystemComponent)
	{
		// 어트리뷰트셋을 안전하게 가져옵니다.
		const UCharacterAttributeSet* AttributeSet = Cast<UCharacterAttributeSet>(AbilitySystemComponent->GetAttributeSet(UCharacterAttributeSet::StaticClass()));
        
		if (AttributeSet)
		{
			// 초기 값을 UI에 전송
			OnHealthChanged.Broadcast(AttributeSet->GetHealth(), AttributeSet->GetMaxHealth());
		}
	}
}
