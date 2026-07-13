// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectO_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	PROJECTO_API UFunction* Z_Construct_UDelegateFunction_ProjectO_OnHealthChangedSignature__DelegateSignature();
	PROJECTO_API UFunction* Z_Construct_UDelegateFunction_ProjectO_OnUnitMoveCompletedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProjectO;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProjectO()
	{
		if (!Z_Registration_Info_UPackage__Script_ProjectO.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_ProjectO_OnHealthChangedSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_ProjectO_OnUnitMoveCompletedDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/ProjectO",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xD986E7CD,
			0xD5CA1C44,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProjectO.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_ProjectO.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProjectO(Z_Construct_UPackage__Script_ProjectO, TEXT("/Script/ProjectO"), Z_Registration_Info_UPackage__Script_ProjectO, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD986E7CD, 0xD5CA1C44));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
