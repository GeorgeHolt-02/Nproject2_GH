// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/EnemyProjectile_Shockwave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyProjectile_Shockwave() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemyProjectile_Shockwave_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemyProjectile_Shockwave();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_ABaseEnemyProjectile();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEnemyProjectile_Shockwave::StaticRegisterNativesAEnemyProjectile_Shockwave()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyProjectile_Shockwave);
	UClass* Z_Construct_UClass_AEnemyProjectile_Shockwave_NoRegister()
	{
		return AEnemyProjectile_Shockwave::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RingMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RingMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusGrowthSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusGrowthSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEnemyProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemyProjectile_Shockwave.h" },
		{ "ModuleRelativePath", "EnemyProjectile_Shockwave.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics::NewProp_RingMesh_MetaData[] = {
		{ "Category", "EnemyProjectile_Shockwave" },
		{ "Comment", "/** Shockwave mesh, also where collision occurs */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyProjectile_Shockwave.h" },
		{ "ToolTip", "Shockwave mesh, also where collision occurs" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics::NewProp_RingMesh = { "RingMesh", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyProjectile_Shockwave, RingMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics::NewProp_RingMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics::NewProp_RingMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics::NewProp_RadiusGrowthSpeed_MetaData[] = {
		{ "Category", "EnemyProjectile_Shockwave" },
		{ "Comment", "/** Rate of increase in shockwave radius */" },
		{ "ModuleRelativePath", "EnemyProjectile_Shockwave.h" },
		{ "ToolTip", "Rate of increase in shockwave radius" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics::NewProp_RadiusGrowthSpeed = { "RadiusGrowthSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyProjectile_Shockwave, RadiusGrowthSpeed), METADATA_PARAMS(Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics::NewProp_RadiusGrowthSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics::NewProp_RadiusGrowthSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics::NewProp_RingMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics::NewProp_RadiusGrowthSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyProjectile_Shockwave>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics::ClassParams = {
		&AEnemyProjectile_Shockwave::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyProjectile_Shockwave()
	{
		if (!Z_Registration_Info_UClass_AEnemyProjectile_Shockwave.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyProjectile_Shockwave.OuterSingleton, Z_Construct_UClass_AEnemyProjectile_Shockwave_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyProjectile_Shockwave.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<AEnemyProjectile_Shockwave>()
	{
		return AEnemyProjectile_Shockwave::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyProjectile_Shockwave);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyProjectile_Shockwave_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyProjectile_Shockwave_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyProjectile_Shockwave, AEnemyProjectile_Shockwave::StaticClass, TEXT("AEnemyProjectile_Shockwave"), &Z_Registration_Info_UClass_AEnemyProjectile_Shockwave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyProjectile_Shockwave), 885150578U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyProjectile_Shockwave_h_1553963950(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyProjectile_Shockwave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyProjectile_Shockwave_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
