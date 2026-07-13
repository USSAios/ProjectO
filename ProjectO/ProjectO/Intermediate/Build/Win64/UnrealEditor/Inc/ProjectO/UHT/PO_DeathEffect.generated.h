// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/PO_DeathEffect.h"

#ifdef PROJECTO_PO_DeathEffect_generated_h
#error "PO_DeathEffect.generated.h already included, missing '#pragma once' in PO_DeathEffect.h"
#endif
#define PROJECTO_PO_DeathEffect_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APO_DeathEffect **********************************************************
#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_DeathEffect_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDestroySelf);


struct Z_Construct_UClass_APO_DeathEffect_Statics;
PROJECTO_API UClass* Z_Construct_UClass_APO_DeathEffect_NoRegister();

#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_DeathEffect_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPO_DeathEffect(); \
	friend struct ::Z_Construct_UClass_APO_DeathEffect_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTO_API UClass* ::Z_Construct_UClass_APO_DeathEffect_NoRegister(); \
public: \
	DECLARE_CLASS2(APO_DeathEffect, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectO"), Z_Construct_UClass_APO_DeathEffect_NoRegister) \
	DECLARE_SERIALIZER(APO_DeathEffect)


#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_DeathEffect_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APO_DeathEffect(APO_DeathEffect&&) = delete; \
	APO_DeathEffect(const APO_DeathEffect&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APO_DeathEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APO_DeathEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APO_DeathEffect) \
	NO_API virtual ~APO_DeathEffect();


#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_DeathEffect_h_9_PROLOG
#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_DeathEffect_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_DeathEffect_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_DeathEffect_h_12_INCLASS_NO_PURE_DECLS \
	FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_DeathEffect_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APO_DeathEffect;

// ********** End Class APO_DeathEffect ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_DeathEffect_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
