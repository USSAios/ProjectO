// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS/AttributeSet/CharacterAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCharacterAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
PROJECTO_API UClass* Z_Construct_UClass_UCharacterAttributeSet();
PROJECTO_API UClass* Z_Construct_UClass_UCharacterAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCharacterAttributeSet ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterAttributeSet;
UClass* UCharacterAttributeSet::GetPrivateStaticClass()
{
	using TClass = UCharacterAttributeSet;
	if (!Z_Registration_Info_UClass_UCharacterAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CharacterAttributeSet"),
			Z_Registration_Info_UClass_UCharacterAttributeSet.InnerSingleton,
			StaticRegisterNativesUCharacterAttributeSet,
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
	return Z_Registration_Info_UClass_UCharacterAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterAttributeSet_NoRegister()
{
	return UCharacterAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/AttributeSet/CharacterAttributeSet.h" },
		{ "ModuleRelativePath", "GAS/AttributeSet/CharacterAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xec\xb2\xb4\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "GAS/AttributeSet/CharacterAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xec\xb2\xb4\xeb\xa0\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "CharacterAttributeSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb5\x9c\xeb\x8c\x80 \xec\xb2\xb4\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "GAS/AttributeSet/CharacterAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb5\x9c\xeb\x8c\x80 \xec\xb2\xb4\xeb\xa0\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9d\xb4\xeb\x8f\x99\xec\x86\x8d\xeb\x8f\x84\n" },
#endif
		{ "ModuleRelativePath", "GAS/AttributeSet/CharacterAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4\xeb\x8f\x99\xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowForce_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x8d\x98\xec\xa7\x80\xeb\x8a\x94 \xed\x9e\x98\n" },
#endif
		{ "ModuleRelativePath", "GAS/AttributeSet/CharacterAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8d\x98\xec\xa7\x80\xeb\x8a\x94 \xed\x9e\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xa0\x88\xeb\xb2\xa8\n" },
#endif
		{ "ModuleRelativePath", "GAS/AttributeSet/CharacterAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa0\x88\xeb\xb2\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentExp_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb2\xbd\xed\x97\x98\xec\xb9\x98\n" },
#endif
		{ "ModuleRelativePath", "GAS/AttributeSet/CharacterAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb2\xbd\xed\x97\x98\xec\xb9\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxExp_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GAS/AttributeSet/CharacterAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegen_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb2\xb4\xeb\xa0\xa5 \xec\x9e\xac\xec\x83\x9d\n" },
#endif
		{ "ModuleRelativePath", "GAS/AttributeSet/CharacterAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb2\xb4\xeb\xa0\xa5 \xec\x9e\xac\xec\x83\x9d" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UCharacterAttributeSet constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThrowForce;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Level;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentExp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxExp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealthRegen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCharacterAttributeSet constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCharacterAttributeSet_Statics

// ********** Begin Class UCharacterAttributeSet Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, MoveSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_ThrowForce = { "ThrowForce", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, ThrowForce), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowForce_MetaData), NewProp_ThrowForce_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, Level), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_CurrentExp = { "CurrentExp", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, CurrentExp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentExp_MetaData), NewProp_CurrentExp_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_MaxExp = { "MaxExp", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, MaxExp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxExp_MetaData), NewProp_MaxExp_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_HealthRegen = { "HealthRegen", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, HealthRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthRegen_MetaData), NewProp_HealthRegen_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_ThrowForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_CurrentExp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_MaxExp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_HealthRegen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeSet_Statics::PropPointers) < 2048);
// ********** End Class UCharacterAttributeSet Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UCharacterAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAttributeSet_Statics::ClassParams = {
	&UCharacterAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterAttributeSet_Statics::Class_MetaDataParams)
};
void UCharacterAttributeSet::StaticRegisterNativesUCharacterAttributeSet()
{
}
UClass* Z_Construct_UClass_UCharacterAttributeSet()
{
	if (!Z_Registration_Info_UClass_UCharacterAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAttributeSet.OuterSingleton, Z_Construct_UClass_UCharacterAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterAttributeSet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCharacterAttributeSet);
UCharacterAttributeSet::~UCharacterAttributeSet() {}
// ********** End Class UCharacterAttributeSet *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_AttributeSet_CharacterAttributeSet_h__Script_ProjectO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAttributeSet, UCharacterAttributeSet::StaticClass, TEXT("UCharacterAttributeSet"), &Z_Registration_Info_UClass_UCharacterAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAttributeSet), 1244301617U) },
	};
}; // Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_AttributeSet_CharacterAttributeSet_h__Script_ProjectO_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_AttributeSet_CharacterAttributeSet_h__Script_ProjectO_108099738{
	TEXT("/Script/ProjectO"),
	Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_AttributeSet_CharacterAttributeSet_h__Script_ProjectO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_GAS_AttributeSet_CharacterAttributeSet_h__Script_ProjectO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
