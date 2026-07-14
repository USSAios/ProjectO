// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS/Abillity/Active/Metalic_Ability.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMetalic_Ability() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
PROJECTO_API UClass* Z_Construct_UClass_UActiveSkillGameplayAbility();
PROJECTO_API UClass* Z_Construct_UClass_UMetalic_Ability();
PROJECTO_API UClass* Z_Construct_UClass_UMetalic_Ability_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMetalic_Ability *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMetalic_Ability;
UClass* UMetalic_Ability::GetPrivateStaticClass()
{
	using TClass = UMetalic_Ability;
	if (!Z_Registration_Info_UClass_UMetalic_Ability.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Metalic_Ability"),
			Z_Registration_Info_UClass_UMetalic_Ability.InnerSingleton,
			StaticRegisterNativesUMetalic_Ability,
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
	return Z_Registration_Info_UClass_UMetalic_Ability.InnerSingleton;
}
UClass* Z_Construct_UClass_UMetalic_Ability_NoRegister()
{
	return UMetalic_Ability::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMetalic_Ability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Abillity/Active/Metalic_Ability.h" },
		{ "ModuleRelativePath", "GAS/Abillity/Active/Metalic_Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPhysMaterial_MetaData[] = {
		{ "Category", "Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x92\xa1 \xec\x97\x90\xeb\x94\x94\xed\x84\xb0 \xeb\x94\x94\xed\x85\x8c\xec\x9d\xbc \xed\x8c\xa8\xeb\x84\x90\xec\x97\x90\xec\x84\x9c \xec\x9d\xb4 \xec\x96\xb4\xeb\xb9\x8c\xeb\xa6\xac\xed\x8b\xb0\xea\xb0\x80 \xec\xbc\x9c\xec\xa1\x8c\xec\x9d\x84 \xeb\x95\x8c \xec\xa0\x81\xec\x9a\xa9\xed\x95\xa0 \xec\x83\x88\xeb\xa1\x9c\xec\x9a\xb4 \xed\x94\xbc\xec\xa7\x80\xec\xbb\xac \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc \xec\xa7\x80\xec\xa0\x95\n" },
#endif
		{ "ModuleRelativePath", "GAS/Abillity/Active/Metalic_Ability.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x92\xa1 \xec\x97\x90\xeb\x94\x94\xed\x84\xb0 \xeb\x94\x94\xed\x85\x8c\xec\x9d\xbc \xed\x8c\xa8\xeb\x84\x90\xec\x97\x90\xec\x84\x9c \xec\x9d\xb4 \xec\x96\xb4\xeb\xb9\x8c\xeb\xa6\xac\xed\x8b\xb0\xea\xb0\x80 \xec\xbc\x9c\xec\xa1\x8c\xec\x9d\x84 \xeb\x95\x8c \xec\xa0\x81\xec\x9a\xa9\xed\x95\xa0 \xec\x83\x88\xeb\xa1\x9c\xec\x9a\xb4 \xed\x94\xbc\xec\xa7\x80\xec\xbb\xac \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc \xec\xa7\x80\xec\xa0\x95" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMaterial_MetaData[] = {
		{ "Category", "Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x92\xa1 \xec\x97\x90\xeb\x94\x94\xed\x84\xb0 \xeb\x94\x94\xed\x85\x8c\xec\x9d\xbc \xed\x8c\xa8\xeb\x84\x90\xec\x97\x90\xec\x84\x9c \xec\x9d\xb4 \xec\x96\xb4\xeb\xb9\x8c\xeb\xa6\xac\xed\x8b\xb0\xea\xb0\x80 \xed\x99\x9c\xec\x84\xb1\xed\x99\x94\xeb\x90\xa0 \xeb\x95\x8c \xeb\x8d\xae\xec\x96\xb4\xec\x94\x8c\xec\x9a\xb8 \xec\x8b\x9c\xea\xb0\x81 \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc \xec\xa7\x80\xec\xa0\x95\n" },
#endif
		{ "ModuleRelativePath", "GAS/Abillity/Active/Metalic_Ability.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x92\xa1 \xec\x97\x90\xeb\x94\x94\xed\x84\xb0 \xeb\x94\x94\xed\x85\x8c\xec\x9d\xbc \xed\x8c\xa8\xeb\x84\x90\xec\x97\x90\xec\x84\x9c \xec\x9d\xb4 \xec\x96\xb4\xeb\xb9\x8c\xeb\xa6\xac\xed\x8b\xb0\xea\xb0\x80 \xed\x99\x9c\xec\x84\xb1\xed\x99\x94\xeb\x90\xa0 \xeb\x95\x8c \xeb\x8d\xae\xec\x96\xb4\xec\x94\x8c\xec\x9a\xb8 \xec\x8b\x9c\xea\xb0\x81 \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc \xec\xa7\x80\xec\xa0\x95" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMaterials_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x92\xa1 \xec\x9b\x90\xeb\x9e\x98 \xec\xba\x90\xeb\xa6\xad\xed\x84\xb0\xea\xb0\x80 \xec\x9e\x85\xea\xb3\xa0 \xec\x9e\x88\xeb\x8d\x98 \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc\xeb\x93\xa4\xec\x9d\x84 \xec\x9e\x84\xec\x8b\x9c \xec\xa0\x80\xec\x9e\xa5\xed\x95\xa0 \xeb\xb0\xb0\xec\x97\xb4 (\xec\x9b\x90\xec\x83\x81 \xeb\xb3\xb5\xea\xb5\xac\xec\x9a\xa9)\n" },
#endif
		{ "ModuleRelativePath", "GAS/Abillity/Active/Metalic_Ability.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x92\xa1 \xec\x9b\x90\xeb\x9e\x98 \xec\xba\x90\xeb\xa6\xad\xed\x84\xb0\xea\xb0\x80 \xec\x9e\x85\xea\xb3\xa0 \xec\x9e\x88\xeb\x8d\x98 \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc\xeb\x93\xa4\xec\x9d\x84 \xec\x9e\x84\xec\x8b\x9c \xec\xa0\x80\xec\x9e\xa5\xed\x95\xa0 \xeb\xb0\xb0\xec\x97\xb4 (\xec\x9b\x90\xec\x83\x81 \xeb\xb3\xb5\xea\xb5\xac\xec\x9a\xa9)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalPhysMaterial_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xa4\xed\x82\xac \xec\xa2\x85\xeb\xa3\x8c \xec\x8b\x9c \xec\x9b\x90\xeb\x9e\x98\xeb\x8c\x80\xeb\xa1\x9c \xeb\x90\x98\xeb\x8f\x8c\xeb\xa6\xac\xea\xb8\xb0 \xec\x9c\x84\xed\x95\xb4 \xea\xb8\xb0\xec\xa1\xb4 \xed\x94\xbc\xec\xa7\x80\xec\xbb\xac \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc\xec\x9d\x84 \xeb\xb3\xb4\xea\xb4\x80\xed\x95\xa0 \xed\x8f\xac\xec\x9d\xb8\xed\x84\xb0\n" },
#endif
		{ "ModuleRelativePath", "GAS/Abillity/Active/Metalic_Ability.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x82\xac \xec\xa2\x85\xeb\xa3\x8c \xec\x8b\x9c \xec\x9b\x90\xeb\x9e\x98\xeb\x8c\x80\xeb\xa1\x9c \xeb\x90\x98\xeb\x8f\x8c\xeb\xa6\xac\xea\xb8\xb0 \xec\x9c\x84\xed\x95\xb4 \xea\xb8\xb0\xec\xa1\xb4 \xed\x94\xbc\xec\xa7\x80\xec\xbb\xac \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc\xec\x9d\x84 \xeb\xb3\xb4\xea\xb4\x80\xed\x95\xa0 \xed\x8f\xac\xec\x9d\xb8\xed\x84\xb0" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMetalic_Ability constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPhysMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalPhysMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMetalic_Ability constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetalic_Ability>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMetalic_Ability_Statics

// ********** Begin Class UMetalic_Ability Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMetalic_Ability_Statics::NewProp_NewPhysMaterial = { "NewPhysMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetalic_Ability, NewPhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPhysMaterial_MetaData), NewProp_NewPhysMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMetalic_Ability_Statics::NewProp_OverlayMaterial = { "OverlayMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetalic_Ability, OverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayMaterial_MetaData), NewProp_OverlayMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMetalic_Ability_Statics::NewProp_OriginalMaterials_Inner = { "OriginalMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMetalic_Ability_Statics::NewProp_OriginalMaterials = { "OriginalMaterials", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetalic_Ability, OriginalMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalMaterials_MetaData), NewProp_OriginalMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMetalic_Ability_Statics::NewProp_OriginalPhysMaterial = { "OriginalPhysMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetalic_Ability, OriginalPhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalPhysMaterial_MetaData), NewProp_OriginalPhysMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetalic_Ability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetalic_Ability_Statics::NewProp_NewPhysMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetalic_Ability_Statics::NewProp_OverlayMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetalic_Ability_Statics::NewProp_OriginalMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetalic_Ability_Statics::NewProp_OriginalMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetalic_Ability_Statics::NewProp_OriginalPhysMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetalic_Ability_Statics::PropPointers) < 2048);
// ********** End Class UMetalic_Ability Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UMetalic_Ability_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActiveSkillGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetalic_Ability_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetalic_Ability_Statics::ClassParams = {
	&UMetalic_Ability::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMetalic_Ability_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMetalic_Ability_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetalic_Ability_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetalic_Ability_Statics::Class_MetaDataParams)
};
void UMetalic_Ability::StaticRegisterNativesUMetalic_Ability()
{
}
UClass* Z_Construct_UClass_UMetalic_Ability()
{
	if (!Z_Registration_Info_UClass_UMetalic_Ability.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetalic_Ability.OuterSingleton, Z_Construct_UClass_UMetalic_Ability_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetalic_Ability.OuterSingleton;
}
UMetalic_Ability::UMetalic_Ability() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMetalic_Ability);
UMetalic_Ability::~UMetalic_Ability() {}
// ********** End Class UMetalic_Ability ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_Metalic_Ability_h__Script_ProjectO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetalic_Ability, UMetalic_Ability::StaticClass, TEXT("UMetalic_Ability"), &Z_Registration_Info_UClass_UMetalic_Ability, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetalic_Ability), 727946892U) },
	};
}; // Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_Metalic_Ability_h__Script_ProjectO_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_Metalic_Ability_h__Script_ProjectO_3610802879{
	TEXT("/Script/ProjectO"),
	Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_Metalic_Ability_h__Script_ProjectO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_Abillity_Active_Metalic_Ability_h__Script_ProjectO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
