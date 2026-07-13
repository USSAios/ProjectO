// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Object/PO_ObjectSpawner.h"

#ifdef PROJECTO_PO_ObjectSpawner_generated_h
#error "PO_ObjectSpawner.generated.h already included, missing '#pragma once' in PO_ObjectSpawner.h"
#endif
#define PROJECTO_PO_ObjectSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APO_ObjectSpawner ********************************************************
#define FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_ObjectSpawner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnObject);


struct Z_Construct_UClass_APO_ObjectSpawner_Statics;
PROJECTO_API UClass* Z_Construct_UClass_APO_ObjectSpawner_NoRegister();

#define FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_ObjectSpawner_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPO_ObjectSpawner(); \
	friend struct ::Z_Construct_UClass_APO_ObjectSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTO_API UClass* ::Z_Construct_UClass_APO_ObjectSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(APO_ObjectSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectO"), Z_Construct_UClass_APO_ObjectSpawner_NoRegister) \
	DECLARE_SERIALIZER(APO_ObjectSpawner)


#define FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_ObjectSpawner_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APO_ObjectSpawner(APO_ObjectSpawner&&) = delete; \
	APO_ObjectSpawner(const APO_ObjectSpawner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APO_ObjectSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APO_ObjectSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APO_ObjectSpawner) \
	NO_API virtual ~APO_ObjectSpawner();


#define FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_ObjectSpawner_h_11_PROLOG
#define FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_ObjectSpawner_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_ObjectSpawner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_ObjectSpawner_h_14_INCLASS_NO_PURE_DECLS \
	FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_ObjectSpawner_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APO_ObjectSpawner;

// ********** End Class APO_ObjectSpawner **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Object_PO_ObjectSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
