// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/PO_GameHUD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePO_GameHUD() {}

// ********** Begin Cross Module References ********************************************************
PROJECTO_API UClass* Z_Construct_UClass_UPO_GameHUD();
PROJECTO_API UClass* Z_Construct_UClass_UPO_GameHUD_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPO_GameHUD **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPO_GameHUD;
UClass* UPO_GameHUD::GetPrivateStaticClass()
{
	using TClass = UPO_GameHUD;
	if (!Z_Registration_Info_UClass_UPO_GameHUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PO_GameHUD"),
			Z_Registration_Info_UClass_UPO_GameHUD.InnerSingleton,
			StaticRegisterNativesUPO_GameHUD,
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
	return Z_Registration_Info_UClass_UPO_GameHUD.InnerSingleton;
}
UClass* Z_Construct_UClass_UPO_GameHUD_NoRegister()
{
	return UPO_GameHUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPO_GameHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/PO_GameHUD.h" },
		{ "ModuleRelativePath", "UI/PO_GameHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PO_GameHUD.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPO_GameHUD constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimerText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPO_GameHUD constinit property declarations ********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPO_GameHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPO_GameHUD_Statics

// ********** Begin Class UPO_GameHUD Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPO_GameHUD_Statics::NewProp_TimerText = { "TimerText", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPO_GameHUD, TimerText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerText_MetaData), NewProp_TimerText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPO_GameHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPO_GameHUD_Statics::NewProp_TimerText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPO_GameHUD_Statics::PropPointers) < 2048);
// ********** End Class UPO_GameHUD Property Definitions *******************************************
UObject* (*const Z_Construct_UClass_UPO_GameHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPO_GameHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPO_GameHUD_Statics::ClassParams = {
	&UPO_GameHUD::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPO_GameHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPO_GameHUD_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPO_GameHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_UPO_GameHUD_Statics::Class_MetaDataParams)
};
void UPO_GameHUD::StaticRegisterNativesUPO_GameHUD()
{
}
UClass* Z_Construct_UClass_UPO_GameHUD()
{
	if (!Z_Registration_Info_UClass_UPO_GameHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPO_GameHUD.OuterSingleton, Z_Construct_UClass_UPO_GameHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPO_GameHUD.OuterSingleton;
}
UPO_GameHUD::UPO_GameHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPO_GameHUD);
UPO_GameHUD::~UPO_GameHUD() {}
// ********** End Class UPO_GameHUD ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_UI_PO_GameHUD_h__Script_ProjectO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPO_GameHUD, UPO_GameHUD::StaticClass, TEXT("UPO_GameHUD"), &Z_Registration_Info_UClass_UPO_GameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPO_GameHUD), 3592973804U) },
	};
}; // Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_UI_PO_GameHUD_h__Script_ProjectO_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_UI_PO_GameHUD_h__Script_ProjectO_601690121{
	TEXT("/Script/ProjectO"),
	Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_UI_PO_GameHUD_h__Script_ProjectO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_UI_PO_GameHUD_h__Script_ProjectO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
