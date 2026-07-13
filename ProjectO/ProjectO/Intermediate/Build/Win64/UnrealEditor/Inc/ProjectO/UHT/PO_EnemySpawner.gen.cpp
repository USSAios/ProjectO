// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Enemy/PO_EnemySpawner.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePO_EnemySpawner() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PROJECTO_API UClass* Z_Construct_UClass_APO_Enemy_NoRegister();
PROJECTO_API UClass* Z_Construct_UClass_APO_EnemySpawner();
PROJECTO_API UClass* Z_Construct_UClass_APO_EnemySpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APO_EnemySpawner Function OnPlayerEndOverlap *****************************
struct Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap_Statics
{
	struct PO_EnemySpawner_eventOnPlayerEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/PO_EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnPlayerEndOverlap constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnPlayerEndOverlap constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnPlayerEndOverlap Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PO_EnemySpawner_eventOnPlayerEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PO_EnemySpawner_eventOnPlayerEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PO_EnemySpawner_eventOnPlayerEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PO_EnemySpawner_eventOnPlayerEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap_Statics::PropPointers) < 2048);
// ********** End Function OnPlayerEndOverlap Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APO_EnemySpawner, nullptr, "OnPlayerEndOverlap", 	Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap_Statics::PO_EnemySpawner_eventOnPlayerEndOverlap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap_Statics::PO_EnemySpawner_eventOnPlayerEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APO_EnemySpawner::execOnPlayerEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class APO_EnemySpawner Function OnPlayerEndOverlap *******************************

// ********** Begin Class APO_EnemySpawner Function OnPlayerOverlap ********************************
struct Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics
{
	struct PO_EnemySpawner_eventOnPlayerOverlap_Parms
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
		{ "ModuleRelativePath", "Enemy/PO_EnemySpawner.h" },
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

// ********** Begin Function OnPlayerOverlap constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnPlayerOverlap constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnPlayerOverlap Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PO_EnemySpawner_eventOnPlayerOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PO_EnemySpawner_eventOnPlayerOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PO_EnemySpawner_eventOnPlayerOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PO_EnemySpawner_eventOnPlayerOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((PO_EnemySpawner_eventOnPlayerOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PO_EnemySpawner_eventOnPlayerOverlap_Parms), &Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PO_EnemySpawner_eventOnPlayerOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::PropPointers) < 2048);
// ********** End Function OnPlayerOverlap Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APO_EnemySpawner, nullptr, "OnPlayerOverlap", 	Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::PO_EnemySpawner_eventOnPlayerOverlap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::PO_EnemySpawner_eventOnPlayerOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APO_EnemySpawner::execOnPlayerOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class APO_EnemySpawner Function OnPlayerOverlap **********************************

// ********** Begin Class APO_EnemySpawner *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APO_EnemySpawner;
UClass* APO_EnemySpawner::GetPrivateStaticClass()
{
	using TClass = APO_EnemySpawner;
	if (!Z_Registration_Info_UClass_APO_EnemySpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PO_EnemySpawner"),
			Z_Registration_Info_UClass_APO_EnemySpawner.InnerSingleton,
			StaticRegisterNativesAPO_EnemySpawner,
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
	return Z_Registration_Info_UClass_APO_EnemySpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_APO_EnemySpawner_NoRegister()
{
	return APO_EnemySpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APO_EnemySpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy/PO_EnemySpawner.h" },
		{ "ModuleRelativePath", "Enemy/PO_EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[] = {
		{ "Category", "Enemy Spawner" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of NPC to spawn */" },
#endif
		{ "ModuleRelativePath", "Enemy/PO_EnemySpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of NPC to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnGroupDelay_MetaData[] = {
		{ "Category", "Enemy Spawner" },
		{ "ClampMax", "20" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time delay between enemy group spawns */" },
#endif
		{ "ModuleRelativePath", "Enemy/PO_EnemySpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time delay between enemy group spawns" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpawnDelay_MetaData[] = {
		{ "Category", "Enemy Spawner" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Min time delay between individual NPC spawns */" },
#endif
		{ "ModuleRelativePath", "Enemy/PO_EnemySpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min time delay between individual NPC spawns" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnDelay_MetaData[] = {
		{ "Category", "Enemy Spawner" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max time delay between individual NPC spawns */" },
#endif
		{ "ModuleRelativePath", "Enemy/PO_EnemySpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max time delay between individual NPC spawns" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRadius_MetaData[] = {
		{ "Category", "Enemy Spawner" },
		{ "ClampMax", "20" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Radius around the spawner where it can spawn NPCs */" },
#endif
		{ "ModuleRelativePath", "Enemy/PO_EnemySpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius around the spawner where it can spawn NPCs" },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnGroupSize_MetaData[] = {
		{ "Category", "Enemy Spawner" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of NPCs to spawn per group */" },
#endif
		{ "ModuleRelativePath", "Enemy/PO_EnemySpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of NPCs to spawn per group" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSpawn_MetaData[] = {
		{ "Category", "Enemy Spawner" },
		{ "ModuleRelativePath", "Enemy/PO_EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectSphere_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy/PO_EnemySpawner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APO_EnemySpawner constinit property declarations *************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnGroupDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpawnDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpawnDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnGroupSize;
	static void NewProp_bEnableSpawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectSphere;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APO_EnemySpawner constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnPlayerEndOverlap"), .Pointer = &APO_EnemySpawner::execOnPlayerEndOverlap },
		{ .NameUTF8 = UTF8TEXT("OnPlayerOverlap"), .Pointer = &APO_EnemySpawner::execOnPlayerOverlap },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APO_EnemySpawner_OnPlayerEndOverlap, "OnPlayerEndOverlap" }, // 2846217156
		{ &Z_Construct_UFunction_APO_EnemySpawner_OnPlayerOverlap, "OnPlayerOverlap" }, // 215834875
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APO_EnemySpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APO_EnemySpawner_Statics

// ********** Begin Class APO_EnemySpawner Property Definitions ************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APO_EnemySpawner_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_EnemySpawner, EnemyClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_APO_Enemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyClass_MetaData), NewProp_EnemyClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APO_EnemySpawner_Statics::NewProp_SpawnGroupDelay = { "SpawnGroupDelay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_EnemySpawner, SpawnGroupDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnGroupDelay_MetaData), NewProp_SpawnGroupDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APO_EnemySpawner_Statics::NewProp_MinSpawnDelay = { "MinSpawnDelay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_EnemySpawner, MinSpawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpawnDelay_MetaData), NewProp_MinSpawnDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APO_EnemySpawner_Statics::NewProp_MaxSpawnDelay = { "MaxSpawnDelay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_EnemySpawner, MaxSpawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpawnDelay_MetaData), NewProp_MaxSpawnDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APO_EnemySpawner_Statics::NewProp_SpawnRadius = { "SpawnRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_EnemySpawner, SpawnRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRadius_MetaData), NewProp_SpawnRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APO_EnemySpawner_Statics::NewProp_SpawnGroupSize = { "SpawnGroupSize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_EnemySpawner, SpawnGroupSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnGroupSize_MetaData), NewProp_SpawnGroupSize_MetaData) };
void Z_Construct_UClass_APO_EnemySpawner_Statics::NewProp_bEnableSpawn_SetBit(void* Obj)
{
	((APO_EnemySpawner*)Obj)->bEnableSpawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APO_EnemySpawner_Statics::NewProp_bEnableSpawn = { "bEnableSpawn", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APO_EnemySpawner), &Z_Construct_UClass_APO_EnemySpawner_Statics::NewProp_bEnableSpawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSpawn_MetaData), NewProp_bEnableSpawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APO_EnemySpawner_Statics::NewProp_DetectSphere = { "DetectSphere", nullptr, (EPropertyFlags)0x01240800000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_EnemySpawner, DetectSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectSphere_MetaData), NewProp_DetectSphere_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APO_EnemySpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_EnemySpawner_Statics::NewProp_EnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_EnemySpawner_Statics::NewProp_SpawnGroupDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_EnemySpawner_Statics::NewProp_MinSpawnDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_EnemySpawner_Statics::NewProp_MaxSpawnDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_EnemySpawner_Statics::NewProp_SpawnRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_EnemySpawner_Statics::NewProp_SpawnGroupSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_EnemySpawner_Statics::NewProp_bEnableSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_EnemySpawner_Statics::NewProp_DetectSphere,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APO_EnemySpawner_Statics::PropPointers) < 2048);
// ********** End Class APO_EnemySpawner Property Definitions **************************************
UObject* (*const Z_Construct_UClass_APO_EnemySpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APO_EnemySpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APO_EnemySpawner_Statics::ClassParams = {
	&APO_EnemySpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APO_EnemySpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APO_EnemySpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APO_EnemySpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_APO_EnemySpawner_Statics::Class_MetaDataParams)
};
void APO_EnemySpawner::StaticRegisterNativesAPO_EnemySpawner()
{
	UClass* Class = APO_EnemySpawner::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_APO_EnemySpawner_Statics::Funcs));
}
UClass* Z_Construct_UClass_APO_EnemySpawner()
{
	if (!Z_Registration_Info_UClass_APO_EnemySpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APO_EnemySpawner.OuterSingleton, Z_Construct_UClass_APO_EnemySpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APO_EnemySpawner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APO_EnemySpawner);
APO_EnemySpawner::~APO_EnemySpawner() {}
// ********** End Class APO_EnemySpawner ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_EnemySpawner_h__Script_ProjectO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APO_EnemySpawner, APO_EnemySpawner::StaticClass, TEXT("APO_EnemySpawner"), &Z_Registration_Info_UClass_APO_EnemySpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APO_EnemySpawner), 3742597082U) },
	};
}; // Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_EnemySpawner_h__Script_ProjectO_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_EnemySpawner_h__Script_ProjectO_1775797469{
	TEXT("/Script/ProjectO"),
	Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_EnemySpawner_h__Script_ProjectO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_EnemySpawner_h__Script_ProjectO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
