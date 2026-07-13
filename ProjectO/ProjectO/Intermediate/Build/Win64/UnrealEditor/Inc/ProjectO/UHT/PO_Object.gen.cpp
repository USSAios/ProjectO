// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Object/PO_Object.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePO_Object() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PROJECTO_API UClass* Z_Construct_UClass_APO_Enemy_NoRegister();
PROJECTO_API UClass* Z_Construct_UClass_APO_Object();
PROJECTO_API UClass* Z_Construct_UClass_APO_Object_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APO_Object Function OnHoverBegin *****************************************
struct Z_Construct_UFunction_APO_Object_OnHoverBegin_Statics
{
	struct PO_Object_eventOnHoverBegin_Parms
	{
		UPrimitiveComponent* TouchedComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Object/PO_Object.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnHoverBegin constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnHoverBegin constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnHoverBegin Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APO_Object_OnHoverBegin_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PO_Object_eventOnHoverBegin_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchedComponent_MetaData), NewProp_TouchedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APO_Object_OnHoverBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APO_Object_OnHoverBegin_Statics::NewProp_TouchedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APO_Object_OnHoverBegin_Statics::PropPointers) < 2048);
// ********** End Function OnHoverBegin Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APO_Object_OnHoverBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APO_Object, nullptr, "OnHoverBegin", 	Z_Construct_UFunction_APO_Object_OnHoverBegin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APO_Object_OnHoverBegin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APO_Object_OnHoverBegin_Statics::PO_Object_eventOnHoverBegin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APO_Object_OnHoverBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_APO_Object_OnHoverBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APO_Object_OnHoverBegin_Statics::PO_Object_eventOnHoverBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APO_Object_OnHoverBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APO_Object_OnHoverBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APO_Object::execOnHoverBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHoverBegin(Z_Param_TouchedComponent);
	P_NATIVE_END;
}
// ********** End Class APO_Object Function OnHoverBegin *******************************************

// ********** Begin Class APO_Object Function OnHoverEnd *******************************************
struct Z_Construct_UFunction_APO_Object_OnHoverEnd_Statics
{
	struct PO_Object_eventOnHoverEnd_Parms
	{
		UPrimitiveComponent* TouchedComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Object/PO_Object.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnHoverEnd constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnHoverEnd constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnHoverEnd Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APO_Object_OnHoverEnd_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PO_Object_eventOnHoverEnd_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchedComponent_MetaData), NewProp_TouchedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APO_Object_OnHoverEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APO_Object_OnHoverEnd_Statics::NewProp_TouchedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APO_Object_OnHoverEnd_Statics::PropPointers) < 2048);
// ********** End Function OnHoverEnd Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APO_Object_OnHoverEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APO_Object, nullptr, "OnHoverEnd", 	Z_Construct_UFunction_APO_Object_OnHoverEnd_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APO_Object_OnHoverEnd_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APO_Object_OnHoverEnd_Statics::PO_Object_eventOnHoverEnd_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APO_Object_OnHoverEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_APO_Object_OnHoverEnd_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APO_Object_OnHoverEnd_Statics::PO_Object_eventOnHoverEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APO_Object_OnHoverEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APO_Object_OnHoverEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APO_Object::execOnHoverEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHoverEnd(Z_Param_TouchedComponent);
	P_NATIVE_END;
}
// ********** End Class APO_Object Function OnHoverEnd *********************************************

// ********** Begin Class APO_Object Function OnMeshHit ********************************************
struct Z_Construct_UFunction_APO_Object_OnMeshHit_Statics
{
	struct PO_Object_eventOnMeshHit_Parms
	{
		UPrimitiveComponent* HitComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Object/PO_Object.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnMeshHit constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnMeshHit constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnMeshHit Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APO_Object_OnMeshHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PO_Object_eventOnMeshHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APO_Object_OnMeshHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PO_Object_eventOnMeshHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APO_Object_OnMeshHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PO_Object_eventOnMeshHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APO_Object_OnMeshHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PO_Object_eventOnMeshHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APO_Object_OnMeshHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PO_Object_eventOnMeshHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APO_Object_OnMeshHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APO_Object_OnMeshHit_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APO_Object_OnMeshHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APO_Object_OnMeshHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APO_Object_OnMeshHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APO_Object_OnMeshHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APO_Object_OnMeshHit_Statics::PropPointers) < 2048);
// ********** End Function OnMeshHit Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APO_Object_OnMeshHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APO_Object, nullptr, "OnMeshHit", 	Z_Construct_UFunction_APO_Object_OnMeshHit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APO_Object_OnMeshHit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APO_Object_OnMeshHit_Statics::PO_Object_eventOnMeshHit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APO_Object_OnMeshHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_APO_Object_OnMeshHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APO_Object_OnMeshHit_Statics::PO_Object_eventOnMeshHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APO_Object_OnMeshHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APO_Object_OnMeshHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APO_Object::execOnMeshHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMeshHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class APO_Object Function OnMeshHit **********************************************

// ********** Begin Class APO_Object Function SetHovered *******************************************
struct Z_Construct_UFunction_APO_Object_SetHovered_Statics
{
	struct PO_Object_eventSetHovered_Parms
	{
		bool bHovered;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Object/PO_Object.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHovered constinit property declarations ****************************
	static void NewProp_bHovered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHovered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHovered constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHovered Property Definitions ***************************************
void Z_Construct_UFunction_APO_Object_SetHovered_Statics::NewProp_bHovered_SetBit(void* Obj)
{
	((PO_Object_eventSetHovered_Parms*)Obj)->bHovered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APO_Object_SetHovered_Statics::NewProp_bHovered = { "bHovered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PO_Object_eventSetHovered_Parms), &Z_Construct_UFunction_APO_Object_SetHovered_Statics::NewProp_bHovered_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APO_Object_SetHovered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APO_Object_SetHovered_Statics::NewProp_bHovered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APO_Object_SetHovered_Statics::PropPointers) < 2048);
// ********** End Function SetHovered Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APO_Object_SetHovered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APO_Object, nullptr, "SetHovered", 	Z_Construct_UFunction_APO_Object_SetHovered_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APO_Object_SetHovered_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APO_Object_SetHovered_Statics::PO_Object_eventSetHovered_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APO_Object_SetHovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_APO_Object_SetHovered_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APO_Object_SetHovered_Statics::PO_Object_eventSetHovered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APO_Object_SetHovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APO_Object_SetHovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APO_Object::execSetHovered)
{
	P_GET_UBOOL(Z_Param_bHovered);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHovered(Z_Param_bHovered);
	P_NATIVE_END;
}
// ********** End Class APO_Object Function SetHovered *********************************************

// ********** Begin Class APO_Object ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APO_Object;
UClass* APO_Object::GetPrivateStaticClass()
{
	using TClass = APO_Object;
	if (!Z_Registration_Info_UClass_APO_Object.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PO_Object"),
			Z_Registration_Info_UClass_APO_Object.InnerSingleton,
			StaticRegisterNativesAPO_Object,
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
	return Z_Registration_Info_UClass_APO_Object.InnerSingleton;
}
UClass* Z_Construct_UClass_APO_Object_NoRegister()
{
	return APO_Object::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APO_Object_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Object/PO_Object.h" },
		{ "ModuleRelativePath", "Object/PO_Object.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Object/PO_Object.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Object/PO_Object.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverOverlayMaterial_MetaData[] = {
		{ "Category", "PO_Object" },
		{ "ModuleRelativePath", "Object/PO_Object.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplier_MetaData[] = {
		{ "Category", "PO_Object" },
		{ "ModuleRelativePath", "Object/PO_Object.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinThrownSpeed_MetaData[] = {
		{ "Category", "PO_Object" },
		{ "ModuleRelativePath", "Object/PO_Object.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitEnemies_MetaData[] = {
		{ "ModuleRelativePath", "Object/PO_Object.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "Category", "PO_Object" },
		{ "ModuleRelativePath", "Object/PO_Object.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APO_Object constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoverOverlayMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinThrownSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitEnemies_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_HitEnemies;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APO_Object constinit property declarations *********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnHoverBegin"), .Pointer = &APO_Object::execOnHoverBegin },
		{ .NameUTF8 = UTF8TEXT("OnHoverEnd"), .Pointer = &APO_Object::execOnHoverEnd },
		{ .NameUTF8 = UTF8TEXT("OnMeshHit"), .Pointer = &APO_Object::execOnMeshHit },
		{ .NameUTF8 = UTF8TEXT("SetHovered"), .Pointer = &APO_Object::execSetHovered },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APO_Object_OnHoverBegin, "OnHoverBegin" }, // 1658678785
		{ &Z_Construct_UFunction_APO_Object_OnHoverEnd, "OnHoverEnd" }, // 1743190787
		{ &Z_Construct_UFunction_APO_Object_OnMeshHit, "OnMeshHit" }, // 3602551331
		{ &Z_Construct_UFunction_APO_Object_SetHovered, "SetHovered" }, // 4210410916
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APO_Object>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APO_Object_Statics

// ********** Begin Class APO_Object Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APO_Object_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_Object, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APO_Object_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_Object, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APO_Object_Statics::NewProp_HoverOverlayMaterial = { "HoverOverlayMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_Object, HoverOverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverOverlayMaterial_MetaData), NewProp_HoverOverlayMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APO_Object_Statics::NewProp_DamageMultiplier = { "DamageMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_Object, DamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMultiplier_MetaData), NewProp_DamageMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APO_Object_Statics::NewProp_MinThrownSpeed = { "MinThrownSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_Object, MinThrownSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinThrownSpeed_MetaData), NewProp_MinThrownSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APO_Object_Statics::NewProp_HitEnemies_ElementProp = { "HitEnemies", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APO_Enemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_APO_Object_Statics::NewProp_HitEnemies = { "HitEnemies", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_Object, HitEnemies), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitEnemies_MetaData), NewProp_HitEnemies_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APO_Object_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APO_Object, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APO_Object_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_Object_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_Object_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_Object_Statics::NewProp_HoverOverlayMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_Object_Statics::NewProp_DamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_Object_Statics::NewProp_MinThrownSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_Object_Statics::NewProp_HitEnemies_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_Object_Statics::NewProp_HitEnemies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_Object_Statics::NewProp_Mass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APO_Object_Statics::PropPointers) < 2048);
// ********** End Class APO_Object Property Definitions ********************************************
UObject* (*const Z_Construct_UClass_APO_Object_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APO_Object_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APO_Object_Statics::ClassParams = {
	&APO_Object::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APO_Object_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APO_Object_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APO_Object_Statics::Class_MetaDataParams), Z_Construct_UClass_APO_Object_Statics::Class_MetaDataParams)
};
void APO_Object::StaticRegisterNativesAPO_Object()
{
	UClass* Class = APO_Object::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_APO_Object_Statics::Funcs));
}
UClass* Z_Construct_UClass_APO_Object()
{
	if (!Z_Registration_Info_UClass_APO_Object.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APO_Object.OuterSingleton, Z_Construct_UClass_APO_Object_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APO_Object.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APO_Object);
APO_Object::~APO_Object() {}
// ********** End Class APO_Object *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Object_PO_Object_h__Script_ProjectO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APO_Object, APO_Object::StaticClass, TEXT("APO_Object"), &Z_Registration_Info_UClass_APO_Object, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APO_Object), 2927631998U) },
	};
}; // Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Object_PO_Object_h__Script_ProjectO_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Object_PO_Object_h__Script_ProjectO_1626257055{
	TEXT("/Script/ProjectO"),
	Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Object_PO_Object_h__Script_ProjectO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Object_PO_Object_h__Script_ProjectO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
