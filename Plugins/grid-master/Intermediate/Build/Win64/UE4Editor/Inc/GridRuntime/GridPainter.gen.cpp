// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridRuntime/Public/GridPainter/GridPainter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridPainter() {}
// Cross Module References
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridPainter_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridPainter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GridRuntime();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridPainter_TickImpl();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridPainter_UpdateGridState();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGrid_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
// End Cross Module References
	static FName NAME_UGridPainter_TickImpl = FName(TEXT("TickImpl"));
	void UGridPainter::TickImpl(float DeltaTime)
	{
		GridPainter_eventTickImpl_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UGridPainter_TickImpl),&Parms);
	}
	static FName NAME_UGridPainter_UpdateGridState = FName(TEXT("UpdateGridState"));
	void UGridPainter::UpdateGridState(UGrid* Grid)
	{
		GridPainter_eventUpdateGridState_Parms Parms;
		Parms.Grid=Grid;
		ProcessEvent(FindFunctionChecked(NAME_UGridPainter_UpdateGridState),&Parms);
	}
	void UGridPainter::StaticRegisterNativesUGridPainter()
	{
		UClass* Class = UGridPainter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TickImpl", &UGridPainter::execTickImpl },
			{ "UpdateGridState", &UGridPainter::execUpdateGridState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridPainter_TickImpl_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGridPainter_TickImpl_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPainter_eventTickImpl_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridPainter_TickImpl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPainter_TickImpl_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridPainter_TickImpl_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridPainter" },
		{ "ModuleRelativePath", "Public/GridPainter/GridPainter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridPainter_TickImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridPainter, nullptr, "TickImpl", nullptr, nullptr, sizeof(GridPainter_eventTickImpl_Parms), Z_Construct_UFunction_UGridPainter_TickImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPainter_TickImpl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridPainter_TickImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPainter_TickImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridPainter_TickImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridPainter_TickImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridPainter_UpdateGridState_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridPainter_UpdateGridState_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPainter_eventUpdateGridState_Parms, Grid), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridPainter_UpdateGridState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPainter_UpdateGridState_Statics::NewProp_Grid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridPainter_UpdateGridState_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridPainter" },
		{ "ModuleRelativePath", "Public/GridPainter/GridPainter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridPainter_UpdateGridState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridPainter, nullptr, "UpdateGridState", nullptr, nullptr, sizeof(GridPainter_eventUpdateGridState_Parms), Z_Construct_UFunction_UGridPainter_UpdateGridState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPainter_UpdateGridState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridPainter_UpdateGridState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPainter_UpdateGridState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridPainter_UpdateGridState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridPainter_UpdateGridState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGridPainter_NoRegister()
	{
		return UGridPainter::StaticClass();
	}
	struct Z_Construct_UClass_UGridPainter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTickable_MetaData[];
#endif
		static void NewProp_bIsTickable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTickable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleGrids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VisibleGrids;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisibleGrids_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridPainter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridPainter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridPainter_TickImpl, "TickImpl" }, // 1717782574
		{ &Z_Construct_UFunction_UGridPainter_UpdateGridState, "UpdateGridState" }, // 1283847030
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPainter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * GridPainter is used for rendering grid in game world, the default painter is GridDecalPainter.\n   Inherit from this class to customize grid rendering\n */" },
		{ "IncludePath", "GridPainter/GridPainter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GridPainter/GridPainter.h" },
		{ "ToolTip", "GridPainter is used for rendering grid in game world, the default painter is GridDecalPainter.\n   Inherit from this class to customize grid rendering" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPainter_Statics::NewProp_TickInterval_MetaData[] = {
		{ "Category", "GridPainter" },
		{ "ModuleRelativePath", "Public/GridPainter/GridPainter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridPainter_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridPainter, TickInterval), METADATA_PARAMS(Z_Construct_UClass_UGridPainter_Statics::NewProp_TickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPainter_Statics::NewProp_TickInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPainter_Statics::NewProp_bIsTickable_MetaData[] = {
		{ "Category", "GridPainter" },
		{ "ModuleRelativePath", "Public/GridPainter/GridPainter.h" },
	};
#endif
	void Z_Construct_UClass_UGridPainter_Statics::NewProp_bIsTickable_SetBit(void* Obj)
	{
		((UGridPainter*)Obj)->bIsTickable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridPainter_Statics::NewProp_bIsTickable = { "bIsTickable", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGridPainter), &Z_Construct_UClass_UGridPainter_Statics::NewProp_bIsTickable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGridPainter_Statics::NewProp_bIsTickable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPainter_Statics::NewProp_bIsTickable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPainter_Statics::NewProp_VisibleGrids_MetaData[] = {
		{ "Category", "GridPainter" },
		{ "ModuleRelativePath", "Public/GridPainter/GridPainter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridPainter_Statics::NewProp_VisibleGrids = { "VisibleGrids", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridPainter, VisibleGrids), METADATA_PARAMS(Z_Construct_UClass_UGridPainter_Statics::NewProp_VisibleGrids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPainter_Statics::NewProp_VisibleGrids_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridPainter_Statics::NewProp_VisibleGrids_Inner = { "VisibleGrids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPainter_Statics::NewProp_GridManager_MetaData[] = {
		{ "Category", "GridPainter" },
		{ "ModuleRelativePath", "Public/GridPainter/GridPainter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridPainter_Statics::NewProp_GridManager = { "GridManager", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridPainter, GridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridPainter_Statics::NewProp_GridManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPainter_Statics::NewProp_GridManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridPainter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPainter_Statics::NewProp_TickInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPainter_Statics::NewProp_bIsTickable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPainter_Statics::NewProp_VisibleGrids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPainter_Statics::NewProp_VisibleGrids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPainter_Statics::NewProp_GridManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridPainter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridPainter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGridPainter_Statics::ClassParams = {
		&UGridPainter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGridPainter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridPainter_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGridPainter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPainter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridPainter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGridPainter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGridPainter, 1324388514);
	template<> GRIDRUNTIME_API UClass* StaticClass<UGridPainter>()
	{
		return UGridPainter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridPainter(Z_Construct_UClass_UGridPainter, &UGridPainter::StaticClass, TEXT("/Script/GridRuntime"), TEXT("UGridPainter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridPainter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
