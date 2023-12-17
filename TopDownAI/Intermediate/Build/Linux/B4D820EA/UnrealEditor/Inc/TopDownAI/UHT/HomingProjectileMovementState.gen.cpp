// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownAI/Public/Projectiles/States/HomingProjectileMovementState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHomingProjectileMovementState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TOPDOWNAI_API UClass* Z_Construct_UClass_UHomingProjectileMovementState();
	TOPDOWNAI_API UClass* Z_Construct_UClass_UHomingProjectileMovementState_NoRegister();
	TOPDOWNAI_API UClass* Z_Construct_UClass_UProjectileState();
	UPackage* Z_Construct_UPackage__Script_TopDownAI();
// End Cross Module References
	DEFINE_FUNCTION(UHomingProjectileMovementState::execSetTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTarget(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void UHomingProjectileMovementState::StaticRegisterNativesUHomingProjectileMovementState()
	{
		UClass* Class = UHomingProjectileMovementState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTarget", &UHomingProjectileMovementState::execSetTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHomingProjectileMovementState_SetTarget_Statics
	{
		struct HomingProjectileMovementState_eventSetTarget_Parms
		{
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHomingProjectileMovementState_SetTarget_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HomingProjectileMovementState_eventSetTarget_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHomingProjectileMovementState_SetTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHomingProjectileMovementState_SetTarget_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHomingProjectileMovementState_SetTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectiles/States/HomingProjectileMovementState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHomingProjectileMovementState_SetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHomingProjectileMovementState, nullptr, "SetTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHomingProjectileMovementState_SetTarget_Statics::HomingProjectileMovementState_eventSetTarget_Parms), Z_Construct_UFunction_UHomingProjectileMovementState_SetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHomingProjectileMovementState_SetTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHomingProjectileMovementState_SetTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHomingProjectileMovementState_SetTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHomingProjectileMovementState_SetTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHomingProjectileMovementState_SetTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHomingProjectileMovementState);
	UClass* Z_Construct_UClass_UHomingProjectileMovementState_NoRegister()
	{
		return UHomingProjectileMovementState::StaticClass();
	}
	struct Z_Construct_UClass_UHomingProjectileMovementState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HomingStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HomingStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHomingProjectileMovementState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProjectileState,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHomingProjectileMovementState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHomingProjectileMovementState_SetTarget, "SetTarget" }, // 1321289474
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHomingProjectileMovementState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Projectiles/States/HomingProjectileMovementState.h" },
		{ "ModuleRelativePath", "Public/Projectiles/States/HomingProjectileMovementState.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHomingProjectileMovementState_Statics::NewProp_HomingStrength_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Projectiles/States/HomingProjectileMovementState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHomingProjectileMovementState_Statics::NewProp_HomingStrength = { "HomingStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHomingProjectileMovementState, HomingStrength), METADATA_PARAMS(Z_Construct_UClass_UHomingProjectileMovementState_Statics::NewProp_HomingStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHomingProjectileMovementState_Statics::NewProp_HomingStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHomingProjectileMovementState_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Projectiles/States/HomingProjectileMovementState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHomingProjectileMovementState_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHomingProjectileMovementState, Speed), METADATA_PARAMS(Z_Construct_UClass_UHomingProjectileMovementState_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHomingProjectileMovementState_Statics::NewProp_Speed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHomingProjectileMovementState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHomingProjectileMovementState_Statics::NewProp_HomingStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHomingProjectileMovementState_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHomingProjectileMovementState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHomingProjectileMovementState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHomingProjectileMovementState_Statics::ClassParams = {
		&UHomingProjectileMovementState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHomingProjectileMovementState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHomingProjectileMovementState_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHomingProjectileMovementState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHomingProjectileMovementState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHomingProjectileMovementState()
	{
		if (!Z_Registration_Info_UClass_UHomingProjectileMovementState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHomingProjectileMovementState.OuterSingleton, Z_Construct_UClass_UHomingProjectileMovementState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHomingProjectileMovementState.OuterSingleton;
	}
	template<> TOPDOWNAI_API UClass* StaticClass<UHomingProjectileMovementState>()
	{
		return UHomingProjectileMovementState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHomingProjectileMovementState);
	UHomingProjectileMovementState::~UHomingProjectileMovementState() {}
	struct Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_States_HomingProjectileMovementState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_States_HomingProjectileMovementState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHomingProjectileMovementState, UHomingProjectileMovementState::StaticClass, TEXT("UHomingProjectileMovementState"), &Z_Registration_Info_UClass_UHomingProjectileMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHomingProjectileMovementState), 1997943239U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_States_HomingProjectileMovementState_h_3660297489(TEXT("/Script/TopDownAI"),
		Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_States_HomingProjectileMovementState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_States_HomingProjectileMovementState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
