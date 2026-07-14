// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS/Abillity/Active/Bouncy_Ability.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBouncy_Ability() {}

// ********** Begin Cross Module References ********************************************************
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
PROJECTO_API UClass* Z_Construct_UClass_UActiveSkillGameplayAbility();
PROJECTO_API UClass* Z_Construct_UClass_UBouncy_Ability();
PROJECTO_API UClass* Z_Construct_UClass_UBouncy_Ability_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBouncy_Ability **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBouncy_Ability;
UClass* UBouncy_Ability::GetPrivateStaticClass()
{
	using TClass = UBouncy_Ability;
	if (!Z_Registration_Info_UClass_UBouncy_Ability.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Bouncy_Ability"),
			Z_Registration_Info_UClass_UBouncy_Ability.InnerSingleton,
			StaticRegisterNativesUBouncy_Ability,
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
	return Z_Registration_Info_UClass_UBouncy_Ability.InnerSingleton;
}
UClass* Z_Construct_UClass_UBouncy_Ability_NoRegister()
{
	return UBouncy_Ability::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBouncy_Ability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Abillity/Active/Bouncy_Ability.h" },
		{ "ModuleRelativePath", "GAS/Abillity/Active/Bouncy_Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPhysMaterial_MetaData[] = {
		{ "Category", "Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x92\xa1 \xec\x97\x90\xeb\x94\x94\xed\x84\xb0 \xeb\x94\x94\xed\x85\x8c\xec\x9d\xbc \xed\x8c\xa8\xeb\x84\x90\xec\x97\x90\xec\x84\x9c \xec\x9d\xb4 \xec\x96\xb4\xeb\xb9\x8c\xeb\xa6\xac\xed\x8b\xb0\xea\xb0\x80 \xec\xbc\x9c\xec\xa1\x8c\xec\x9d\x84 \xeb\x95\x8c \xec\xa0\x81\xec\x9a\xa9\xed\x95\xa0 \xec\x83\x88\xeb\xa1\x9c\xec\x9a\xb4 \xed\x94\xbc\xec\xa7\x80\xec\xbb\xac \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc \xec\xa7\x80\xec\xa0\x95\n" },
#endif
		{ "ModuleRelativePath", "GAS/Abillity/Active/Bouncy_Ability.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x92\xa1 \xec\x97\x90\xeb\x94\x94\xed\x84\xb0 \xeb\x94\x94\xed\x85\x8c\xec\x9d\xbc \xed\x8c\xa8\xeb\x84\x90\xec\x97\x90\xec\x84\x9c \xec\x9d\xb4 \xec\x96\xb4\xeb\xb9\x8c\xeb\xa6\xac\xed\x8b\xb0\xea\xb0\x80 \xec\xbc\x9c\xec\xa1\x8c\xec\x9d\x84 \xeb\x95\x8c \xec\xa0\x81\xec\x9a\xa9\xed\x95\xa0 \xec\x83\x88\xeb\xa1\x9c\xec\x9a\xb4 \xed\x94\xbc\xec\xa7\x80\xec\xbb\xac \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc \xec\xa7\x80\xec\xa0\x95" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalPhysMaterial_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xa4\xed\x82\xac \xec\xa2\x85\xeb\xa3\x8c \xec\x8b\x9c \xec\x9b\x90\xeb\x9e\x98\xeb\x8c\x80\xeb\xa1\x9c \xeb\x90\x98\xeb\x8f\x8c\xeb\xa6\xac\xea\xb8\xb0 \xec\x9c\x84\xed\x95\xb4 \xea\xb8\xb0\xec\xa1\xb4 \xed\x94\xbc\xec\xa7\x80\xec\xbb\xac \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc\xec\x9d\x84 \xeb\xb3\xb4\xea\xb4\x80\xed\x95\xa0 \xed\x8f\xac\xec\x9d\xb8\xed\x84\xb0\n" },
#endif
		{ "ModuleRelativePath", "GAS/Abillity/Active/Bouncy_Ability.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x82\xac \xec\xa2\x85\xeb\xa3\x8c \xec\x8b\x9c \xec\x9b\x90\xeb\x9e\x98\xeb\x8c\x80\xeb\xa1\x9c \xeb\x90\x98\xeb\x8f\x8c\xeb\xa6\xac\xea\xb8\xb0 \xec\x9c\x84\xed\x95\xb4 \xea\xb8\xb0\xec\xa1\xb4 \xed\x94\xbc\xec\xa7\x80\xec\xbb\xac \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc\xec\x9d\x84 \xeb\xb3\xb4\xea\xb4\x80\xed\x95\xa0 \xed\x8f\xac\xec\x9d\xb8\xed\x84\xb0" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UBouncy_Ability constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPhysMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalPhysMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBouncy_Ability constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBouncy_Ability>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBouncy_Ability_Statics

// ********** Begin Class UBouncy_Ability Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBouncy_Ability_Statics::NewProp_NewPhysMaterial = { "NewPhysMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBouncy_Ability, NewPhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPhysMaterial_MetaData), NewProp_NewPhysMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBouncy_Ability_Statics::NewProp_OriginalPhysMaterial = { "OriginalPhysMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBouncy_Ability, OriginalPhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalPhysMaterial_MetaData), NewProp_OriginalPhysMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBouncy_Ability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBouncy_Ability_Statics::NewProp_NewPhysMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBouncy_Ability_Statics::NewProp_OriginalPhysMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBouncy_Ability_Statics::PropPointers) < 2048);
// ********** End Class UBouncy_Ability Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UBouncy_Ability_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActiveSkillGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBouncy_Ability_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBouncy_Ability_Statics::ClassParams = {
	&UBouncy_Ability::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBouncy_Ability_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBouncy_Ability_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBouncy_Ability_Statics::Class_MetaDataParams), Z_Construct_UClass_UBouncy_Ability_Statics::Class_MetaDataParams)
};
void UBouncy_Ability::StaticRegisterNativesUBouncy_Ability()
{
}
UClass* Z_Construct_UClass_UBouncy_Ability()
{
	if (!Z_Registration_Info_UClass_UBouncy_Ability.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBouncy_Ability.OuterSingleton, Z_Construct_UClass_UBouncy_Ability_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBouncy_Ability.OuterSingleton;
}
UBouncy_Ability::UBouncy_Ability() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBouncy_Ability);
UBouncy_Ability::~UBouncy_Ability() {}
// ********** End Class UBouncy_Ability ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_Bouncy_Ability_h__Script_ProjectO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBouncy_Ability, UBouncy_Ability::StaticClass, TEXT("UBouncy_Ability"), &Z_Registration_Info_UClass_UBouncy_Ability, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBouncy_Ability), 4115232893U) },
	};
}; // Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_Bouncy_Ability_h__Script_ProjectO_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_Bouncy_Ability_h__Script_ProjectO_3442136952{
	TEXT("/Script/ProjectO"),
	Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_Bouncy_Ability_h__Script_ProjectO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_Bouncy_Ability_h__Script_ProjectO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
