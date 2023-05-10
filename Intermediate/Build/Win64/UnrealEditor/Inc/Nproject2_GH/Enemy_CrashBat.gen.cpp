// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/Enemy_CrashBat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_CrashBat() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemy_CrashBat_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemy_CrashBat();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_ABaseEnemy();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AExplosion_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AEnemy_CrashBat::StaticRegisterNativesAEnemy_CrashBat()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_CrashBat);
	UClass* Z_Construct_UClass_AEnemy_CrashBat_NoRegister()
	{
		return AEnemy_CrashBat::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_CrashBat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WingMeshL_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WingMeshL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WingMeshR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WingMeshR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_H_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_H_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrashSpeed_Current_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrashSpeed_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrashSpeed_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrashSpeed_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccelRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlapForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlapForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FallSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlapThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlapThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AggroRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AggroRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_Crash_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle_Crash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrashDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrashDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestroyBoundValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DestroyBoundValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultBehaviourOn_MetaData[];
#endif
		static void NewProp_bDefaultBehaviourOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultBehaviourOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCrashing_MetaData[];
#endif
		static void NewProp_bCrashing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrashing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionBP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ExplosionBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YawRotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPositioningSweep_MetaData[];
#endif
		static void NewProp_bPositioningSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPositioningSweep;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_CrashBat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Enemy_CrashBat.h" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "Comment", "//** Meshes *//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
		{ "ToolTip", "/ Meshes /" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_CrashBat, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_BaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_BaseMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_WingMeshL_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_WingMeshL = { "WingMeshL", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_CrashBat, WingMeshL), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_WingMeshL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_WingMeshL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_WingMeshR_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_WingMeshR = { "WingMeshR", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_CrashBat, WingMeshR), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_WingMeshR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_WingMeshR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_H_Speed_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "Comment", "//** Speed at which to follow the player */\n" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
		{ "ToolTip", "/ Speed at which to follow the player" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_H_Speed = { "H_Speed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_CrashBat, H_Speed), METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_H_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_H_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_CrashSpeed_Current_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "Comment", "//** Speed at which to move while crashing, current and max, respectively */\n" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
		{ "ToolTip", "/ Speed at which to move while crashing, current and max, respectively" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_CrashSpeed_Current = { "CrashSpeed_Current", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_CrashBat, CrashSpeed_Current), METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_CrashSpeed_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_CrashSpeed_Current_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_CrashSpeed_Max_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_CrashSpeed_Max = { "CrashSpeed_Max", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_CrashBat, CrashSpeed_Max), METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_CrashSpeed_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_CrashSpeed_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_AccelRate_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "Comment", "//** Rate of acceleration when crashing */\n" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
		{ "ToolTip", "/ Rate of acceleration when crashing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_AccelRate = { "AccelRate", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_CrashBat, AccelRate), METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_AccelRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_AccelRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_FlapForce_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "Comment", "//** Z-speed to add on every \"wing flap\" */\n" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
		{ "ToolTip", "/ Z-speed to add on every \"wing flap\"" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_FlapForce = { "FlapForce", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_CrashBat, FlapForce), METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_FlapForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_FlapForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "Comment", "//** Float representing the gravitational force to exert on this enemy */\n" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
		{ "ToolTip", "/ Float representing the gravitational force to exert on this enemy" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_CrashBat, Gravity), METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_Gravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_FallSpeed_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "Comment", "//** Current falling/Z-speed */\n" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
		{ "ToolTip", "/ Current falling/Z-speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_FallSpeed = { "FallSpeed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_CrashBat, FallSpeed), METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_FallSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_FallSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_FlapThreshold_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "Comment", "//** The Z-threshold at which to flap upwards *//\n" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
		{ "ToolTip", "/ The Z-threshold at which to flap upwards /" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_FlapThreshold = { "FlapThreshold", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_CrashBat, FlapThreshold), METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_FlapThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_FlapThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_AggroRadius_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "Comment", "//** Radius in which enemy can be aggroed by the player's presence */\n" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
		{ "ToolTip", "/ Radius in which enemy can be aggroed by the player's presence" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_AggroRadius = { "AggroRadius", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_CrashBat, AggroRadius), METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_AggroRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_AggroRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_Handle_Crash_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "Comment", "//** Crash toggle timer (handle and delay time, respectively) */\n" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
		{ "ToolTip", "/ Crash toggle timer (handle and delay time, respectively)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_Handle_Crash = { "Handle_Crash", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_CrashBat, Handle_Crash), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_Handle_Crash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_Handle_Crash_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_CrashDelay_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_CrashDelay = { "CrashDelay", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_CrashBat, CrashDelay), METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_CrashDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_CrashDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_DestroyBoundValue_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "Comment", "//** Float representing destroy boundaries *//\n" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
		{ "ToolTip", "/ Float representing destroy boundaries /" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_DestroyBoundValue = { "DestroyBoundValue", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_CrashBat, DestroyBoundValue), METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_DestroyBoundValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_DestroyBoundValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bDefaultBehaviourOn_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "Comment", "//** Whether or not the enemy should be in its normal behaviour pattern *//\n" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
		{ "ToolTip", "/ Whether or not the enemy should be in its normal behaviour pattern /" },
	};
#endif
	void Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bDefaultBehaviourOn_SetBit(void* Obj)
	{
		((AEnemy_CrashBat*)Obj)->bDefaultBehaviourOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bDefaultBehaviourOn = { "bDefaultBehaviourOn", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemy_CrashBat), &Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bDefaultBehaviourOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bDefaultBehaviourOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bDefaultBehaviourOn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bCrashing_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "Comment", "//** Whether or not the enemy is currently in the midst of crashing *//\n" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
		{ "ToolTip", "/ Whether or not the enemy is currently in the midst of crashing /" },
	};
#endif
	void Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bCrashing_SetBit(void* Obj)
	{
		((AEnemy_CrashBat*)Obj)->bCrashing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bCrashing = { "bCrashing", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemy_CrashBat), &Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bCrashing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bCrashing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bCrashing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_ExplosionBP_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "Comment", "//** Explosion Blueprint reference\n" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
		{ "ToolTip", "/ Explosion Blueprint reference" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_ExplosionBP = { "ExplosionBP", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_CrashBat, ExplosionBP), Z_Construct_UClass_AExplosion_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_ExplosionBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_ExplosionBP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_YawRotator_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "Comment", "/** The enemy's current yaw rotator */" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
		{ "ToolTip", "The enemy's current yaw rotator" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_YawRotator = { "YawRotator", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_CrashBat, YawRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_YawRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_YawRotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "Comment", "/** The direction the enemy is facing */" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
		{ "ToolTip", "The direction the enemy is facing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_CrashBat, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bPositioningSweep_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "Comment", "/** Whether or not a given sweep is done purely for positioning purposes */" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
		{ "ToolTip", "Whether or not a given sweep is done purely for positioning purposes" },
	};
#endif
	void Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bPositioningSweep_SetBit(void* Obj)
	{
		((AEnemy_CrashBat*)Obj)->bPositioningSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bPositioningSweep = { "bPositioningSweep", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemy_CrashBat), &Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bPositioningSweep_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bPositioningSweep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bPositioningSweep_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_CrashBat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_BaseMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_WingMeshL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_WingMeshR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_H_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_CrashSpeed_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_CrashSpeed_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_AccelRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_FlapForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_Gravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_FallSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_FlapThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_AggroRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_Handle_Crash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_CrashDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_DestroyBoundValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bDefaultBehaviourOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bCrashing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_ExplosionBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_YawRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bPositioningSweep,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_CrashBat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_CrashBat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_CrashBat_Statics::ClassParams = {
		&AEnemy_CrashBat::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemy_CrashBat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_CrashBat()
	{
		if (!Z_Registration_Info_UClass_AEnemy_CrashBat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_CrashBat.OuterSingleton, Z_Construct_UClass_AEnemy_CrashBat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy_CrashBat.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<AEnemy_CrashBat>()
	{
		return AEnemy_CrashBat::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_CrashBat);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_CrashBat_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_CrashBat_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_CrashBat, AEnemy_CrashBat::StaticClass, TEXT("AEnemy_CrashBat"), &Z_Registration_Info_UClass_AEnemy_CrashBat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_CrashBat), 2274198675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_CrashBat_h_4017937107(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_CrashBat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_CrashBat_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
