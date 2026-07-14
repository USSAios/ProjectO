// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS/Abillity/Active/Strength_Ability.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeStrength_Ability() {}

// ********** Begin Cross Module References ********************************************************
PROJECTO_API UClass* Z_Construct_UClass_UActiveSkillGameplayAbility();
PROJECTO_API UClass* Z_Construct_UClass_UStrength_Ability();
PROJECTO_API UClass* Z_Construct_UClass_UStrength_Ability_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStrength_Ability ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UStrength_Ability;
UClass* UStrength_Ability::GetPrivateStaticClass()
{
	using TClass = UStrength_Ability;
	if (!Z_Registration_Info_UClass_UStrength_Ability.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Strength_Ability"),
			Z_Registration_Info_UClass_UStrength_Ability.InnerSingleton,
			StaticRegisterNativesUStrength_Ability,
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
	return Z_Registration_Info_UClass_UStrength_Ability.InnerSingleton;
}
UClass* Z_Construct_UClass_UStrength_Ability_NoRegister()
{
	return UStrength_Ability::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStrength_Ability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Abillity/Active/Strength_Ability.h" },
		{ "ModuleRelativePath", "GAS/Abillity/Active/Strength_Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UStrength_Ability constinit property declarations ************************
// ********** End Class UStrength_Ability constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStrength_Ability>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UStrength_Ability_Statics
UObject* (*const Z_Construct_UClass_UStrength_Ability_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActiveSkillGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStrength_Ability_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStrength_Ability_Statics::ClassParams = {
	&UStrength_Ability::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStrength_Ability_Statics::Class_MetaDataParams), Z_Construct_UClass_UStrength_Ability_Statics::Class_MetaDataParams)
};
void UStrength_Ability::StaticRegisterNativesUStrength_Ability()
{
}
UClass* Z_Construct_UClass_UStrength_Ability()
{
	if (!Z_Registration_Info_UClass_UStrength_Ability.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStrength_Ability.OuterSingleton, Z_Construct_UClass_UStrength_Ability_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStrength_Ability.OuterSingleton;
}
UStrength_Ability::UStrength_Ability() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UStrength_Ability);
UStrength_Ability::~UStrength_Ability() {}
// ********** End Class UStrength_Ability **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_Strength_Ability_h__Script_ProjectO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStrength_Ability, UStrength_Ability::StaticClass, TEXT("UStrength_Ability"), &Z_Registration_Info_UClass_UStrength_Ability, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStrength_Ability), 1189428526U) },
	};
}; // Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_Strength_Ability_h__Script_ProjectO_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_Strength_Ability_h__Script_ProjectO_3257702539{
	TEXT("/Script/ProjectO"),
	Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_Strength_Ability_h__Script_ProjectO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_Strength_Ability_h__Script_ProjectO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
