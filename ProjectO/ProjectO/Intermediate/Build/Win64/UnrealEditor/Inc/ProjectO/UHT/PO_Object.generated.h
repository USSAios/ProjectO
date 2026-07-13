// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Object/PO_Object.h"

#ifdef PROJECTO_PO_Object_generated_h
#error "PO_Object.generated.h already included, missing '#pragma once' in PO_Object.h"
#endif
#define PROJECTO_PO_Object_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class APO_Object ***************************************************************
#define FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_Object_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMeshHit); \
	DECLARE_FUNCTION(execSetHovered); \
	DECLARE_FUNCTION(execOnHoverEnd); \
	DECLARE_FUNCTION(execOnHoverBegin);


struct Z_Construct_UClass_APO_Object_Statics;
PROJECTO_API UClass* Z_Construct_UClass_APO_Object_NoRegister();

#define FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_Object_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPO_Object(); \
	friend struct ::Z_Construct_UClass_APO_Object_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTO_API UClass* ::Z_Construct_UClass_APO_Object_NoRegister(); \
public: \
	DECLARE_CLASS2(APO_Object, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectO"), Z_Construct_UClass_APO_Object_NoRegister) \
	DECLARE_SERIALIZER(APO_Object)


#define FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_Object_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APO_Object(APO_Object&&) = delete; \
	APO_Object(const APO_Object&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APO_Object); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APO_Object); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APO_Object) \
	NO_API virtual ~APO_Object();


#define FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_Object_h_12_PROLOG
#define FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_Object_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_Object_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_Object_h_15_INCLASS_NO_PURE_DECLS \
	FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_Object_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APO_Object;

// ********** End Class APO_Object *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_Object_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
