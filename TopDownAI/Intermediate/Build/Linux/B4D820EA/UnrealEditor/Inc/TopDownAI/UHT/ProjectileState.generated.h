// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Projectiles/ProjectileState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FHitResult;
#ifdef TOPDOWNAI_ProjectileState_generated_h
#error "ProjectileState.generated.h already included, missing '#pragma once' in ProjectileState.h"
#endif
#define TOPDOWNAI_ProjectileState_generated_h

#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_10_DELEGATE \
static inline void FEndStateAlert_DelegateWrapper(const FMulticastScriptDelegate& EndStateAlert) \
{ \
	EndStateAlert.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_15_SPARSE_DATA
#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTimeout); \
	DECLARE_FUNCTION(execHandleCollision);


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTimeout); \
	DECLARE_FUNCTION(execHandleCollision);


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_15_ACCESSORS
#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProjectileState(); \
	friend struct Z_Construct_UClass_UProjectileState_Statics; \
public: \
	DECLARE_CLASS(UProjectileState, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownAI"), NO_API) \
	DECLARE_SERIALIZER(UProjectileState)


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUProjectileState(); \
	friend struct Z_Construct_UClass_UProjectileState_Statics; \
public: \
	DECLARE_CLASS(UProjectileState, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownAI"), NO_API) \
	DECLARE_SERIALIZER(UProjectileState)


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectileState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectileState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectileState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectileState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProjectileState(UProjectileState&&); \
	NO_API UProjectileState(const UProjectileState&); \
public: \
	NO_API virtual ~UProjectileState();


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProjectileState(UProjectileState&&); \
	NO_API UProjectileState(const UProjectileState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectileState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectileState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProjectileState) \
	NO_API virtual ~UProjectileState();


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_12_PROLOG
#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_15_SPARSE_DATA \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_15_RPC_WRAPPERS \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_15_ACCESSORS \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_15_INCLASS \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_15_SPARSE_DATA \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_15_ACCESSORS \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_15_INCLASS_NO_PURE_DECLS \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNAI_API UClass* StaticClass<class UProjectileState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Projectiles_ProjectileState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
