// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/ActiveSkillDataAsset.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeActiveSkillDataAsset() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTO_API UClass* Z_Construct_UClass_UActiveSkillDataAsset();
PROJECTO_API UClass* Z_Construct_UClass_UActiveSkillDataAsset_NoRegister();
PROJECTO_API UScriptStruct* Z_Construct_UScriptStruct_FSkillInfo();
UPackage* Z_Construct_UPackage__Script_ProjectO();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSkillInfo ********************************************************
struct Z_Construct_UScriptStruct_FSkillInfo_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSkillInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSkillInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/ActiveSkillDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillName_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Data/ActiveSkillDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillIcon_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Data/ActiveSkillDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownGameplayEffectClass_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x92\xa1 \xec\xbf\xa8\xed\x83\x80\xec\x9e\x84\xec\x97\x90 \xec\x82\xac\xec\x9a\xa9\xed\x95\xa0 GE \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\n" },
#endif
		{ "ModuleRelativePath", "Data/ActiveSkillDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x92\xa1 \xec\xbf\xa8\xed\x83\x80\xec\x9e\x84\xec\x97\x90 \xec\x82\xac\xec\x9a\xa9\xed\x95\xa0 GE \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowForceMultiplier_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Data/ActiveSkillDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSkillInfo constinit property declarations ************************
	static const UECodeGen_Private::FTextPropertyParams NewProp_SkillName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillIcon;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CooldownGameplayEffectClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowForceMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSkillInfo constinit property declarations **************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkillInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSkillInfo_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSkillInfo;
class UScriptStruct* FSkillInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSkillInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSkillInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkillInfo, (UObject*)Z_Construct_UPackage__Script_ProjectO(), TEXT("SkillInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FSkillInfo.OuterSingleton;
	}

// ********** Begin ScriptStruct FSkillInfo Property Definitions ***********************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSkillInfo_Statics::NewProp_SkillName = { "SkillName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillInfo, SkillName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillName_MetaData), NewProp_SkillName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkillInfo_Statics::NewProp_SkillIcon = { "SkillIcon", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillInfo, SkillIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillIcon_MetaData), NewProp_SkillIcon_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSkillInfo_Statics::NewProp_CooldownGameplayEffectClass = { "CooldownGameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillInfo, CooldownGameplayEffectClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownGameplayEffectClass_MetaData), NewProp_CooldownGameplayEffectClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillInfo_Statics::NewProp_ThrowForceMultiplier = { "ThrowForceMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillInfo, ThrowForceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowForceMultiplier_MetaData), NewProp_ThrowForceMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkillInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillInfo_Statics::NewProp_SkillName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillInfo_Statics::NewProp_SkillIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillInfo_Statics::NewProp_CooldownGameplayEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillInfo_Statics::NewProp_ThrowForceMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillInfo_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSkillInfo Property Definitions *************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkillInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectO,
	nullptr,
	&NewStructOps,
	"SkillInfo",
	Z_Construct_UScriptStruct_FSkillInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillInfo_Statics::PropPointers),
	sizeof(FSkillInfo),
	alignof(FSkillInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkillInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkillInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FSkillInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSkillInfo.InnerSingleton, Z_Construct_UScriptStruct_FSkillInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSkillInfo.InnerSingleton);
}
// ********** End ScriptStruct FSkillInfo **********************************************************

// ********** Begin Class UActiveSkillDataAsset ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UActiveSkillDataAsset;
UClass* UActiveSkillDataAsset::GetPrivateStaticClass()
{
	using TClass = UActiveSkillDataAsset;
	if (!Z_Registration_Info_UClass_UActiveSkillDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ActiveSkillDataAsset"),
			Z_Registration_Info_UClass_UActiveSkillDataAsset.InnerSingleton,
			StaticRegisterNativesUActiveSkillDataAsset,
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
	return Z_Registration_Info_UClass_UActiveSkillDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UActiveSkillDataAsset_NoRegister()
{
	return UActiveSkillDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActiveSkillDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/ActiveSkillDataAsset.h" },
		{ "ModuleRelativePath", "Data/ActiveSkillDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillDatabase_MetaData[] = {
		{ "Category", "SkillDatabase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x92\xa1 \xeb\xa7\xb5 \xea\xb5\xac\xec\xa1\xb0\xeb\xa5\xbc \xec\x82\xac\xec\x9a\xa9\xed\x95\xb4 \"\xec\x8a\xa4\xed\x82\xac \xed\x83\x9c\xea\xb7\xb8\"\xeb\xa5\xbc Key\xeb\xa1\x9c, \"\xec\x8a\xa4\xed\x82\xac \xec\xa0\x95\xeb\xb3\xb4\"\xeb\xa5\xbc Value\xeb\xa1\x9c \xeb\xac\xb6\xec\x96\xb4\xec\xa4\x8d\xeb\x8b\x88\xeb\x8b\xa4.\n" },
#endif
		{ "ModuleRelativePath", "Data/ActiveSkillDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x92\xa1 \xeb\xa7\xb5 \xea\xb5\xac\xec\xa1\xb0\xeb\xa5\xbc \xec\x82\xac\xec\x9a\xa9\xed\x95\xb4 \"\xec\x8a\xa4\xed\x82\xac \xed\x83\x9c\xea\xb7\xb8\"\xeb\xa5\xbc Key\xeb\xa1\x9c, \"\xec\x8a\xa4\xed\x82\xac \xec\xa0\x95\xeb\xb3\xb4\"\xeb\xa5\xbc Value\xeb\xa1\x9c \xeb\xac\xb6\xec\x96\xb4\xec\xa4\x8d\xeb\x8b\x88\xeb\x8b\xa4." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UActiveSkillDataAsset constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkillDatabase_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkillDatabase_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SkillDatabase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UActiveSkillDataAsset constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActiveSkillDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UActiveSkillDataAsset_Statics

// ********** Begin Class UActiveSkillDataAsset Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActiveSkillDataAsset_Statics::NewProp_SkillDatabase_ValueProp = { "SkillDatabase", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSkillInfo, METADATA_PARAMS(0, nullptr) }; // 2704679869
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActiveSkillDataAsset_Statics::NewProp_SkillDatabase_Key_KeyProp = { "SkillDatabase_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UActiveSkillDataAsset_Statics::NewProp_SkillDatabase = { "SkillDatabase", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActiveSkillDataAsset, SkillDatabase), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillDatabase_MetaData), NewProp_SkillDatabase_MetaData) }; // 517357616 2704679869
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActiveSkillDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveSkillDataAsset_Statics::NewProp_SkillDatabase_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveSkillDataAsset_Statics::NewProp_SkillDatabase_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveSkillDataAsset_Statics::NewProp_SkillDatabase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSkillDataAsset_Statics::PropPointers) < 2048);
// ********** End Class UActiveSkillDataAsset Property Definitions *********************************
UObject* (*const Z_Construct_UClass_UActiveSkillDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSkillDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActiveSkillDataAsset_Statics::ClassParams = {
	&UActiveSkillDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UActiveSkillDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSkillDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSkillDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UActiveSkillDataAsset_Statics::Class_MetaDataParams)
};
void UActiveSkillDataAsset::StaticRegisterNativesUActiveSkillDataAsset()
{
}
UClass* Z_Construct_UClass_UActiveSkillDataAsset()
{
	if (!Z_Registration_Info_UClass_UActiveSkillDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActiveSkillDataAsset.OuterSingleton, Z_Construct_UClass_UActiveSkillDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActiveSkillDataAsset.OuterSingleton;
}
UActiveSkillDataAsset::UActiveSkillDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UActiveSkillDataAsset);
UActiveSkillDataAsset::~UActiveSkillDataAsset() {}
// ********** End Class UActiveSkillDataAsset ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Data_ActiveSkillDataAsset_h__Script_ProjectO_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSkillInfo::StaticStruct, Z_Construct_UScriptStruct_FSkillInfo_Statics::NewStructOps, TEXT("SkillInfo"),&Z_Registration_Info_UScriptStruct_FSkillInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkillInfo), 2704679869U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActiveSkillDataAsset, UActiveSkillDataAsset::StaticClass, TEXT("UActiveSkillDataAsset"), &Z_Registration_Info_UClass_UActiveSkillDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActiveSkillDataAsset), 3239052869U) },
	};
}; // Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Data_ActiveSkillDataAsset_h__Script_ProjectO_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Data_ActiveSkillDataAsset_h__Script_ProjectO_3732036307{
	TEXT("/Script/ProjectO"),
	Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Data_ActiveSkillDataAsset_h__Script_ProjectO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Data_ActiveSkillDataAsset_h__Script_ProjectO_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Data_ActiveSkillDataAsset_h__Script_ProjectO_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Data_ActiveSkillDataAsset_h__Script_ProjectO_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
