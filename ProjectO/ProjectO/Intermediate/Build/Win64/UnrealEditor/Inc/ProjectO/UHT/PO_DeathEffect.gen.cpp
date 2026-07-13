// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Enemy/PO_DeathEffect.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePO_DeathEffect() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROJECTO_API UClass* Z_Construct_UClass_APO_DeathEffect();
PROJECTO_API UClass* Z_Construct_UClass_APO_DeathEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APO_DeathEffect Function DestroySelf *************************************
struct Z_Construct_UFunction_APO_DeathEffect_DestroySelf_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/PO_DeathEffect.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DestroySelf constinit property declarations ***************************
// ********** End Function DestroySelf constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APO_DeathEffect_DestroySelf_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APO_DeathEffect, nullptr, "DestroySelf", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APO_DeathEffect_DestroySelf_Statics::Function_MetaDataParams), Z_Construct_UFunction_APO_DeathEffect_DestroySelf_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APO_DeathEffect_DestroySelf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APO_DeathEffect_DestroySelf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APO_DeathEffect::execDestroySelf)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroySelf();
	P_NATIVE_END;
}
// ********** End Class APO_DeathEffect Function DestroySelf ***************************************

// ********** Begin Class APO_DeathEffect **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APO_DeathEffect;
UClass* APO_DeathEffect::GetPrivateStaticClass()
{
	using TClass = APO_DeathEffect;
	if (!Z_Registration_Info_UClass_APO_DeathEffect.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PO_DeathEffect"),
			Z_Registration_Info_UClass_APO_DeathEffect.InnerSingleton,
			StaticRegisterNativesAPO_DeathEffect,
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
	return Z_Registration_Info_UClass_APO_DeathEffect.InnerSingleton;
}
UClass* Z_Construct_UClass_APO_DeathEffect_NoRegister()
{
	return APO_DeathEffect::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APO_DeathEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy/PO_DeathEffect.h" },
		{ "ModuleRelativePath", "Enemy/PO_DeathEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseRadius_MetaData[] = {
		{ "Category", "Destruction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(VisibleAnywhere, BlueprintReadWrite)\n//TObjectPtr<UGeometryCollectionComponent> GeometryCollection;\n" },
#endif
		{ "ModuleRelativePath", "Enemy/PO_DeathEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadWrite)\nTObjectPtr<UGeometryCollectionComponent> GeometryCollection;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseStrength_MetaData[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Enemy/PO_DeathEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeTime_MetaData[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Enemy/PO_DeathEffect.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APO_DeathEffect constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APO_DeathEffect constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DestroySelf"), .Pointer = &APO_DeathEffect::execDestroySelf },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APO_DeathEffect_DestroySelf, "DestroySelf" }, // 238350448
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APO_DeathEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APO_DeathEffect_Statics

// ********** Begin Class APO_DeathEffect Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APO_DeathEffect_Statics::NewProp_ImpulseRadius = { "ImpulseRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_DeathEffect, ImpulseRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpulseRadius_MetaData), NewProp_ImpulseRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APO_DeathEffect_Statics::NewProp_ImpulseStrength = { "ImpulseStrength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_DeathEffect, ImpulseStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpulseStrength_MetaData), NewProp_ImpulseStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APO_DeathEffect_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_DeathEffect, LifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeTime_MetaData), NewProp_LifeTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APO_DeathEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_DeathEffect_Statics::NewProp_ImpulseRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_DeathEffect_Statics::NewProp_ImpulseStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_DeathEffect_Statics::NewProp_LifeTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APO_DeathEffect_Statics::PropPointers) < 2048);
// ********** End Class APO_DeathEffect Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_APO_DeathEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APO_DeathEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APO_DeathEffect_Statics::ClassParams = {
	&APO_DeathEffect::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APO_DeathEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APO_DeathEffect_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APO_DeathEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_APO_DeathEffect_Statics::Class_MetaDataParams)
};
void APO_DeathEffect::StaticRegisterNativesAPO_DeathEffect()
{
	UClass* Class = APO_DeathEffect::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_APO_DeathEffect_Statics::Funcs));
}
UClass* Z_Construct_UClass_APO_DeathEffect()
{
	if (!Z_Registration_Info_UClass_APO_DeathEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APO_DeathEffect.OuterSingleton, Z_Construct_UClass_APO_DeathEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APO_DeathEffect.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APO_DeathEffect);
APO_DeathEffect::~APO_DeathEffect() {}
// ********** End Class APO_DeathEffect ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_DeathEffect_h__Script_ProjectO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APO_DeathEffect, APO_DeathEffect::StaticClass, TEXT("APO_DeathEffect"), &Z_Registration_Info_UClass_APO_DeathEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APO_DeathEffect), 1575026657U) },
	};
}; // Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_DeathEffect_h__Script_ProjectO_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_DeathEffect_h__Script_ProjectO_1663758182{
	TEXT("/Script/ProjectO"),
	Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_DeathEffect_h__Script_ProjectO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_DeathEffect_h__Script_ProjectO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
