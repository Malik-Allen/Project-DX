// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridRuntime/Public/Square/SquareGridManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSquareGridManager() {}
// Cross Module References
	GRIDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSquareGridArray();
	UPackage* Z_Construct_UPackage__Script_GridRuntime();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_USquareGrid_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_ASquareGridManager_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_ASquareGridManager();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_AGridManager();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_ASquareGridManager_GetSquareGridByPosition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGrid_NoRegister();
// End Cross Module References
class UScriptStruct* FSquareGridArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GRIDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSquareGridArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSquareGridArray, Z_Construct_UPackage__Script_GridRuntime(), TEXT("SquareGridArray"), sizeof(FSquareGridArray), Get_Z_Construct_UScriptStruct_FSquareGridArray_Hash());
	}
	return Singleton;
}
template<> GRIDRUNTIME_API UScriptStruct* StaticStruct<FSquareGridArray>()
{
	return FSquareGridArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSquareGridArray(FSquareGridArray::StaticStruct, TEXT("/Script/GridRuntime"), TEXT("SquareGridArray"), false, nullptr, nullptr);
static struct FScriptStruct_GridRuntime_StaticRegisterNativesFSquareGridArray
{
	FScriptStruct_GridRuntime_StaticRegisterNativesFSquareGridArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SquareGridArray")),new UScriptStruct::TCppStructOps<FSquareGridArray>);
	}
} ScriptStruct_GridRuntime_StaticRegisterNativesFSquareGridArray;
	struct Z_Construct_UScriptStruct_FSquareGridArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Grids;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grids_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSquareGridArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Square/SquareGridManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSquareGridArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSquareGridArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSquareGridArray_Statics::NewProp_Grids_MetaData[] = {
		{ "ModuleRelativePath", "Public/Square/SquareGridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSquareGridArray_Statics::NewProp_Grids = { "Grids", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSquareGridArray, Grids), METADATA_PARAMS(Z_Construct_UScriptStruct_FSquareGridArray_Statics::NewProp_Grids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSquareGridArray_Statics::NewProp_Grids_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSquareGridArray_Statics::NewProp_Grids_Inner = { "Grids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USquareGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSquareGridArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSquareGridArray_Statics::NewProp_Grids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSquareGridArray_Statics::NewProp_Grids_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSquareGridArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
		nullptr,
		&NewStructOps,
		"SquareGridArray",
		sizeof(FSquareGridArray),
		alignof(FSquareGridArray),
		Z_Construct_UScriptStruct_FSquareGridArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSquareGridArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSquareGridArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSquareGridArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSquareGridArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSquareGridArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GridRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SquareGridArray"), sizeof(FSquareGridArray), Get_Z_Construct_UScriptStruct_FSquareGridArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSquareGridArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSquareGridArray_Hash() { return 4025829459U; }
	void ASquareGridManager::StaticRegisterNativesASquareGridManager()
	{
		UClass* Class = ASquareGridManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSquareGridByPosition", &ASquareGridManager::execGetSquareGridByPosition },
			{ "GetSquareGridsByCoord", &ASquareGridManager::execGetSquareGridsByCoord },
			{ "GetSquareGridsByRange", &ASquareGridManager::execGetSquareGridsByRange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASquareGridManager_GetSquareGridByPosition_Statics
	{
		struct SquareGridManager_eventGetSquareGridByPosition_Parms
		{
			FVector Position;
			USquareGrid* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASquareGridManager_GetSquareGridByPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SquareGridManager_eventGetSquareGridByPosition_Parms, ReturnValue), Z_Construct_UClass_USquareGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASquareGridManager_GetSquareGridByPosition_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASquareGridManager_GetSquareGridByPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SquareGridManager_eventGetSquareGridByPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASquareGridManager_GetSquareGridByPosition_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareGridManager_GetSquareGridByPosition_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquareGridManager_GetSquareGridByPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquareGridManager_GetSquareGridByPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquareGridManager_GetSquareGridByPosition_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASquareGridManager_GetSquareGridByPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SquareGridManager" },
		{ "ModuleRelativePath", "Public/Square/SquareGridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquareGridManager_GetSquareGridByPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASquareGridManager, nullptr, "GetSquareGridByPosition", nullptr, nullptr, sizeof(SquareGridManager_eventGetSquareGridByPosition_Parms), Z_Construct_UFunction_ASquareGridManager_GetSquareGridByPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareGridManager_GetSquareGridByPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASquareGridManager_GetSquareGridByPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareGridManager_GetSquareGridByPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASquareGridManager_GetSquareGridByPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASquareGridManager_GetSquareGridByPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord_Statics
	{
		struct SquareGridManager_eventGetSquareGridsByCoord_Parms
		{
			FIntVector Coord;
			TArray<USquareGrid*> Grids;
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord_Statics::NewProp_Grids = { "Grids", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SquareGridManager_eventGetSquareGridsByCoord_Parms, Grids), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord_Statics::NewProp_Grids_Inner = { "Grids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USquareGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord_Statics::NewProp_Coord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord_Statics::NewProp_Coord = { "Coord", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SquareGridManager_eventGetSquareGridsByCoord_Parms, Coord), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord_Statics::NewProp_Coord_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord_Statics::NewProp_Coord_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord_Statics::NewProp_Grids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord_Statics::NewProp_Grids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord_Statics::NewProp_Coord,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "SquareGridManager" },
		{ "ModuleRelativePath", "Public/Square/SquareGridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASquareGridManager, nullptr, "GetSquareGridsByCoord", nullptr, nullptr, sizeof(SquareGridManager_eventGetSquareGridsByCoord_Parms), Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics
	{
		struct SquareGridManager_eventGetSquareGridsByRange_Parms
		{
			UGrid* Center;
			int32 Range;
			TArray<UGrid*> Grids;
			bool bDiagonal;
		};
		static void NewProp_bDiagonal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDiagonal;
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
	void Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics::NewProp_bDiagonal_SetBit(void* Obj)
	{
		((SquareGridManager_eventGetSquareGridsByRange_Parms*)Obj)->bDiagonal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics::NewProp_bDiagonal = { "bDiagonal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SquareGridManager_eventGetSquareGridsByRange_Parms), &Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics::NewProp_bDiagonal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics::NewProp_Grids = { "Grids", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SquareGridManager_eventGetSquareGridsByRange_Parms, Grids), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics::NewProp_Grids_Inner = { "Grids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SquareGridManager_eventGetSquareGridsByRange_Parms, Range), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SquareGridManager_eventGetSquareGridsByRange_Parms, Center), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics::NewProp_bDiagonal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics::NewProp_Grids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics::NewProp_Grids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics::NewProp_Center,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "SquareGridManager" },
		{ "CPP_Default_bDiagonal", "false" },
		{ "ModuleRelativePath", "Public/Square/SquareGridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASquareGridManager, nullptr, "GetSquareGridsByRange", nullptr, nullptr, sizeof(SquareGridManager_eventGetSquareGridsByRange_Parms), Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASquareGridManager_NoRegister()
	{
		return ASquareGridManager::StaticClass();
	}
	struct Z_Construct_UClass_ASquareGridManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridsPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GridsPool;
		static const UE4CodeGen_Private::FUInt64PropertyParams NewProp_GridsPool_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridsPool_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASquareGridManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGridManager,
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASquareGridManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASquareGridManager_GetSquareGridByPosition, "GetSquareGridByPosition" }, // 484729849
		{ &Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByCoord, "GetSquareGridsByCoord" }, // 2315260727
		{ &Z_Construct_UFunction_ASquareGridManager_GetSquareGridsByRange, "GetSquareGridsByRange" }, // 349938955
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASquareGridManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Square/SquareGridManager.h" },
		{ "ModuleRelativePath", "Public/Square/SquareGridManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASquareGridManager_Statics::NewProp_GridsPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/Square/SquareGridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASquareGridManager_Statics::NewProp_GridsPool = { "GridsPool", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASquareGridManager, GridsPool), METADATA_PARAMS(Z_Construct_UClass_ASquareGridManager_Statics::NewProp_GridsPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASquareGridManager_Statics::NewProp_GridsPool_MetaData)) };
	const UE4CodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_ASquareGridManager_Statics::NewProp_GridsPool_Key_KeyProp = { "GridsPool_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASquareGridManager_Statics::NewProp_GridsPool_ValueProp = { "GridsPool", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSquareGridArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASquareGridManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquareGridManager_Statics::NewProp_GridsPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquareGridManager_Statics::NewProp_GridsPool_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquareGridManager_Statics::NewProp_GridsPool_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASquareGridManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASquareGridManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASquareGridManager_Statics::ClassParams = {
		&ASquareGridManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASquareGridManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASquareGridManager_Statics::PropPointers),
		0,
		0x009000ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASquareGridManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASquareGridManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASquareGridManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASquareGridManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASquareGridManager, 1444088738);
	template<> GRIDRUNTIME_API UClass* StaticClass<ASquareGridManager>()
	{
		return ASquareGridManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASquareGridManager(Z_Construct_UClass_ASquareGridManager, &ASquareGridManager::StaticClass, TEXT("/Script/GridRuntime"), TEXT("ASquareGridManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASquareGridManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
