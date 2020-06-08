// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridRuntime/Public/GridPainter/GridDecalPainter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridDecalPainter() {}
// Cross Module References
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridDecalPainter_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridDecalPainter();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridPainter();
	UPackage* Z_Construct_UPackage__Script_GridRuntime();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridDecalPainter_GetDecalMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGrid_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
// End Cross Module References
	static FName NAME_UGridDecalPainter_GetDecalMaterial = FName(TEXT("GetDecalMaterial"));
	UMaterialInterface* UGridDecalPainter::GetDecalMaterial(UGrid* Grid)
	{
		GridDecalPainter_eventGetDecalMaterial_Parms Parms;
		Parms.Grid=Grid;
		ProcessEvent(FindFunctionChecked(NAME_UGridDecalPainter_GetDecalMaterial),&Parms);
		return Parms.ReturnValue;
	}
	void UGridDecalPainter::StaticRegisterNativesUGridDecalPainter()
	{
		UClass* Class = UGridDecalPainter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDecalMaterial", &UGridDecalPainter::execGetDecalMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridDecalPainter_GetDecalMaterial_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridDecalPainter_GetDecalMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDecalPainter_eventGetDecalMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridDecalPainter_GetDecalMaterial_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDecalPainter_eventGetDecalMaterial_Parms, Grid), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDecalPainter_GetDecalMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDecalPainter_GetDecalMaterial_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDecalPainter_GetDecalMaterial_Statics::NewProp_Grid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDecalPainter_GetDecalMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridDecalPainter" },
		{ "ModuleRelativePath", "Public/GridPainter/GridDecalPainter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDecalPainter_GetDecalMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDecalPainter, nullptr, "GetDecalMaterial", nullptr, nullptr, sizeof(GridDecalPainter_eventGetDecalMaterial_Parms), Z_Construct_UFunction_UGridDecalPainter_GetDecalMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDecalPainter_GetDecalMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDecalPainter_GetDecalMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDecalPainter_GetDecalMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDecalPainter_GetDecalMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridDecalPainter_GetDecalMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGridDecalPainter_NoRegister()
	{
		return UGridDecalPainter::StaticClass();
	}
	struct Z_Construct_UClass_UGridDecalPainter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grid2Decal_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Grid2Decal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grid2Decal_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grid2Decal_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDecalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultDecalMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridDecalPainter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGridPainter,
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridDecalPainter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridDecalPainter_GetDecalMaterial, "GetDecalMaterial" }, // 1533843525
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDecalPainter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default grid painter, using decal to visualize grids\n */" },
		{ "IncludePath", "GridPainter/GridDecalPainter.h" },
		{ "ModuleRelativePath", "Public/GridPainter/GridDecalPainter.h" },
		{ "ToolTip", "Default grid painter, using decal to visualize grids" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDecalPainter_Statics::NewProp_Grid2Decal_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GridPainter/GridDecalPainter.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGridDecalPainter_Statics::NewProp_Grid2Decal = { "Grid2Decal", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDecalPainter, Grid2Decal), METADATA_PARAMS(Z_Construct_UClass_UGridDecalPainter_Statics::NewProp_Grid2Decal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDecalPainter_Statics::NewProp_Grid2Decal_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridDecalPainter_Statics::NewProp_Grid2Decal_Key_KeyProp = { "Grid2Decal_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridDecalPainter_Statics::NewProp_Grid2Decal_ValueProp = { "Grid2Decal", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDecalPainter_Statics::NewProp_DefaultDecalMaterial_MetaData[] = {
		{ "Category", "GridDecalPainter" },
		{ "ModuleRelativePath", "Public/GridPainter/GridDecalPainter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridDecalPainter_Statics::NewProp_DefaultDecalMaterial = { "DefaultDecalMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDecalPainter, DefaultDecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridDecalPainter_Statics::NewProp_DefaultDecalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDecalPainter_Statics::NewProp_DefaultDecalMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridDecalPainter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDecalPainter_Statics::NewProp_Grid2Decal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDecalPainter_Statics::NewProp_Grid2Decal_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDecalPainter_Statics::NewProp_Grid2Decal_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDecalPainter_Statics::NewProp_DefaultDecalMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridDecalPainter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridDecalPainter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGridDecalPainter_Statics::ClassParams = {
		&UGridDecalPainter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGridDecalPainter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridDecalPainter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridDecalPainter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDecalPainter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridDecalPainter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGridDecalPainter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGridDecalPainter, 798359250);
	template<> GRIDRUNTIME_API UClass* StaticClass<UGridDecalPainter>()
	{
		return UGridDecalPainter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridDecalPainter(Z_Construct_UClass_UGridDecalPainter, &UGridDecalPainter::StaticClass, TEXT("/Script/GridRuntime"), TEXT("UGridDecalPainter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridDecalPainter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
