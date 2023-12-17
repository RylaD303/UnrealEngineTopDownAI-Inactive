// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/DamageableActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
struct FDamageEvent;
#ifdef TOPDOWNAI_DamageableActor_generated_h
#error "DamageableActor.generated.h already included, missing '#pragma once' in DamageableActor.h"
#endif
#define TOPDOWNAI_DamageableActor_generated_h

#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_10_SPARSE_DATA
#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_10_ACCESSORS
#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADamageableActor(); \
	friend struct Z_Construct_UClass_ADamageableActor_Statics; \
public: \
	DECLARE_CLASS(ADamageableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownAI"), NO_API) \
	DECLARE_SERIALIZER(ADamageableActor)


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_10_INCLASS \
private: \
	static void StaticRegisterNativesADamageableActor(); \
	friend struct Z_Construct_UClass_ADamageableActor_Statics; \
public: \
	DECLARE_CLASS(ADamageableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownAI"), NO_API) \
	DECLARE_SERIALIZER(ADamageableActor)


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADamageableActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADamageableActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADamageableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADamageableActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADamageableActor(ADamageableActor&&); \
	NO_API ADamageableActor(const ADamageableActor&); \
public: \
	NO_API virtual ~ADamageableActor();


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADamageableActor(ADamageableActor&&); \
	NO_API ADamageableActor(const ADamageableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADamageableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADamageableActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADamageableActor) \
	NO_API virtual ~ADamageableActor();


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_7_PROLOG
#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_10_SPARSE_DATA \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_10_RPC_WRAPPERS \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_10_ACCESSORS \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_10_INCLASS \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_10_SPARSE_DATA \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_10_ACCESSORS \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_10_INCLASS_NO_PURE_DECLS \
	FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNAI_API UClass* StaticClass<class ADamageableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_Demonless_Plugins_TopDownAI_Source_TopDownAI_Public_Actors_DamageableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
