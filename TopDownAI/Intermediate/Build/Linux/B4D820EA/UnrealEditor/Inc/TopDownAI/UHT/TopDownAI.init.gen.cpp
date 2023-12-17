// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownAI_init() {}
	TOPDOWNAI_API UFunction* Z_Construct_UDelegateFunction_TopDownAI_EndStateAlert__DelegateSignature();
	TOPDOWNAI_API UFunction* Z_Construct_UDelegateFunction_TopDownAI_OnCastFinished__DelegateSignature();
	TOPDOWNAI_API UFunction* Z_Construct_UDelegateFunction_TopDownAI_ProjectileFired__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TopDownAI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TopDownAI()
	{
		if (!Z_Registration_Info_UPackage__Script_TopDownAI.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TopDownAI_EndStateAlert__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TopDownAI_OnCastFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TopDownAI_ProjectileFired__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TopDownAI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x87B4FCD1,
				0xCE426ECB,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TopDownAI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TopDownAI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TopDownAI(Z_Construct_UPackage__Script_TopDownAI, TEXT("/Script/TopDownAI"), Z_Registration_Info_UPackage__Script_TopDownAI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x87B4FCD1, 0xCE426ECB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
