// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/PO_Enemy.h"

#ifdef PROJECTO_PO_Enemy_generated_h
#error "PO_Enemy.generated.h already included, missing '#pragma once' in PO_Enemy.h"
#endif
#define PROJECTO_PO_Enemy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APO_Enemy ****************************************************************
struct Z_Construct_UClass_APO_Enemy_Statics;
PROJECTO_API UClass* Z_Construct_UClass_APO_Enemy_NoRegister();

#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_Enemy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPO_Enemy(); \
	friend struct ::Z_Construct_UClass_APO_Enemy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTO_API UClass* ::Z_Construct_UClass_APO_Enemy_NoRegister(); \
public: \
	DECLARE_CLASS2(APO_Enemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectO"), Z_Construct_UClass_APO_Enemy_NoRegister) \
	DECLARE_SERIALIZER(APO_Enemy)


#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_Enemy_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APO_Enemy(APO_Enemy&&) = delete; \
	APO_Enemy(const APO_Enemy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APO_Enemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APO_Enemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APO_Enemy) \
	NO_API virtual ~APO_Enemy();


#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_Enemy_h_12_PROLOG
#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_Enemy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_Enemy_h_15_INCLASS_NO_PURE_DECLS \
	FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_Enemy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APO_Enemy;

// ********** End Class APO_Enemy ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Enemy_PO_Enemy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
