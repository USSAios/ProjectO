// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS/Abillity/Active/ActiveSkillGameplayAbility.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeActiveSkillGameplayAbility() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
PROJECTO_API UClass* Z_Construct_UClass_UActiveSkillDataAsset_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillDataAsset_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x97\x90\xec\x84\x9c \xeb\xb0\xa9\xea\xb8\x88 \xeb\xa7\x8c\xeb\x93\xa0 \xec\xa0\x84\xec\x9a\xa9 DA_SkillDatabase\xeb\xa5\xbc \xeb\x94\xb1 \xed\x95\x9c \xeb\xb2\x88\xeb\xa7\x8c \xec\x97\x90\xec\x85\x8b\xec\x9c\xbc\xeb\xa1\x9c \xea\xbd\x82\xec\x95\x84\xec\xa4\x8d\xeb\x8b\x88\xeb\x8b\xa4.\n" },
#endif
		{ "ModuleRelativePath", "GAS/Abillity/Active/ActiveSkillGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x97\x90\xec\x84\x9c \xeb\xb0\xa9\xea\xb8\x88 \xeb\xa7\x8c\xeb\x93\xa0 \xec\xa0\x84\xec\x9a\xa9 DA_SkillDatabase\xeb\xa5\xbc \xeb\x94\xb1 \xed\x95\x9c \xeb\xb2\x88\xeb\xa7\x8c \xec\x97\x90\xec\x85\x8b\xec\x9c\xbc\xeb\xa1\x9c \xea\xbd\x82\xec\x95\x84\xec\xa4\x8d\xeb\x8b\x88\xeb\x8b\xa4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillTag_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9d\xb4 \xec\x96\xb4\xeb\xb9\x8c\xeb\xa6\xac\xed\x8b\xb0 \xea\xb3\xa0\xec\x9c\xa0\xec\x9d\x98 \xec\x8a\xa4\xed\x82\xac ID \xed\x83\x9c\xea\xb7\xb8 (\xec\x98\x88: Skill.Active.Bigger)\n" },
#endif
		{ "ModuleRelativePath", "GAS/Abillity/Active/ActiveSkillGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4 \xec\x96\xb4\xeb\xb9\x8c\xeb\xa6\xac\xed\x8b\xb0 \xea\xb3\xa0\xec\x9c\xa0\xec\x9d\x98 \xec\x8a\xa4\xed\x82\xac ID \xed\x83\x9c\xea\xb7\xb8 (\xec\x98\x88: Skill.Active.Bigger)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTags_MetaData[] = {
		{ "Category", "Cooldown" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x92\xa1 \xec\x9d\xb4 \xec\x8a\xa4\xed\x82\xac\xec\x9d\x98 \xec\xbf\xa8\xed\x83\x80\xec\x9e\x84 \xec\x83\x81\xed\x83\x9c\xeb\xa5\xbc \xeb\x82\x98\xed\x83\x80\xeb\x82\xbc \xed\x83\x9c\xea\xb7\xb8 (\xec\x98\x88: State.Cooldown.Skill1)\n// \xec\x97\x90\xeb\x94\x94\xed\x84\xb0 \xed\x8c\xa8\xeb\x84\x90\xec\x97\x90\xec\x84\x9c \xec\xbf\xa8\xed\x83\x80\xec\x9e\x84 GE\xeb\xa5\xbc \xec\xa7\x81\xec\xa0\x91 \xeb\xa7\x8c\xeb\x93\xa4\xec\xa7\x80 \xec\x95\x8a\xea\xb3\xa0 \xea\xb8\xb0\xeb\xb3\xb8 \xed\x83\x9c\xea\xb7\xb8 \xea\xb2\x80\xec\x82\xac\xec\x9a\xa9\xec\x9c\xbc\xeb\xa1\x9c\xeb\x8f\x84 \xed\x99\x95\xec\x9e\xa5\xed\x95\x98\xea\xb8\xb0 \xed\x8e\xb8\xeb\xa6\xac\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n" },
#endif
		{ "ModuleRelativePath", "GAS/Abillity/Active/ActiveSkillGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x92\xa1 \xec\x9d\xb4 \xec\x8a\xa4\xed\x82\xac\xec\x9d\x98 \xec\xbf\xa8\xed\x83\x80\xec\x9e\x84 \xec\x83\x81\xed\x83\x9c\xeb\xa5\xbc \xeb\x82\x98\xed\x83\x80\xeb\x82\xbc \xed\x83\x9c\xea\xb7\xb8 (\xec\x98\x88: State.Cooldown.Skill1)\n\xec\x97\x90\xeb\x94\x94\xed\x84\xb0 \xed\x8c\xa8\xeb\x84\x90\xec\x97\x90\xec\x84\x9c \xec\xbf\xa8\xed\x83\x80\xec\x9e\x84 GE\xeb\xa5\xbc \xec\xa7\x81\xec\xa0\x91 \xeb\xa7\x8c\xeb\x93\xa4\xec\xa7\x80 \xec\x95\x8a\xea\xb3\xa0 \xea\xb8\xb0\xeb\xb3\xb8 \xed\x83\x9c\xea\xb7\xb8 \xea\xb2\x80\xec\x82\xac\xec\x9a\xa9\xec\x9c\xbc\xeb\xa1\x9c\xeb\x8f\x84 \xed\x99\x95\xec\x9e\xa5\xed\x95\x98\xea\xb8\xb0 \xed\x8e\xb8\xeb\xa6\xac\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UActiveSkillGameplayAbility constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillDataAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkillTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UActiveSkillGameplayAbility constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActiveSkillGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UActiveSkillGameplayAbility_Statics

// ********** Begin Class UActiveSkillGameplayAbility Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActiveSkillGameplayAbility_Statics::NewProp_SkillDataAsset = { "SkillDataAsset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActiveSkillGameplayAbility, SkillDataAsset), Z_Construct_UClass_UActiveSkillDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillDataAsset_MetaData), NewProp_SkillDataAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActiveSkillGameplayAbility_Statics::NewProp_SkillTag = { "SkillTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActiveSkillGameplayAbility, SkillTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillTag_MetaData), NewProp_SkillTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActiveSkillGameplayAbility_Statics::NewProp_CooldownTags = { "CooldownTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActiveSkillGameplayAbility, CooldownTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownTags_MetaData), NewProp_CooldownTags_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActiveSkillGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveSkillGameplayAbility_Statics::NewProp_SkillDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveSkillGameplayAbility_Statics::NewProp_SkillTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveSkillGameplayAbility_Statics::NewProp_CooldownTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSkillGameplayAbility_Statics::PropPointers) < 2048);
// ********** End Class UActiveSkillGameplayAbility Property Definitions ***************************
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
	Z_Construct_UClass_UActiveSkillGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSkillGameplayAbility_Statics::PropPointers),
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
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UActiveSkillGameplayAbility);
UActiveSkillGameplayAbility::~UActiveSkillGameplayAbility() {}
// ********** End Class UActiveSkillGameplayAbility ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_ActiveSkillGameplayAbility_h__Script_ProjectO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActiveSkillGameplayAbility, UActiveSkillGameplayAbility::StaticClass, TEXT("UActiveSkillGameplayAbility"), &Z_Registration_Info_UClass_UActiveSkillGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActiveSkillGameplayAbility), 3449644488U) },
	};
}; // Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_ActiveSkillGameplayAbility_h__Script_ProjectO_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_ActiveSkillGameplayAbility_h__Script_ProjectO_3553876941{
	TEXT("/Script/ProjectO"),
	Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_ActiveSkillGameplayAbility_h__Script_ProjectO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_ActiveSkillGameplayAbility_h__Script_ProjectO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
