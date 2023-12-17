// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownAI/Public/Projectiles/States/LinearProjectileMovementState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLinearProjectileMovementState() {}
// Cross Module References
	TOPDOWNAI_API UClass* Z_Construct_UClass_ULinearProjectileMovementState();
	TOPDOWNAI_API UClass* Z_Construct_UClass_ULinearProjectileMovementState_NoRegister();
	TOPDOWNAI_API UClass* Z_Construct_UClass_UProjectileState();
	UPackage* Z_Construct_UPackage__Script_TopDownAI();
// End Cross Module References
	void ULinearProjectileMovementState::StaticRegisterNativesULinearProjectileMovementState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULinearProjectileMovementState);
	UClass* Z_Construct_UClass_ULinearProjectileMovementState_NoRegister()
	{
		return ULinearProjectileMovementState::StaticClass();
	}
	struct Z_Construct_UClass_ULinearProjectileMovementState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULinearProjectileMovementState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProjectileState,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownAI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearProjectileMovementState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Projectiles/States/LinearProjectileMovementState.h" },
		{ "ModuleRelativePath", "Public/Projectiles/States/LinearProjectileMovementState.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearProjectileMovementState_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Projectiles/States/LinearProjectileMovementState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULinearProjectileMovementState_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULinearProjectileMovementState, Speed), METADATA_PARAMS(Z_Construct_UClass_ULinearProjectileMovementState_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULinearProjectileMovementState_Statics::NewProp_Speed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULinearProjectileMovementState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearProjectileMovementState_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULinearProjectileMovementState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULinearProjectileMovementState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULinearProjectileMovementState_Statics::ClassParams = {
		&ULinearProjectileMovementState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULinearProjectileMovementState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULinearProjectileMovementState_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULinearProjectileMovementState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULinearProjectileMovementState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULinearProjectileMovementState()
	{
		if (!Z_Registration_Info_UClass_ULinearProjectileMovementState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULinearProjectileMovementState.OuterSingleton, Z_Construct_UClass_ULinearProjectileMovementState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULinearProjectileMovementState.OuterSingleton;
	}
	template<> TOPDOWNAI_API UClass* StaticClass<ULinearProjectileMovementState>()
	{
		return ULinearProjectileMovementState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULinearProjectileMovementState);
	ULinearProjectileMovementState::~ULinearProjectileMovementState() {}
	struct Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_States_LinearProjectileMovementState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_States_LinearProjectileMovementState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULinearProjectileMovementState, ULinearProjectileMovementState::StaticClass, TEXT("ULinearProjectileMovementState"), &Z_Registration_Info_UClass_ULinearProjectileMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULinearProjectileMovementState), 3200739410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_States_LinearProjectileMovementState_h_842090370(TEXT("/Script/TopDownAI"),
		Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_States_LinearProjectileMovementState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_States_LinearProjectileMovementState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
