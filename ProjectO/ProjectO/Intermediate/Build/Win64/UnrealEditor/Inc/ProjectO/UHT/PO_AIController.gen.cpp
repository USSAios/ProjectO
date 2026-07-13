// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Enemy/PO_AIController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePO_AIController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
GAMEPLAYSTATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeAIComponent_NoRegister();
PROJECTO_API UClass* Z_Construct_UClass_APO_AIController();
PROJECTO_API UClass* Z_Construct_UClass_APO_AIController_NoRegister();
PROJECTO_API UClass* Z_Construct_UClass_APO_Enemy_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APO_AIController *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APO_AIController;
UClass* APO_AIController::GetPrivateStaticClass()
{
	using TClass = APO_AIController;
	if (!Z_Registration_Info_UClass_APO_AIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PO_AIController"),
			Z_Registration_Info_UClass_APO_AIController.InnerSingleton,
			StaticRegisterNativesAPO_AIController,
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
	return Z_Registration_Info_UClass_APO_AIController.InnerSingleton;
}
UClass* Z_Construct_UClass_APO_AIController_NoRegister()
{
	return APO_AIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APO_AIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Enemy/PO_AIController.h" },
		{ "ModuleRelativePath", "Enemy/PO_AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTreeAI_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy/PO_AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[] = {
		{ "Category", "PO_AIController" },
		{ "ModuleRelativePath", "Enemy/PO_AIController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APO_AIController constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateTreeAI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APO_AIController constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APO_AIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APO_AIController_Statics

// ********** Begin Class APO_AIController Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APO_AIController_Statics::NewProp_StateTreeAI = { "StateTreeAI", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_AIController, StateTreeAI), Z_Construct_UClass_UStateTreeAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTreeAI_MetaData), NewProp_StateTreeAI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APO_AIController_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_AIController, Enemy), Z_Construct_UClass_APO_Enemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enemy_MetaData), NewProp_Enemy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APO_AIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_AIController_Statics::NewProp_StateTreeAI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_AIController_Statics::NewProp_Enemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APO_AIController_Statics::PropPointers) < 2048);
// ********** End Class APO_AIController Property Definitions **************************************
UObject* (*const Z_Construct_UClass_APO_AIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APO_AIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APO_AIController_Statics::ClassParams = {
	&APO_AIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APO_AIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APO_AIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APO_AIController_Statics::Class_MetaDataParams), Z_Construct_UClass_APO_AIController_Statics::Class_MetaDataParams)
};
void APO_AIController::StaticRegisterNativesAPO_AIController()
{
}
UClass* Z_Construct_UClass_APO_AIController()
{
	if (!Z_Registration_Info_UClass_APO_AIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APO_AIController.OuterSingleton, Z_Construct_UClass_APO_AIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APO_AIController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APO_AIController);
APO_AIController::~APO_AIController() {}
// ********** End Class APO_AIController ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_AIController_h__Script_ProjectO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APO_AIController, APO_AIController::StaticClass, TEXT("APO_AIController"), &Z_Registration_Info_UClass_APO_AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APO_AIController), 2540347533U) },
	};
}; // Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_AIController_h__Script_ProjectO_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_AIController_h__Script_ProjectO_3243896133{
	TEXT("/Script/ProjectO"),
	Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_AIController_h__Script_ProjectO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_AIController_h__Script_ProjectO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
