// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/EnemyWave_Spline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyWave_Spline() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemyWave_Spline_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemyWave_Spline();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
// End Cross Module References
	void AEnemyWave_Spline::StaticRegisterNativesAEnemyWave_Spline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyWave_Spline);
	UClass* Z_Construct_UClass_AEnemyWave_Spline_NoRegister()
	{
		return AEnemyWave_Spline::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyWave_Spline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyBP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyBP;
		static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyReferences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyReferences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnemyReferences;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyWave_Spline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyWave_Spline_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyWave_Spline.h" },
		{ "ModuleRelativePath", "EnemyWave_Spline.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyWave_Spline_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "EnemyWave_Spline" },
		{ "Comment", "//** Spline */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyWave_Spline.h" },
		{ "ToolTip", "/ Spline" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyWave_Spline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x001000000008081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyWave_Spline, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyWave_Spline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyWave_Spline_Statics::NewProp_Spline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyWave_Spline_Statics::NewProp_EnemyBP_MetaData[] = {
		{ "Category", "EnemyWave_Spline" },
		{ "Comment", "//** Enemy class to spawn */\n" },
		{ "ModuleRelativePath", "EnemyWave_Spline.h" },
		{ "ToolTip", "/ Enemy class to spawn" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyWave_Spline_Statics::NewProp_EnemyBP = { "EnemyBP", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyWave_Spline, EnemyBP), Z_Construct_UClass_ABaseEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemyWave_Spline_Statics::NewProp_EnemyBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyWave_Spline_Statics::NewProp_EnemyBP_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyWave_Spline_Statics::NewProp_EnemyReferences_Inner = { "EnemyReferences", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyWave_Spline_Statics::NewProp_EnemyReferences_MetaData[] = {
		{ "Category", "EnemyWave_Spline" },
		{ "Comment", "//** Enemy class reference array */\n" },
		{ "ModuleRelativePath", "EnemyWave_Spline.h" },
		{ "ToolTip", "/ Enemy class reference array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyWave_Spline_Statics::NewProp_EnemyReferences = { "EnemyReferences", nullptr, (EPropertyFlags)0x0014000000000815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyWave_Spline, EnemyReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemyWave_Spline_Statics::NewProp_EnemyReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyWave_Spline_Statics::NewProp_EnemyReferences_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyWave_Spline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyWave_Spline_Statics::NewProp_Spline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyWave_Spline_Statics::NewProp_EnemyBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyWave_Spline_Statics::NewProp_EnemyReferences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyWave_Spline_Statics::NewProp_EnemyReferences,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyWave_Spline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyWave_Spline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyWave_Spline_Statics::ClassParams = {
		&AEnemyWave_Spline::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyWave_Spline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyWave_Spline_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyWave_Spline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyWave_Spline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyWave_Spline()
	{
		if (!Z_Registration_Info_UClass_AEnemyWave_Spline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyWave_Spline.OuterSingleton, Z_Construct_UClass_AEnemyWave_Spline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyWave_Spline.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<AEnemyWave_Spline>()
	{
		return AEnemyWave_Spline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyWave_Spline);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyWave_Spline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyWave_Spline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyWave_Spline, AEnemyWave_Spline::StaticClass, TEXT("AEnemyWave_Spline"), &Z_Registration_Info_UClass_AEnemyWave_Spline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyWave_Spline), 2177019957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyWave_Spline_h_2169748188(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyWave_Spline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyWave_Spline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
