// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridEditor/Private/GridPainter_Editor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridPainter_Editor() {}
// Cross Module References
	GRIDEDITOR_API UClass* Z_Construct_UClass_UGridPainter_Editor_NoRegister();
	GRIDEDITOR_API UClass* Z_Construct_UClass_UGridPainter_Editor();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridDecalPainter();
	UPackage* Z_Construct_UPackage__Script_GridEditor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UGridPainter_Editor::StaticRegisterNativesUGridPainter_Editor()
	{
	}
	UClass* Z_Construct_UClass_UGridPainter_Editor_NoRegister()
	{
		return UGridPainter_Editor::StaticClass();
	}
	struct Z_Construct_UClass_UGridPainter_Editor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HexSensingMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HexSensingMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HexNormalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HexNormalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SquareSensingMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SquareSensingMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SquareNormalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SquareNormalMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridPainter_Editor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGridDecalPainter,
		(UObject* (*)())Z_Construct_UPackage__Script_GridEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPainter_Editor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GridPainter_Editor.h" },
		{ "ModuleRelativePath", "Private/GridPainter_Editor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPainter_Editor_Statics::NewProp_HexSensingMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/GridPainter_Editor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridPainter_Editor_Statics::NewProp_HexSensingMaterial = { "HexSensingMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridPainter_Editor, HexSensingMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridPainter_Editor_Statics::NewProp_HexSensingMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPainter_Editor_Statics::NewProp_HexSensingMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPainter_Editor_Statics::NewProp_HexNormalMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/GridPainter_Editor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridPainter_Editor_Statics::NewProp_HexNormalMaterial = { "HexNormalMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridPainter_Editor, HexNormalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridPainter_Editor_Statics::NewProp_HexNormalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPainter_Editor_Statics::NewProp_HexNormalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPainter_Editor_Statics::NewProp_SquareSensingMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/GridPainter_Editor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridPainter_Editor_Statics::NewProp_SquareSensingMaterial = { "SquareSensingMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridPainter_Editor, SquareSensingMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridPainter_Editor_Statics::NewProp_SquareSensingMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPainter_Editor_Statics::NewProp_SquareSensingMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPainter_Editor_Statics::NewProp_SquareNormalMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/GridPainter_Editor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridPainter_Editor_Statics::NewProp_SquareNormalMaterial = { "SquareNormalMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridPainter_Editor, SquareNormalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridPainter_Editor_Statics::NewProp_SquareNormalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPainter_Editor_Statics::NewProp_SquareNormalMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridPainter_Editor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPainter_Editor_Statics::NewProp_HexSensingMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPainter_Editor_Statics::NewProp_HexNormalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPainter_Editor_Statics::NewProp_SquareSensingMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPainter_Editor_Statics::NewProp_SquareNormalMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridPainter_Editor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridPainter_Editor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGridPainter_Editor_Statics::ClassParams = {
		&UGridPainter_Editor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridPainter_Editor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridPainter_Editor_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridPainter_Editor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPainter_Editor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridPainter_Editor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGridPainter_Editor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGridPainter_Editor, 3613804918);
	template<> GRIDEDITOR_API UClass* StaticClass<UGridPainter_Editor>()
	{
		return UGridPainter_Editor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridPainter_Editor(Z_Construct_UClass_UGridPainter_Editor, &UGridPainter_Editor::StaticClass, TEXT("/Script/GridEditor"), TEXT("UGridPainter_Editor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridPainter_Editor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
