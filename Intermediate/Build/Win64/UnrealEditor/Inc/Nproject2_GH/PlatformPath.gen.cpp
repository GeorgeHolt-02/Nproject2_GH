// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/PlatformPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformPath() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_APlatformPath_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_APlatformPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	void APlatformPath::StaticRegisterNativesAPlatformPath()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatformPath);
	UClass* Z_Construct_UClass_APlatformPath_NoRegister()
	{
		return APlatformPath::StaticClass();
	}
	struct Z_Construct_UClass_APlatformPath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformPath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformPath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlatformPath.h" },
		{ "ModuleRelativePath", "PlatformPath.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformPath_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "PlatformPath" },
		{ "Comment", "//The spline representing the path\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlatformPath.h" },
		{ "ToolTip", "The spline representing the path" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x001000000008081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformPath, Path), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlatformPath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformPath_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformPath_Statics::NewProp_Path,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformPath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformPath>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformPath_Statics::ClassParams = {
		&APlatformPath::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlatformPath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlatformPath_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlatformPath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformPath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlatformPath()
	{
		if (!Z_Registration_Info_UClass_APlatformPath.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformPath.OuterSingleton, Z_Construct_UClass_APlatformPath_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlatformPath.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<APlatformPath>()
	{
		return APlatformPath::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformPath);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_PlatformPath_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_PlatformPath_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlatformPath, APlatformPath::StaticClass, TEXT("APlatformPath"), &Z_Registration_Info_UClass_APlatformPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformPath), 2157765389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_PlatformPath_h_4057963790(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_PlatformPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_PlatformPath_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
