// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridRuntime/Public/Components/GridSensingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridSensingComponent() {}
// Cross Module References
	GRIDRUNTIME_API UFunction* Z_Construct_UDelegateFunction_GridRuntime_SenseTestFunc__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GridRuntime();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	GRIDRUNTIME_API UFunction* Z_Construct_UDelegateFunction_GridRuntime_SeePawnEvent__DelegateSignature();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridSensingComponent_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridSensingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridSensingComponent_DefaultSenseTestFunc();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridSensingComponent_GetSensingGrids();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGrid_NoRegister();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridSensingComponent_SetSensingInterval();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GridRuntime_SenseTestFunc__DelegateSignature_Statics
	{
		struct _Script_GridRuntime_eventSenseTestFunc_Parms
		{
			APawn* Pawn;
			bool CouldSense;
		};
		static void NewProp_CouldSense_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CouldSense;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_GridRuntime_SenseTestFunc__DelegateSignature_Statics::NewProp_CouldSense_SetBit(void* Obj)
	{
		((_Script_GridRuntime_eventSenseTestFunc_Parms*)Obj)->CouldSense = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GridRuntime_SenseTestFunc__DelegateSignature_Statics::NewProp_CouldSense = { "CouldSense", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_GridRuntime_eventSenseTestFunc_Parms), &Z_Construct_UDelegateFunction_GridRuntime_SenseTestFunc__DelegateSignature_Statics::NewProp_CouldSense_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GridRuntime_SenseTestFunc__DelegateSignature_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GridRuntime_eventSenseTestFunc_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GridRuntime_SenseTestFunc__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridRuntime_SenseTestFunc__DelegateSignature_Statics::NewProp_CouldSense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridRuntime_SenseTestFunc__DelegateSignature_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GridRuntime_SenseTestFunc__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GridSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GridRuntime_SenseTestFunc__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GridRuntime, nullptr, "SenseTestFunc__DelegateSignature", nullptr, nullptr, sizeof(_Script_GridRuntime_eventSenseTestFunc_Parms), Z_Construct_UDelegateFunction_GridRuntime_SenseTestFunc__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridRuntime_SenseTestFunc__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GridRuntime_SenseTestFunc__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridRuntime_SenseTestFunc__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GridRuntime_SenseTestFunc__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GridRuntime_SenseTestFunc__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GridRuntime_SeePawnEvent__DelegateSignature_Statics
	{
		struct _Script_GridRuntime_eventSeePawnEvent_Parms
		{
			APawn* Pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GridRuntime_SeePawnEvent__DelegateSignature_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GridRuntime_eventSeePawnEvent_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GridRuntime_SeePawnEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridRuntime_SeePawnEvent__DelegateSignature_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GridRuntime_SeePawnEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GridSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GridRuntime_SeePawnEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GridRuntime, nullptr, "SeePawnEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_GridRuntime_eventSeePawnEvent_Parms), Z_Construct_UDelegateFunction_GridRuntime_SeePawnEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridRuntime_SeePawnEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GridRuntime_SeePawnEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridRuntime_SeePawnEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GridRuntime_SeePawnEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GridRuntime_SeePawnEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UGridSensingComponent::StaticRegisterNativesUGridSensingComponent()
	{
		UClass* Class = UGridSensingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CouldSeePawn", &UGridSensingComponent::execCouldSeePawn },
			{ "DefaultSenseTestFunc", &UGridSensingComponent::execDefaultSenseTestFunc },
			{ "GetSensingGrids", &UGridSensingComponent::execGetSensingGrids },
			{ "SetSensingInterval", &UGridSensingComponent::execSetSensingInterval },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn_Statics
	{
		struct GridSensingComponent_eventCouldSeePawn_Parms
		{
			const APawn* Pawn;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridSensingComponent_eventCouldSeePawn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridSensingComponent_eventCouldSeePawn_Parms), &Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn_Statics::NewProp_Pawn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridSensingComponent_eventCouldSeePawn_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn_Statics::NewProp_Pawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridSensingComponent" },
		{ "ModuleRelativePath", "Public/Components/GridSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSensingComponent, nullptr, "CouldSeePawn", nullptr, nullptr, sizeof(GridSensingComponent_eventCouldSeePawn_Parms), Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridSensingComponent_DefaultSenseTestFunc_Statics
	{
		struct GridSensingComponent_eventDefaultSenseTestFunc_Parms
		{
			APawn* Pawn;
			bool CouldSense;
		};
		static void NewProp_CouldSense_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CouldSense;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGridSensingComponent_DefaultSenseTestFunc_Statics::NewProp_CouldSense_SetBit(void* Obj)
	{
		((GridSensingComponent_eventDefaultSenseTestFunc_Parms*)Obj)->CouldSense = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridSensingComponent_DefaultSenseTestFunc_Statics::NewProp_CouldSense = { "CouldSense", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridSensingComponent_eventDefaultSenseTestFunc_Parms), &Z_Construct_UFunction_UGridSensingComponent_DefaultSenseTestFunc_Statics::NewProp_CouldSense_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridSensingComponent_DefaultSenseTestFunc_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridSensingComponent_eventDefaultSenseTestFunc_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSensingComponent_DefaultSenseTestFunc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSensingComponent_DefaultSenseTestFunc_Statics::NewProp_CouldSense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSensingComponent_DefaultSenseTestFunc_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSensingComponent_DefaultSenseTestFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GridSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSensingComponent_DefaultSenseTestFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSensingComponent, nullptr, "DefaultSenseTestFunc", nullptr, nullptr, sizeof(GridSensingComponent_eventDefaultSenseTestFunc_Parms), Z_Construct_UFunction_UGridSensingComponent_DefaultSenseTestFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSensingComponent_DefaultSenseTestFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSensingComponent_DefaultSenseTestFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSensingComponent_DefaultSenseTestFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSensingComponent_DefaultSenseTestFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridSensingComponent_DefaultSenseTestFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridSensingComponent_GetSensingGrids_Statics
	{
		struct GridSensingComponent_eventGetSensingGrids_Parms
		{
			TArray<UGrid*> SensingGrids;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SensingGrids;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SensingGrids_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridSensingComponent_GetSensingGrids_Statics::NewProp_SensingGrids = { "SensingGrids", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridSensingComponent_eventGetSensingGrids_Parms, SensingGrids), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridSensingComponent_GetSensingGrids_Statics::NewProp_SensingGrids_Inner = { "SensingGrids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSensingComponent_GetSensingGrids_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSensingComponent_GetSensingGrids_Statics::NewProp_SensingGrids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSensingComponent_GetSensingGrids_Statics::NewProp_SensingGrids_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSensingComponent_GetSensingGrids_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridSensingComponent" },
		{ "ModuleRelativePath", "Public/Components/GridSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSensingComponent_GetSensingGrids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSensingComponent, nullptr, "GetSensingGrids", nullptr, nullptr, sizeof(GridSensingComponent_eventGetSensingGrids_Parms), Z_Construct_UFunction_UGridSensingComponent_GetSensingGrids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSensingComponent_GetSensingGrids_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSensingComponent_GetSensingGrids_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSensingComponent_GetSensingGrids_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSensingComponent_GetSensingGrids()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridSensingComponent_GetSensingGrids_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridSensingComponent_SetSensingInterval_Statics
	{
		struct GridSensingComponent_eventSetSensingInterval_Parms
		{
			float NewInterval;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGridSensingComponent_SetSensingInterval_Statics::NewProp_NewInterval = { "NewInterval", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridSensingComponent_eventSetSensingInterval_Parms, NewInterval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSensingComponent_SetSensingInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSensingComponent_SetSensingInterval_Statics::NewProp_NewInterval,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSensingComponent_SetSensingInterval_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridSensingComponent" },
		{ "Comment", "/** interval <= 0 disables sensing  */" },
		{ "ModuleRelativePath", "Public/Components/GridSensingComponent.h" },
		{ "ToolTip", "interval <= 0 disables sensing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSensingComponent_SetSensingInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSensingComponent, nullptr, "SetSensingInterval", nullptr, nullptr, sizeof(GridSensingComponent_eventSetSensingInterval_Parms), Z_Construct_UFunction_UGridSensingComponent_SetSensingInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSensingComponent_SetSensingInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSensingComponent_SetSensingInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSensingComponent_SetSensingInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSensingComponent_SetSensingInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridSensingComponent_SetSensingInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGridSensingComponent_NoRegister()
	{
		return UGridSensingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGridSensingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSeePawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSeePawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenseTestFunc_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_SenseTestFunc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensedPawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SensedPawns;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SensedPawns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDiagonal_MetaData[];
#endif
		static void NewProp_bDiagonal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDiagonal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipLineSightTest_MetaData[];
#endif
		static void NewProp_bSkipLineSightTest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipLineSightTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisionAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisionAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisionGridRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VisionGridRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensingInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SensingInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridSensingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridSensingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridSensingComponent_CouldSeePawn, "CouldSeePawn" }, // 2969616633
		{ &Z_Construct_UFunction_UGridSensingComponent_DefaultSenseTestFunc, "DefaultSenseTestFunc" }, // 3652460041
		{ &Z_Construct_UFunction_UGridSensingComponent_GetSensingGrids, "GetSensingGrids" }, // 4140101562
		{ &Z_Construct_UFunction_UGridSensingComponent_SetSensingInterval, "SetSensingInterval" }, // 925964992
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSensingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Grid" },
		{ "Comment", "/**\n\x09Owner actor should implement IGridPawnInterface\n*/" },
		{ "IncludePath", "Components/GridSensingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/GridSensingComponent.h" },
		{ "ToolTip", "Owner actor should implement IGridPawnInterface" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_OnSeePawn_MetaData[] = {
		{ "Category", "GridSensingComponent" },
		{ "ModuleRelativePath", "Public/Components/GridSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_OnSeePawn = { "OnSeePawn", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridSensingComponent, OnSeePawn), Z_Construct_UDelegateFunction_GridRuntime_SeePawnEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_OnSeePawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_OnSeePawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_SenseTestFunc_MetaData[] = {
		{ "Category", "GridSensingComponent" },
		{ "ModuleRelativePath", "Public/Components/GridSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_SenseTestFunc = { "SenseTestFunc", nullptr, (EPropertyFlags)0x0010000000080004, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridSensingComponent, SenseTestFunc), Z_Construct_UDelegateFunction_GridRuntime_SenseTestFunc__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_SenseTestFunc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_SenseTestFunc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_SensedPawns_MetaData[] = {
		{ "Category", "GridSensingComponent" },
		{ "ModuleRelativePath", "Public/Components/GridSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_SensedPawns = { "SensedPawns", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridSensingComponent, SensedPawns), METADATA_PARAMS(Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_SensedPawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_SensedPawns_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_SensedPawns_Inner = { "SensedPawns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_bDiagonal_MetaData[] = {
		{ "Category", "GridSensingComponent" },
		{ "Comment", "/** Valid when using SquareGridManager */" },
		{ "ModuleRelativePath", "Public/Components/GridSensingComponent.h" },
		{ "ToolTip", "Valid when using SquareGridManager" },
	};
#endif
	void Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_bDiagonal_SetBit(void* Obj)
	{
		((UGridSensingComponent*)Obj)->bDiagonal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_bDiagonal = { "bDiagonal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGridSensingComponent), &Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_bDiagonal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_bDiagonal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_bDiagonal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_bSkipLineSightTest_MetaData[] = {
		{ "Category", "GridSensingComponent" },
		{ "ModuleRelativePath", "Public/Components/GridSensingComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_bSkipLineSightTest_SetBit(void* Obj)
	{
		((UGridSensingComponent*)Obj)->bSkipLineSightTest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_bSkipLineSightTest = { "bSkipLineSightTest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGridSensingComponent), &Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_bSkipLineSightTest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_bSkipLineSightTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_bSkipLineSightTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_VisionAngle_MetaData[] = {
		{ "Category", "GridSensingComponent" },
		{ "ModuleRelativePath", "Public/Components/GridSensingComponent.h" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_VisionAngle = { "VisionAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridSensingComponent, VisionAngle), METADATA_PARAMS(Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_VisionAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_VisionAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_VisionGridRange_MetaData[] = {
		{ "Category", "GridSensingComponent" },
		{ "ModuleRelativePath", "Public/Components/GridSensingComponent.h" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_VisionGridRange = { "VisionGridRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridSensingComponent, VisionGridRange), METADATA_PARAMS(Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_VisionGridRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_VisionGridRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_SensingInterval_MetaData[] = {
		{ "Category", "GridSensingComponent" },
		{ "Comment", "/** interval == 0 disables sensing  */" },
		{ "ModuleRelativePath", "Public/Components/GridSensingComponent.h" },
		{ "ToolTip", "interval == 0 disables sensing" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_SensingInterval = { "SensingInterval", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridSensingComponent, SensingInterval), METADATA_PARAMS(Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_SensingInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_SensingInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridSensingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_OnSeePawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_SenseTestFunc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_SensedPawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_SensedPawns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_bDiagonal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_bSkipLineSightTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_VisionAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_VisionGridRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSensingComponent_Statics::NewProp_SensingInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridSensingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridSensingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGridSensingComponent_Statics::ClassParams = {
		&UGridSensingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGridSensingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridSensingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGridSensingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSensingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridSensingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGridSensingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGridSensingComponent, 970648268);
	template<> GRIDRUNTIME_API UClass* StaticClass<UGridSensingComponent>()
	{
		return UGridSensingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridSensingComponent(Z_Construct_UClass_UGridSensingComponent, &UGridSensingComponent::StaticClass, TEXT("/Script/GridRuntime"), TEXT("UGridSensingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridSensingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
