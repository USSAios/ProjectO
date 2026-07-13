// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/PO_GameOverWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePO_GameOverWidget() {}

// ********** Begin Cross Module References ********************************************************
PROJECTO_API UClass* Z_Construct_UClass_UPO_GameOverWidget();
PROJECTO_API UClass* Z_Construct_UClass_UPO_GameOverWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPO_GameOverWidget *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPO_GameOverWidget;
UClass* UPO_GameOverWidget::GetPrivateStaticClass()
{
	using TClass = UPO_GameOverWidget;
	if (!Z_Registration_Info_UClass_UPO_GameOverWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PO_GameOverWidget"),
			Z_Registration_Info_UClass_UPO_GameOverWidget.InnerSingleton,
			StaticRegisterNativesUPO_GameOverWidget,
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
	return Z_Registration_Info_UClass_UPO_GameOverWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UPO_GameOverWidget_NoRegister()
{
	return UPO_GameOverWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPO_GameOverWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/PO_GameOverWidget.h" },
		{ "ModuleRelativePath", "UI/PO_GameOverWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PO_GameOverWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPO_GameOverWidget constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimerText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPO_GameOverWidget constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPO_GameOverWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPO_GameOverWidget_Statics

// ********** Begin Class UPO_GameOverWidget Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPO_GameOverWidget_Statics::NewProp_TimerText = { "TimerText", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPO_GameOverWidget, TimerText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerText_MetaData), NewProp_TimerText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPO_GameOverWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPO_GameOverWidget_Statics::NewProp_TimerText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPO_GameOverWidget_Statics::PropPointers) < 2048);
// ********** End Class UPO_GameOverWidget Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UPO_GameOverWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPO_GameOverWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPO_GameOverWidget_Statics::ClassParams = {
	&UPO_GameOverWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPO_GameOverWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPO_GameOverWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPO_GameOverWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPO_GameOverWidget_Statics::Class_MetaDataParams)
};
void UPO_GameOverWidget::StaticRegisterNativesUPO_GameOverWidget()
{
}
UClass* Z_Construct_UClass_UPO_GameOverWidget()
{
	if (!Z_Registration_Info_UClass_UPO_GameOverWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPO_GameOverWidget.OuterSingleton, Z_Construct_UClass_UPO_GameOverWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPO_GameOverWidget.OuterSingleton;
}
UPO_GameOverWidget::UPO_GameOverWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPO_GameOverWidget);
UPO_GameOverWidget::~UPO_GameOverWidget() {}
// ********** End Class UPO_GameOverWidget *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_UI_PO_GameOverWidget_h__Script_ProjectO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPO_GameOverWidget, UPO_GameOverWidget::StaticClass, TEXT("UPO_GameOverWidget"), &Z_Registration_Info_UClass_UPO_GameOverWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPO_GameOverWidget), 1039027515U) },
	};
}; // Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_UI_PO_GameOverWidget_h__Script_ProjectO_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_UI_PO_GameOverWidget_h__Script_ProjectO_1256639518{
	TEXT("/Script/ProjectO"),
	Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_UI_PO_GameOverWidget_h__Script_ProjectO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_UI_PO_GameOverWidget_h__Script_ProjectO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
