// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Attacks/CastAttack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNAI_CastAttack_generated_h
#error "CastAttack.generated.h already included, missing '#pragma once' in CastAttack.h"
#endif
#define TOPDOWNAI_CastAttack_generated_h

#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_8_DELEGATE \
static inline void FOnCastFinished_DelegateWrapper(const FMulticastScriptDelegate& OnCastFinished) \
{ \
	OnCastFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_9_DELEGATE \
static inline void FProjectileFired_DelegateWrapper(const FMulticastScriptDelegate& ProjectileFired) \
{ \
	ProjectileFired.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_13_SPARSE_DATA
#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartCast);


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartCast);


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_13_ACCESSORS
#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCastAttack(); \
	friend struct Z_Construct_UClass_UCastAttack_Statics; \
public: \
	DECLARE_CLASS(UCastAttack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownAI"), NO_API) \
	DECLARE_SERIALIZER(UCastAttack)


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCastAttack(); \
	friend struct Z_Construct_UClass_UCastAttack_Statics; \
public: \
	DECLARE_CLASS(UCastAttack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownAI"), NO_API) \
	DECLARE_SERIALIZER(UCastAttack)


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCastAttack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCastAttack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCastAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCastAttack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCastAttack(UCastAttack&&); \
	NO_API UCastAttack(const UCastAttack&); \
public: \
	NO_API virtual ~UCastAttack();


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCastAttack(UCastAttack&&); \
	NO_API UCastAttack(const UCastAttack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCastAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCastAttack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCastAttack) \
	NO_API virtual ~UCastAttack();


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_10_PROLOG
#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_13_SPARSE_DATA \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_13_RPC_WRAPPERS \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_13_ACCESSORS \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_13_INCLASS \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_13_SPARSE_DATA \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_13_ACCESSORS \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_13_INCLASS_NO_PURE_DECLS \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNAI_API UClass* StaticClass<class UCastAttack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Attacks_CastAttack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
