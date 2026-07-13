// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/PO_EnemySpawner.h"

#ifdef PROJECTO_PO_EnemySpawner_generated_h
#error "PO_EnemySpawner.generated.h already included, missing '#pragma once' in PO_EnemySpawner.h"
#endif
#define PROJECTO_PO_EnemySpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class APO_EnemySpawner *********************************************************
#define FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_EnemySpawner_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPlayerEndOverlap); \
	DECLARE_FUNCTION(execOnPlayerOverlap);


struct Z_Construct_UClass_APO_EnemySpawner_Statics;
PROJECTO_API UClass* Z_Construct_UClass_APO_EnemySpawner_NoRegister();

#define FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_EnemySpawner_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPO_EnemySpawner(); \
	friend struct ::Z_Construct_UClass_APO_EnemySpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTO_API UClass* ::Z_Construct_UClass_APO_EnemySpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(APO_EnemySpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectO"), Z_Construct_UClass_APO_EnemySpawner_NoRegister) \
	DECLARE_SERIALIZER(APO_EnemySpawner)


#define FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_EnemySpawner_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APO_EnemySpawner(APO_EnemySpawner&&) = delete; \
	APO_EnemySpawner(const APO_EnemySpawner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APO_EnemySpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APO_EnemySpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APO_EnemySpawner) \
	NO_API virtual ~APO_EnemySpawner();


#define FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_EnemySpawner_h_12_PROLOG
#define FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_EnemySpawner_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_EnemySpawner_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_EnemySpawner_h_15_INCLASS_NO_PURE_DECLS \
	FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_EnemySpawner_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APO_EnemySpawner;

// ********** End Class APO_EnemySpawner ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_EnemySpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
