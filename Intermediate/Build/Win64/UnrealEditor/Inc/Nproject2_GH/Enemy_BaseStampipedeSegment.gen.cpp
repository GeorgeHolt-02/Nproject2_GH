// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/Enemy_BaseStampipedeSegment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_BaseStampipedeSegment() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemy_BaseStampipedeSegment_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemy_BaseStampipedeSegment();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_ABaseEnemy();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEnemy_BaseStampipedeSegment::StaticRegisterNativesAEnemy_BaseStampipedeSegment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_BaseStampipedeSegment);
	UClass* Z_Construct_UClass_AEnemy_BaseStampipedeSegment_NoRegister()
	{
		return AEnemy_BaseStampipedeSegment::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_BaseStampipedeSegment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_BaseStampipedeSegment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_BaseStampipedeSegment_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Enemy_BaseStampipedeSegment.h" },
		{ "ModuleRelativePath", "Enemy_BaseStampipedeSegment.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_BaseStampipedeSegment_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "Category", "Enemy_BaseStampipedeSegment" },
		{ "Comment", "//Visual mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_BaseStampipedeSegment.h" },
		{ "ToolTip", "Visual mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_BaseStampipedeSegment_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_BaseStampipedeSegment, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_BaseStampipedeSegment_Statics::NewProp_BaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BaseStampipedeSegment_Statics::NewProp_BaseMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_BaseStampipedeSegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BaseStampipedeSegment_Statics::NewProp_BaseMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_BaseStampipedeSegment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_BaseStampipedeSegment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_BaseStampipedeSegment_Statics::ClassParams = {
		&AEnemy_BaseStampipedeSegment::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemy_BaseStampipedeSegment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BaseStampipedeSegment_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_BaseStampipedeSegment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BaseStampipedeSegment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_BaseStampipedeSegment()
	{
		if (!Z_Registration_Info_UClass_AEnemy_BaseStampipedeSegment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_BaseStampipedeSegment.OuterSingleton, Z_Construct_UClass_AEnemy_BaseStampipedeSegment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy_BaseStampipedeSegment.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<AEnemy_BaseStampipedeSegment>()
	{
		return AEnemy_BaseStampipedeSegment::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_BaseStampipedeSegment);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_BaseStampipedeSegment_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_BaseStampipedeSegment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_BaseStampipedeSegment, AEnemy_BaseStampipedeSegment::StaticClass, TEXT("AEnemy_BaseStampipedeSegment"), &Z_Registration_Info_UClass_AEnemy_BaseStampipedeSegment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_BaseStampipedeSegment), 4227431832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_BaseStampipedeSegment_h_2384977438(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_BaseStampipedeSegment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_BaseStampipedeSegment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
