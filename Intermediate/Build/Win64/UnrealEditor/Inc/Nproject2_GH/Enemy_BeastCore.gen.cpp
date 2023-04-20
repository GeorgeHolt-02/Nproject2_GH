// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/Enemy_BeastCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_BeastCore() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemy_BeastCore_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemy_BeastCore();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_ABaseEnemy();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemyProjectile_BeastCore_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void AEnemy_BeastCore::StaticRegisterNativesAEnemy_BeastCore()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_BeastCore);
	UClass* Z_Construct_UClass_AEnemy_BeastCore_NoRegister()
	{
		return AEnemy_BeastCore::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_BeastCore_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShotTransforms_Normal_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotTransforms_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShotTransforms_Normal;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShotTransforms_Explosion_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotTransforms_Explosion_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShotTransforms_Explosion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxProjTravelDistance_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxProjTravelDistance_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ShotTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanShoot_MetaData[];
#endif
		static void NewProp_bCanShoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanShoot;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundShots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoundShots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FoundShots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotBP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShotBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExplosionTimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionDelayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionDelayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarningMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WarningMat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_BeastCore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_BeastCore_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Enemy_BeastCore.h" },
		{ "ModuleRelativePath", "Enemy_BeastCore.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Enemy_BeastCore" },
		{ "Comment", "//** Mesh */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_BeastCore.h" },
		{ "ToolTip", "/ Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_BeastCore, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotTransforms_Normal_Inner = { "ShotTransforms_Normal", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotTransforms_Normal_MetaData[] = {
		{ "Category", "Enemy_BeastCore" },
		{ "Comment", "//** Normal shot transform array */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_BeastCore.h" },
		{ "ToolTip", "/ Normal shot transform array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotTransforms_Normal = { "ShotTransforms_Normal", nullptr, (EPropertyFlags)0x001000800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_BeastCore, ShotTransforms_Normal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotTransforms_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotTransforms_Normal_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotTransforms_Explosion_Inner = { "ShotTransforms_Explosion", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotTransforms_Explosion_MetaData[] = {
		{ "Category", "Enemy_BeastCore" },
		{ "Comment", "//** Explosion shot transform array */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_BeastCore.h" },
		{ "ToolTip", "/ Explosion shot transform array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotTransforms_Explosion = { "ShotTransforms_Explosion", nullptr, (EPropertyFlags)0x001000800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_BeastCore, ShotTransforms_Explosion), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotTransforms_Explosion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotTransforms_Explosion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//** Movement speed */\n" },
		{ "ModuleRelativePath", "Enemy_BeastCore.h" },
		{ "ToolTip", "/ Movement speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_BeastCore, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_MaxProjTravelDistance_Normal_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "//** The amount of distance a projectile can travel before it despawns */\n" },
		{ "ModuleRelativePath", "Enemy_BeastCore.h" },
		{ "ToolTip", "/ The amount of distance a projectile can travel before it despawns" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_MaxProjTravelDistance_Normal = { "MaxProjTravelDistance_Normal", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_BeastCore, MaxProjTravelDistance_Normal), METADATA_PARAMS(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_MaxProjTravelDistance_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_MaxProjTravelDistance_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotTag_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "/** The name of the projectile currently being checked when determining\n\x09whether or not the player can fire again */" },
		{ "ModuleRelativePath", "Enemy_BeastCore.h" },
		{ "ToolTip", "The name of the projectile currently being checked when determining\n      whether or not the player can fire again" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotTag = { "ShotTag", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_BeastCore, ShotTag), METADATA_PARAMS(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_bCanShoot_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "/** Whether or not the enemy can actually shoot */" },
		{ "ModuleRelativePath", "Enemy_BeastCore.h" },
		{ "ToolTip", "Whether or not the enemy can actually shoot" },
	};
#endif
	void Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_bCanShoot_SetBit(void* Obj)
	{
		((AEnemy_BeastCore*)Obj)->bCanShoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_bCanShoot = { "bCanShoot", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemy_BeastCore), &Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_bCanShoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_bCanShoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_bCanShoot_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_FoundShots_Inner = { "FoundShots", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_FoundShots_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "//** The number of fired projectiles currently in the scene */\n" },
		{ "ModuleRelativePath", "Enemy_BeastCore.h" },
		{ "ToolTip", "/ The number of fired projectiles currently in the scene" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_FoundShots = { "FoundShots", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_BeastCore, FoundShots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_FoundShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_FoundShots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotBP_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "//** Projectile Blueprint */\n" },
		{ "ModuleRelativePath", "Enemy_BeastCore.h" },
		{ "ToolTip", "/ Projectile Blueprint" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotBP = { "ShotBP", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_BeastCore, ShotBP), Z_Construct_UClass_AEnemyProjectile_BeastCore_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotBP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_Rotator_MetaData[] = {
		{ "Category", "Enemy_BeastCore" },
		{ "Comment", "/** The enemy's current rotator */" },
		{ "ModuleRelativePath", "Enemy_BeastCore.h" },
		{ "ToolTip", "The enemy's current rotator" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_BeastCore, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_Rotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_Rotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Enemy_BeastCore" },
		{ "Comment", "/** The direction the enemy is facing */" },
		{ "ModuleRelativePath", "Enemy_BeastCore.h" },
		{ "ToolTip", "The direction the enemy is facing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_BeastCore, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ExplosionTimerHandle_MetaData[] = {
		{ "Category", "Enemy_BeastCore" },
		{ "Comment", "/** Handle for explosion timer */" },
		{ "ModuleRelativePath", "Enemy_BeastCore.h" },
		{ "ToolTip", "Handle for explosion timer" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ExplosionTimerHandle = { "ExplosionTimerHandle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_BeastCore, ExplosionTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ExplosionTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ExplosionTimerHandle_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ExplosionDelayTime_MetaData[] = {
		{ "Category", "Enemy_BeastCore" },
		{ "Comment", "/** Delay time until explosion */" },
		{ "ModuleRelativePath", "Enemy_BeastCore.h" },
		{ "ToolTip", "Delay time until explosion" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ExplosionDelayTime = { "ExplosionDelayTime", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_BeastCore, ExplosionDelayTime), METADATA_PARAMS(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ExplosionDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ExplosionDelayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_WarningMat_MetaData[] = {
		{ "Category", "Enemy_BeastCore" },
		{ "Comment", "/** Explosion warning material reference */" },
		{ "ModuleRelativePath", "Enemy_BeastCore.h" },
		{ "ToolTip", "Explosion warning material reference" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_WarningMat = { "WarningMat", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_BeastCore, WarningMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_WarningMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_WarningMat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_BeastCore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotTransforms_Normal_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotTransforms_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotTransforms_Explosion_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotTransforms_Explosion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_MaxProjTravelDistance_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_bCanShoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_FoundShots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_FoundShots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ShotBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_Rotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ExplosionTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_ExplosionDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BeastCore_Statics::NewProp_WarningMat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_BeastCore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_BeastCore>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_BeastCore_Statics::ClassParams = {
		&AEnemy_BeastCore::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemy_BeastCore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BeastCore_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_BeastCore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BeastCore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_BeastCore()
	{
		if (!Z_Registration_Info_UClass_AEnemy_BeastCore.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_BeastCore.OuterSingleton, Z_Construct_UClass_AEnemy_BeastCore_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy_BeastCore.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<AEnemy_BeastCore>()
	{
		return AEnemy_BeastCore::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_BeastCore);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_BeastCore_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_BeastCore_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_BeastCore, AEnemy_BeastCore::StaticClass, TEXT("AEnemy_BeastCore"), &Z_Registration_Info_UClass_AEnemy_BeastCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_BeastCore), 2414979975U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_BeastCore_h_1461840457(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_BeastCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_BeastCore_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
