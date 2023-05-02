// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/FireGeyser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireGeyser() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AFireGeyser_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AFireGeyser();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemyProjectile_Fireball_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void AFireGeyser::StaticRegisterNativesAFireGeyser()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFireGeyser);
	UClass* Z_Construct_UClass_AFireGeyser_NoRegister()
	{
		return AFireGeyser::StaticClass();
	}
	struct Z_Construct_UClass_AFireGeyser_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireballOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireballOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_Toggle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle_Toggle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToggleDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ToggleDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_FireRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle_FireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarningThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarningThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireballBP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FireballBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarningMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WarningMat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFireGeyser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireGeyser_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FireGeyser.h" },
		{ "ModuleRelativePath", "FireGeyser.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireGeyser_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "FireGeyser" },
		{ "Comment", "/** Visual mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FireGeyser.h" },
		{ "ToolTip", "Visual mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireGeyser_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireGeyser, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireGeyser_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireGeyser_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireGeyser_Statics::NewProp_FireballOrigin_MetaData[] = {
		{ "Category", "FireGeyser" },
		{ "Comment", "/** Origin from which to shoot fireballs */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FireGeyser.h" },
		{ "ToolTip", "Origin from which to shoot fireballs" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireGeyser_Statics::NewProp_FireballOrigin = { "FireballOrigin", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireGeyser, FireballOrigin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireGeyser_Statics::NewProp_FireballOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireGeyser_Statics::NewProp_FireballOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireGeyser_Statics::NewProp_Handle_Toggle_MetaData[] = {
		{ "Category", "FireGeyser" },
		{ "Comment", "/** Timer that toggles between shooting and not shooting (handle and delay time) */" },
		{ "ModuleRelativePath", "FireGeyser.h" },
		{ "ToolTip", "Timer that toggles between shooting and not shooting (handle and delay time)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFireGeyser_Statics::NewProp_Handle_Toggle = { "Handle_Toggle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireGeyser, Handle_Toggle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AFireGeyser_Statics::NewProp_Handle_Toggle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireGeyser_Statics::NewProp_Handle_Toggle_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireGeyser_Statics::NewProp_ToggleDelay_MetaData[] = {
		{ "Category", "FireGeyser" },
		{ "ModuleRelativePath", "FireGeyser.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFireGeyser_Statics::NewProp_ToggleDelay = { "ToggleDelay", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireGeyser, ToggleDelay), METADATA_PARAMS(Z_Construct_UClass_AFireGeyser_Statics::NewProp_ToggleDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireGeyser_Statics::NewProp_ToggleDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireGeyser_Statics::NewProp_Handle_FireRate_MetaData[] = {
		{ "Category", "FireGeyser" },
		{ "Comment", "/** Timer representing rate of fire (handle and delay time) */" },
		{ "ModuleRelativePath", "FireGeyser.h" },
		{ "ToolTip", "Timer representing rate of fire (handle and delay time)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFireGeyser_Statics::NewProp_Handle_FireRate = { "Handle_FireRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireGeyser, Handle_FireRate), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AFireGeyser_Statics::NewProp_Handle_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireGeyser_Statics::NewProp_Handle_FireRate_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireGeyser_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "FireGeyser" },
		{ "ModuleRelativePath", "FireGeyser.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFireGeyser_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireGeyser, FireRate), METADATA_PARAMS(Z_Construct_UClass_AFireGeyser_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireGeyser_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireGeyser_Statics::NewProp_WarningThreshold_MetaData[] = {
		{ "Category", "FireGeyser" },
		{ "Comment", "/** The threshold of the toggle timer at which to change the geyser's material */" },
		{ "ModuleRelativePath", "FireGeyser.h" },
		{ "ToolTip", "The threshold of the toggle timer at which to change the geyser's material" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFireGeyser_Statics::NewProp_WarningThreshold = { "WarningThreshold", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireGeyser, WarningThreshold), METADATA_PARAMS(Z_Construct_UClass_AFireGeyser_Statics::NewProp_WarningThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireGeyser_Statics::NewProp_WarningThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireGeyser_Statics::NewProp_FireballBP_MetaData[] = {
		{ "Category", "FireGeyser" },
		{ "Comment", "//** Fireball Blueprint reference */\n" },
		{ "ModuleRelativePath", "FireGeyser.h" },
		{ "ToolTip", "/ Fireball Blueprint reference" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFireGeyser_Statics::NewProp_FireballBP = { "FireballBP", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireGeyser, FireballBP), Z_Construct_UClass_AEnemyProjectile_Fireball_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFireGeyser_Statics::NewProp_FireballBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireGeyser_Statics::NewProp_FireballBP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireGeyser_Statics::NewProp_DefaultMat_MetaData[] = {
		{ "Category", "FireGeyser" },
		{ "Comment", "/** Default material reference */" },
		{ "ModuleRelativePath", "FireGeyser.h" },
		{ "ToolTip", "Default material reference" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireGeyser_Statics::NewProp_DefaultMat = { "DefaultMat", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireGeyser, DefaultMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireGeyser_Statics::NewProp_DefaultMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireGeyser_Statics::NewProp_DefaultMat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireGeyser_Statics::NewProp_WarningMat_MetaData[] = {
		{ "Category", "FireGeyser" },
		{ "Comment", "/** Warning material reference */" },
		{ "ModuleRelativePath", "FireGeyser.h" },
		{ "ToolTip", "Warning material reference" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireGeyser_Statics::NewProp_WarningMat = { "WarningMat", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireGeyser, WarningMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireGeyser_Statics::NewProp_WarningMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireGeyser_Statics::NewProp_WarningMat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFireGeyser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireGeyser_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireGeyser_Statics::NewProp_FireballOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireGeyser_Statics::NewProp_Handle_Toggle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireGeyser_Statics::NewProp_ToggleDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireGeyser_Statics::NewProp_Handle_FireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireGeyser_Statics::NewProp_FireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireGeyser_Statics::NewProp_WarningThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireGeyser_Statics::NewProp_FireballBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireGeyser_Statics::NewProp_DefaultMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireGeyser_Statics::NewProp_WarningMat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFireGeyser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFireGeyser>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFireGeyser_Statics::ClassParams = {
		&AFireGeyser::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFireGeyser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFireGeyser_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFireGeyser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFireGeyser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFireGeyser()
	{
		if (!Z_Registration_Info_UClass_AFireGeyser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFireGeyser.OuterSingleton, Z_Construct_UClass_AFireGeyser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFireGeyser.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<AFireGeyser>()
	{
		return AFireGeyser::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFireGeyser);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_FireGeyser_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_FireGeyser_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFireGeyser, AFireGeyser::StaticClass, TEXT("AFireGeyser"), &Z_Registration_Info_UClass_AFireGeyser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFireGeyser), 1946285485U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_FireGeyser_h_3075742021(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_FireGeyser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_FireGeyser_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
