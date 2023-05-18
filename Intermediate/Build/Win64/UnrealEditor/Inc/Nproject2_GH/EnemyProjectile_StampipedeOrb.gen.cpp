// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/EnemyProjectile_StampipedeOrb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyProjectile_StampipedeOrb() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemyProjectile_StampipedeOrb_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemyProjectile_StampipedeOrb();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_ABaseEnemyProjectile();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEnemyProjectile_StampipedeOrb::StaticRegisterNativesAEnemyProjectile_StampipedeOrb()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyProjectile_StampipedeOrb);
	UClass* Z_Construct_UClass_AEnemyProjectile_StampipedeOrb_NoRegister()
	{
		return AEnemyProjectile_StampipedeOrb::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyProjectile_StampipedeOrb_Statics
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
	UObject* (*const Z_Construct_UClass_AEnemyProjectile_StampipedeOrb_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEnemyProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyProjectile_StampipedeOrb_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemyProjectile_StampipedeOrb.h" },
		{ "ModuleRelativePath", "EnemyProjectile_StampipedeOrb.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyProjectile_StampipedeOrb_Statics::NewProp_ShotMesh_MetaData[] = {
		{ "Category", "EnemyProjectile_StampipedeOrb" },
		{ "Comment", "/** Shot mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyProjectile_StampipedeOrb.h" },
		{ "ToolTip", "Shot mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyProjectile_StampipedeOrb_Statics::NewProp_ShotMesh = { "ShotMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyProjectile_StampipedeOrb, ShotMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyProjectile_StampipedeOrb_Statics::NewProp_ShotMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_StampipedeOrb_Statics::NewProp_ShotMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyProjectile_StampipedeOrb_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyProjectile_StampipedeOrb_Statics::NewProp_ShotMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyProjectile_StampipedeOrb_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyProjectile_StampipedeOrb>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyProjectile_StampipedeOrb_Statics::ClassParams = {
		&AEnemyProjectile_StampipedeOrb::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyProjectile_StampipedeOrb_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_StampipedeOrb_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyProjectile_StampipedeOrb_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_StampipedeOrb_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyProjectile_StampipedeOrb()
	{
		if (!Z_Registration_Info_UClass_AEnemyProjectile_StampipedeOrb.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyProjectile_StampipedeOrb.OuterSingleton, Z_Construct_UClass_AEnemyProjectile_StampipedeOrb_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyProjectile_StampipedeOrb.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<AEnemyProjectile_StampipedeOrb>()
	{
		return AEnemyProjectile_StampipedeOrb::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyProjectile_StampipedeOrb);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyProjectile_StampipedeOrb_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyProjectile_StampipedeOrb_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyProjectile_StampipedeOrb, AEnemyProjectile_StampipedeOrb::StaticClass, TEXT("AEnemyProjectile_StampipedeOrb"), &Z_Registration_Info_UClass_AEnemyProjectile_StampipedeOrb, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyProjectile_StampipedeOrb), 2953515891U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyProjectile_StampipedeOrb_h_1473206380(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyProjectile_StampipedeOrb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyProjectile_StampipedeOrb_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
