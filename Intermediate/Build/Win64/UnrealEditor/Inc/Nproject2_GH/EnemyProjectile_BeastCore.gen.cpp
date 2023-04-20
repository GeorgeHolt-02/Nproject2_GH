// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/EnemyProjectile_BeastCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyProjectile_BeastCore() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemyProjectile_BeastCore_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemyProjectile_BeastCore();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_ABaseEnemyProjectile();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEnemyProjectile_BeastCore::StaticRegisterNativesAEnemyProjectile_BeastCore()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyProjectile_BeastCore);
	UClass* Z_Construct_UClass_AEnemyProjectile_BeastCore_NoRegister()
	{
		return AEnemyProjectile_BeastCore::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyProjectile_BeastCore_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShotMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyProjectile_BeastCore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEnemyProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyProjectile_BeastCore_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemyProjectile_BeastCore.h" },
		{ "ModuleRelativePath", "EnemyProjectile_BeastCore.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyProjectile_BeastCore_Statics::NewProp_ShotMesh_MetaData[] = {
		{ "Category", "EnemyProjectile_BeastCore" },
		{ "Comment", "/** Shot mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyProjectile_BeastCore.h" },
		{ "ToolTip", "Shot mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyProjectile_BeastCore_Statics::NewProp_ShotMesh = { "ShotMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyProjectile_BeastCore, ShotMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyProjectile_BeastCore_Statics::NewProp_ShotMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_BeastCore_Statics::NewProp_ShotMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyProjectile_BeastCore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyProjectile_BeastCore_Statics::NewProp_ShotMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyProjectile_BeastCore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyProjectile_BeastCore>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyProjectile_BeastCore_Statics::ClassParams = {
		&AEnemyProjectile_BeastCore::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyProjectile_BeastCore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_BeastCore_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyProjectile_BeastCore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_BeastCore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyProjectile_BeastCore()
	{
		if (!Z_Registration_Info_UClass_AEnemyProjectile_BeastCore.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyProjectile_BeastCore.OuterSingleton, Z_Construct_UClass_AEnemyProjectile_BeastCore_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyProjectile_BeastCore.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<AEnemyProjectile_BeastCore>()
	{
		return AEnemyProjectile_BeastCore::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyProjectile_BeastCore);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyProjectile_BeastCore_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyProjectile_BeastCore_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyProjectile_BeastCore, AEnemyProjectile_BeastCore::StaticClass, TEXT("AEnemyProjectile_BeastCore"), &Z_Registration_Info_UClass_AEnemyProjectile_BeastCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyProjectile_BeastCore), 478009553U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyProjectile_BeastCore_h_3894017975(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyProjectile_BeastCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyProjectile_BeastCore_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
