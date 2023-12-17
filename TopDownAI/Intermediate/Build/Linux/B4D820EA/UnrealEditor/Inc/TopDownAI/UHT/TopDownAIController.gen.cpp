// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownAI/Public/TopDownAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	TOPDOWNAI_API UClass* Z_Construct_UClass_ATopDownAIController();
	TOPDOWNAI_API UClass* Z_Construct_UClass_ATopDownAIController_NoRegister();
	TOPDOWNAI_API UClass* Z_Construct_UClass_UCastAttack_NoRegister();
	TOPDOWNAI_API UEnum* Z_Construct_UEnum_TopDownAI_ETopDownAIState();
	UPackage* Z_Construct_UPackage__Script_TopDownAI();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETopDownAIState;
	static UEnum* ETopDownAIState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETopDownAIState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETopDownAIState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TopDownAI_ETopDownAIState, Z_Construct_UPackage__Script_TopDownAI(), TEXT("ETopDownAIState"));
		}
		return Z_Registration_Info_UEnum_ETopDownAIState.OuterSingleton;
	}
	template<> TOPDOWNAI_API UEnum* StaticEnum<ETopDownAIState>()
	{
		return ETopDownAIState_StaticEnum();
	}
	struct Z_Construct_UEnum_TopDownAI_ETopDownAIState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TopDownAI_ETopDownAIState_Statics::Enumerators[] = {
		{ "ETopDownAIState::Idle", (int64)ETopDownAIState::Idle },
		{ "ETopDownAIState::Move", (int64)ETopDownAIState::Move },
		{ "ETopDownAIState::Attack", (int64)ETopDownAIState::Attack },
		{ "ETopDownAIState::Death", (int64)ETopDownAIState::Death },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TopDownAI_ETopDownAIState_Statics::Enum_MetaDataParams[] = {
		{ "Attack.Comment", "/**\n * \n */" },
		{ "Attack.Name", "ETopDownAIState::Attack" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "Death.Comment", "/**\n * \n */" },
		{ "Death.Name", "ETopDownAIState::Death" },
		{ "Idle.Comment", "/**\n * \n */" },
		{ "Idle.Name", "ETopDownAIState::Idle" },
		{ "ModuleRelativePath", "Public/TopDownAIController.h" },
		{ "Move.Comment", "/**\n * \n */" },
		{ "Move.Name", "ETopDownAIState::Move" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TopDownAI_ETopDownAIState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TopDownAI,
		nullptr,
		"ETopDownAIState",
		"ETopDownAIState",
		Z_Construct_UEnum_TopDownAI_ETopDownAIState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownAI_ETopDownAIState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TopDownAI_ETopDownAIState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownAI_ETopDownAIState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TopDownAI_ETopDownAIState()
	{
		if (!Z_Registration_Info_UEnum_ETopDownAIState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETopDownAIState.InnerSingleton, Z_Construct_UEnum_TopDownAI_ETopDownAIState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETopDownAIState.InnerSingleton;
	}
	DEFINE_FUNCTION(ATopDownAIController::execPlayDeathAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayDeathAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownAIController::execPlayAttackAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAttackAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownAIController::execPlayMoveAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMoveAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownAIController::execPlayIdleAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayIdleAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownAIController::execMoveToTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveToTarget(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownAIController::execCalculateTargetScore)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateTargetScore(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownAIController::execFindBestTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->FindBestTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownAIController::execPerformRandomCastAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformRandomCastAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownAIController::execStopAI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownAIController::execStartAI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAI();
		P_NATIVE_END;
	}
	void ATopDownAIController::StaticRegisterNativesATopDownAIController()
	{
		UClass* Class = ATopDownAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateTargetScore", &ATopDownAIController::execCalculateTargetScore },
			{ "FindBestTarget", &ATopDownAIController::execFindBestTarget },
			{ "MoveToTarget", &ATopDownAIController::execMoveToTarget },
			{ "PerformRandomCastAttack", &ATopDownAIController::execPerformRandomCastAttack },
			{ "PlayAttackAnimation", &ATopDownAIController::execPlayAttackAnimation },
			{ "PlayDeathAnimation", &ATopDownAIController::execPlayDeathAnimation },
			{ "PlayIdleAnimation", &ATopDownAIController::execPlayIdleAnimation },
			{ "PlayMoveAnimation", &ATopDownAIController::execPlayMoveAnimation },
			{ "StartAI", &ATopDownAIController::execStartAI },
			{ "StopAI", &ATopDownAIController::execStopAI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATopDownAIController_CalculateTargetScore_Statics
	{
		struct TopDownAIController_eventCalculateTargetScore_Parms
		{
			AActor* Target;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATopDownAIController_CalculateTargetScore_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TopDownAIController_eventCalculateTargetScore_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATopDownAIController_CalculateTargetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TopDownAIController_eventCalculateTargetScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownAIController_CalculateTargetScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownAIController_CalculateTargetScore_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownAIController_CalculateTargetScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownAIController_CalculateTargetScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Targeting" },
		{ "ModuleRelativePath", "Public/TopDownAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownAIController_CalculateTargetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownAIController, nullptr, "CalculateTargetScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATopDownAIController_CalculateTargetScore_Statics::TopDownAIController_eventCalculateTargetScore_Parms), Z_Construct_UFunction_ATopDownAIController_CalculateTargetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownAIController_CalculateTargetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownAIController_CalculateTargetScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownAIController_CalculateTargetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownAIController_CalculateTargetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopDownAIController_CalculateTargetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownAIController_FindBestTarget_Statics
	{
		struct TopDownAIController_eventFindBestTarget_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATopDownAIController_FindBestTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TopDownAIController_eventFindBestTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownAIController_FindBestTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownAIController_FindBestTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownAIController_FindBestTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Targeting" },
		{ "ModuleRelativePath", "Public/TopDownAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownAIController_FindBestTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownAIController, nullptr, "FindBestTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATopDownAIController_FindBestTarget_Statics::TopDownAIController_eventFindBestTarget_Parms), Z_Construct_UFunction_ATopDownAIController_FindBestTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownAIController_FindBestTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownAIController_FindBestTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownAIController_FindBestTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownAIController_FindBestTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopDownAIController_FindBestTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownAIController_MoveToTarget_Statics
	{
		struct TopDownAIController_eventMoveToTarget_Parms
		{
			AActor* Target;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATopDownAIController_MoveToTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TopDownAIController_eventMoveToTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownAIController_MoveToTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownAIController_MoveToTarget_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownAIController_MoveToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Movement" },
		{ "ModuleRelativePath", "Public/TopDownAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownAIController_MoveToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownAIController, nullptr, "MoveToTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATopDownAIController_MoveToTarget_Statics::TopDownAIController_eventMoveToTarget_Parms), Z_Construct_UFunction_ATopDownAIController_MoveToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownAIController_MoveToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownAIController_MoveToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownAIController_MoveToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownAIController_MoveToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopDownAIController_MoveToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownAIController_PerformRandomCastAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownAIController_PerformRandomCastAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Attack" },
		{ "ModuleRelativePath", "Public/TopDownAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownAIController_PerformRandomCastAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownAIController, nullptr, "PerformRandomCastAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownAIController_PerformRandomCastAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownAIController_PerformRandomCastAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownAIController_PerformRandomCastAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopDownAIController_PerformRandomCastAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownAIController_PlayAttackAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownAIController_PlayAttackAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Animation" },
		{ "ModuleRelativePath", "Public/TopDownAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownAIController_PlayAttackAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownAIController, nullptr, "PlayAttackAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownAIController_PlayAttackAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownAIController_PlayAttackAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownAIController_PlayAttackAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopDownAIController_PlayAttackAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownAIController_PlayDeathAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownAIController_PlayDeathAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Animation" },
		{ "ModuleRelativePath", "Public/TopDownAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownAIController_PlayDeathAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownAIController, nullptr, "PlayDeathAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownAIController_PlayDeathAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownAIController_PlayDeathAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownAIController_PlayDeathAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopDownAIController_PlayDeathAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownAIController_PlayIdleAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownAIController_PlayIdleAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Animation" },
		{ "ModuleRelativePath", "Public/TopDownAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownAIController_PlayIdleAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownAIController, nullptr, "PlayIdleAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownAIController_PlayIdleAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownAIController_PlayIdleAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownAIController_PlayIdleAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopDownAIController_PlayIdleAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownAIController_PlayMoveAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownAIController_PlayMoveAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Animation" },
		{ "ModuleRelativePath", "Public/TopDownAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownAIController_PlayMoveAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownAIController, nullptr, "PlayMoveAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownAIController_PlayMoveAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownAIController_PlayMoveAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownAIController_PlayMoveAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopDownAIController_PlayMoveAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownAIController_StartAI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownAIController_StartAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/TopDownAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownAIController_StartAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownAIController, nullptr, "StartAI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownAIController_StartAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownAIController_StartAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownAIController_StartAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopDownAIController_StartAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownAIController_StopAI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownAIController_StopAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/TopDownAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownAIController_StopAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownAIController, nullptr, "StopAI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownAIController_StopAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownAIController_StopAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownAIController_StopAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopDownAIController_StopAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownAIController);
	UClass* Z_Construct_UClass_ATopDownAIController_NoRegister()
	{
		return ATopDownAIController::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationInstance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animations_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Animations_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Animations_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animations_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Animations;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CastAttacks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastAttacks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CastAttacks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATopDownAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATopDownAIController_CalculateTargetScore, "CalculateTargetScore" }, // 3885773883
		{ &Z_Construct_UFunction_ATopDownAIController_FindBestTarget, "FindBestTarget" }, // 2043214144
		{ &Z_Construct_UFunction_ATopDownAIController_MoveToTarget, "MoveToTarget" }, // 1577436789
		{ &Z_Construct_UFunction_ATopDownAIController_PerformRandomCastAttack, "PerformRandomCastAttack" }, // 2339578644
		{ &Z_Construct_UFunction_ATopDownAIController_PlayAttackAnimation, "PlayAttackAnimation" }, // 551295027
		{ &Z_Construct_UFunction_ATopDownAIController_PlayDeathAnimation, "PlayDeathAnimation" }, // 2338957887
		{ &Z_Construct_UFunction_ATopDownAIController_PlayIdleAnimation, "PlayIdleAnimation" }, // 2653078893
		{ &Z_Construct_UFunction_ATopDownAIController_PlayMoveAnimation, "PlayMoveAnimation" }, // 2564948696
		{ &Z_Construct_UFunction_ATopDownAIController_StartAI, "StartAI" }, // 1875762461
		{ &Z_Construct_UFunction_ATopDownAIController_StopAI, "StopAI" }, // 4031339746
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TopDownAIController.h" },
		{ "ModuleRelativePath", "Public/TopDownAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownAIController_Statics::NewProp_BehaviorTreeAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/TopDownAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownAIController_Statics::NewProp_BehaviorTreeAsset = { "BehaviorTreeAsset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATopDownAIController, BehaviorTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownAIController_Statics::NewProp_BehaviorTreeAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownAIController_Statics::NewProp_BehaviorTreeAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownAIController_Statics::NewProp_AnimationInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownAIController_Statics::NewProp_AnimationInstance = { "AnimationInstance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATopDownAIController, AnimationInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownAIController_Statics::NewProp_AnimationInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownAIController_Statics::NewProp_AnimationInstance_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownAIController_Statics::NewProp_Animations_ValueProp = { "Animations", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATopDownAIController_Statics::NewProp_Animations_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATopDownAIController_Statics::NewProp_Animations_Key_KeyProp = { "Animations_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_TopDownAI_ETopDownAIState, METADATA_PARAMS(nullptr, 0) }; // 2317175822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownAIController_Statics::NewProp_Animations_MetaData[] = {
		{ "Category", "AI|Animation" },
		{ "ModuleRelativePath", "Public/TopDownAIController.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ATopDownAIController_Statics::NewProp_Animations = { "Animations", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATopDownAIController, Animations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATopDownAIController_Statics::NewProp_Animations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownAIController_Statics::NewProp_Animations_MetaData)) }; // 2317175822
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATopDownAIController_Statics::NewProp_CastAttacks_Inner = { "CastAttacks", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UCastAttack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownAIController_Statics::NewProp_CastAttacks_MetaData[] = {
		{ "Category", "AI|Attack" },
		{ "ModuleRelativePath", "Public/TopDownAIController.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATopDownAIController_Statics::NewProp_CastAttacks = { "CastAttacks", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATopDownAIController, CastAttacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATopDownAIController_Statics::NewProp_CastAttacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownAIController_Statics::NewProp_CastAttacks_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopDownAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownAIController_Statics::NewProp_BehaviorTreeAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownAIController_Statics::NewProp_AnimationInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownAIController_Statics::NewProp_Animations_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownAIController_Statics::NewProp_Animations_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownAIController_Statics::NewProp_Animations_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownAIController_Statics::NewProp_Animations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownAIController_Statics::NewProp_CastAttacks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownAIController_Statics::NewProp_CastAttacks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownAIController_Statics::ClassParams = {
		&ATopDownAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATopDownAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATopDownAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownAIController()
	{
		if (!Z_Registration_Info_UClass_ATopDownAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownAIController.OuterSingleton, Z_Construct_UClass_ATopDownAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopDownAIController.OuterSingleton;
	}
	template<> TOPDOWNAI_API UClass* StaticClass<ATopDownAIController>()
	{
		return ATopDownAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownAIController);
	ATopDownAIController::~ATopDownAIController() {}
	struct Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_TopDownAIController_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_TopDownAIController_h_Statics::EnumInfo[] = {
		{ ETopDownAIState_StaticEnum, TEXT("ETopDownAIState"), &Z_Registration_Info_UEnum_ETopDownAIState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2317175822U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_TopDownAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownAIController, ATopDownAIController::StaticClass, TEXT("ATopDownAIController"), &Z_Registration_Info_UClass_ATopDownAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownAIController), 2468093101U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_TopDownAIController_h_743891998(TEXT("/Script/TopDownAI"),
		Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_TopDownAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_TopDownAIController_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_TopDownAIController_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_TopDownAIController_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
