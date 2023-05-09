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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDiveModeActive_MetaData[];
#endif
		static void NewProp_bDiveModeActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDiveModeActive;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bDiveModeActive_MetaData[] = {
		{ "Category", "Enemy_CrashBat" },
		{ "Comment", "//** Whether or not the enemy's dive has been activated *//\n" },
		{ "ModuleRelativePath", "Enemy_CrashBat.h" },
		{ "ToolTip", "/ Whether or not the enemy's dive has been activated /" },
	};
#endif
	void Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bDiveModeActive_SetBit(void* Obj)
	{
		((AEnemy_CrashBat*)Obj)->bDiveModeActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bDiveModeActive = { "bDiveModeActive", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemy_CrashBat), &Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bDiveModeActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bDiveModeActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bDiveModeActive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_CrashBat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_BaseMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_WingMeshL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_WingMeshR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_FlapForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_Gravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_FallSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_FlapThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_CrashBat_Statics::NewProp_bDiveModeActive,
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
		{ Z_Construct_UClass_AEnemy_CrashBat, AEnemy_CrashBat::StaticClass, TEXT("AEnemy_CrashBat"), &Z_Registration_Info_UClass_AEnemy_CrashBat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_CrashBat), 4173410810U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_CrashBat_h_3392260156(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_CrashBat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_CrashBat_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
