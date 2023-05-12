// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/Enemy_Stampipede.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_Stampipede() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemy_Stampipede_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemy_Stampipede();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_ABaseEnemy();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AStampipedeSegment_Head_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AStampipedeSegment_Body_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AStampipedeSegment_Back_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AEnemy_Stampipede::StaticRegisterNativesAEnemy_Stampipede()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_Stampipede);
	UClass* Z_Construct_UClass_AEnemy_Stampipede_NoRegister()
	{
		return AEnemy_Stampipede::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Stampipede_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Head;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiddleSegmentRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MiddleSegmentRef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MiddleSegments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiddleSegments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MiddleSegments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Back_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Back;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundVolume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiddleSegmentNum_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MiddleSegmentNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Stampipede_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Stampipede_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Enemy_Stampipede.h" },
		{ "ModuleRelativePath", "Enemy_Stampipede.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_Head_MetaData[] = {
		{ "Category", "Enemy_Stampipede" },
		{ "Comment", "//Head\n" },
		{ "ModuleRelativePath", "Enemy_Stampipede.h" },
		{ "ToolTip", "Head" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Stampipede, Head), Z_Construct_UClass_AStampipedeSegment_Head_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_Head_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MiddleSegmentRef_MetaData[] = {
		{ "Category", "Enemy_Stampipede" },
		{ "Comment", "//Body segment reference\n" },
		{ "ModuleRelativePath", "Enemy_Stampipede.h" },
		{ "ToolTip", "Body segment reference" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MiddleSegmentRef = { "MiddleSegmentRef", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Stampipede, MiddleSegmentRef), Z_Construct_UClass_AStampipedeSegment_Body_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MiddleSegmentRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MiddleSegmentRef_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MiddleSegments_Inner = { "MiddleSegments", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AStampipedeSegment_Body_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MiddleSegments_MetaData[] = {
		{ "Category", "Enemy_Stampipede" },
		{ "Comment", "//Body segment array\n" },
		{ "ModuleRelativePath", "Enemy_Stampipede.h" },
		{ "ToolTip", "Body segment array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MiddleSegments = { "MiddleSegments", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Stampipede, MiddleSegments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MiddleSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MiddleSegments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_Back_MetaData[] = {
		{ "Category", "Enemy_Stampipede" },
		{ "Comment", "//Rear end\n" },
		{ "ModuleRelativePath", "Enemy_Stampipede.h" },
		{ "ToolTip", "Rear end" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_Back = { "Back", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Stampipede, Back), Z_Construct_UClass_AStampipedeSegment_Back_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_Back_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_Back_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_BoundVolume_MetaData[] = {
		{ "Category", "Enemy_Stampipede" },
		{ "Comment", "//Bounding volume for the Stampipede's movement\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_Stampipede.h" },
		{ "ToolTip", "Bounding volume for the Stampipede's movement" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_BoundVolume = { "BoundVolume", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Stampipede, BoundVolume), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_BoundVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_BoundVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MiddleSegmentNum_MetaData[] = {
		{ "Category", "Enemy_Stampipede" },
		{ "Comment", "//Number of body segments to create\n" },
		{ "ModuleRelativePath", "Enemy_Stampipede.h" },
		{ "ToolTip", "Number of body segments to create" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MiddleSegmentNum = { "MiddleSegmentNum", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Stampipede, MiddleSegmentNum), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MiddleSegmentNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MiddleSegmentNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Enemy_Stampipede" },
		{ "Comment", "//Normal movement speed\n" },
		{ "ModuleRelativePath", "Enemy_Stampipede.h" },
		{ "ToolTip", "Normal movement speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Stampipede, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_SegmentOffset_MetaData[] = {
		{ "Category", "Enemy_Stampipede" },
		{ "Comment", "//Offset to apply to each segment\n" },
		{ "ModuleRelativePath", "Enemy_Stampipede.h" },
		{ "ToolTip", "Offset to apply to each segment" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_SegmentOffset = { "SegmentOffset", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Stampipede, SegmentOffset), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_SegmentOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_SegmentOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_Rotator_MetaData[] = {
		{ "Category", "Enemy_Stampipede" },
		{ "Comment", "/** The enemy's current rotator */" },
		{ "ModuleRelativePath", "Enemy_Stampipede.h" },
		{ "ToolTip", "The enemy's current rotator" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Stampipede, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_Rotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_Rotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Enemy_Stampipede" },
		{ "Comment", "/** The direction the enemy is facing */" },
		{ "ModuleRelativePath", "Enemy_Stampipede.h" },
		{ "ToolTip", "The direction the enemy is facing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Stampipede, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_Direction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Stampipede_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_Head,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MiddleSegmentRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MiddleSegments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MiddleSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_Back,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_BoundVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MiddleSegmentNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_SegmentOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_Rotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Stampipede_Statics::NewProp_Direction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Stampipede_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_Stampipede>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Stampipede_Statics::ClassParams = {
		&AEnemy_Stampipede::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemy_Stampipede_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Stampipede_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_Stampipede_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Stampipede_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_Stampipede()
	{
		if (!Z_Registration_Info_UClass_AEnemy_Stampipede.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_Stampipede.OuterSingleton, Z_Construct_UClass_AEnemy_Stampipede_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy_Stampipede.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<AEnemy_Stampipede>()
	{
		return AEnemy_Stampipede::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_Stampipede);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_Stampipede_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_Stampipede_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_Stampipede, AEnemy_Stampipede::StaticClass, TEXT("AEnemy_Stampipede"), &Z_Registration_Info_UClass_AEnemy_Stampipede, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_Stampipede), 3886972298U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_Stampipede_h_3872960478(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_Stampipede_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_Stampipede_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
