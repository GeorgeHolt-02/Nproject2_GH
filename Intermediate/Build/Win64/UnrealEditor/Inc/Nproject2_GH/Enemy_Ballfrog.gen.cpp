// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/Enemy_Ballfrog.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_Ballfrog() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemy_Ballfrog_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemy_Ballfrog();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_ABaseEnemy();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(AEnemy_Ballfrog::execOnBounce)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ImpactResult);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBounce(Z_Param_Out_ImpactResult,Z_Param_Out_ImpactVelocity);
		P_NATIVE_END;
	}
	void AEnemy_Ballfrog::StaticRegisterNativesAEnemy_Ballfrog()
	{
		UClass* Class = AEnemy_Ballfrog::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBounce", &AEnemy_Ballfrog::execOnBounce },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce_Statics
	{
		struct Enemy_Ballfrog_eventOnBounce_Parms
		{
			FHitResult ImpactResult;
			FVector ImpactVelocity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce_Statics::NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Enemy_Ballfrog_eventOnBounce_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce_Statics::NewProp_ImpactResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce_Statics::NewProp_ImpactResult_MetaData)) }; // 1416937132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce_Statics::NewProp_ImpactVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce_Statics::NewProp_ImpactVelocity = { "ImpactVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Enemy_Ballfrog_eventOnBounce_Parms, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce_Statics::NewProp_ImpactVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce_Statics::NewProp_ImpactVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce_Statics::NewProp_ImpactResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce_Statics::NewProp_ImpactVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called on bounce\n" },
		{ "ModuleRelativePath", "Enemy_Ballfrog.h" },
		{ "ToolTip", "Called on bounce" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_Ballfrog, nullptr, "OnBounce", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce_Statics::Enemy_Ballfrog_eventOnBounce_Parms), Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_Ballfrog);
	UClass* Z_Construct_UClass_AEnemy_Ballfrog_NoRegister()
	{
		return AEnemy_Ballfrog::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Ballfrog_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemySphereCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemySphereCollider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Movement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BounceVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BounceVelocity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityScales_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityScales_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GravityScales;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGravity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YawRotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Ballfrog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemy_Ballfrog_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy_Ballfrog_OnBounce, "OnBounce" }, // 913950961
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Ballfrog_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Enemy_Ballfrog.h" },
		{ "ModuleRelativePath", "Enemy_Ballfrog.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_EnemyMesh_MetaData[] = {
		{ "Category", "Enemy_Ballfrog" },
		{ "Comment", "/** Visual mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_Ballfrog.h" },
		{ "ToolTip", "Visual mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_EnemyMesh = { "EnemyMesh", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Ballfrog, EnemyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_EnemyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_EnemyMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_EnemySphereCollider_MetaData[] = {
		{ "Category", "Enemy_Ballfrog" },
		{ "Comment", "/** Sphere collision */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_Ballfrog.h" },
		{ "ToolTip", "Sphere collision" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_EnemySphereCollider = { "EnemySphereCollider", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Ballfrog, EnemySphereCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_EnemySphereCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_EnemySphereCollider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_Movement_MetaData[] = {
		{ "Category", "Enemy_Ballfrog" },
		{ "Comment", "/** Movement component, allows us to quickly get the movement patterns we need */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_Ballfrog.h" },
		{ "ToolTip", "Movement component, allows us to quickly get the movement patterns we need" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Ballfrog, Movement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_Movement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_BounceVelocity_MetaData[] = {
		{ "Category", "Enemy_Ballfrog" },
		{ "Comment", "/** Velocity that every bounce occurs at */" },
		{ "ModuleRelativePath", "Enemy_Ballfrog.h" },
		{ "ToolTip", "Velocity that every bounce occurs at" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_BounceVelocity = { "BounceVelocity", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Ballfrog, BounceVelocity), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_BounceVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_BounceVelocity_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_GravityScales_Inner = { "GravityScales", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_GravityScales_MetaData[] = {
		{ "Category", "Enemy_Ballfrog" },
		{ "Comment", "/** Array of floats used for gravity RNG */" },
		{ "ModuleRelativePath", "Enemy_Ballfrog.h" },
		{ "ToolTip", "Array of floats used for gravity RNG" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_GravityScales = { "GravityScales", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Ballfrog, GravityScales), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_GravityScales_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_GravityScales_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_CurrentGravity_MetaData[] = {
		{ "Category", "Enemy_Ballfrog" },
		{ "Comment", "/** The currently-selected float from the above array */" },
		{ "ModuleRelativePath", "Enemy_Ballfrog.h" },
		{ "ToolTip", "The currently-selected float from the above array" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_CurrentGravity = { "CurrentGravity", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Ballfrog, CurrentGravity), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_CurrentGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_CurrentGravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_YawRotator_MetaData[] = {
		{ "Category", "Enemy_Ballfrog" },
		{ "Comment", "/** The enemy's current yaw rotator */" },
		{ "ModuleRelativePath", "Enemy_Ballfrog.h" },
		{ "ToolTip", "The enemy's current yaw rotator" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_YawRotator = { "YawRotator", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Ballfrog, YawRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_YawRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_YawRotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Enemy_Ballfrog" },
		{ "Comment", "/** The direction the enemy is facing */" },
		{ "ModuleRelativePath", "Enemy_Ballfrog.h" },
		{ "ToolTip", "The direction the enemy is facing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Ballfrog, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_Direction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Ballfrog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_EnemyMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_EnemySphereCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_Movement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_BounceVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_GravityScales_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_GravityScales,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_CurrentGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_YawRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Ballfrog_Statics::NewProp_Direction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Ballfrog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_Ballfrog>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Ballfrog_Statics::ClassParams = {
		&AEnemy_Ballfrog::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemy_Ballfrog_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Ballfrog_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_Ballfrog_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Ballfrog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_Ballfrog()
	{
		if (!Z_Registration_Info_UClass_AEnemy_Ballfrog.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_Ballfrog.OuterSingleton, Z_Construct_UClass_AEnemy_Ballfrog_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy_Ballfrog.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<AEnemy_Ballfrog>()
	{
		return AEnemy_Ballfrog::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_Ballfrog);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_Ballfrog_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_Ballfrog_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_Ballfrog, AEnemy_Ballfrog::StaticClass, TEXT("AEnemy_Ballfrog"), &Z_Registration_Info_UClass_AEnemy_Ballfrog, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_Ballfrog), 237501507U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_Ballfrog_h_2082418331(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_Ballfrog_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Enemy_Ballfrog_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
