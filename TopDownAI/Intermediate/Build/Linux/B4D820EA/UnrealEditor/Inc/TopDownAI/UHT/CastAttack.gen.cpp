// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownAI/Public/Attacks/CastAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCastAttack() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TOPDOWNAI_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	TOPDOWNAI_API UClass* Z_Construct_UClass_UCastAttack();
	TOPDOWNAI_API UClass* Z_Construct_UClass_UCastAttack_NoRegister();
	TOPDOWNAI_API UFunction* Z_Construct_UDelegateFunction_TopDownAI_OnCastFinished__DelegateSignature();
	TOPDOWNAI_API UFunction* Z_Construct_UDelegateFunction_TopDownAI_ProjectileFired__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TopDownAI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TopDownAI_OnCastFinished__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TopDownAI_OnCastFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attacks/CastAttack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TopDownAI_OnCastFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TopDownAI, nullptr, "OnCastFinished__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TopDownAI_OnCastFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownAI_OnCastFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TopDownAI_OnCastFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TopDownAI_OnCastFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TopDownAI_ProjectileFired__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TopDownAI_ProjectileFired__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attacks/CastAttack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TopDownAI_ProjectileFired__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TopDownAI, nullptr, "ProjectileFired__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TopDownAI_ProjectileFired__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownAI_ProjectileFired__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TopDownAI_ProjectileFired__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TopDownAI_ProjectileFired__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCastAttack::execStartCast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCast();
		P_NATIVE_END;
	}
	void UCastAttack::StaticRegisterNativesUCastAttack()
	{
		UClass* Class = UCastAttack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartCast", &UCastAttack::execStartCast },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCastAttack_StartCast_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCastAttack_StartCast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attacks/CastAttack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCastAttack_StartCast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCastAttack, nullptr, "StartCast", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCastAttack_StartCast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCastAttack_StartCast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCastAttack_StartCast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCastAttack_StartCast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCastAttack);
	UClass* Z_Construct_UClass_UCastAttack_NoRegister()
	{
		return UCastAttack::StaticClass();
	}
	struct Z_Construct_UClass_UCastAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProjectileClasses;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileDelays_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileDelays_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProjectileDelays;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CastTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MainDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCastFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCastFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProjectileFired_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProjectileFired;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCastAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCastAttack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCastAttack_StartCast, "StartCast" }, // 3175867342
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCastAttack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Attacks/CastAttack.h" },
		{ "ModuleRelativePath", "Public/Attacks/CastAttack.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCastAttack_Statics::NewProp_ProjectileClasses_Inner = { "ProjectileClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCastAttack_Statics::NewProp_ProjectileClasses_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Attacks/CastAttack.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCastAttack_Statics::NewProp_ProjectileClasses = { "ProjectileClasses", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCastAttack, ProjectileClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCastAttack_Statics::NewProp_ProjectileClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCastAttack_Statics::NewProp_ProjectileClasses_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCastAttack_Statics::NewProp_ProjectileDelays_Inner = { "ProjectileDelays", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCastAttack_Statics::NewProp_ProjectileDelays_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Attacks/CastAttack.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCastAttack_Statics::NewProp_ProjectileDelays = { "ProjectileDelays", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCastAttack, ProjectileDelays), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCastAttack_Statics::NewProp_ProjectileDelays_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCastAttack_Statics::NewProp_ProjectileDelays_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCastAttack_Statics::NewProp_CastTime_MetaData[] = {
		{ "Category", "Cast Configuration" },
		{ "ModuleRelativePath", "Public/Attacks/CastAttack.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCastAttack_Statics::NewProp_CastTime = { "CastTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCastAttack, CastTime), METADATA_PARAMS(Z_Construct_UClass_UCastAttack_Statics::NewProp_CastTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCastAttack_Statics::NewProp_CastTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCastAttack_Statics::NewProp_MainDirection_MetaData[] = {
		{ "Category", "Cast Configuration" },
		{ "ModuleRelativePath", "Public/Attacks/CastAttack.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCastAttack_Statics::NewProp_MainDirection = { "MainDirection", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCastAttack, MainDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCastAttack_Statics::NewProp_MainDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCastAttack_Statics::NewProp_MainDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCastAttack_Statics::NewProp_OnCastFinished_MetaData[] = {
		{ "Category", "Cast Events" },
		{ "ModuleRelativePath", "Public/Attacks/CastAttack.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCastAttack_Statics::NewProp_OnCastFinished = { "OnCastFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCastAttack, OnCastFinished), Z_Construct_UDelegateFunction_TopDownAI_OnCastFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCastAttack_Statics::NewProp_OnCastFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCastAttack_Statics::NewProp_OnCastFinished_MetaData)) }; // 3110491361
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCastAttack_Statics::NewProp_OnProjectileFired_MetaData[] = {
		{ "Category", "Projectile Events" },
		{ "ModuleRelativePath", "Public/Attacks/CastAttack.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCastAttack_Statics::NewProp_OnProjectileFired = { "OnProjectileFired", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCastAttack, OnProjectileFired), Z_Construct_UDelegateFunction_TopDownAI_ProjectileFired__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCastAttack_Statics::NewProp_OnProjectileFired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCastAttack_Statics::NewProp_OnProjectileFired_MetaData)) }; // 2748526950
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCastAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCastAttack_Statics::NewProp_ProjectileClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCastAttack_Statics::NewProp_ProjectileClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCastAttack_Statics::NewProp_ProjectileDelays_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCastAttack_Statics::NewProp_ProjectileDelays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCastAttack_Statics::NewProp_CastTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCastAttack_Statics::NewProp_MainDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCastAttack_Statics::NewProp_OnCastFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCastAttack_Statics::NewProp_OnProjectileFired,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCastAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCastAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCastAttack_Statics::ClassParams = {
		&UCastAttack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCastAttack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCastAttack_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCastAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCastAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCastAttack()
	{
		if (!Z_Registration_Info_UClass_UCastAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCastAttack.OuterSingleton, Z_Construct_UClass_UCastAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCastAttack.OuterSingleton;
	}
	template<> TOPDOWNAI_API UClass* StaticClass<UCastAttack>()
	{
		return UCastAttack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCastAttack);
	UCastAttack::~UCastAttack() {}
	struct Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCastAttack, UCastAttack::StaticClass, TEXT("UCastAttack"), &Z_Registration_Info_UClass_UCastAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCastAttack), 189082997U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_2174463734(TEXT("/Script/TopDownAI"),
		Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
