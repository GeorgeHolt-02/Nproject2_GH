// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef NPROJECT2_GH_Explosion_generated_h
#error "Explosion.generated.h already included, missing '#pragma once' in Explosion.h"
#endif
#define NPROJECT2_GH_Explosion_generated_h

#define FID_Nproject2_GH_Source_Nproject2_GH_Explosion_h_12_SPARSE_DATA
#define FID_Nproject2_GH_Source_Nproject2_GH_Explosion_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroyExplosion); \
	DECLARE_FUNCTION(execOnOverlapStart);


#define FID_Nproject2_GH_Source_Nproject2_GH_Explosion_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroyExplosion); \
	DECLARE_FUNCTION(execOnOverlapStart);


#define FID_Nproject2_GH_Source_Nproject2_GH_Explosion_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExplosion(); \
	friend struct Z_Construct_UClass_AExplosion_Statics; \
public: \
	DECLARE_CLASS(AExplosion, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Nproject2_GH"), NO_API) \
	DECLARE_SERIALIZER(AExplosion)


#define FID_Nproject2_GH_Source_Nproject2_GH_Explosion_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAExplosion(); \
	friend struct Z_Construct_UClass_AExplosion_Statics; \
public: \
	DECLARE_CLASS(AExplosion, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Nproject2_GH"), NO_API) \
	DECLARE_SERIALIZER(AExplosion)


#define FID_Nproject2_GH_Source_Nproject2_GH_Explosion_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExplosion(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExplosion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosion(AExplosion&&); \
	NO_API AExplosion(const AExplosion&); \
public:


#define FID_Nproject2_GH_Source_Nproject2_GH_Explosion_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosion(AExplosion&&); \
	NO_API AExplosion(const AExplosion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosion); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExplosion)


#define FID_Nproject2_GH_Source_Nproject2_GH_Explosion_h_9_PROLOG
#define FID_Nproject2_GH_Source_Nproject2_GH_Explosion_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Nproject2_GH_Source_Nproject2_GH_Explosion_h_12_SPARSE_DATA \
	FID_Nproject2_GH_Source_Nproject2_GH_Explosion_h_12_RPC_WRAPPERS \
	FID_Nproject2_GH_Source_Nproject2_GH_Explosion_h_12_INCLASS \
	FID_Nproject2_GH_Source_Nproject2_GH_Explosion_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Nproject2_GH_Source_Nproject2_GH_Explosion_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Nproject2_GH_Source_Nproject2_GH_Explosion_h_12_SPARSE_DATA \
	FID_Nproject2_GH_Source_Nproject2_GH_Explosion_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Nproject2_GH_Source_Nproject2_GH_Explosion_h_12_INCLASS_NO_PURE_DECLS \
	FID_Nproject2_GH_Source_Nproject2_GH_Explosion_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NPROJECT2_GH_API UClass* StaticClass<class AExplosion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Nproject2_GH_Source_Nproject2_GH_Explosion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
