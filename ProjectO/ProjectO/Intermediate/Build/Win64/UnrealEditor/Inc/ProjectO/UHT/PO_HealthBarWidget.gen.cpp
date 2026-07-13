// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/PO_HealthBarWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePO_HealthBarWidget() {}

// ********** Begin Cross Module References ********************************************************
PROJECTO_API UClass* Z_Construct_UClass_UPO_HealthBarWidget();
PROJECTO_API UClass* Z_Construct_UClass_UPO_HealthBarWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPO_HealthBarWidget ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPO_HealthBarWidget;
UClass* UPO_HealthBarWidget::GetPrivateStaticClass()
{
	using TClass = UPO_HealthBarWidget;
	if (!Z_Registration_Info_UClass_UPO_HealthBarWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PO_HealthBarWidget"),
			Z_Registration_Info_UClass_UPO_HealthBarWidget.InnerSingleton,
			StaticRegisterNativesUPO_HealthBarWidget,
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
	return Z_Registration_Info_UClass_UPO_HealthBarWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UPO_HealthBarWidget_NoRegister()
{
	return UPO_HealthBarWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPO_HealthBarWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/PO_HealthBarWidget.h" },
		{ "ModuleRelativePath", "UI/PO_HealthBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PO_HealthBarWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPO_HealthBarWidget constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPO_HealthBarWidget constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPO_HealthBarWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPO_HealthBarWidget_Statics

// ********** Begin Class UPO_HealthBarWidget Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPO_HealthBarWidget_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPO_HealthBarWidget, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBar_MetaData), NewProp_HealthBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPO_HealthBarWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPO_HealthBarWidget_Statics::NewProp_HealthBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPO_HealthBarWidget_Statics::PropPointers) < 2048);
// ********** End Class UPO_HealthBarWidget Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UPO_HealthBarWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPO_HealthBarWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPO_HealthBarWidget_Statics::ClassParams = {
	&UPO_HealthBarWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPO_HealthBarWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPO_HealthBarWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPO_HealthBarWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPO_HealthBarWidget_Statics::Class_MetaDataParams)
};
void UPO_HealthBarWidget::StaticRegisterNativesUPO_HealthBarWidget()
{
}
UClass* Z_Construct_UClass_UPO_HealthBarWidget()
{
	if (!Z_Registration_Info_UClass_UPO_HealthBarWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPO_HealthBarWidget.OuterSingleton, Z_Construct_UClass_UPO_HealthBarWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPO_HealthBarWidget.OuterSingleton;
}
UPO_HealthBarWidget::UPO_HealthBarWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPO_HealthBarWidget);
UPO_HealthBarWidget::~UPO_HealthBarWidget() {}
// ********** End Class UPO_HealthBarWidget ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_UI_PO_HealthBarWidget_h__Script_ProjectO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPO_HealthBarWidget, UPO_HealthBarWidget::StaticClass, TEXT("UPO_HealthBarWidget"), &Z_Registration_Info_UClass_UPO_HealthBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPO_HealthBarWidget), 1035328496U) },
	};
}; // Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_UI_PO_HealthBarWidget_h__Script_ProjectO_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_UI_PO_HealthBarWidget_h__Script_ProjectO_3722396437{
	TEXT("/Script/ProjectO"),
	Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_UI_PO_HealthBarWidget_h__Script_ProjectO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_UI_PO_HealthBarWidget_h__Script_ProjectO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
