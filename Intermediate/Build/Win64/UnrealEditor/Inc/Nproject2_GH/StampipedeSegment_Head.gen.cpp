// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/StampipedeSegment_Head.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStampipedeSegment_Head() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AStampipedeSegment_Head_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AStampipedeSegment_Head();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemy_BaseStampipedeSegment();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
// End Cross Module References
	void AStampipedeSegment_Head::StaticRegisterNativesAStampipedeSegment_Head()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStampipedeSegment_Head);
	UClass* Z_Construct_UClass_AStampipedeSegment_Head_NoRegister()
	{
		return AStampipedeSegment_Head::StaticClass();
	}
	struct Z_Construct_UClass_AStampipedeSegment_Head_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStampipedeSegment_Head_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy_BaseStampipedeSegment,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StampipedeSegment_Head.h" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStampipedeSegment_Head_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStampipedeSegment_Head>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::ClassParams = {
		&AStampipedeSegment_Head::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStampipedeSegment_Head()
	{
		if (!Z_Registration_Info_UClass_AStampipedeSegment_Head.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStampipedeSegment_Head.OuterSingleton, Z_Construct_UClass_AStampipedeSegment_Head_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStampipedeSegment_Head.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<AStampipedeSegment_Head>()
	{
		return AStampipedeSegment_Head::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStampipedeSegment_Head);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Head_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Head_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStampipedeSegment_Head, AStampipedeSegment_Head::StaticClass, TEXT("AStampipedeSegment_Head"), &Z_Registration_Info_UClass_AStampipedeSegment_Head, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStampipedeSegment_Head), 3969438829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Head_h_952112969(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Head_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Head_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
