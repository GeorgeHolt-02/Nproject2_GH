// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/StampipedeSegment_Body.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStampipedeSegment_Body() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AStampipedeSegment_Body_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AStampipedeSegment_Body();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemy_BaseStampipedeSegment();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
// End Cross Module References
	void AStampipedeSegment_Body::StaticRegisterNativesAStampipedeSegment_Body()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStampipedeSegment_Body);
	UClass* Z_Construct_UClass_AStampipedeSegment_Body_NoRegister()
	{
		return AStampipedeSegment_Body::StaticClass();
	}
	struct Z_Construct_UClass_AStampipedeSegment_Body_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStampipedeSegment_Body_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy_BaseStampipedeSegment,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Body_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StampipedeSegment_Body.h" },
		{ "ModuleRelativePath", "StampipedeSegment_Body.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStampipedeSegment_Body_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStampipedeSegment_Body>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStampipedeSegment_Body_Statics::ClassParams = {
		&AStampipedeSegment_Body::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Body_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Body_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStampipedeSegment_Body()
	{
		if (!Z_Registration_Info_UClass_AStampipedeSegment_Body.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStampipedeSegment_Body.OuterSingleton, Z_Construct_UClass_AStampipedeSegment_Body_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStampipedeSegment_Body.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<AStampipedeSegment_Body>()
	{
		return AStampipedeSegment_Body::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStampipedeSegment_Body);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Body_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Body_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStampipedeSegment_Body, AStampipedeSegment_Body::StaticClass, TEXT("AStampipedeSegment_Body"), &Z_Registration_Info_UClass_AStampipedeSegment_Body, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStampipedeSegment_Body), 2249869546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Body_h_2899075708(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Body_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Body_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
