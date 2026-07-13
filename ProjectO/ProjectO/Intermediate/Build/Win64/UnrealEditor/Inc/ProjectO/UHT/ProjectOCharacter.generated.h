// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectOCharacter.h"

#ifdef PROJECTO_ProjectOCharacter_generated_h
#error "ProjectOCharacter.generated.h already included, missing '#pragma once' in ProjectOCharacter.h"
#endif
#define PROJECTO_ProjectOCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APO_Object;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Delegate FOnHealthChangedSignature *********************************************
#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOCharacter_h_27_DELEGATE \
PROJECTO_API void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, float NewHealth, float MaxHealth);


// ********** End Delegate FOnHealthChangedSignature ***********************************************

// ********** Begin Class AProjectOCharacter *******************************************************
#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOCharacter_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSkill3); \
	DECLARE_FUNCTION(execSkill2); \
	DECLARE_FUNCTION(execSkill1); \
	DECLARE_FUNCTION(execBroadcastInitialValues); \
	DECLARE_FUNCTION(execOnEnemyOverlap); \
	DECLARE_FUNCTION(execGetObject);


struct Z_Construct_UClass_AProjectOCharacter_Statics;
PROJECTO_API UClass* Z_Construct_UClass_AProjectOCharacter_NoRegister();

#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOCharacter_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectOCharacter(); \
	friend struct ::Z_Construct_UClass_AProjectOCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTO_API UClass* ::Z_Construct_UClass_AProjectOCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AProjectOCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectO"), Z_Construct_UClass_AProjectOCharacter_NoRegister) \
	DECLARE_SERIALIZER(AProjectOCharacter)


#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOCharacter_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProjectOCharacter(AProjectOCharacter&&) = delete; \
	AProjectOCharacter(const AProjectOCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectOCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectOCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AProjectOCharacter) \
	NO_API virtual ~AProjectOCharacter();


#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOCharacter_h_29_PROLOG
#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOCharacter_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOCharacter_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOCharacter_h_32_INCLASS_NO_PURE_DECLS \
	FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOCharacter_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProjectOCharacter;

// ********** End Class AProjectOCharacter *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_ProjectOCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
