// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridRuntime/Public/GridPainter/GridOutlinePainter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridOutlinePainter() {}
// Cross Module References
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridOutlinePainter_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridOutlinePainter();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridPainter();
	UPackage* Z_Construct_UPackage__Script_GridRuntime();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridOutlinePainter_GetColorPriority();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridOutlinePainter_GetColors();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGrid_NoRegister();
// End Cross Module References
	static FName NAME_UGridOutlinePainter_GetColorPriority = FName(TEXT("GetColorPriority"));
	void UGridOutlinePainter::GetColorPriority(TArray<FLinearColor>& Colors)
	{
		GridOutlinePainter_eventGetColorPriority_Parms Parms;
		Parms.Colors=Colors;
		ProcessEvent(FindFunctionChecked(NAME_UGridOutlinePainter_GetColorPriority),&Parms);
		Colors=Parms.Colors;
	}
	static FName NAME_UGridOutlinePainter_GetColors = FName(TEXT("GetColors"));
	void UGridOutlinePainter::GetColors(UGrid* Grid, TArray<FLinearColor>& Colors)
	{
		GridOutlinePainter_eventGetColors_Parms Parms;
		Parms.Grid=Grid;
		Parms.Colors=Colors;
		ProcessEvent(FindFunctionChecked(NAME_UGridOutlinePainter_GetColors),&Parms);
		Colors=Parms.Colors;
	}
	void UGridOutlinePainter::StaticRegisterNativesUGridOutlinePainter()
	{
		UClass* Class = UGridOutlinePainter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColorPriority", &UGridOutlinePainter::execGetColorPriority },
			{ "GetColors", &UGridOutlinePainter::execGetColors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridOutlinePainter_GetColorPriority_Statics
	{
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Colors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridOutlinePainter_GetColorPriority_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridOutlinePainter_eventGetColorPriority_Parms, Colors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridOutlinePainter_GetColorPriority_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridOutlinePainter_GetColorPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridOutlinePainter_GetColorPriority_Statics::NewProp_Colors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridOutlinePainter_GetColorPriority_Statics::NewProp_Colors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridOutlinePainter_GetColorPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridDecalPainter" },
		{ "Comment", "/**\n\x09* Descending order. \n\x09* @note when different grid with different color share one edge, this array are used to determine the final color of the shared edge\n\x09* @note you MUST implement this method if you override 'GetColors'\n\x09*/" },
		{ "ModuleRelativePath", "Public/GridPainter/GridOutlinePainter.h" },
		{ "ToolTip", "Descending order.\n@note when different grid with different color share one edge, this array are used to determine the final color of the shared edge\n@note you MUST implement this method if you override 'GetColors'" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridOutlinePainter_GetColorPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridOutlinePainter, nullptr, "GetColorPriority", nullptr, nullptr, sizeof(GridOutlinePainter_eventGetColorPriority_Parms), Z_Construct_UFunction_UGridOutlinePainter_GetColorPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridOutlinePainter_GetColorPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridOutlinePainter_GetColorPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridOutlinePainter_GetColorPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridOutlinePainter_GetColorPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridOutlinePainter_GetColorPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridOutlinePainter_GetColors_Statics
	{
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Colors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridOutlinePainter_GetColors_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridOutlinePainter_eventGetColors_Parms, Colors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridOutlinePainter_GetColors_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridOutlinePainter_GetColors_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridOutlinePainter_eventGetColors_Parms, Grid), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridOutlinePainter_GetColors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridOutlinePainter_GetColors_Statics::NewProp_Colors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridOutlinePainter_GetColors_Statics::NewProp_Colors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridOutlinePainter_GetColors_Statics::NewProp_Grid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridOutlinePainter_GetColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridDecalPainter" },
		{ "Comment", "/**\n\x09* @note a grid can have multi state(color), e.g: a grid is movable(white) and attackable(red)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GridPainter/GridOutlinePainter.h" },
		{ "ToolTip", "@note a grid can have multi state(color), e.g: a grid is movable(white) and attackable(red)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridOutlinePainter_GetColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridOutlinePainter, nullptr, "GetColors", nullptr, nullptr, sizeof(GridOutlinePainter_eventGetColors_Parms), Z_Construct_UFunction_UGridOutlinePainter_GetColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridOutlinePainter_GetColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridOutlinePainter_GetColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridOutlinePainter_GetColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridOutlinePainter_GetColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridOutlinePainter_GetColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGridOutlinePainter_NoRegister()
	{
		return UGridOutlinePainter::StaticClass();
	}
	struct Z_Construct_UClass_UGridOutlinePainter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutlineThickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridOutlinePainter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGridPainter,
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridOutlinePainter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridOutlinePainter_GetColorPriority, "GetColorPriority" }, // 3167655741
		{ &Z_Construct_UFunction_UGridOutlinePainter_GetColors, "GetColors" }, // 235875697
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridOutlinePainter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GridPainter/GridOutlinePainter.h" },
		{ "ModuleRelativePath", "Public/GridPainter/GridOutlinePainter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridOutlinePainter_Statics::NewProp_ZOffset_MetaData[] = {
		{ "Category", "GridOutlinePainter" },
		{ "ModuleRelativePath", "Public/GridPainter/GridOutlinePainter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridOutlinePainter_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridOutlinePainter, ZOffset), METADATA_PARAMS(Z_Construct_UClass_UGridOutlinePainter_Statics::NewProp_ZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridOutlinePainter_Statics::NewProp_ZOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridOutlinePainter_Statics::NewProp_OutlineThickness_MetaData[] = {
		{ "Category", "GridOutlinePainter" },
		{ "ModuleRelativePath", "Public/GridPainter/GridOutlinePainter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridOutlinePainter_Statics::NewProp_OutlineThickness = { "OutlineThickness", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridOutlinePainter, OutlineThickness), METADATA_PARAMS(Z_Construct_UClass_UGridOutlinePainter_Statics::NewProp_OutlineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridOutlinePainter_Statics::NewProp_OutlineThickness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridOutlinePainter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridOutlinePainter_Statics::NewProp_ZOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridOutlinePainter_Statics::NewProp_OutlineThickness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridOutlinePainter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridOutlinePainter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGridOutlinePainter_Statics::ClassParams = {
		&UGridOutlinePainter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGridOutlinePainter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridOutlinePainter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridOutlinePainter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridOutlinePainter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridOutlinePainter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGridOutlinePainter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGridOutlinePainter, 3704482054);
	template<> GRIDRUNTIME_API UClass* StaticClass<UGridOutlinePainter>()
	{
		return UGridOutlinePainter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridOutlinePainter(Z_Construct_UClass_UGridOutlinePainter, &UGridOutlinePainter::StaticClass, TEXT("/Script/GridRuntime"), TEXT("UGridOutlinePainter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridOutlinePainter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
