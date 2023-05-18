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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemyProjectile_Shockwave_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegMeshL_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LegMeshL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegMeshR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LegMeshR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShockwaveOriginL_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShockwaveOriginL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShockwaveOriginR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShockwaveOriginR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShockBP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShockBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanStomp_MetaData[];
#endif
		static void NewProp_bCanStomp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanStomp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LDefaultRot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LDefaultRot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RDefaultRot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RDefaultRot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_StompL_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle_StompL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_StompR_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle_StompR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_StompDelay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle_StompDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_LegMeshL_MetaData[] = {
		{ "Category", "StampipedeSegment_Body" },
		{ "Comment", "//Leg mesh (left)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Body.h" },
		{ "ToolTip", "Leg mesh (left)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_LegMeshL = { "LegMeshL", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Body, LegMeshL), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_LegMeshL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_LegMeshL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_LegMeshR_MetaData[] = {
		{ "Category", "StampipedeSegment_Body" },
		{ "Comment", "//Leg mesh (right)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Body.h" },
		{ "ToolTip", "Leg mesh (right)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_LegMeshR = { "LegMeshR", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Body, LegMeshR), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_LegMeshR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_LegMeshR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_ShockwaveOriginL_MetaData[] = {
		{ "Category", "StampipedeSegment_Body" },
		{ "Comment", "//Shockwave origin (left)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Body.h" },
		{ "ToolTip", "Shockwave origin (left)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_ShockwaveOriginL = { "ShockwaveOriginL", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Body, ShockwaveOriginL), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_ShockwaveOriginL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_ShockwaveOriginL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_ShockwaveOriginR_MetaData[] = {
		{ "Category", "StampipedeSegment_Body" },
		{ "Comment", "//Shockwave origin (right)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Body.h" },
		{ "ToolTip", "Shockwave origin (right)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_ShockwaveOriginR = { "ShockwaveOriginR", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Body, ShockwaveOriginR), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_ShockwaveOriginR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_ShockwaveOriginR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_ShockBP_MetaData[] = {
		{ "Category", "StampipedeSegment_Body" },
		{ "Comment", "//** Shockwave Blueprint */\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Body.h" },
		{ "ToolTip", "/ Shockwave Blueprint" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_ShockBP = { "ShockBP", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Body, ShockBP), Z_Construct_UClass_AEnemyProjectile_Shockwave_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_ShockBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_ShockBP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_bCanStomp_MetaData[] = {
		{ "Category", "StampipedeSegment_Body" },
		{ "Comment", "//Whether or we can stomp\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Body.h" },
		{ "ToolTip", "Whether or we can stomp" },
	};
#endif
	void Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_bCanStomp_SetBit(void* Obj)
	{
		((AStampipedeSegment_Body*)Obj)->bCanStomp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_bCanStomp = { "bCanStomp", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStampipedeSegment_Body), &Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_bCanStomp_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_bCanStomp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_bCanStomp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_LDefaultRot_MetaData[] = {
		{ "Category", "StampipedeSegment_Body" },
		{ "Comment", "//Default leg rotations\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Body.h" },
		{ "ToolTip", "Default leg rotations" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_LDefaultRot = { "LDefaultRot", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Body, LDefaultRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_LDefaultRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_LDefaultRot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_RDefaultRot_MetaData[] = {
		{ "Category", "StampipedeSegment_Body" },
		{ "ModuleRelativePath", "StampipedeSegment_Body.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_RDefaultRot = { "RDefaultRot", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Body, RDefaultRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_RDefaultRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_RDefaultRot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_Handle_StompL_MetaData[] = {
		{ "Category", "StampipedeSegment_Body" },
		{ "Comment", "//Stomp timer handles\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Body.h" },
		{ "ToolTip", "Stomp timer handles" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_Handle_StompL = { "Handle_StompL", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Body, Handle_StompL), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_Handle_StompL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_Handle_StompL_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_Handle_StompR_MetaData[] = {
		{ "Category", "StampipedeSegment_Body" },
		{ "ModuleRelativePath", "StampipedeSegment_Body.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_Handle_StompR = { "Handle_StompR", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Body, Handle_StompR), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_Handle_StompR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_Handle_StompR_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_Handle_StompDelay_MetaData[] = {
		{ "Category", "StampipedeSegment_Body" },
		{ "ModuleRelativePath", "StampipedeSegment_Body.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_Handle_StompDelay = { "Handle_StompDelay", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Body, Handle_StompDelay), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_Handle_StompDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_Handle_StompDelay_MetaData)) }; // 589591453
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStampipedeSegment_Body_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_LegMeshL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_LegMeshR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_ShockwaveOriginL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_ShockwaveOriginR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_ShockBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_bCanStomp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_LDefaultRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_RDefaultRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_Handle_StompL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_Handle_StompR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Body_Statics::NewProp_Handle_StompDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStampipedeSegment_Body_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStampipedeSegment_Body>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStampipedeSegment_Body_Statics::ClassParams = {
		&AStampipedeSegment_Body::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStampipedeSegment_Body_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Body_Statics::PropPointers),
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
		{ Z_Construct_UClass_AStampipedeSegment_Body, AStampipedeSegment_Body::StaticClass, TEXT("AStampipedeSegment_Body"), &Z_Registration_Info_UClass_AStampipedeSegment_Body, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStampipedeSegment_Body), 2350511400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Body_h_615576053(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Body_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Body_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
