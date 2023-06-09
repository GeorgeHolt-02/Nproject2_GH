// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/BaseEnemyProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemyProjectile() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_ABaseEnemyProjectile_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_ABaseEnemyProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(ABaseEnemyProjectile::execDestroyTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemyProjectile::execOnOverlapStart)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapStart(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ABaseEnemyProjectile::StaticRegisterNativesABaseEnemyProjectile()
	{
		UClass* Class = ABaseEnemyProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyTimer", &ABaseEnemyProjectile::execDestroyTimer },
			{ "OnOverlapStart", &ABaseEnemyProjectile::execOnOverlapStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseEnemyProjectile_DestroyTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemyProjectile_DestroyTimer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Timer that destroys this shot in case instigator is not present\n" },
		{ "ModuleRelativePath", "BaseEnemyProjectile.h" },
		{ "ToolTip", "Timer that destroys this shot in case instigator is not present" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemyProjectile_DestroyTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemyProjectile, nullptr, "DestroyTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemyProjectile_DestroyTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyProjectile_DestroyTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemyProjectile_DestroyTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemyProjectile_DestroyTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics
	{
		struct BaseEnemyProjectile_eventOnOverlapStart_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseEnemyProjectile_eventOnOverlapStart_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseEnemyProjectile_eventOnOverlapStart_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseEnemyProjectile_eventOnOverlapStart_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseEnemyProjectile_eventOnOverlapStart_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BaseEnemyProjectile_eventOnOverlapStart_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseEnemyProjectile_eventOnOverlapStart_Parms), &Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseEnemyProjectile_eventOnOverlapStart_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called on the beginning of an overlap\n" },
		{ "ModuleRelativePath", "BaseEnemyProjectile.h" },
		{ "ToolTip", "Called on the beginning of an overlap" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemyProjectile, nullptr, "OnOverlapStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::BaseEnemyProjectile_eventOnOverlapStart_Parms), Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseEnemyProjectile);
	UClass* Z_Construct_UClass_ABaseEnemyProjectile_NoRegister()
	{
		return ABaseEnemyProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ABaseEnemyProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShotMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestroyHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestroyHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestroyDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DestroyDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseEnemyProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseEnemyProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseEnemyProjectile_DestroyTimer, "DestroyTimer" }, // 2085841058
		{ &Z_Construct_UFunction_ABaseEnemyProjectile_OnOverlapStart, "OnOverlapStart" }, // 3398904308
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemyProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseEnemyProjectile.h" },
		{ "ModuleRelativePath", "BaseEnemyProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemyProjectile_Statics::NewProp_ShotMovement_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Projectile movement component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseEnemyProjectile.h" },
		{ "ToolTip", "Projectile movement component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemyProjectile_Statics::NewProp_ShotMovement = { "ShotMovement", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEnemyProjectile, ShotMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemyProjectile_Statics::NewProp_ShotMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyProjectile_Statics::NewProp_ShotMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemyProjectile_Statics::NewProp_DestroyHandle_MetaData[] = {
		{ "Category", "BaseEnemyProjectile" },
		{ "Comment", "/** Destroy timer handle */" },
		{ "ModuleRelativePath", "BaseEnemyProjectile.h" },
		{ "ToolTip", "Destroy timer handle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseEnemyProjectile_Statics::NewProp_DestroyHandle = { "DestroyHandle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEnemyProjectile, DestroyHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemyProjectile_Statics::NewProp_DestroyHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyProjectile_Statics::NewProp_DestroyHandle_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemyProjectile_Statics::NewProp_DestroyDelay_MetaData[] = {
		{ "Category", "BaseEnemyProjectile" },
		{ "Comment", "/** Delay time before shot is destroyed */" },
		{ "ModuleRelativePath", "BaseEnemyProjectile.h" },
		{ "ToolTip", "Delay time before shot is destroyed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemyProjectile_Statics::NewProp_DestroyDelay = { "DestroyDelay", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEnemyProjectile, DestroyDelay), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemyProjectile_Statics::NewProp_DestroyDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyProjectile_Statics::NewProp_DestroyDelay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEnemyProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemyProjectile_Statics::NewProp_ShotMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemyProjectile_Statics::NewProp_DestroyHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemyProjectile_Statics::NewProp_DestroyDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseEnemyProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemyProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemyProjectile_Statics::ClassParams = {
		&ABaseEnemyProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseEnemyProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseEnemyProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseEnemyProjectile()
	{
		if (!Z_Registration_Info_UClass_ABaseEnemyProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseEnemyProjectile.OuterSingleton, Z_Construct_UClass_ABaseEnemyProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseEnemyProjectile.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<ABaseEnemyProjectile>()
	{
		return ABaseEnemyProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemyProjectile);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_BaseEnemyProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_BaseEnemyProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEnemyProjectile, ABaseEnemyProjectile::StaticClass, TEXT("ABaseEnemyProjectile"), &Z_Registration_Info_UClass_ABaseEnemyProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEnemyProjectile), 766541134U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_BaseEnemyProjectile_h_2043303576(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_BaseEnemyProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_BaseEnemyProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
