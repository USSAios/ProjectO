// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS/Abillity/Active/ActiveSkillGameplayAbility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeActiveSkillGameplayAbility() {}

// ********** Begin Cross Module References ********************************************************
PROJECTO_API UClass* Z_Construct_UClass_UActiveSkillGameplayAbility();
PROJECTO_API UClass* Z_Construct_UClass_UActiveSkillGameplayAbility_NoRegister();
PROJECTO_API UClass* Z_Construct_UClass_USkillGameplayAbility();
UPackage* Z_Construct_UPackage__Script_ProjectO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActiveSkillGameplayAbility **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UActiveSkillGameplayAbility;
UClass* UActiveSkillGameplayAbility::GetPrivateStaticClass()
{
	using TClass = UActiveSkillGameplayAbility;
	if (!Z_Registration_Info_UClass_UActiveSkillGameplayAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ActiveSkillGameplayAbility"),
			Z_Registration_Info_UClass_UActiveSkillGameplayAbility.InnerSingleton,
			StaticRegisterNativesUActiveSkillGameplayAbility,
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
	return Z_Registration_Info_UClass_UActiveSkillGameplayAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UActiveSkillGameplayAbility_NoRegister()
{
	return UActiveSkillGameplayAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActiveSkillGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Abillity/Active/ActiveSkillGameplayAbility.h" },
		{ "ModuleRelativePath", "GAS/Abillity/Active/ActiveSkillGameplayAbility.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UActiveSkillGameplayAbility constinit property declarations **************
// ********** End Class UActiveSkillGameplayAbility constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActiveSkillGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UActiveSkillGameplayAbility_Statics
UObject* (*const Z_Construct_UClass_UActiveSkillGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USkillGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSkillGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActiveSkillGameplayAbility_Statics::ClassParams = {
	&UActiveSkillGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSkillGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UActiveSkillGameplayAbility_Statics::Class_MetaDataParams)
};
void UActiveSkillGameplayAbility::StaticRegisterNativesUActiveSkillGameplayAbility()
{
}
UClass* Z_Construct_UClass_UActiveSkillGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UActiveSkillGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActiveSkillGameplayAbility.OuterSingleton, Z_Construct_UClass_UActiveSkillGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActiveSkillGameplayAbility.OuterSingleton;
}
UActiveSkillGameplayAbility::UActiveSkillGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UActiveSkillGameplayAbility);
UActiveSkillGameplayAbility::~UActiveSkillGameplayAbility() {}
// ********** End Class UActiveSkillGameplayAbility ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_ActiveSkillGameplayAbility_h__Script_ProjectO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActiveSkillGameplayAbility, UActiveSkillGameplayAbility::StaticClass, TEXT("UActiveSkillGameplayAbility"), &Z_Registration_Info_UClass_UActiveSkillGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActiveSkillGameplayAbility), 4008260766U) },
	};
}; // Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_ActiveSkillGameplayAbility_h__Script_ProjectO_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_ActiveSkillGameplayAbility_h__Script_ProjectO_72945509{
	TEXT("/Script/ProjectO"),
	Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_ActiveSkillGameplayAbility_h__Script_ProjectO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_ActiveSkillGameplayAbility_h__Script_ProjectO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
