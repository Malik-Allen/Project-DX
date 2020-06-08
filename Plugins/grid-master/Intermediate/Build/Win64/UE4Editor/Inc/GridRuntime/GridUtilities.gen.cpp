// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridRuntime/Public/Util/GridUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridUtilities() {}
// Cross Module References
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridUtilities_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GridRuntime();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGrid_NoRegister();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridUtilities_FindPath();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridPathFinder_NoRegister();
	GRIDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridPathfindingRequest();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridUtilities_GetReachableGrids();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector();
// End Cross Module References
	void UGridUtilities::StaticRegisterNativesUGridUtilities()
	{
		UClass* Class = UGridUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add_IntVectorIntVector", &UGridUtilities::execAdd_IntVectorIntVector },
			{ "EqualEqual_GridGrid", &UGridUtilities::execEqualEqual_GridGrid },
			{ "FindPath", &UGridUtilities::execFindPath },
			{ "GetBoundsByGridArray", &UGridUtilities::execGetBoundsByGridArray },
			{ "GetReachableGrids", &UGridUtilities::execGetReachableGrids },
			{ "GridTraceSingleForObjects", &UGridUtilities::execGridTraceSingleForObjects },
			{ "Multiply_IntVectorInt", &UGridUtilities::execMultiply_IntVectorInt },
			{ "NotEqual_GridGrid", &UGridUtilities::execNotEqual_GridGrid },
			{ "Subtract_IntVectorIntVector", &UGridUtilities::execSubtract_IntVectorIntVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics
	{
		struct GridUtilities_eventAdd_IntVectorIntVector_Parms
		{
			FIntVector L;
			FIntVector R;
			FIntVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_L_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_L;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventAdd_IntVectorIntVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics::NewProp_R_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventAdd_IntVectorIntVector_Parms, R), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics::NewProp_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics::NewProp_R_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics::NewProp_L_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics::NewProp_L = { "L", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventAdd_IntVectorIntVector_Parms, L), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics::NewProp_L_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics::NewProp_L_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics::NewProp_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics::NewProp_L,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "CompactNodeTitle", "+" },
		{ "DisplayName", "IntVector + IntVector" },
		{ "Keywords", "+ add plus" },
		{ "ModuleRelativePath", "Public/Util/GridUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridUtilities, nullptr, "Add_IntVectorIntVector", nullptr, nullptr, sizeof(GridUtilities_eventAdd_IntVectorIntVector_Parms), Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics
	{
		struct GridUtilities_eventEqualEqual_GridGrid_Parms
		{
			const UGrid* A;
			const UGrid* B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridUtilities_eventEqualEqual_GridGrid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridUtilities_eventEqualEqual_GridGrid_Parms), &Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventEqualEqual_GridGrid_Parms, B), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventEqualEqual_GridGrid_Parms, A), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (Grid)" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Public/Util/GridUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridUtilities, nullptr, "EqualEqual_GridGrid", nullptr, nullptr, sizeof(GridUtilities_eventEqualEqual_GridGrid_Parms), Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridUtilities_FindPath_Statics
	{
		struct GridUtilities_eventFindPath_Parms
		{
			FGridPathfindingRequest Request;
			UGridPathFinder* PathFinder;
			TArray<UGrid*> Result;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Result_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathFinder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGridUtilities_FindPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridUtilities_eventFindPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridUtilities_FindPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridUtilities_eventFindPath_Parms), &Z_Construct_UFunction_UGridUtilities_FindPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridUtilities_FindPath_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventFindPath_Parms, Result), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridUtilities_FindPath_Statics::NewProp_Result_Inner = { "Result", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridUtilities_FindPath_Statics::NewProp_PathFinder = { "PathFinder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventFindPath_Parms, PathFinder), Z_Construct_UClass_UGridPathFinder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_FindPath_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtilities_FindPath_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventFindPath_Parms, Request), Z_Construct_UScriptStruct_FGridPathfindingRequest, METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_FindPath_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_FindPath_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtilities_FindPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_FindPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_FindPath_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_FindPath_Statics::NewProp_Result_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_FindPath_Statics::NewProp_PathFinder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_FindPath_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_FindPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/** Grid-based pathfinding */" },
		{ "ModuleRelativePath", "Public/Util/GridUtilities.h" },
		{ "ToolTip", "Grid-based pathfinding" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtilities_FindPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridUtilities, nullptr, "FindPath", nullptr, nullptr, sizeof(GridUtilities_eventFindPath_Parms), Z_Construct_UFunction_UGridUtilities_FindPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_FindPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_FindPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_FindPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridUtilities_FindPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridUtilities_FindPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray_Statics
	{
		struct GridUtilities_eventGetBoundsByGridArray_Parms
		{
			TArray<UGrid*> Grids;
			FBoxSphereBounds Bounds;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Grids;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grids_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventGetBoundsByGridArray_Parms, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray_Statics::NewProp_Grids_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray_Statics::NewProp_Grids = { "Grids", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventGetBoundsByGridArray_Parms, Grids), METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray_Statics::NewProp_Grids_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray_Statics::NewProp_Grids_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray_Statics::NewProp_Grids_Inner = { "Grids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray_Statics::NewProp_Grids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray_Statics::NewProp_Grids_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridUtilities" },
		{ "ModuleRelativePath", "Public/Util/GridUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridUtilities, nullptr, "GetBoundsByGridArray", nullptr, nullptr, sizeof(GridUtilities_eventGetBoundsByGridArray_Parms), Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics
	{
		struct GridUtilities_eventGetReachableGrids_Parms
		{
			AActor* Sender;
			int32 MaxCost;
			UGridPathFinder* PathFinder;
			TArray<UGrid*> Result;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Result_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathFinder;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCost;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sender;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridUtilities_eventGetReachableGrids_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridUtilities_eventGetReachableGrids_Parms), &Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventGetReachableGrids_Parms, Result), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::NewProp_Result_Inner = { "Result", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::NewProp_PathFinder = { "PathFinder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventGetReachableGrids_Parms, PathFinder), Z_Construct_UClass_UGridPathFinder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::NewProp_MaxCost = { "MaxCost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventGetReachableGrids_Parms, MaxCost), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventGetReachableGrids_Parms, Sender), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::NewProp_Result_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::NewProp_PathFinder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::NewProp_MaxCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::NewProp_Sender,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "ModuleRelativePath", "Public/Util/GridUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridUtilities, nullptr, "GetReachableGrids", nullptr, nullptr, sizeof(GridUtilities_eventGetReachableGrids_Parms), Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridUtilities_GetReachableGrids()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridUtilities_GetReachableGrids_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics
	{
		struct GridUtilities_eventGridTraceSingleForObjects_Parms
		{
			const UGrid* Grid;
			float TraceDistance;
			TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			FHitResult OutHit;
			bool bIgnoreSelf;
			FLinearColor TraceColor;
			FLinearColor TraceHitColor;
			float DrawTime;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceHitColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceColor;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridUtilities_eventGridTraceSingleForObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridUtilities_eventGridTraceSingleForObjects_Parms), &Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_DrawTime = { "DrawTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventGridTraceSingleForObjects_Parms, DrawTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_TraceHitColor = { "TraceHitColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventGridTraceSingleForObjects_Parms, TraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_TraceColor = { "TraceColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventGridTraceSingleForObjects_Parms, TraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((GridUtilities_eventGridTraceSingleForObjects_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridUtilities_eventGridTraceSingleForObjects_Parms), &Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventGridTraceSingleForObjects_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventGridTraceSingleForObjects_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventGridTraceSingleForObjects_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((GridUtilities_eventGridTraceSingleForObjects_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridUtilities_eventGridTraceSingleForObjects_Parms), &Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventGridTraceSingleForObjects_Parms, ObjectTypes), METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_ObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_ObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventGridTraceSingleForObjects_Parms, TraceDistance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_Grid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventGridTraceSingleForObjects_Parms, Grid), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_Grid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_Grid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_DrawTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_TraceHitColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_TraceColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_bIgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_OutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_ObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_ObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_TraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::NewProp_Grid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridUtilities" },
		{ "CPP_Default_DrawTime", "5.000000" },
		{ "CPP_Default_TraceColor", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_TraceHitColor", "(R=0.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/Util/GridUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridUtilities, nullptr, "GridTraceSingleForObjects", nullptr, nullptr, sizeof(GridUtilities_eventGridTraceSingleForObjects_Parms), Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt_Statics
	{
		struct GridUtilities_eventMultiply_IntVectorInt_Parms
		{
			FIntVector L;
			int32 R;
			FIntVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_L_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_L;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventMultiply_IntVectorInt_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventMultiply_IntVectorInt_Parms, R), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt_Statics::NewProp_L_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt_Statics::NewProp_L = { "L", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventMultiply_IntVectorInt_Parms, L), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt_Statics::NewProp_L_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt_Statics::NewProp_L_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt_Statics::NewProp_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt_Statics::NewProp_L,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "CompactNodeTitle", "*" },
		{ "DisplayName", "IntVector * integer" },
		{ "Keywords", "* multiply" },
		{ "ModuleRelativePath", "Public/Util/GridUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridUtilities, nullptr, "Multiply_IntVectorInt", nullptr, nullptr, sizeof(GridUtilities_eventMultiply_IntVectorInt_Parms), Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics
	{
		struct GridUtilities_eventNotEqual_GridGrid_Parms
		{
			const UGrid* A;
			const UGrid* B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridUtilities_eventNotEqual_GridGrid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridUtilities_eventNotEqual_GridGrid_Parms), &Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventNotEqual_GridGrid_Parms, B), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventNotEqual_GridGrid_Parms, A), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Not Equal (Grid)" },
		{ "Keywords", "!= not equal" },
		{ "ModuleRelativePath", "Public/Util/GridUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridUtilities, nullptr, "NotEqual_GridGrid", nullptr, nullptr, sizeof(GridUtilities_eventNotEqual_GridGrid_Parms), Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics
	{
		struct GridUtilities_eventSubtract_IntVectorIntVector_Parms
		{
			FIntVector L;
			FIntVector R;
			FIntVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_L_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_L;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventSubtract_IntVectorIntVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics::NewProp_R_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventSubtract_IntVectorIntVector_Parms, R), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics::NewProp_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics::NewProp_R_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics::NewProp_L_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics::NewProp_L = { "L", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridUtilities_eventSubtract_IntVectorIntVector_Parms, L), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics::NewProp_L_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics::NewProp_L_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics::NewProp_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics::NewProp_L,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "CompactNodeTitle", "-" },
		{ "DisplayName", "IntVector - IntVector" },
		{ "Keywords", "- sub minus" },
		{ "ModuleRelativePath", "Public/Util/GridUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridUtilities, nullptr, "Subtract_IntVectorIntVector", nullptr, nullptr, sizeof(GridUtilities_eventSubtract_IntVectorIntVector_Parms), Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGridUtilities_NoRegister()
	{
		return UGridUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UGridUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridUtilities_Add_IntVectorIntVector, "Add_IntVectorIntVector" }, // 74489341
		{ &Z_Construct_UFunction_UGridUtilities_EqualEqual_GridGrid, "EqualEqual_GridGrid" }, // 2340278836
		{ &Z_Construct_UFunction_UGridUtilities_FindPath, "FindPath" }, // 472134849
		{ &Z_Construct_UFunction_UGridUtilities_GetBoundsByGridArray, "GetBoundsByGridArray" }, // 111631952
		{ &Z_Construct_UFunction_UGridUtilities_GetReachableGrids, "GetReachableGrids" }, // 2410595997
		{ &Z_Construct_UFunction_UGridUtilities_GridTraceSingleForObjects, "GridTraceSingleForObjects" }, // 3145566872
		{ &Z_Construct_UFunction_UGridUtilities_Multiply_IntVectorInt, "Multiply_IntVectorInt" }, // 1897049793
		{ &Z_Construct_UFunction_UGridUtilities_NotEqual_GridGrid, "NotEqual_GridGrid" }, // 3484117928
		{ &Z_Construct_UFunction_UGridUtilities_Subtract_IntVectorIntVector, "Subtract_IntVectorIntVector" }, // 1573011513
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Util/GridUtilities.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Util/GridUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGridUtilities_Statics::ClassParams = {
		&UGridUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGridUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGridUtilities, 3252777325);
	template<> GRIDRUNTIME_API UClass* StaticClass<UGridUtilities>()
	{
		return UGridUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridUtilities(Z_Construct_UClass_UGridUtilities, &UGridUtilities::StaticClass, TEXT("/Script/GridRuntime"), TEXT("UGridUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
