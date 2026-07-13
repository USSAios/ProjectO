// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectOGameMode.h"

#ifdef PROJECTO_ProjectOGameMode_generated_h
#error "ProjectOGameMode.generated.h already included, missing '#pragma once' in ProjectOGameMode.h"
#endif
#define PROJECTO_ProjectOGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AProjectOGameMode ********************************************************
struct Z_Construct_UClass_AProjectOGameMode_Statics;
PROJECTO_API UClass* Z_Construct_UClass_AProjectOGameMode_NoRegister();

#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOGameMode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectOGameMode(); \
	friend struct ::Z_Construct_UClass_AProjectOGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTO_API UClass* ::Z_Construct_UClass_AProjectOGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AProjectOGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectO"), Z_Construct_UClass_AProjectOGameMode_NoRegister) \
	DECLARE_SERIALIZER(AProjectOGameMode)


#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOGameMode_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProjectOGameMode(AProjectOGameMode&&) = delete; \
	AProjectOGameMode(const AProjectOGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectOGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectOGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AProjectOGameMode) \
	NO_API virtual ~AProjectOGameMode();


#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOGameMode_h_14_PROLOG
#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOGameMode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOGameMode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOGameMode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProjectOGameMode;

// ********** End Class AProjectOGameMode **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
