// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/StampipedeSegment_Back.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStampipedeSegment_Back() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AStampipedeSegment_Back_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AStampipedeSegment_Back();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemy_BaseStampipedeSegment();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemyProjectile_StampipedeOrb_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemyProjectile_Shockwave_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AStampipedeSegment_Back::execShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shoot();
		P_NATIVE_END;
	}
	void AStampipedeSegment_Back::StaticRegisterNativesAStampipedeSegment_Back()
	{
		UClass* Class = AStampipedeSegment_Back::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Shoot", &AStampipedeSegment_Back::execShoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStampipedeSegment_Back_Shoot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStampipedeSegment_Back_Shoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStampipedeSegment_Back_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStampipedeSegment_Back, nullptr, "Shoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStampipedeSegment_Back_Shoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStampipedeSegment_Back_Shoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStampipedeSegment_Back_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStampipedeSegment_Back_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStampipedeSegment_Back);
	UClass* Z_Construct_UClass_AStampipedeSegment_Back_NoRegister()
	{
		return AStampipedeSegment_Back::StaticClass();
	}
	struct Z_Construct_UClass_AStampipedeSegment_Back_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegMeshL_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LegMeshL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegMeshR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LegMeshR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackLegMeshL_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackLegMeshL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackLegMeshR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackLegMeshR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackLegColliderL_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackLegColliderL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackLegColliderR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackLegColliderR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotOriginL_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShotOriginL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotOriginR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShotOriginR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBackLegLHit_MetaData[];
#endif
		static void NewProp_bBackLegLHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBackLegLHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBackLegRHit_MetaData[];
#endif
		static void NewProp_bBackLegRHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBackLegRHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHit_MetaData[];
#endif
		static void NewProp_bHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrbBP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OrbBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanShoot_MetaData[];
#endif
		static void NewProp_bCanShoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanShoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShootTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShockwaveOriginL_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShockwaveOriginL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShockwaveOriginR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShockwaveOriginR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanStomp_MetaData[];
#endif
		static void NewProp_bCanStomp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanStomp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LDefaultRot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LDefaultRot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RDefaultRot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RDefaultRot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_StompL_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle_StompL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_StompR_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle_StompR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_StompDelay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle_StompDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShockBP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShockBP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStampipedeSegment_Back_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy_BaseStampipedeSegment,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStampipedeSegment_Back_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStampipedeSegment_Back_Shoot, "Shoot" }, // 3980155646
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StampipedeSegment_Back.h" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_LegMeshL_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "Comment", "//Leg mesh (left)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
		{ "ToolTip", "Leg mesh (left)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_LegMeshL = { "LegMeshL", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Back, LegMeshL), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_LegMeshL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_LegMeshL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_LegMeshR_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "Comment", "//Leg mesh (right)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
		{ "ToolTip", "Leg mesh (right)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_LegMeshR = { "LegMeshR", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Back, LegMeshR), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_LegMeshR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_LegMeshR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_BackLegMeshL_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "Comment", "//Back leg mesh (left)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
		{ "ToolTip", "Back leg mesh (left)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_BackLegMeshL = { "BackLegMeshL", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Back, BackLegMeshL), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_BackLegMeshL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_BackLegMeshL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_BackLegMeshR_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "Comment", "//Back leg mesh (right)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
		{ "ToolTip", "Back leg mesh (right)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_BackLegMeshR = { "BackLegMeshR", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Back, BackLegMeshR), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_BackLegMeshR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_BackLegMeshR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_BackLegColliderL_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "Comment", "//Back leg hitbox (left)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
		{ "ToolTip", "Back leg hitbox (left)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_BackLegColliderL = { "BackLegColliderL", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Back, BackLegColliderL), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_BackLegColliderL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_BackLegColliderL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_BackLegColliderR_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "Comment", "//Back leg hitbox (right)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
		{ "ToolTip", "Back leg hitbox (right)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_BackLegColliderR = { "BackLegColliderR", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Back, BackLegColliderR), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_BackLegColliderR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_BackLegColliderR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShotOriginL_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "Comment", "//Back leg shot origin (left)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
		{ "ToolTip", "Back leg shot origin (left)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShotOriginL = { "ShotOriginL", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Back, ShotOriginL), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShotOriginL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShotOriginL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShotOriginR_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "Comment", "//Back leg shot origin (right)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
		{ "ToolTip", "Back leg shot origin (right)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShotOriginR = { "ShotOriginR", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Back, ShotOriginR), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShotOriginR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShotOriginR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bBackLegLHit_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "Comment", "//Whether or not the back legs should flash\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
		{ "ToolTip", "Whether or not the back legs should flash" },
	};
#endif
	void Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bBackLegLHit_SetBit(void* Obj)
	{
		((AStampipedeSegment_Back*)Obj)->bBackLegLHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bBackLegLHit = { "bBackLegLHit", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStampipedeSegment_Back), &Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bBackLegLHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bBackLegLHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bBackLegLHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bBackLegRHit_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
	};
#endif
	void Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bBackLegRHit_SetBit(void* Obj)
	{
		((AStampipedeSegment_Back*)Obj)->bBackLegRHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bBackLegRHit = { "bBackLegRHit", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStampipedeSegment_Back), &Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bBackLegRHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bBackLegRHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bBackLegRHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bHit_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "Comment", "//Whether or not this segment has been hit at all\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
		{ "ToolTip", "Whether or not this segment has been hit at all" },
	};
#endif
	void Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bHit_SetBit(void* Obj)
	{
		((AStampipedeSegment_Back*)Obj)->bHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStampipedeSegment_Back), &Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_OrbBP_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "Comment", "//Orb shot Blueprint reference\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
		{ "ToolTip", "Orb shot Blueprint reference" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_OrbBP = { "OrbBP", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Back, OrbBP), Z_Construct_UClass_AEnemyProjectile_StampipedeOrb_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_OrbBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_OrbBP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bCanShoot_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "Comment", "//Whether or not we can shoot orbs\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
		{ "ToolTip", "Whether or not we can shoot orbs" },
	};
#endif
	void Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bCanShoot_SetBit(void* Obj)
	{
		((AStampipedeSegment_Back*)Obj)->bCanShoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bCanShoot = { "bCanShoot", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStampipedeSegment_Back), &Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bCanShoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bCanShoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bCanShoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShootTimer_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "Comment", "//Shoot timer handle\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
		{ "ToolTip", "Shoot timer handle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShootTimer = { "ShootTimer", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Back, ShootTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShootTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShootTimer_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShockwaveOriginL_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "Comment", "//Shockwave origin (left)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
		{ "ToolTip", "Shockwave origin (left)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShockwaveOriginL = { "ShockwaveOriginL", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Back, ShockwaveOriginL), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShockwaveOriginL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShockwaveOriginL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShockwaveOriginR_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "Comment", "//Shockwave origin (right)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
		{ "ToolTip", "Shockwave origin (right)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShockwaveOriginR = { "ShockwaveOriginR", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Back, ShockwaveOriginR), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShockwaveOriginR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShockwaveOriginR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bCanStomp_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "Comment", "//Whether or we can stomp\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
		{ "ToolTip", "Whether or we can stomp" },
	};
#endif
	void Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bCanStomp_SetBit(void* Obj)
	{
		((AStampipedeSegment_Back*)Obj)->bCanStomp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bCanStomp = { "bCanStomp", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStampipedeSegment_Back), &Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bCanStomp_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bCanStomp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bCanStomp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_LDefaultRot_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "Comment", "//Default leg rotations\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
		{ "ToolTip", "Default leg rotations" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_LDefaultRot = { "LDefaultRot", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Back, LDefaultRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_LDefaultRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_LDefaultRot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_RDefaultRot_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_RDefaultRot = { "RDefaultRot", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Back, RDefaultRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_RDefaultRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_RDefaultRot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_Handle_StompL_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "Comment", "//Stomp timer handles\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
		{ "ToolTip", "Stomp timer handles" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_Handle_StompL = { "Handle_StompL", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Back, Handle_StompL), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_Handle_StompL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_Handle_StompL_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_Handle_StompR_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_Handle_StompR = { "Handle_StompR", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Back, Handle_StompR), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_Handle_StompR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_Handle_StompR_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_Handle_StompDelay_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_Handle_StompDelay = { "Handle_StompDelay", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Back, Handle_StompDelay), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_Handle_StompDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_Handle_StompDelay_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShockBP_MetaData[] = {
		{ "Category", "StampipedeSegment_Back" },
		{ "Comment", "//** Shockwave Blueprint */\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
		{ "ToolTip", "/ Shockwave Blueprint" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShockBP = { "ShockBP", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Back, ShockBP), Z_Construct_UClass_AEnemyProjectile_Shockwave_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShockBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShockBP_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStampipedeSegment_Back_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_LegMeshL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_LegMeshR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_BackLegMeshL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_BackLegMeshR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_BackLegColliderL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_BackLegColliderR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShotOriginL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShotOriginR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bBackLegLHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bBackLegRHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_OrbBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bCanShoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShootTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShockwaveOriginL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShockwaveOriginR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_bCanStomp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_LDefaultRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_RDefaultRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_Handle_StompL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_Handle_StompR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_Handle_StompDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Back_Statics::NewProp_ShockBP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStampipedeSegment_Back_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStampipedeSegment_Back>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::ClassParams = {
		&AStampipedeSegment_Back::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStampipedeSegment_Back_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Back_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Back_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStampipedeSegment_Back()
	{
		if (!Z_Registration_Info_UClass_AStampipedeSegment_Back.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStampipedeSegment_Back.OuterSingleton, Z_Construct_UClass_AStampipedeSegment_Back_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStampipedeSegment_Back.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<AStampipedeSegment_Back>()
	{
		return AStampipedeSegment_Back::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStampipedeSegment_Back);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Back_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Back_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStampipedeSegment_Back, AStampipedeSegment_Back::StaticClass, TEXT("AStampipedeSegment_Back"), &Z_Registration_Info_UClass_AStampipedeSegment_Back, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStampipedeSegment_Back), 3683780637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Back_h_1788258793(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Back_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Back_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
