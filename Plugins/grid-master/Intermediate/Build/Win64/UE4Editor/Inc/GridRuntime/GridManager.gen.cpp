// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridRuntime/Public/GridManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridManager() {}
// Cross Module References
	GRIDRUNTIME_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_AGridManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GridRuntime();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_AGridManager_ClearAllGridInfo();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_AGridManager_GetGridByCoord();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGrid_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_AGridManager_GetGridByPosition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_AGridManager_GetGridsByBound();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_AGridManager_GetGridsByCoord();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_AGridManager_GetGridsByRange();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_AGridManager_GetGridSize();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_AGridManager_GetPathFinder();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridPathFinder_NoRegister();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_AGridManager_SetGridSize();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridPainter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridInfo_NoRegister();
// End Cross Module References
	void AGridManager::StaticRegisterNativesAGridManager()
	{
		UClass* Class = AGridManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAllGridInfo", &AGridManager::execClearAllGridInfo },
			{ "GetGridByCoord", &AGridManager::execGetGridByCoord },
			{ "GetGridByPosition", &AGridManager::execGetGridByPosition },
			{ "GetGridsByBound", &AGridManager::execGetGridsByBound },
			{ "GetGridsByCoord", &AGridManager::execGetGridsByCoord },
			{ "GetGridsByRange", &AGridManager::execGetGridsByRange },
			{ "GetGridSize", &AGridManager::execGetGridSize },
			{ "GetPathFinder", &AGridManager::execGetPathFinder },
			{ "SetGridSize", &AGridManager::execSetGridSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGridManager_ClearAllGridInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridManager_ClearAllGridInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridManager" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_ClearAllGridInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "ClearAllGridInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridManager_ClearAllGridInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ClearAllGridInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridManager_ClearAllGridInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridManager_ClearAllGridInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridManager_GetGridByCoord_Statics
	{
		struct GridManager_eventGetGridByCoord_Parms
		{
			FIntVector Coord;
			UGrid* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coord_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_GetGridByCoord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridManager_eventGetGridByCoord_Parms, ReturnValue), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridManager_GetGridByCoord_Statics::NewProp_Coord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetGridByCoord_Statics::NewProp_Coord = { "Coord", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridManager_eventGetGridByCoord_Parms, Coord), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_AGridManager_GetGridByCoord_Statics::NewProp_Coord_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridByCoord_Statics::NewProp_Coord_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetGridByCoord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridByCoord_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridByCoord_Statics::NewProp_Coord,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridManager_GetGridByCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridManager" },
		{ "Comment", "/** if you don't need multi-level grid support, this function can be used, otherwise using GetGridsByCoord*/" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
		{ "ToolTip", "if you don't need multi-level grid support, this function can be used, otherwise using GetGridsByCoord" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetGridByCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetGridByCoord", nullptr, nullptr, sizeof(GridManager_eventGetGridByCoord_Parms), Z_Construct_UFunction_AGridManager_GetGridByCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridByCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridManager_GetGridByCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridByCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridManager_GetGridByCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridManager_GetGridByCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridManager_GetGridByPosition_Statics
	{
		struct GridManager_eventGetGridByPosition_Parms
		{
			FVector Position;
			UGrid* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_GetGridByPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridManager_eventGetGridByPosition_Parms, ReturnValue), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridManager_GetGridByPosition_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetGridByPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridManager_eventGetGridByPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AGridManager_GetGridByPosition_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridByPosition_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetGridByPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridByPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridByPosition_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridManager_GetGridByPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridManager" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetGridByPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetGridByPosition", nullptr, nullptr, sizeof(GridManager_eventGetGridByPosition_Parms), Z_Construct_UFunction_AGridManager_GetGridByPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridByPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridManager_GetGridByPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridByPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridManager_GetGridByPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridManager_GetGridByPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridManager_GetGridsByBound_Statics
	{
		struct GridManager_eventGetGridsByBound_Parms
		{
			FBox Bound;
			TArray<UGrid*> Grids;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Grids;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grids_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGridManager_GetGridsByBound_Statics::NewProp_Grids = { "Grids", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridManager_eventGetGridsByBound_Parms, Grids), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_GetGridsByBound_Statics::NewProp_Grids_Inner = { "Grids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridManager_GetGridsByBound_Statics::NewProp_Bound_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetGridsByBound_Statics::NewProp_Bound = { "Bound", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridManager_eventGetGridsByBound_Parms, Bound), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_AGridManager_GetGridsByBound_Statics::NewProp_Bound_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridsByBound_Statics::NewProp_Bound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetGridsByBound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridsByBound_Statics::NewProp_Grids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridsByBound_Statics::NewProp_Grids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridsByBound_Statics::NewProp_Bound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridManager_GetGridsByBound_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridManager" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetGridsByBound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetGridsByBound", nullptr, nullptr, sizeof(GridManager_eventGetGridsByBound_Parms), Z_Construct_UFunction_AGridManager_GetGridsByBound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridsByBound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridManager_GetGridsByBound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridsByBound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridManager_GetGridsByBound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridManager_GetGridsByBound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridManager_GetGridsByCoord_Statics
	{
		struct GridManager_eventGetGridsByCoord_Parms
		{
			FIntVector Coord;
			TArray<UGrid*> Grids;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Grids;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grids_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coord_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGridManager_GetGridsByCoord_Statics::NewProp_Grids = { "Grids", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridManager_eventGetGridsByCoord_Parms, Grids), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_GetGridsByCoord_Statics::NewProp_Grids_Inner = { "Grids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridManager_GetGridsByCoord_Statics::NewProp_Coord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetGridsByCoord_Statics::NewProp_Coord = { "Coord", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridManager_eventGetGridsByCoord_Parms, Coord), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_AGridManager_GetGridsByCoord_Statics::NewProp_Coord_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridsByCoord_Statics::NewProp_Coord_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetGridsByCoord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridsByCoord_Statics::NewProp_Grids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridsByCoord_Statics::NewProp_Grids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridsByCoord_Statics::NewProp_Coord,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridManager_GetGridsByCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridManager" },
		{ "Comment", "/** Get all grids belong to this coord */" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
		{ "ToolTip", "Get all grids belong to this coord" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetGridsByCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetGridsByCoord", nullptr, nullptr, sizeof(GridManager_eventGetGridsByCoord_Parms), Z_Construct_UFunction_AGridManager_GetGridsByCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridsByCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridManager_GetGridsByCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridsByCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridManager_GetGridsByCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridManager_GetGridsByCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridManager_GetGridsByRange_Statics
	{
		struct GridManager_eventGetGridsByRange_Parms
		{
			UGrid* Center;
			int32 Range;
			TArray<UGrid*> Grids;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Grids;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grids_Inner;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Range;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGridManager_GetGridsByRange_Statics::NewProp_Grids = { "Grids", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridManager_eventGetGridsByRange_Parms, Grids), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_GetGridsByRange_Statics::NewProp_Grids_Inner = { "Grids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGridManager_GetGridsByRange_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridManager_eventGetGridsByRange_Parms, Range), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_GetGridsByRange_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridManager_eventGetGridsByRange_Parms, Center), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetGridsByRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridsByRange_Statics::NewProp_Grids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridsByRange_Statics::NewProp_Grids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridsByRange_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridsByRange_Statics::NewProp_Center,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridManager_GetGridsByRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridManager" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetGridsByRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetGridsByRange", nullptr, nullptr, sizeof(GridManager_eventGetGridsByRange_Parms), Z_Construct_UFunction_AGridManager_GetGridsByRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridsByRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridManager_GetGridsByRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridsByRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridManager_GetGridsByRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridManager_GetGridsByRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridManager_GetGridSize_Statics
	{
		struct GridManager_eventGetGridSize_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGridManager_GetGridSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridManager_eventGetGridSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetGridSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridManager_GetGridSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridManager" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetGridSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetGridSize", nullptr, nullptr, sizeof(GridManager_eventGetGridSize_Parms), Z_Construct_UFunction_AGridManager_GetGridSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridManager_GetGridSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridManager_GetGridSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridManager_GetGridSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridManager_GetPathFinder_Statics
	{
		struct GridManager_eventGetPathFinder_Parms
		{
			UGridPathFinder* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_GetPathFinder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridManager_eventGetPathFinder_Parms, ReturnValue), Z_Construct_UClass_UGridPathFinder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetPathFinder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetPathFinder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridManager_GetPathFinder_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridManager" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetPathFinder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetPathFinder", nullptr, nullptr, sizeof(GridManager_eventGetPathFinder_Parms), Z_Construct_UFunction_AGridManager_GetPathFinder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetPathFinder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridManager_GetPathFinder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetPathFinder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridManager_GetPathFinder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridManager_GetPathFinder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridManager_SetGridSize_Statics
	{
		struct GridManager_eventSetGridSize_Parms
		{
			float GridSize;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGridManager_SetGridSize_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridManager_eventSetGridSize_Parms, GridSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_SetGridSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetGridSize_Statics::NewProp_GridSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridManager_SetGridSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridManager" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SetGridSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SetGridSize", nullptr, nullptr, sizeof(GridManager_eventSetGridSize_Parms), Z_Construct_UFunction_AGridManager_SetGridSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetGridSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridManager_SetGridSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetGridSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridManager_SetGridSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridManager_SetGridSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGridManager_NoRegister()
	{
		return AGridManager::StaticClass();
	}
	struct Z_Construct_UClass_AGridManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathFinder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathFinder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridPainter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridPainter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceTestDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TraceTestDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridPainterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GridPainterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridInfoClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GridInfoClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathFinderClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PathFinderClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGridManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridManager_ClearAllGridInfo, "ClearAllGridInfo" }, // 2215406336
		{ &Z_Construct_UFunction_AGridManager_GetGridByCoord, "GetGridByCoord" }, // 3491626749
		{ &Z_Construct_UFunction_AGridManager_GetGridByPosition, "GetGridByPosition" }, // 1806694258
		{ &Z_Construct_UFunction_AGridManager_GetGridsByBound, "GetGridsByBound" }, // 71708888
		{ &Z_Construct_UFunction_AGridManager_GetGridsByCoord, "GetGridsByCoord" }, // 2071241421
		{ &Z_Construct_UFunction_AGridManager_GetGridsByRange, "GetGridsByRange" }, // 4287800160
		{ &Z_Construct_UFunction_AGridManager_GetGridSize, "GetGridSize" }, // 1248591786
		{ &Z_Construct_UFunction_AGridManager_GetPathFinder, "GetPathFinder" }, // 35946164
		{ &Z_Construct_UFunction_AGridManager_SetGridSize, "SetGridSize" }, // 3629858680
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "GridManager.h" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::NewProp_PathFinder_MetaData[] = {
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_PathFinder = { "PathFinder", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridManager, PathFinder), Z_Construct_UClass_UGridPathFinder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_PathFinder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_PathFinder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::NewProp_GridPainter_MetaData[] = {
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridPainter = { "GridPainter", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridManager, GridPainter), Z_Construct_UClass_UGridPainter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_GridPainter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_GridPainter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "GridManager" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0021080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridManager, GridSize), METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_GridSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::NewProp_TraceTestDistance_MetaData[] = {
		{ "Category", "GridManager" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_TraceTestDistance = { "TraceTestDistance", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridManager, TraceTestDistance), METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_TraceTestDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_TraceTestDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::NewProp_GridPainterClass_MetaData[] = {
		{ "Category", "GridManager" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridPainterClass = { "GridPainterClass", nullptr, (EPropertyFlags)0x0015000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridManager, GridPainterClass), Z_Construct_UClass_UGridPainter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_GridPainterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_GridPainterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::NewProp_GridInfoClass_MetaData[] = {
		{ "Category", "GridManager" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridInfoClass = { "GridInfoClass", nullptr, (EPropertyFlags)0x0015000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridManager, GridInfoClass), Z_Construct_UClass_UGridInfo_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_GridInfoClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_GridInfoClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::NewProp_PathFinderClass_MetaData[] = {
		{ "Category", "GridManager" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// properties\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
		{ "ToolTip", "properties" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_PathFinderClass = { "PathFinderClass", nullptr, (EPropertyFlags)0x0015000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridManager, PathFinderClass), Z_Construct_UClass_UGridPathFinder_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_PathFinderClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_PathFinderClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_PathFinder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridPainter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_TraceTestDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridPainterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridInfoClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_PathFinderClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGridManager_Statics::ClassParams = {
		&AGridManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGridManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::PropPointers),
		0,
		0x009000ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGridManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGridManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGridManager, 1363688423);
	template<> GRIDRUNTIME_API UClass* StaticClass<AGridManager>()
	{
		return AGridManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGridManager(Z_Construct_UClass_AGridManager, &AGridManager::StaticClass, TEXT("/Script/GridRuntime"), TEXT("AGridManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
