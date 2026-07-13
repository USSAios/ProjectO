// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectOGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProjectOGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECTO_API UClass* Z_Construct_UClass_AProjectOGameMode();
PROJECTO_API UClass* Z_Construct_UClass_AProjectOGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProjectOGameMode ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AProjectOGameMode;
UClass* AProjectOGameMode::GetPrivateStaticClass()
{
	using TClass = AProjectOGameMode;
	if (!Z_Registration_Info_UClass_AProjectOGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ProjectOGameMode"),
			Z_Registration_Info_UClass_AProjectOGameMode.InnerSingleton,
			StaticRegisterNativesAProjectOGameMode,
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
	return Z_Registration_Info_UClass_AProjectOGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AProjectOGameMode_NoRegister()
{
	return AProjectOGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProjectOGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Game Mode for a top-down perspective game\n *  Sets the default gameplay framework classes\n *  Check the Blueprint derived class for the set values\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProjectOGameMode.h" },
		{ "ModuleRelativePath", "ProjectOGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Game Mode for a top-down perspective game\nSets the default gameplay framework classes\nCheck the Blueprint derived class for the set values" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[] = {
		{ "Category", "ProjectOGameMode" },
		{ "ModuleRelativePath", "ProjectOGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AProjectOGameMode constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AProjectOGameMode constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectOGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AProjectOGameMode_Statics

// ********** Begin Class AProjectOGameMode Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectOGameMode_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectOGameMode, ElapsedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElapsedTime_MetaData), NewProp_ElapsedTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectOGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectOGameMode_Statics::NewProp_ElapsedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectOGameMode_Statics::PropPointers) < 2048);
// ********** End Class AProjectOGameMode Property Definitions *************************************
UObject* (*const Z_Construct_UClass_AProjectOGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectOGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectOGameMode_Statics::ClassParams = {
	&AProjectOGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProjectOGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectOGameMode_Statics::PropPointers),
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectOGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectOGameMode_Statics::Class_MetaDataParams)
};
void AProjectOGameMode::StaticRegisterNativesAProjectOGameMode()
{
}
UClass* Z_Construct_UClass_AProjectOGameMode()
{
	if (!Z_Registration_Info_UClass_AProjectOGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectOGameMode.OuterSingleton, Z_Construct_UClass_AProjectOGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectOGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AProjectOGameMode);
AProjectOGameMode::~AProjectOGameMode() {}
// ********** End Class AProjectOGameMode **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_ProjectOGameMode_h__Script_ProjectO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectOGameMode, AProjectOGameMode::StaticClass, TEXT("AProjectOGameMode"), &Z_Registration_Info_UClass_AProjectOGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectOGameMode), 3380912886U) },
	};
}; // Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_ProjectOGameMode_h__Script_ProjectO_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_ProjectOGameMode_h__Script_ProjectO_1528056771{
	TEXT("/Script/ProjectO"),
	Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_ProjectOGameMode_h__Script_ProjectO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_ProjectOGameMode_h__Script_ProjectO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
