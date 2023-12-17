// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownAI/Public/Projectiles/ProjectileState.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileState() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	TOPDOWNAI_API UClass* Z_Construct_UClass_UProjectileState();
	TOPDOWNAI_API UClass* Z_Construct_UClass_UProjectileState_NoRegister();
	TOPDOWNAI_API UFunction* Z_Construct_UDelegateFunction_TopDownAI_EndStateAlert__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TopDownAI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TopDownAI_EndStateAlert__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TopDownAI_EndStateAlert__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Projectiles/ProjectileState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TopDownAI_EndStateAlert__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TopDownAI, nullptr, "EndStateAlert__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TopDownAI_EndStateAlert__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownAI_EndStateAlert__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TopDownAI_EndStateAlert__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TopDownAI_EndStateAlert__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UProjectileState::execHandleTimeout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTimeout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectileState::execHandleCollision)
	{
		P_GET_OBJECT(AActor,Z_Param_SelfActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCollision(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void UProjectileState::StaticRegisterNativesUProjectileState()
	{
		UClass* Class = UProjectileState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCollision", &UProjectileState::execHandleCollision },
			{ "HandleTimeout", &UProjectileState::execHandleTimeout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProjectileState_HandleCollision_Statics
	{
		struct ProjectileState_eventHandleCollision_Parms
		{
			AActor* SelfActor;
			AActor* OtherActor;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProjectileState_HandleCollision_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectileState_eventHandleCollision_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProjectileState_HandleCollision_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectileState_eventHandleCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileState_HandleCollision_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectileState_eventHandleCollision_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileState_HandleCollision_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileState_HandleCollision_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectileState_eventHandleCollision_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UProjectileState_HandleCollision_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileState_HandleCollision_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileState_HandleCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileState_HandleCollision_Statics::NewProp_SelfActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileState_HandleCollision_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileState_HandleCollision_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileState_HandleCollision_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileState_HandleCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectiles/ProjectileState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileState_HandleCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileState, nullptr, "HandleCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectileState_HandleCollision_Statics::ProjectileState_eventHandleCollision_Parms), Z_Construct_UFunction_UProjectileState_HandleCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileState_HandleCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectileState_HandleCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileState_HandleCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectileState_HandleCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileState_HandleCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectileState_HandleTimeout_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileState_HandleTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectiles/ProjectileState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileState_HandleTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileState, nullptr, "HandleTimeout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectileState_HandleTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileState_HandleTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectileState_HandleTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileState_HandleTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectileState);
	UClass* Z_Construct_UClass_UProjectileState_NoRegister()
	{
		return UProjectileState::StaticClass();
	}
	struct Z_Construct_UClass_UProjectileState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpirationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpirationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStateEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateEnded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectileState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProjectileState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectileState_HandleCollision, "HandleCollision" }, // 493408637
		{ &Z_Construct_UFunction_UProjectileState_HandleTimeout, "HandleTimeout" }, // 2279356133
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Projectiles/ProjectileState.h" },
		{ "ModuleRelativePath", "Public/Projectiles/ProjectileState.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileState_Statics::NewProp_ExpirationTime_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/Projectiles/ProjectileState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileState_Statics::NewProp_ExpirationTime = { "ExpirationTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileState, ExpirationTime), METADATA_PARAMS(Z_Construct_UClass_UProjectileState_Statics::NewProp_ExpirationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileState_Statics::NewProp_ExpirationTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileState_Statics::NewProp_OnStateEnded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Projectiles/ProjectileState.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UProjectileState_Statics::NewProp_OnStateEnded = { "OnStateEnded", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileState, OnStateEnded), Z_Construct_UDelegateFunction_TopDownAI_EndStateAlert__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UProjectileState_Statics::NewProp_OnStateEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileState_Statics::NewProp_OnStateEnded_MetaData)) }; // 3034672006
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileState_Statics::NewProp_ExpirationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileState_Statics::NewProp_OnStateEnded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectileState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileState_Statics::ClassParams = {
		&UProjectileState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProjectileState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileState_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UProjectileState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProjectileState()
	{
		if (!Z_Registration_Info_UClass_UProjectileState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileState.OuterSingleton, Z_Construct_UClass_UProjectileState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProjectileState.OuterSingleton;
	}
	template<> TOPDOWNAI_API UClass* StaticClass<UProjectileState>()
	{
		return UProjectileState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectileState);
	UProjectileState::~UProjectileState() {}
	struct Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProjectileState, UProjectileState::StaticClass, TEXT("UProjectileState"), &Z_Registration_Info_UClass_UProjectileState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileState), 2922107557U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_2741664557(TEXT("/Script/TopDownAI"),
		Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
