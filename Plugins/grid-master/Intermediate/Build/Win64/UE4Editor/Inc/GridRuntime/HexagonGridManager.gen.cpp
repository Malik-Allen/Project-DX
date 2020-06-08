// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridRuntime/Public/Hexagon/HexagonGridManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHexagonGridManager() {}
// Cross Module References
	GRIDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHexagonGridArray();
	UPackage* Z_Construct_UPackage__Script_GridRuntime();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UHexagonGrid_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_AHexagonGridManager_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_AHexagonGridManager();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_AGridManager();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridByPosition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
// End Cross Module References
class UScriptStruct* FHexagonGridArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GRIDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHexagonGridArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHexagonGridArray, Z_Construct_UPackage__Script_GridRuntime(), TEXT("HexagonGridArray"), sizeof(FHexagonGridArray), Get_Z_Construct_UScriptStruct_FHexagonGridArray_Hash());
	}
	return Singleton;
}
template<> GRIDRUNTIME_API UScriptStruct* StaticStruct<FHexagonGridArray>()
{
	return FHexagonGridArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHexagonGridArray(FHexagonGridArray::StaticStruct, TEXT("/Script/GridRuntime"), TEXT("HexagonGridArray"), false, nullptr, nullptr);
static struct FScriptStruct_GridRuntime_StaticRegisterNativesFHexagonGridArray
{
	FScriptStruct_GridRuntime_StaticRegisterNativesFHexagonGridArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HexagonGridArray")),new UScriptStruct::TCppStructOps<FHexagonGridArray>);
	}
} ScriptStruct_GridRuntime_StaticRegisterNativesFHexagonGridArray;
	struct Z_Construct_UScriptStruct_FHexagonGridArray_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHexagonGridArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hexagon/HexagonGridManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHexagonGridArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHexagonGridArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHexagonGridArray_Statics::NewProp_Grids_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hexagon/HexagonGridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHexagonGridArray_Statics::NewProp_Grids = { "Grids", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHexagonGridArray, Grids), METADATA_PARAMS(Z_Construct_UScriptStruct_FHexagonGridArray_Statics::NewProp_Grids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHexagonGridArray_Statics::NewProp_Grids_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHexagonGridArray_Statics::NewProp_Grids_Inner = { "Grids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHexagonGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHexagonGridArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexagonGridArray_Statics::NewProp_Grids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexagonGridArray_Statics::NewProp_Grids_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHexagonGridArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
		nullptr,
		&NewStructOps,
		"HexagonGridArray",
		sizeof(FHexagonGridArray),
		alignof(FHexagonGridArray),
		Z_Construct_UScriptStruct_FHexagonGridArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHexagonGridArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHexagonGridArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHexagonGridArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHexagonGridArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHexagonGridArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GridRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HexagonGridArray"), sizeof(FHexagonGridArray), Get_Z_Construct_UScriptStruct_FHexagonGridArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHexagonGridArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHexagonGridArray_Hash() { return 1195396471U; }
	void AHexagonGridManager::StaticRegisterNativesAHexagonGridManager()
	{
		UClass* Class = AHexagonGridManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHexagonGridByPosition", &AHexagonGridManager::execGetHexagonGridByPosition },
			{ "GetHexagonGridsByCoord", &AHexagonGridManager::execGetHexagonGridsByCoord },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridByPosition_Statics
	{
		struct HexagonGridManager_eventGetHexagonGridByPosition_Parms
		{
			FVector Postion;
			UHexagonGrid* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Postion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Postion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridByPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HexagonGridManager_eventGetHexagonGridByPosition_Parms, ReturnValue), Z_Construct_UClass_UHexagonGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridByPosition_Statics::NewProp_Postion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridByPosition_Statics::NewProp_Postion = { "Postion", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HexagonGridManager_eventGetHexagonGridByPosition_Parms, Postion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridByPosition_Statics::NewProp_Postion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridByPosition_Statics::NewProp_Postion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridByPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridByPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridByPosition_Statics::NewProp_Postion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridByPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hexagon" },
		{ "ModuleRelativePath", "Public/Hexagon/HexagonGridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridByPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHexagonGridManager, nullptr, "GetHexagonGridByPosition", nullptr, nullptr, sizeof(HexagonGridManager_eventGetHexagonGridByPosition_Parms), Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridByPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridByPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridByPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridByPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridByPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridByPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord_Statics
	{
		struct HexagonGridManager_eventGetHexagonGridsByCoord_Parms
		{
			FIntVector Coord;
			TArray<UHexagonGrid*> Grids;
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord_Statics::NewProp_Grids = { "Grids", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HexagonGridManager_eventGetHexagonGridsByCoord_Parms, Grids), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord_Statics::NewProp_Grids_Inner = { "Grids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHexagonGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord_Statics::NewProp_Coord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord_Statics::NewProp_Coord = { "Coord", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HexagonGridManager_eventGetHexagonGridsByCoord_Parms, Coord), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord_Statics::NewProp_Coord_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord_Statics::NewProp_Coord_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord_Statics::NewProp_Grids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord_Statics::NewProp_Grids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord_Statics::NewProp_Coord,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hexagon" },
		{ "ModuleRelativePath", "Public/Hexagon/HexagonGridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHexagonGridManager, nullptr, "GetHexagonGridsByCoord", nullptr, nullptr, sizeof(HexagonGridManager_eventGetHexagonGridsByCoord_Parms), Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHexagonGridManager_NoRegister()
	{
		return AHexagonGridManager::StaticClass();
	}
	struct Z_Construct_UClass_AHexagonGridManager_Statics
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
	UObject* (*const Z_Construct_UClass_AHexagonGridManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGridManager,
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHexagonGridManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridByPosition, "GetHexagonGridByPosition" }, // 1356312204
		{ &Z_Construct_UFunction_AHexagonGridManager_GetHexagonGridsByCoord, "GetHexagonGridsByCoord" }, // 2589713171
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonGridManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * reference: https://www.redblobgames.com/grids/hexagons/\n */" },
		{ "IncludePath", "Hexagon/HexagonGridManager.h" },
		{ "ModuleRelativePath", "Public/Hexagon/HexagonGridManager.h" },
		{ "ToolTip", "reference: https://www.redblobgames.com/grids/hexagons/" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonGridManager_Statics::NewProp_GridsPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hexagon/HexagonGridManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AHexagonGridManager_Statics::NewProp_GridsPool = { "GridsPool", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonGridManager, GridsPool), METADATA_PARAMS(Z_Construct_UClass_AHexagonGridManager_Statics::NewProp_GridsPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonGridManager_Statics::NewProp_GridsPool_MetaData)) };
	const UE4CodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_AHexagonGridManager_Statics::NewProp_GridsPool_Key_KeyProp = { "GridsPool_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHexagonGridManager_Statics::NewProp_GridsPool_ValueProp = { "GridsPool", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FHexagonGridArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHexagonGridManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonGridManager_Statics::NewProp_GridsPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonGridManager_Statics::NewProp_GridsPool_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonGridManager_Statics::NewProp_GridsPool_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHexagonGridManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHexagonGridManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHexagonGridManager_Statics::ClassParams = {
		&AHexagonGridManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHexagonGridManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonGridManager_Statics::PropPointers),
		0,
		0x009000ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHexagonGridManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonGridManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHexagonGridManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHexagonGridManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHexagonGridManager, 2244442215);
	template<> GRIDRUNTIME_API UClass* StaticClass<AHexagonGridManager>()
	{
		return AHexagonGridManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHexagonGridManager(Z_Construct_UClass_AHexagonGridManager, &AHexagonGridManager::StaticClass, TEXT("/Script/GridRuntime"), TEXT("AHexagonGridManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHexagonGridManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
