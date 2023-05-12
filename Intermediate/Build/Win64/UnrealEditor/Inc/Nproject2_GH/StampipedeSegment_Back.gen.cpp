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
// End Cross Module References
	void AStampipedeSegment_Back::StaticRegisterNativesAStampipedeSegment_Back()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStampipedeSegment_Back);
	UClass* Z_Construct_UClass_AStampipedeSegment_Back_NoRegister()
	{
		return AStampipedeSegment_Back::StaticClass();
	}
	struct Z_Construct_UClass_AStampipedeSegment_Back_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStampipedeSegment_Back_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy_BaseStampipedeSegment,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Back_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StampipedeSegment_Back.h" },
		{ "ModuleRelativePath", "StampipedeSegment_Back.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStampipedeSegment_Back_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStampipedeSegment_Back>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStampipedeSegment_Back_Statics::ClassParams = {
		&AStampipedeSegment_Back::StaticClass,
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
		{ Z_Construct_UClass_AStampipedeSegment_Back, AStampipedeSegment_Back::StaticClass, TEXT("AStampipedeSegment_Back"), &Z_Registration_Info_UClass_AStampipedeSegment_Back, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStampipedeSegment_Back), 4237961402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Back_h_4286779140(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Back_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Back_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
