// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Object/PO_ObjectSpawner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePO_ObjectSpawner() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROJECTO_API UClass* Z_Construct_UClass_APO_Object_NoRegister();
PROJECTO_API UClass* Z_Construct_UClass_APO_ObjectSpawner();
PROJECTO_API UClass* Z_Construct_UClass_APO_ObjectSpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APO_ObjectSpawner Function SpawnObject ***********************************
struct Z_Construct_UFunction_APO_ObjectSpawner_SpawnObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Object/PO_ObjectSpawner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnObject constinit property declarations ***************************
// ********** End Function SpawnObject constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APO_ObjectSpawner_SpawnObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APO_ObjectSpawner, nullptr, "SpawnObject", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APO_ObjectSpawner_SpawnObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_APO_ObjectSpawner_SpawnObject_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APO_ObjectSpawner_SpawnObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APO_ObjectSpawner_SpawnObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APO_ObjectSpawner::execSpawnObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnObject();
	P_NATIVE_END;
}
// ********** End Class APO_ObjectSpawner Function SpawnObject *************************************

// ********** Begin Class APO_ObjectSpawner ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APO_ObjectSpawner;
UClass* APO_ObjectSpawner::GetPrivateStaticClass()
{
	using TClass = APO_ObjectSpawner;
	if (!Z_Registration_Info_UClass_APO_ObjectSpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PO_ObjectSpawner"),
			Z_Registration_Info_UClass_APO_ObjectSpawner.InnerSingleton,
			StaticRegisterNativesAPO_ObjectSpawner,
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
	return Z_Registration_Info_UClass_APO_ObjectSpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_APO_ObjectSpawner_NoRegister()
{
	return APO_ObjectSpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APO_ObjectSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Object/PO_ObjectSpawner.h" },
		{ "ModuleRelativePath", "Object/PO_ObjectSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectClasses_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Object/PO_ObjectSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInterval_MetaData[] = {
		{ "Category", "PO_ObjectSpawner" },
		{ "ModuleRelativePath", "Object/PO_ObjectSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRadius_MetaData[] = {
		{ "Category", "PO_ObjectSpawner" },
		{ "ModuleRelativePath", "Object/PO_ObjectSpawner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APO_ObjectSpawner constinit property declarations ************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectClasses;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APO_ObjectSpawner constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SpawnObject"), .Pointer = &APO_ObjectSpawner::execSpawnObject },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APO_ObjectSpawner_SpawnObject, "SpawnObject" }, // 502519200
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APO_ObjectSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APO_ObjectSpawner_Statics

// ********** Begin Class APO_ObjectSpawner Property Definitions ***********************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APO_ObjectSpawner_Statics::NewProp_ObjectClasses_Inner = { "ObjectClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_APO_Object_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APO_ObjectSpawner_Statics::NewProp_ObjectClasses = { "ObjectClasses", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_ObjectSpawner, ObjectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectClasses_MetaData), NewProp_ObjectClasses_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APO_ObjectSpawner_Statics::NewProp_SpawnInterval = { "SpawnInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_ObjectSpawner, SpawnInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnInterval_MetaData), NewProp_SpawnInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APO_ObjectSpawner_Statics::NewProp_SpawnRadius = { "SpawnRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_ObjectSpawner, SpawnRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRadius_MetaData), NewProp_SpawnRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APO_ObjectSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_ObjectSpawner_Statics::NewProp_ObjectClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_ObjectSpawner_Statics::NewProp_ObjectClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_ObjectSpawner_Statics::NewProp_SpawnInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_ObjectSpawner_Statics::NewProp_SpawnRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APO_ObjectSpawner_Statics::PropPointers) < 2048);
// ********** End Class APO_ObjectSpawner Property Definitions *************************************
UObject* (*const Z_Construct_UClass_APO_ObjectSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APO_ObjectSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APO_ObjectSpawner_Statics::ClassParams = {
	&APO_ObjectSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APO_ObjectSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APO_ObjectSpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APO_ObjectSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_APO_ObjectSpawner_Statics::Class_MetaDataParams)
};
void APO_ObjectSpawner::StaticRegisterNativesAPO_ObjectSpawner()
{
	UClass* Class = APO_ObjectSpawner::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_APO_ObjectSpawner_Statics::Funcs));
}
UClass* Z_Construct_UClass_APO_ObjectSpawner()
{
	if (!Z_Registration_Info_UClass_APO_ObjectSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APO_ObjectSpawner.OuterSingleton, Z_Construct_UClass_APO_ObjectSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APO_ObjectSpawner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APO_ObjectSpawner);
APO_ObjectSpawner::~APO_ObjectSpawner() {}
// ********** End Class APO_ObjectSpawner **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_ObjectSpawner_h__Script_ProjectO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APO_ObjectSpawner, APO_ObjectSpawner::StaticClass, TEXT("APO_ObjectSpawner"), &Z_Registration_Info_UClass_APO_ObjectSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APO_ObjectSpawner), 1718246993U) },
	};
}; // Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_ObjectSpawner_h__Script_ProjectO_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_ObjectSpawner_h__Script_ProjectO_52481517{
	TEXT("/Script/ProjectO"),
	Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_ObjectSpawner_h__Script_ProjectO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_ObjectSpawner_h__Script_ProjectO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
