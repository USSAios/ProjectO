// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectOPlayerController.h"

#ifdef PROJECTO_ProjectOPlayerController_generated_h
#error "ProjectOPlayerController.generated.h already included, missing '#pragma once' in ProjectOPlayerController.h"
#endif
#define PROJECTO_ProjectOPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AProjectOPlayerController ************************************************
#define FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_ProjectOPlayerController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShowGameOver);


struct Z_Construct_UClass_AProjectOPlayerController_Statics;
PROJECTO_API UClass* Z_Construct_UClass_AProjectOPlayerController_NoRegister();

#define FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_ProjectOPlayerController_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectOPlayerController(); \
	friend struct ::Z_Construct_UClass_AProjectOPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTO_API UClass* ::Z_Construct_UClass_AProjectOPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AProjectOPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectO"), Z_Construct_UClass_AProjectOPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AProjectOPlayerController)


#define FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_ProjectOPlayerController_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProjectOPlayerController(AProjectOPlayerController&&) = delete; \
	AProjectOPlayerController(const AProjectOPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectOPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectOPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectOPlayerController) \
	NO_API virtual ~AProjectOPlayerController();


#define FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_ProjectOPlayerController_h_23_PROLOG
#define FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_ProjectOPlayerController_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_ProjectOPlayerController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_ProjectOPlayerController_h_26_INCLASS_NO_PURE_DECLS \
	FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_ProjectOPlayerController_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProjectOPlayerController;

// ********** End Class AProjectOPlayerController **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_MarbleRace_ProjectO_ProjectO_Source_ProjectO_ProjectOPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
