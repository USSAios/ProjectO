// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectOCharacter.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProjectOCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
PROJECTO_API UClass* Z_Construct_UClass_APO_Object_NoRegister();
PROJECTO_API UClass* Z_Construct_UClass_AProjectOCharacter();
PROJECTO_API UClass* Z_Construct_UClass_AProjectOCharacter_NoRegister();
PROJECTO_API UClass* Z_Construct_UClass_UCharacterAttributeSet_NoRegister();
PROJECTO_API UFunction* Z_Construct_UDelegateFunction_ProjectO_OnHealthChangedSignature__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectO();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnHealthChangedSignature *********************************************
struct Z_Construct_UDelegateFunction_ProjectO_OnHealthChangedSignature__DelegateSignature_Statics
{
	struct _Script_ProjectO_eventOnHealthChangedSignature_Parms
	{
		float NewHealth;
		float MaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A controllable top-down perspective character\n */" },
#endif
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A controllable top-down perspective character" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnHealthChangedSignature constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnHealthChangedSignature constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnHealthChangedSignature Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectO_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectO_eventOnHealthChangedSignature_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectO_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectO_eventOnHealthChangedSignature_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectO_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectO_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_NewHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectO_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectO_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnHealthChangedSignature Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectO_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectO, nullptr, "OnHealthChangedSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_ProjectO_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectO_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ProjectO_OnHealthChangedSignature__DelegateSignature_Statics::_Script_ProjectO_eventOnHealthChangedSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectO_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectO_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectO_OnHealthChangedSignature__DelegateSignature_Statics::_Script_ProjectO_eventOnHealthChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectO_OnHealthChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectO_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, float NewHealth, float MaxHealth)
{
	struct _Script_ProjectO_eventOnHealthChangedSignature_Parms
	{
		float NewHealth;
		float MaxHealth;
	};
	_Script_ProjectO_eventOnHealthChangedSignature_Parms Parms;
	Parms.NewHealth=NewHealth;
	Parms.MaxHealth=MaxHealth;
	OnHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHealthChangedSignature ***********************************************

// ********** Begin Class AProjectOCharacter Function BroadcastInitialValues ***********************
struct Z_Construct_UFunction_AProjectOCharacter_BroadcastInitialValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb4\x88\xea\xb8\xb0 UI \xec\x84\xb8\xed\x8c\x85\xec\x9d\x84 \xec\x9c\x84\xed\x95\xb4 \xec\x9c\x84\xec\xa0\xaf\xec\x97\x90 \xed\x98\x84\xec\x9e\xac \xea\xb0\x92\xec\x9d\x84 \xed\x95\x9c \xeb\xb2\x88 \xeb\x8d\x98\xec\xa0\xb8\xec\xa4\x84 \xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa0 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb4\x88\xea\xb8\xb0 UI \xec\x84\xb8\xed\x8c\x85\xec\x9d\x84 \xec\x9c\x84\xed\x95\xb4 \xec\x9c\x84\xec\xa0\xaf\xec\x97\x90 \xed\x98\x84\xec\x9e\xac \xea\xb0\x92\xec\x9d\x84 \xed\x95\x9c \xeb\xb2\x88 \xeb\x8d\x98\xec\xa0\xb8\xec\xa4\x84 \xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa0 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BroadcastInitialValues constinit property declarations ****************
// ********** End Function BroadcastInitialValues constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectOCharacter_BroadcastInitialValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectOCharacter, nullptr, "BroadcastInitialValues", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectOCharacter_BroadcastInitialValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectOCharacter_BroadcastInitialValues_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProjectOCharacter_BroadcastInitialValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectOCharacter_BroadcastInitialValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectOCharacter::execBroadcastInitialValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BroadcastInitialValues();
	P_NATIVE_END;
}
// ********** End Class AProjectOCharacter Function BroadcastInitialValues *************************

// ********** Begin Class AProjectOCharacter Function GetObject ************************************
struct Z_Construct_UFunction_AProjectOCharacter_GetObject_Statics
{
	struct ProjectOCharacter_eventGetObject_Parms
	{
		APO_Object* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetObject constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetObject constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetObject Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectOCharacter_GetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectOCharacter_eventGetObject_Parms, ReturnValue), Z_Construct_UClass_APO_Object_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectOCharacter_GetObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectOCharacter_GetObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectOCharacter_GetObject_Statics::PropPointers) < 2048);
// ********** End Function GetObject Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectOCharacter_GetObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectOCharacter, nullptr, "GetObject", 	Z_Construct_UFunction_AProjectOCharacter_GetObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectOCharacter_GetObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AProjectOCharacter_GetObject_Statics::ProjectOCharacter_eventGetObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectOCharacter_GetObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectOCharacter_GetObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProjectOCharacter_GetObject_Statics::ProjectOCharacter_eventGetObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectOCharacter_GetObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectOCharacter_GetObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectOCharacter::execGetObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APO_Object**)Z_Param__Result=P_THIS->GetObject();
	P_NATIVE_END;
}
// ********** End Class AProjectOCharacter Function GetObject **************************************

// ********** Begin Class AProjectOCharacter Function OnEnemyOverlap *******************************
struct Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics
{
	struct ProjectOCharacter_eventOnEnemyOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//health\n" },
#endif
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnEnemyOverlap constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnEnemyOverlap constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnEnemyOverlap Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectOCharacter_eventOnEnemyOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectOCharacter_eventOnEnemyOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectOCharacter_eventOnEnemyOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectOCharacter_eventOnEnemyOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((ProjectOCharacter_eventOnEnemyOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectOCharacter_eventOnEnemyOverlap_Parms), &Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectOCharacter_eventOnEnemyOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::PropPointers) < 2048);
// ********** End Function OnEnemyOverlap Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectOCharacter, nullptr, "OnEnemyOverlap", 	Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::ProjectOCharacter_eventOnEnemyOverlap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::ProjectOCharacter_eventOnEnemyOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectOCharacter::execOnEnemyOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnemyOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AProjectOCharacter Function OnEnemyOverlap *********************************

// ********** Begin Class AProjectOCharacter Function Skill1 ***************************************
struct Z_Construct_UFunction_AProjectOCharacter_Skill1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//skill\n" },
#endif
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "skill" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Skill1 constinit property declarations ********************************
// ********** End Function Skill1 constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectOCharacter_Skill1_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectOCharacter, nullptr, "Skill1", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectOCharacter_Skill1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectOCharacter_Skill1_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProjectOCharacter_Skill1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectOCharacter_Skill1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectOCharacter::execSkill1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Skill1();
	P_NATIVE_END;
}
// ********** End Class AProjectOCharacter Function Skill1 *****************************************

// ********** Begin Class AProjectOCharacter Function Skill2 ***************************************
struct Z_Construct_UFunction_AProjectOCharacter_Skill2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Skill2 constinit property declarations ********************************
// ********** End Function Skill2 constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectOCharacter_Skill2_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectOCharacter, nullptr, "Skill2", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectOCharacter_Skill2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectOCharacter_Skill2_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProjectOCharacter_Skill2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectOCharacter_Skill2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectOCharacter::execSkill2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Skill2();
	P_NATIVE_END;
}
// ********** End Class AProjectOCharacter Function Skill2 *****************************************

// ********** Begin Class AProjectOCharacter Function Skill3 ***************************************
struct Z_Construct_UFunction_AProjectOCharacter_Skill3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Skill3 constinit property declarations ********************************
// ********** End Function Skill3 constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectOCharacter_Skill3_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectOCharacter, nullptr, "Skill3", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectOCharacter_Skill3_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectOCharacter_Skill3_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProjectOCharacter_Skill3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectOCharacter_Skill3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectOCharacter::execSkill3)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Skill3();
	P_NATIVE_END;
}
// ********** End Class AProjectOCharacter Function Skill3 *****************************************

// ********** Begin Class AProjectOCharacter *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AProjectOCharacter;
UClass* AProjectOCharacter::GetPrivateStaticClass()
{
	using TClass = AProjectOCharacter;
	if (!Z_Registration_Info_UClass_AProjectOCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ProjectOCharacter"),
			Z_Registration_Info_UClass_AProjectOCharacter.InnerSingleton,
			StaticRegisterNativesAProjectOCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AProjectOCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AProjectOCharacter_NoRegister()
{
	return AProjectOCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProjectOCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ProjectOCharacter.h" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "GAS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** GAS **/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GAS *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityArray_MetaData[] = {
		{ "Category", "GAS|Abilities" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterSet_MetaData[] = {
		{ "Category", "GAS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Character Attributes */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "GAS|Damage" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsHandle_MetaData[] = {
		{ "Category", "ProjectOCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabbedObject_MetaData[] = {
		{ "Category", "ProjectOCharacter" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabDistance_MetaData[] = {
		{ "Category", "Grab" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabHeight_MetaData[] = {
		{ "Category", "Grab" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowForce_MetaData[] = {
		{ "Category", "launch" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHP_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "GAS|UI" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarComponent_MetaData[] = {
		{ "Category", "ProjectOCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skill1Action_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skill2Action_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skill3Action_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ProjectOCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AProjectOCharacter constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterSet;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabbedObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHP;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaunchAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skill1Action;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skill2Action;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skill3Action;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AProjectOCharacter constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BroadcastInitialValues"), .Pointer = &AProjectOCharacter::execBroadcastInitialValues },
		{ .NameUTF8 = UTF8TEXT("GetObject"), .Pointer = &AProjectOCharacter::execGetObject },
		{ .NameUTF8 = UTF8TEXT("OnEnemyOverlap"), .Pointer = &AProjectOCharacter::execOnEnemyOverlap },
		{ .NameUTF8 = UTF8TEXT("Skill1"), .Pointer = &AProjectOCharacter::execSkill1 },
		{ .NameUTF8 = UTF8TEXT("Skill2"), .Pointer = &AProjectOCharacter::execSkill2 },
		{ .NameUTF8 = UTF8TEXT("Skill3"), .Pointer = &AProjectOCharacter::execSkill3 },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectOCharacter_BroadcastInitialValues, "BroadcastInitialValues" }, // 3207575430
		{ &Z_Construct_UFunction_AProjectOCharacter_GetObject, "GetObject" }, // 655130044
		{ &Z_Construct_UFunction_AProjectOCharacter_OnEnemyOverlap, "OnEnemyOverlap" }, // 987722270
		{ &Z_Construct_UFunction_AProjectOCharacter_Skill1, "Skill1" }, // 508841763
		{ &Z_Construct_UFunction_AProjectOCharacter_Skill2, "Skill2" }, // 913479268
		{ &Z_Construct_UFunction_AProjectOCharacter_Skill3, "Skill3" }, // 3815036306
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectOCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AProjectOCharacter_Statics

// ********** Begin Class AProjectOCharacter Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_AbilityArray_Inner = { "AbilityArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_AbilityArray = { "AbilityArray", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, AbilityArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityArray_MetaData), NewProp_AbilityArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_CharacterSet = { "CharacterSet", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, CharacterSet), Z_Construct_UClass_UCharacterAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterSet_MetaData), NewProp_CharacterSet_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, DamageEffectClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectClass_MetaData), NewProp_DamageEffectClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_PhysicsHandle = { "PhysicsHandle", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, PhysicsHandle), Z_Construct_UClass_UPhysicsHandleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsHandle_MetaData), NewProp_PhysicsHandle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_GrabbedObject = { "GrabbedObject", nullptr, (EPropertyFlags)0x0124080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, GrabbedObject), Z_Construct_UClass_APO_Object_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabbedObject_MetaData), NewProp_GrabbedObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_GrabDistance = { "GrabDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, GrabDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabDistance_MetaData), NewProp_GrabDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_GrabHeight = { "GrabHeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, GrabHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabHeight_MetaData), NewProp_GrabHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_ThrowForce = { "ThrowForce", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, ThrowForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowForce_MetaData), NewProp_ThrowForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, MaxHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHP_MetaData), NewProp_MaxHP_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_CurrentHP = { "CurrentHP", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, CurrentHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHP_MetaData), NewProp_CurrentHP_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, OnHealthChanged), Z_Construct_UDelegateFunction_ProjectO_OnHealthChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 4265174983
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_HealthBarComponent = { "HealthBarComponent", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, HealthBarComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarComponent_MetaData), NewProp_HealthBarComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_GrabAction = { "GrabAction", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, GrabAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabAction_MetaData), NewProp_GrabAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_LaunchAction = { "LaunchAction", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, LaunchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchAction_MetaData), NewProp_LaunchAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_Skill1Action = { "Skill1Action", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, Skill1Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skill1Action_MetaData), NewProp_Skill1Action_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_Skill2Action = { "Skill2Action", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, Skill2Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skill2Action_MetaData), NewProp_Skill2Action_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_Skill3Action = { "Skill3Action", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOCharacter, Skill3Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skill3Action_MetaData), NewProp_Skill3Action_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectOCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_TopDownCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_AbilityArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_AbilityArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_CharacterSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_DamageEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_PhysicsHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_GrabbedObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_GrabDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_GrabHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_ThrowForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_MaxHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_CurrentHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_HealthBarComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_GrabAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_LaunchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_Skill1Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_Skill2Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOCharacter_Statics::NewProp_Skill3Action,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectOCharacter_Statics::PropPointers) < 2048);
// ********** End Class AProjectOCharacter Property Definitions ************************************
UObject* (*const Z_Construct_UClass_AProjectOCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectOCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectOCharacter_Statics::ClassParams = {
	&AProjectOCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProjectOCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectOCharacter_Statics::PropPointers),
	0,
	0x008000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectOCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectOCharacter_Statics::Class_MetaDataParams)
};
void AProjectOCharacter::StaticRegisterNativesAProjectOCharacter()
{
	UClass* Class = AProjectOCharacter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AProjectOCharacter_Statics::Funcs));
}
UClass* Z_Construct_UClass_AProjectOCharacter()
{
	if (!Z_Registration_Info_UClass_AProjectOCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectOCharacter.OuterSingleton, Z_Construct_UClass_AProjectOCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectOCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AProjectOCharacter);
AProjectOCharacter::~AProjectOCharacter() {}
// ********** End Class AProjectOCharacter *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOCharacter_h__Script_ProjectO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectOCharacter, AProjectOCharacter::StaticClass, TEXT("AProjectOCharacter"), &Z_Registration_Info_UClass_AProjectOCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectOCharacter), 181691719U) },
	};
}; // Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOCharacter_h__Script_ProjectO_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOCharacter_h__Script_ProjectO_4045166429{
	TEXT("/Script/ProjectO"),
	Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOCharacter_h__Script_ProjectO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOCharacter_h__Script_ProjectO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
