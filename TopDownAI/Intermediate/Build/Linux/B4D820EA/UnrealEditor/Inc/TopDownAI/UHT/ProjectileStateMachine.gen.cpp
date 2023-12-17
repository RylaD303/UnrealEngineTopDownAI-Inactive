// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownAI/Public/Projectiles/ProjectileStateMachine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileStateMachine() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TOPDOWNAI_API UClass* Z_Construct_UClass_UProjectileState_NoRegister();
	TOPDOWNAI_API UClass* Z_Construct_UClass_UProjectileStateMachine();
	TOPDOWNAI_API UClass* Z_Construct_UClass_UProjectileStateMachine_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownAI();
// End Cross Module References
	DEFINE_FUNCTION(UProjectileStateMachine::execOnStateEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateEnded();
		P_NATIVE_END;
	}
	void UProjectileStateMachine::StaticRegisterNativesUProjectileStateMachine()
	{
		UClass* Class = UProjectileStateMachine::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnStateEnded", &UProjectileStateMachine::execOnStateEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProjectileStateMachine_OnStateEnded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileStateMachine_OnStateEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectiles/ProjectileStateMachine.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileStateMachine_OnStateEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileStateMachine, nullptr, "OnStateEnded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectileStateMachine_OnStateEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileStateMachine_OnStateEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectileStateMachine_OnStateEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileStateMachine_OnStateEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectileStateMachine);
	UClass* Z_Construct_UClass_UProjectileStateMachine_NoRegister()
	{
		return UProjectileStateMachine::StaticClass();
	}
	struct Z_Construct_UClass_UProjectileStateMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StateSequence_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateSequence_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StateSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectileStateMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProjectileStateMachine_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectileStateMachine_OnStateEnded, "OnStateEnded" }, // 1114974220
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileStateMachine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Projectiles/ProjectileStateMachine.h" },
		{ "ModuleRelativePath", "Public/Projectiles/ProjectileStateMachine.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UProjectileStateMachine_Statics::NewProp_StateSequence_Inner = { "StateSequence", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UProjectileState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileStateMachine_Statics::NewProp_StateSequence_MetaData[] = {
		{ "Category", "Projectile States" },
		{ "ModuleRelativePath", "Public/Projectiles/ProjectileStateMachine.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectileStateMachine_Statics::NewProp_StateSequence = { "StateSequence", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileStateMachine, StateSequence), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectileStateMachine_Statics::NewProp_StateSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileStateMachine_Statics::NewProp_StateSequence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileStateMachine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileStateMachine_Statics::NewProp_StateSequence_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileStateMachine_Statics::NewProp_StateSequence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectileStateMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileStateMachine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileStateMachine_Statics::ClassParams = {
		&UProjectileStateMachine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProjectileStateMachine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileStateMachine_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UProjectileStateMachine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileStateMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProjectileStateMachine()
	{
		if (!Z_Registration_Info_UClass_UProjectileStateMachine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileStateMachine.OuterSingleton, Z_Construct_UClass_UProjectileStateMachine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProjectileStateMachine.OuterSingleton;
	}
	template<> TOPDOWNAI_API UClass* StaticClass<UProjectileStateMachine>()
	{
		return UProjectileStateMachine::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectileStateMachine);
	UProjectileStateMachine::~UProjectileStateMachine() {}
	struct Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileStateMachine_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileStateMachine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProjectileStateMachine, UProjectileStateMachine::StaticClass, TEXT("UProjectileStateMachine"), &Z_Registration_Info_UClass_UProjectileStateMachine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileStateMachine), 4108312118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileStateMachine_h_3915318190(TEXT("/Script/TopDownAI"),
		Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileStateMachine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileStateMachine_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
