// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/ActiveSkillDataAsset.h"

#ifdef PROJECTO_ActiveSkillDataAsset_generated_h
#error "ActiveSkillDataAsset.generated.h already included, missing '#pragma once' in ActiveSkillDataAsset.h"
#endif
#define PROJECTO_ActiveSkillDataAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSkillInfo ********************************************************
struct Z_Construct_UScriptStruct_FSkillInfo_Statics;
#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Data_ActiveSkillDataAsset_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSkillInfo_Statics; \
	PROJECTO_API static class UScriptStruct* StaticStruct();


struct FSkillInfo;
// ********** End ScriptStruct FSkillInfo **********************************************************

// ********** Begin Class UActiveSkillDataAsset ****************************************************
struct Z_Construct_UClass_UActiveSkillDataAsset_Statics;
PROJECTO_API UClass* Z_Construct_UClass_UActiveSkillDataAsset_NoRegister();

#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Data_ActiveSkillDataAsset_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActiveSkillDataAsset(); \
	friend struct ::Z_Construct_UClass_UActiveSkillDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTO_API UClass* ::Z_Construct_UClass_UActiveSkillDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UActiveSkillDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectO"), Z_Construct_UClass_UActiveSkillDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UActiveSkillDataAsset)


#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Data_ActiveSkillDataAsset_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActiveSkillDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActiveSkillDataAsset(UActiveSkillDataAsset&&) = delete; \
	UActiveSkillDataAsset(const UActiveSkillDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActiveSkillDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActiveSkillDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActiveSkillDataAsset) \
	NO_API virtual ~UActiveSkillDataAsset();


#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Data_ActiveSkillDataAsset_h_35_PROLOG
#define FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Data_ActiveSkillDataAsset_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Data_ActiveSkillDataAsset_h_38_INCLASS_NO_PURE_DECLS \
	FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Data_ActiveSkillDataAsset_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActiveSkillDataAsset;

// ********** End Class UActiveSkillDataAsset ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_ProjectO_ProjectO_ProjectO_Source_ProjectO_Data_ActiveSkillDataAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
