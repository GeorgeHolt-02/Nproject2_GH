// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/PlayerBlaster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerBlaster() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_APlayerBlaster_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_APlayerBlaster();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_APlayerChar_NoRegister();
// End Cross Module References
	void APlayerBlaster::StaticRegisterNativesAPlayerBlaster()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerBlaster);
	UClass* Z_Construct_UClass_APlayerBlaster_NoRegister()
	{
		return APlayerBlaster::StaticClass();
	}
	struct Z_Construct_UClass_APlayerBlaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyChar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyChar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerBlaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBlaster_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerBlaster.h" },
		{ "ModuleRelativePath", "PlayerBlaster.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBlaster_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "PlayerBlaster" },
		{ "Comment", "//** Mesh */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerBlaster.h" },
		{ "ToolTip", "/ Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBlaster_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerBlaster, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerBlaster_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBlaster_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBlaster_Statics::NewProp_MyChar_MetaData[] = {
		{ "Category", "PlayerBlaster" },
		{ "Comment", "//Player character pointer\n" },
		{ "ModuleRelativePath", "PlayerBlaster.h" },
		{ "ToolTip", "Player character pointer" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBlaster_Statics::NewProp_MyChar = { "MyChar", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerBlaster, MyChar), Z_Construct_UClass_APlayerChar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerBlaster_Statics::NewProp_MyChar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBlaster_Statics::NewProp_MyChar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerBlaster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBlaster_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBlaster_Statics::NewProp_MyChar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerBlaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerBlaster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerBlaster_Statics::ClassParams = {
		&APlayerBlaster::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerBlaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBlaster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerBlaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBlaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerBlaster()
	{
		if (!Z_Registration_Info_UClass_APlayerBlaster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerBlaster.OuterSingleton, Z_Construct_UClass_APlayerBlaster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerBlaster.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<APlayerBlaster>()
	{
		return APlayerBlaster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerBlaster);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_PlayerBlaster_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_PlayerBlaster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerBlaster, APlayerBlaster::StaticClass, TEXT("APlayerBlaster"), &Z_Registration_Info_UClass_APlayerBlaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerBlaster), 1027249917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_PlayerBlaster_h_2915686670(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_PlayerBlaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_PlayerBlaster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
