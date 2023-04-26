// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/Enemy_ShieldShocker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_ShieldShocker() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemy_ShieldShocker_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemy_ShieldShocker();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_ABaseEnemy();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemyProjectile_Shockwave_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	void AEnemy_ShieldShocker::StaticRegisterNativesAEnemy_ShieldShocker()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_ShieldShocker);
	UClass* Z_Construct_UClass_AEnemy_ShieldShocker_NoRegister()
	{
		return AEnemy_ShieldShocker::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_ShieldShocker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShieldMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShieldMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoreMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CoreMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClosedTransform_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClosedTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenTransform_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShockwaveTransform_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShockwaveTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxShockRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxShockRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShockTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ShockTag;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShockBP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShockBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AggroRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AggroRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShieldTransitionDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShieldTransitionDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShieldTransitionAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShieldTransitionAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_Shoot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle_Shoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShootDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_Close_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle_Close;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloseDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloseDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOpen_MetaData[];
#endif
		static void NewProp_bOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpen;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_ShieldShocker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_ShieldShocker_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Enemy_ShieldShocker.h" },
		{ "ModuleRelativePath", "Enemy_ShieldShocker.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShieldMesh_MetaData[] = {
		{ "Category", "Enemy_ShieldShocker" },
		{ "Comment", "//** Shield mesh */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_ShieldShocker.h" },
		{ "ToolTip", "/ Shield mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShieldMesh = { "ShieldMesh", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_ShieldShocker, ShieldMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShieldMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShieldMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_CoreMesh_MetaData[] = {
		{ "Category", "Enemy_ShieldShocker" },
		{ "Comment", "//** Core mesh */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_ShieldShocker.h" },
		{ "ToolTip", "/ Core mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_CoreMesh = { "CoreMesh", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_ShieldShocker, CoreMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_CoreMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_CoreMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ClosedTransform_MetaData[] = {
		{ "Category", "Enemy_ShieldShocker" },
		{ "Comment", "//** Transform shield moves to when closed */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_ShieldShocker.h" },
		{ "ToolTip", "/ Transform shield moves to when closed" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ClosedTransform = { "ClosedTransform", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_ShieldShocker, ClosedTransform), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ClosedTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ClosedTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_OpenTransform_MetaData[] = {
		{ "Category", "Enemy_ShieldShocker" },
		{ "Comment", "//** Transform shield moves to when open */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_ShieldShocker.h" },
		{ "ToolTip", "/ Transform shield moves to when open" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_OpenTransform = { "OpenTransform", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_ShieldShocker, OpenTransform), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_OpenTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_OpenTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShockwaveTransform_MetaData[] = {
		{ "Category", "Enemy_ShieldShocker" },
		{ "Comment", "//** Shockwave origin transform */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_ShieldShocker.h" },
		{ "ToolTip", "/ Shockwave origin transform" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShockwaveTransform = { "ShockwaveTransform", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_ShieldShocker, ShockwaveTransform), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShockwaveTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShockwaveTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_MaxShockRadius_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "//** The radius a shockwave can grow to before it despawns */\n" },
		{ "ModuleRelativePath", "Enemy_ShieldShocker.h" },
		{ "ToolTip", "/ The radius a shockwave can grow to before it despawns" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_MaxShockRadius = { "MaxShockRadius", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_ShieldShocker, MaxShockRadius), METADATA_PARAMS(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_MaxShockRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_MaxShockRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShockTag_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "/** The name of the shockwave currently being checked when determining\n\x09whether or not the enemy can fire again */" },
		{ "ModuleRelativePath", "Enemy_ShieldShocker.h" },
		{ "ToolTip", "The name of the shockwave currently being checked when determining\n      whether or not the enemy can fire again" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShockTag = { "ShockTag", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_ShieldShocker, ShockTag), METADATA_PARAMS(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShockTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShockTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_bCanShoot_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "/** Whether or not the enemy can actually shoot */" },
		{ "ModuleRelativePath", "Enemy_ShieldShocker.h" },
		{ "ToolTip", "Whether or not the enemy can actually shoot" },
	};
#endif
	void Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_bCanShoot_SetBit(void* Obj)
	{
		((AEnemy_ShieldShocker*)Obj)->bCanShoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_bCanShoot = { "bCanShoot", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemy_ShieldShocker), &Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_bCanShoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_bCanShoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_bCanShoot_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_FoundShots_Inner = { "FoundShots", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_FoundShots_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "//** The number of fired shockwaves currently in the scene */\n" },
		{ "ModuleRelativePath", "Enemy_ShieldShocker.h" },
		{ "ToolTip", "/ The number of fired shockwaves currently in the scene" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_FoundShots = { "FoundShots", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_ShieldShocker, FoundShots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_FoundShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_FoundShots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShockBP_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "//** Shockwave Blueprint */\n" },
		{ "ModuleRelativePath", "Enemy_ShieldShocker.h" },
		{ "ToolTip", "/ Shockwave Blueprint" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShockBP = { "ShockBP", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_ShieldShocker, ShockBP), Z_Construct_UClass_AEnemyProjectile_Shockwave_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShockBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShockBP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_AggroRadius_MetaData[] = {
		{ "Category", "Enemy_ShieldShocker" },
		{ "Comment", "//** Player detection radius */\n" },
		{ "ModuleRelativePath", "Enemy_ShieldShocker.h" },
		{ "ToolTip", "/ Player detection radius" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_AggroRadius = { "AggroRadius", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_ShieldShocker, AggroRadius), METADATA_PARAMS(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_AggroRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_AggroRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShieldTransitionDuration_MetaData[] = {
		{ "Category", "Enemy_ShieldShocker" },
		{ "Comment", "//** Shield open/close duration */\n" },
		{ "ModuleRelativePath", "Enemy_ShieldShocker.h" },
		{ "ToolTip", "/ Shield open/close duration" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShieldTransitionDuration = { "ShieldTransitionDuration", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_ShieldShocker, ShieldTransitionDuration), METADATA_PARAMS(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShieldTransitionDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShieldTransitionDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShieldTransitionAlpha_MetaData[] = {
		{ "Category", "Enemy_ShieldShocker" },
		{ "Comment", "//** Current shield transition alpha */\n" },
		{ "ModuleRelativePath", "Enemy_ShieldShocker.h" },
		{ "ToolTip", "/ Current shield transition alpha" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShieldTransitionAlpha = { "ShieldTransitionAlpha", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_ShieldShocker, ShieldTransitionAlpha), METADATA_PARAMS(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShieldTransitionAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShieldTransitionAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_TimerHandle_Shoot_MetaData[] = {
		{ "Category", "Enemy_ShieldShocker" },
		{ "Comment", "//** Shoot timer */\n" },
		{ "ModuleRelativePath", "Enemy_ShieldShocker.h" },
		{ "ToolTip", "/ Shoot timer" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_TimerHandle_Shoot = { "TimerHandle_Shoot", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_ShieldShocker, TimerHandle_Shoot), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_TimerHandle_Shoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_TimerHandle_Shoot_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShootDelay_MetaData[] = {
		{ "Category", "Enemy_ShieldShocker" },
		{ "ModuleRelativePath", "Enemy_ShieldShocker.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShootDelay = { "ShootDelay", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_ShieldShocker, ShootDelay), METADATA_PARAMS(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShootDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShootDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_TimerHandle_Close_MetaData[] = {
		{ "Category", "Enemy_ShieldShocker" },
		{ "Comment", "//** Close shield timer */\n" },
		{ "ModuleRelativePath", "Enemy_ShieldShocker.h" },
		{ "ToolTip", "/ Close shield timer" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_TimerHandle_Close = { "TimerHandle_Close", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_ShieldShocker, TimerHandle_Close), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_TimerHandle_Close_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_TimerHandle_Close_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_CloseDelay_MetaData[] = {
		{ "Category", "Enemy_ShieldShocker" },
		{ "ModuleRelativePath", "Enemy_ShieldShocker.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_CloseDelay = { "CloseDelay", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_ShieldShocker, CloseDelay), METADATA_PARAMS(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_CloseDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_CloseDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_bOpen_MetaData[] = {
		{ "Category", "Enemy_ShieldShocker" },
		{ "Comment", "//** Whether or not the shield should be open */\n" },
		{ "ModuleRelativePath", "Enemy_ShieldShocker.h" },
		{ "ToolTip", "/ Whether or not the shield should be open" },
	};
#endif
	void Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_bOpen_SetBit(void* Obj)
	{
		((AEnemy_ShieldShocker*)Obj)->bOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_bOpen = { "bOpen", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemy_ShieldShocker), &Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_bOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_bOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_bOpen_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_ShieldShocker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShieldMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_CoreMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ClosedTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_OpenTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShockwaveTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_MaxShockRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShockTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_bCanShoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_FoundShots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_FoundShots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShockBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_AggroRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShieldTransitionDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShieldTransitionAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_TimerHandle_Shoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_ShootDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_TimerHandle_Close,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_CloseDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_ShieldShocker_Statics::NewProp_bOpen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_ShieldShocker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_ShieldShocker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_ShieldShocker_Statics::ClassParams = {
		&AEnemy_ShieldShocker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemy_ShieldShocker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_ShieldShocker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_ShieldShocker()
	{
		if (!Z_Registration_Info_UClass_AEnemy_ShieldShocker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_ShieldShocker.OuterSingleton, Z_Construct_UClass_AEnemy_ShieldShocker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy_ShieldShocker.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<AEnemy_ShieldShocker>()
	{
		return AEnemy_ShieldShocker::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_ShieldShocker);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_ShieldShocker_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_ShieldShocker_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_ShieldShocker, AEnemy_ShieldShocker::StaticClass, TEXT("AEnemy_ShieldShocker"), &Z_Registration_Info_UClass_AEnemy_ShieldShocker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_ShieldShocker), 1283238076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_ShieldShocker_h_2082376337(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_ShieldShocker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_ShieldShocker_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
