// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridRuntime/Public/Square/SquareGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSquareGrid() {}
// Cross Module References
	GRIDRUNTIME_API UClass* Z_Construct_UClass_USquareGrid_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_USquareGrid();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGrid();
	UPackage* Z_Construct_UPackage__Script_GridRuntime();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_USquareGrid_GetSquareNeighbors();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGrid_NoRegister();
// End Cross Module References
	void USquareGrid::StaticRegisterNativesUSquareGrid()
	{
		UClass* Class = USquareGrid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSquareNeighbors", &USquareGrid::execGetSquareNeighbors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USquareGrid_GetSquareNeighbors_Statics
	{
		struct SquareGrid_eventGetSquareNeighbors_Parms
		{
			TArray<UGrid*> Grids;
			bool bDiagonal;
		};
		static void NewProp_bDiagonal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDiagonal;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Grids;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grids_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USquareGrid_GetSquareNeighbors_Statics::NewProp_bDiagonal_SetBit(void* Obj)
	{
		((SquareGrid_eventGetSquareNeighbors_Parms*)Obj)->bDiagonal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USquareGrid_GetSquareNeighbors_Statics::NewProp_bDiagonal = { "bDiagonal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SquareGrid_eventGetSquareNeighbors_Parms), &Z_Construct_UFunction_USquareGrid_GetSquareNeighbors_Statics::NewProp_bDiagonal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USquareGrid_GetSquareNeighbors_Statics::NewProp_Grids = { "Grids", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SquareGrid_eventGetSquareNeighbors_Parms, Grids), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USquareGrid_GetSquareNeighbors_Statics::NewProp_Grids_Inner = { "Grids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USquareGrid_GetSquareNeighbors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USquareGrid_GetSquareNeighbors_Statics::NewProp_bDiagonal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USquareGrid_GetSquareNeighbors_Statics::NewProp_Grids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USquareGrid_GetSquareNeighbors_Statics::NewProp_Grids_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USquareGrid_GetSquareNeighbors_Statics::Function_MetaDataParams[] = {
		{ "Category", "SquareGrid" },
		{ "CPP_Default_bDiagonal", "false" },
		{ "ModuleRelativePath", "Public/Square/SquareGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USquareGrid_GetSquareNeighbors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USquareGrid, nullptr, "GetSquareNeighbors", nullptr, nullptr, sizeof(SquareGrid_eventGetSquareNeighbors_Parms), Z_Construct_UFunction_USquareGrid_GetSquareNeighbors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USquareGrid_GetSquareNeighbors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USquareGrid_GetSquareNeighbors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USquareGrid_GetSquareNeighbors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USquareGrid_GetSquareNeighbors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USquareGrid_GetSquareNeighbors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USquareGrid_NoRegister()
	{
		return USquareGrid::StaticClass();
	}
	struct Z_Construct_UClass_USquareGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USquareGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGrid,
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USquareGrid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USquareGrid_GetSquareNeighbors, "GetSquareNeighbors" }, // 2357600629
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USquareGrid_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Square/SquareGrid.h" },
		{ "ModuleRelativePath", "Public/Square/SquareGrid.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USquareGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USquareGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USquareGrid_Statics::ClassParams = {
		&USquareGrid::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USquareGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USquareGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USquareGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USquareGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USquareGrid, 2041802940);
	template<> GRIDRUNTIME_API UClass* StaticClass<USquareGrid>()
	{
		return USquareGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USquareGrid(Z_Construct_UClass_USquareGrid, &USquareGrid::StaticClass, TEXT("/Script/GridRuntime"), TEXT("USquareGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USquareGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
