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
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AStampipedeSegment_Body_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AStampipedeSegment_Back_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_AEnemyProjectile_StampipedeLsr_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AStampipedeSegment_Head::execOnOverlapStart_Back)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapStart_Back(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStampipedeSegment_Head::execOnOverlapStart_Body)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapStart_Body(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AStampipedeSegment_Head::StaticRegisterNativesAStampipedeSegment_Head()
	{
		UClass* Class = AStampipedeSegment_Head::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapStart_Back", &AStampipedeSegment_Head::execOnOverlapStart_Back },
			{ "OnOverlapStart_Body", &AStampipedeSegment_Head::execOnOverlapStart_Body },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics
	{
		struct StampipedeSegment_Head_eventOnOverlapStart_Back_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StampipedeSegment_Head_eventOnOverlapStart_Back_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StampipedeSegment_Head_eventOnOverlapStart_Back_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StampipedeSegment_Head_eventOnOverlapStart_Back_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StampipedeSegment_Head_eventOnOverlapStart_Back_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((StampipedeSegment_Head_eventOnOverlapStart_Back_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StampipedeSegment_Head_eventOnOverlapStart_Back_Parms), &Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StampipedeSegment_Head_eventOnOverlapStart_Back_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStampipedeSegment_Head, nullptr, "OnOverlapStart_Back", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::StampipedeSegment_Head_eventOnOverlapStart_Back_Parms), Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics
	{
		struct StampipedeSegment_Head_eventOnOverlapStart_Body_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StampipedeSegment_Head_eventOnOverlapStart_Body_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StampipedeSegment_Head_eventOnOverlapStart_Body_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StampipedeSegment_Head_eventOnOverlapStart_Body_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StampipedeSegment_Head_eventOnOverlapStart_Body_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((StampipedeSegment_Head_eventOnOverlapStart_Body_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StampipedeSegment_Head_eventOnOverlapStart_Body_Parms), &Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StampipedeSegment_Head_eventOnOverlapStart_Body_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStampipedeSegment_Head, nullptr, "OnOverlapStart_Body", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::StampipedeSegment_Head_eventOnOverlapStart_Body_Parms), Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStampipedeSegment_Head);
	UClass* Z_Construct_UClass_AStampipedeSegment_Head_NoRegister()
	{
		return AStampipedeSegment_Head::StaticClass();
	}
	struct Z_Construct_UClass_AStampipedeSegment_Head_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BackRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Back_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Back;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EyeMeshL_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EyeMeshL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EyeMeshR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EyeMeshR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AntennaeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AntennaeMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MandibleMeshL_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MandibleMeshL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MandibleMeshR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MandibleMeshR;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentInterpLag_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentInterpLag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHeadHit_MetaData[];
#endif
		static void NewProp_bHeadHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeadHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanWalk_MetaData[];
#endif
		static void NewProp_bCanWalk_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanWalk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserActivateTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaserActivateTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserShootTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaserShootTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserCancelTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaserCancelTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackDelayTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttackDelayTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserBP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LaserBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LaserOrigin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStampipedeSegment_Head_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy_BaseStampipedeSegment,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStampipedeSegment_Head_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Back, "OnOverlapStart_Back" }, // 1464623056
		{ &Z_Construct_UFunction_AStampipedeSegment_Head_OnOverlapStart_Body, "OnOverlapStart_Body" }, // 2756313212
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StampipedeSegment_Head.h" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MiddleSegmentRef_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Body segment reference\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Body segment reference" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MiddleSegmentRef = { "MiddleSegmentRef", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, MiddleSegmentRef), Z_Construct_UClass_AStampipedeSegment_Body_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MiddleSegmentRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MiddleSegmentRef_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MiddleSegments_Inner = { "MiddleSegments", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AStampipedeSegment_Body_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MiddleSegments_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Body segment array\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Body segment array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MiddleSegments = { "MiddleSegments", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, MiddleSegments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MiddleSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MiddleSegments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_BackRef_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Back reference\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Back reference" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_BackRef = { "BackRef", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, BackRef), Z_Construct_UClass_AStampipedeSegment_Back_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_BackRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_BackRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_Back_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Rear end\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Rear end" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_Back = { "Back", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, Back), Z_Construct_UClass_AStampipedeSegment_Back_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_Back_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_Back_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_EyeMeshL_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Eye mesh (left)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Eye mesh (left)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_EyeMeshL = { "EyeMeshL", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, EyeMeshL), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_EyeMeshL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_EyeMeshL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_EyeMeshR_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Eye mesh (right)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Eye mesh (right)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_EyeMeshR = { "EyeMeshR", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, EyeMeshR), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_EyeMeshR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_EyeMeshR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_AntennaeMesh_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Antennae mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Antennae mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_AntennaeMesh = { "AntennaeMesh", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, AntennaeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_AntennaeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_AntennaeMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MandibleMeshL_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Mandible mesh (left)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Mandible mesh (left)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MandibleMeshL = { "MandibleMeshL", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, MandibleMeshL), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MandibleMeshL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MandibleMeshL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MandibleMeshR_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Mandible mesh (right)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Mandible mesh (right)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MandibleMeshR = { "MandibleMeshR", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, MandibleMeshR), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MandibleMeshR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MandibleMeshR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_BoundVolume_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Bounding volume for the Stampipede's movement\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Bounding volume for the Stampipede's movement" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_BoundVolume = { "BoundVolume", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, BoundVolume), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_BoundVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_BoundVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MiddleSegmentNum_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Number of body segments to create\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Number of body segments to create" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MiddleSegmentNum = { "MiddleSegmentNum", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, MiddleSegmentNum), METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MiddleSegmentNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MiddleSegmentNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Normal movement speed\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Normal movement speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Normal rotation speed\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Normal rotation speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_SegmentOffset_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Offset to apply to each segment\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Offset to apply to each segment" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_SegmentOffset = { "SegmentOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, SegmentOffset), METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_SegmentOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_SegmentOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_SegmentInterpLag_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Lag to apply to segment re-adjustment\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Lag to apply to segment re-adjustment" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_SegmentInterpLag = { "SegmentInterpLag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, SegmentInterpLag), METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_SegmentInterpLag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_SegmentInterpLag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_Rotator_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "/** The enemy's current rotator */" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "The enemy's current rotator" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_Rotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_Rotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "/** The direction the enemy is facing */" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "The direction the enemy is facing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_bHeadHit_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Whether or not the head has been hit\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Whether or not the head has been hit" },
	};
#endif
	void Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_bHeadHit_SetBit(void* Obj)
	{
		((AStampipedeSegment_Head*)Obj)->bHeadHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_bHeadHit = { "bHeadHit", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStampipedeSegment_Head), &Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_bHeadHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_bHeadHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_bHeadHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_bCanWalk_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Whether or not the boss can move as normal\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Whether or not the boss can move as normal" },
	};
#endif
	void Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_bCanWalk_SetBit(void* Obj)
	{
		((AStampipedeSegment_Head*)Obj)->bCanWalk = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_bCanWalk = { "bCanWalk", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStampipedeSegment_Head), &Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_bCanWalk_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_bCanWalk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_bCanWalk_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserActivateTimer_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Laser timer handles\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Laser timer handles" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserActivateTimer = { "LaserActivateTimer", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, LaserActivateTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserActivateTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserActivateTimer_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserShootTimer_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserShootTimer = { "LaserShootTimer", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, LaserShootTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserShootTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserShootTimer_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserCancelTimer_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserCancelTimer = { "LaserCancelTimer", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, LaserCancelTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserCancelTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserCancelTimer_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_AttackDelayTimer_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Delays attacks\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Delays attacks" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_AttackDelayTimer = { "AttackDelayTimer", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, AttackDelayTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_AttackDelayTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_AttackDelayTimer_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserBP_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Laser shot Blueprint reference\n" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Laser shot Blueprint reference" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserBP = { "LaserBP", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, LaserBP), Z_Construct_UClass_AEnemyProjectile_StampipedeLsr_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserBP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserOrigin_MetaData[] = {
		{ "Category", "StampipedeSegment_Head" },
		{ "Comment", "//Laser shot origin\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StampipedeSegment_Head.h" },
		{ "ToolTip", "Laser shot origin" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserOrigin = { "LaserOrigin", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStampipedeSegment_Head, LaserOrigin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserOrigin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStampipedeSegment_Head_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MiddleSegmentRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MiddleSegments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MiddleSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_BackRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_Back,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_EyeMeshL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_EyeMeshR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_AntennaeMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MandibleMeshL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MandibleMeshR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_BoundVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MiddleSegmentNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_RotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_SegmentOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_SegmentInterpLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_Rotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_bHeadHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_bCanWalk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserActivateTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserShootTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserCancelTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_AttackDelayTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStampipedeSegment_Head_Statics::NewProp_LaserOrigin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStampipedeSegment_Head_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStampipedeSegment_Head>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStampipedeSegment_Head_Statics::ClassParams = {
		&AStampipedeSegment_Head::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStampipedeSegment_Head_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStampipedeSegment_Head_Statics::PropPointers),
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
		{ Z_Construct_UClass_AStampipedeSegment_Head, AStampipedeSegment_Head::StaticClass, TEXT("AStampipedeSegment_Head"), &Z_Registration_Info_UClass_AStampipedeSegment_Head, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStampipedeSegment_Head), 1159117659U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Head_h_1961454643(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Head_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_StampipedeSegment_Head_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
