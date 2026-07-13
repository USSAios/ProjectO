// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Enemy/PO_Enemy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePO_Enemy() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PROJECTO_API UClass* Z_Construct_UClass_APO_DeathEffect_NoRegister();
PROJECTO_API UClass* Z_Construct_UClass_APO_Enemy();
PROJECTO_API UClass* Z_Construct_UClass_APO_Enemy_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APO_Enemy ****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APO_Enemy;
UClass* APO_Enemy::GetPrivateStaticClass()
{
	using TClass = APO_Enemy;
	if (!Z_Registration_Info_UClass_APO_Enemy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PO_Enemy"),
			Z_Registration_Info_UClass_APO_Enemy.InnerSingleton,
			StaticRegisterNativesAPO_Enemy,
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
	return Z_Registration_Info_UClass_APO_Enemy.InnerSingleton;
}
UClass* Z_Construct_UClass_APO_Enemy_NoRegister()
{
	return APO_Enemy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APO_Enemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/PO_Enemy.h" },
		{ "ModuleRelativePath", "Enemy/PO_Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "PO_Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy/PO_Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageSphere_MetaData[] = {
		{ "Category", "PO_Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy/PO_Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathEffect_MetaData[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Enemy/PO_Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[] = {
		{ "Category", "PO_Enemy" },
		{ "ModuleRelativePath", "Enemy/PO_Enemy.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APO_Enemy constinit property declarations ********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageSphere;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DeathEffect;
	static void NewProp_bIsDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APO_Enemy constinit property declarations **********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APO_Enemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APO_Enemy_Statics

// ********** Begin Class APO_Enemy Property Definitions *******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APO_Enemy_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_Enemy, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APO_Enemy_Statics::NewProp_DamageSphere = { "DamageSphere", nullptr, (EPropertyFlags)0x01240800000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_Enemy, DamageSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageSphere_MetaData), NewProp_DamageSphere_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APO_Enemy_Statics::NewProp_DeathEffect = { "DeathEffect", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_Enemy, DeathEffect), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_APO_DeathEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathEffect_MetaData), NewProp_DeathEffect_MetaData) };
void Z_Construct_UClass_APO_Enemy_Statics::NewProp_bIsDead_SetBit(void* Obj)
{
	((APO_Enemy*)Obj)->bIsDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APO_Enemy_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APO_Enemy), &Z_Construct_UClass_APO_Enemy_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDead_MetaData), NewProp_bIsDead_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APO_Enemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_Enemy_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_Enemy_Statics::NewProp_DamageSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_Enemy_Statics::NewProp_DeathEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_Enemy_Statics::NewProp_bIsDead,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APO_Enemy_Statics::PropPointers) < 2048);
// ********** End Class APO_Enemy Property Definitions *********************************************
UObject* (*const Z_Construct_UClass_APO_Enemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APO_Enemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APO_Enemy_Statics::ClassParams = {
	&APO_Enemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APO_Enemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APO_Enemy_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APO_Enemy_Statics::Class_MetaDataParams), Z_Construct_UClass_APO_Enemy_Statics::Class_MetaDataParams)
};
void APO_Enemy::StaticRegisterNativesAPO_Enemy()
{
}
UClass* Z_Construct_UClass_APO_Enemy()
{
	if (!Z_Registration_Info_UClass_APO_Enemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APO_Enemy.OuterSingleton, Z_Construct_UClass_APO_Enemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APO_Enemy.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APO_Enemy);
APO_Enemy::~APO_Enemy() {}
// ********** End Class APO_Enemy ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_Enemy_h__Script_ProjectO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APO_Enemy, APO_Enemy::StaticClass, TEXT("APO_Enemy"), &Z_Registration_Info_UClass_APO_Enemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APO_Enemy), 3666780155U) },
	};
}; // Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_Enemy_h__Script_ProjectO_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_Enemy_h__Script_ProjectO_4182109593{
	TEXT("/Script/ProjectO"),
	Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_Enemy_h__Script_ProjectO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_Enemy_h__Script_ProjectO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
