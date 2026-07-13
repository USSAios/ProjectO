// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectOPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProjectOPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
PROJECTO_API UClass* Z_Construct_UClass_APO_Object_NoRegister();
PROJECTO_API UClass* Z_Construct_UClass_AProjectOPlayerController();
PROJECTO_API UClass* Z_Construct_UClass_AProjectOPlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProjectOPlayerController Function ShowGameOver **************************
struct Z_Construct_UFunction_AProjectOPlayerController_ShowGameOver_Statics
{
	struct ProjectOPlayerController_eventShowGameOver_Parms
	{
		float Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectOPlayerController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShowGameOver constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShowGameOver constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShowGameOver Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectOPlayerController_ShowGameOver_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectOPlayerController_eventShowGameOver_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectOPlayerController_ShowGameOver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectOPlayerController_ShowGameOver_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectOPlayerController_ShowGameOver_Statics::PropPointers) < 2048);
// ********** End Function ShowGameOver Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectOPlayerController_ShowGameOver_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectOPlayerController, nullptr, "ShowGameOver", 	Z_Construct_UFunction_AProjectOPlayerController_ShowGameOver_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectOPlayerController_ShowGameOver_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AProjectOPlayerController_ShowGameOver_Statics::ProjectOPlayerController_eventShowGameOver_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectOPlayerController_ShowGameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectOPlayerController_ShowGameOver_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProjectOPlayerController_ShowGameOver_Statics::ProjectOPlayerController_eventShowGameOver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectOPlayerController_ShowGameOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectOPlayerController_ShowGameOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectOPlayerController::execShowGameOver)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowGameOver(Z_Param_Time);
	P_NATIVE_END;
}
// ********** End Class AProjectOPlayerController Function ShowGameOver ****************************

// ********** Begin Class AProjectOPlayerController ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AProjectOPlayerController;
UClass* AProjectOPlayerController::GetPrivateStaticClass()
{
	using TClass = AProjectOPlayerController;
	if (!Z_Registration_Info_UClass_AProjectOPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ProjectOPlayerController"),
			Z_Registration_Info_UClass_AProjectOPlayerController.InnerSingleton,
			StaticRegisterNativesAProjectOPlayerController,
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
	return Z_Registration_Info_UClass_AProjectOPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AProjectOPlayerController_NoRegister()
{
	return AProjectOPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProjectOPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Player controller for a top-down perspective game.\n *  Implements point and click based controls\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ProjectOPlayerController.h" },
		{ "ModuleRelativePath", "ProjectOPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player controller for a top-down perspective game.\nImplements point and click based controls" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredObject_MetaData[] = {
		{ "ModuleRelativePath", "ProjectOPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "ProjectOPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameOverClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "ProjectOPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameOverWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectOPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectOPlayerController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AProjectOPlayerController constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameOverClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameOverWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AProjectOPlayerController constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ShowGameOver"), .Pointer = &AProjectOPlayerController::execShowGameOver },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectOPlayerController_ShowGameOver, "ShowGameOver" }, // 1532465002
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectOPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AProjectOPlayerController_Statics

// ********** Begin Class AProjectOPlayerController Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectOPlayerController_Statics::NewProp_HoveredObject = { "HoveredObject", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOPlayerController, HoveredObject), Z_Construct_UClass_APO_Object_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredObject_MetaData), NewProp_HoveredObject_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectOPlayerController_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOPlayerController, HUDWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData), NewProp_HUDWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectOPlayerController_Statics::NewProp_GameOverClass = { "GameOverClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOPlayerController, GameOverClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameOverClass_MetaData), NewProp_GameOverClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectOPlayerController_Statics::NewProp_GameOverWidget = { "GameOverWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOPlayerController, GameOverWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameOverWidget_MetaData), NewProp_GameOverWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectOPlayerController_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOPlayerController, HUDWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidget_MetaData), NewProp_HUDWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectOPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOPlayerController_Statics::NewProp_HoveredObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOPlayerController_Statics::NewProp_HUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOPlayerController_Statics::NewProp_GameOverClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOPlayerController_Statics::NewProp_GameOverWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOPlayerController_Statics::NewProp_HUDWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectOPlayerController_Statics::PropPointers) < 2048);
// ********** End Class AProjectOPlayerController Property Definitions *****************************
UObject* (*const Z_Construct_UClass_AProjectOPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectOPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectOPlayerController_Statics::ClassParams = {
	&AProjectOPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProjectOPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectOPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectOPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectOPlayerController_Statics::Class_MetaDataParams)
};
void AProjectOPlayerController::StaticRegisterNativesAProjectOPlayerController()
{
	UClass* Class = AProjectOPlayerController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AProjectOPlayerController_Statics::Funcs));
}
UClass* Z_Construct_UClass_AProjectOPlayerController()
{
	if (!Z_Registration_Info_UClass_AProjectOPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectOPlayerController.OuterSingleton, Z_Construct_UClass_AProjectOPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectOPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AProjectOPlayerController);
AProjectOPlayerController::~AProjectOPlayerController() {}
// ********** End Class AProjectOPlayerController **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_ProjectOPlayerController_h__Script_ProjectO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectOPlayerController, AProjectOPlayerController::StaticClass, TEXT("AProjectOPlayerController"), &Z_Registration_Info_UClass_AProjectOPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectOPlayerController), 937973070U) },
	};
}; // Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_ProjectOPlayerController_h__Script_ProjectO_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_ProjectOPlayerController_h__Script_ProjectO_488016897{
	TEXT("/Script/ProjectO"),
	Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_ProjectOPlayerController_h__Script_ProjectO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_ProjectOPlayerController_h__Script_ProjectO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
