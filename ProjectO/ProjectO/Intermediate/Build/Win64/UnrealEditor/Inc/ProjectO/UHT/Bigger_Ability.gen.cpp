// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS/Abillity/Active/Bigger_Ability.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBigger_Ability() {}

// ********** Begin Cross Module References ********************************************************
PROJECTO_API UClass* Z_Construct_UClass_UActiveSkillGameplayAbility();
PROJECTO_API UClass* Z_Construct_UClass_UBigger_Ability();
PROJECTO_API UClass* Z_Construct_UClass_UBigger_Ability_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBigger_Ability **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBigger_Ability;
UClass* UBigger_Ability::GetPrivateStaticClass()
{
	using TClass = UBigger_Ability;
	if (!Z_Registration_Info_UClass_UBigger_Ability.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Bigger_Ability"),
			Z_Registration_Info_UClass_UBigger_Ability.InnerSingleton,
			StaticRegisterNativesUBigger_Ability,
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
	return Z_Registration_Info_UClass_UBigger_Ability.InnerSingleton;
}
UClass* Z_Construct_UClass_UBigger_Ability_NoRegister()
{
	return UBigger_Ability::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBigger_Ability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Abillity/Active/Bigger_Ability.h" },
		{ "ModuleRelativePath", "GAS/Abillity/Active/Bigger_Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeMultiplier_MetaData[] = {
		{ "Category", "Skill|Settings" },
		{ "ModuleRelativePath", "GAS/Abillity/Active/Bigger_Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoolDown_MetaData[] = {
		{ "Category", "Skill|Settings" },
		{ "ModuleRelativePath", "GAS/Abillity/Active/Bigger_Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBigger_Ability constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CoolDown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBigger_Ability constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBigger_Ability>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBigger_Ability_Statics

// ********** Begin Class UBigger_Ability Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBigger_Ability_Statics::NewProp_SizeMultiplier = { "SizeMultiplier", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBigger_Ability, SizeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeMultiplier_MetaData), NewProp_SizeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBigger_Ability_Statics::NewProp_CoolDown = { "CoolDown", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBigger_Ability, CoolDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoolDown_MetaData), NewProp_CoolDown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBigger_Ability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBigger_Ability_Statics::NewProp_SizeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBigger_Ability_Statics::NewProp_CoolDown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBigger_Ability_Statics::PropPointers) < 2048);
// ********** End Class UBigger_Ability Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UBigger_Ability_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActiveSkillGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBigger_Ability_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBigger_Ability_Statics::ClassParams = {
	&UBigger_Ability::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBigger_Ability_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBigger_Ability_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBigger_Ability_Statics::Class_MetaDataParams), Z_Construct_UClass_UBigger_Ability_Statics::Class_MetaDataParams)
};
void UBigger_Ability::StaticRegisterNativesUBigger_Ability()
{
}
UClass* Z_Construct_UClass_UBigger_Ability()
{
	if (!Z_Registration_Info_UClass_UBigger_Ability.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBigger_Ability.OuterSingleton, Z_Construct_UClass_UBigger_Ability_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBigger_Ability.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBigger_Ability);
UBigger_Ability::~UBigger_Ability() {}
// ********** End Class UBigger_Ability ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_Bigger_Ability_h__Script_ProjectO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBigger_Ability, UBigger_Ability::StaticClass, TEXT("UBigger_Ability"), &Z_Registration_Info_UClass_UBigger_Ability, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBigger_Ability), 4025731226U) },
	};
}; // Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_Bigger_Ability_h__Script_ProjectO_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_Bigger_Ability_h__Script_ProjectO_3199779663{
	TEXT("/Script/ProjectO"),
	Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_Bigger_Ability_h__Script_ProjectO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_Bigger_Ability_h__Script_ProjectO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
