// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridEditor/Private/Settings/HexagonGridSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHexagonGridSettings() {}
// Cross Module References
	GRIDEDITOR_API UClass* Z_Construct_UClass_UHexagonGridSettings_NoRegister();
	GRIDEDITOR_API UClass* Z_Construct_UClass_UHexagonGridSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GridEditor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UHexagonGridSettings::StaticRegisterNativesUHexagonGridSettings()
	{
	}
	UClass* Z_Construct_UClass_UHexagonGridSettings_NoRegister()
	{
		return UHexagonGridSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHexagonGridSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSensingVisualizerMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridSensingVisualizerMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGridSnap_MetaData[];
#endif
		static void NewProp_bGridSnap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGridSnap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowGrids_MetaData[];
#endif
		static void NewProp_bShowGrids_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowGrids;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHexagonGridSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GridEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexagonGridSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/HexagonGridSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/HexagonGridSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_GridSensingVisualizerMaterial_MetaData[] = {
		{ "Category", "HexagonGridSettings" },
		{ "ModuleRelativePath", "Private/Settings/HexagonGridSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_GridSensingVisualizerMaterial = { "GridSensingVisualizerMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHexagonGridSettings, GridSensingVisualizerMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_GridSensingVisualizerMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_GridSensingVisualizerMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_DecalMaterial_MetaData[] = {
		{ "Category", "HexagonGridSettings" },
		{ "ModuleRelativePath", "Private/Settings/HexagonGridSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHexagonGridSettings, DecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_DecalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_DecalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "HexagonGridSettings" },
		{ "ModuleRelativePath", "Private/Settings/HexagonGridSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHexagonGridSettings, GridSize), METADATA_PARAMS(Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_GridSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_bGridSnap_MetaData[] = {
		{ "Category", "HexagonGridSettings" },
		{ "ModuleRelativePath", "Private/Settings/HexagonGridSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_bGridSnap_SetBit(void* Obj)
	{
		((UHexagonGridSettings*)Obj)->bGridSnap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_bGridSnap = { "bGridSnap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHexagonGridSettings), &Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_bGridSnap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_bGridSnap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_bGridSnap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_bShowGrids_MetaData[] = {
		{ "Category", "HexagonGridSettings" },
		{ "ModuleRelativePath", "Private/Settings/HexagonGridSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_bShowGrids_SetBit(void* Obj)
	{
		((UHexagonGridSettings*)Obj)->bShowGrids = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_bShowGrids = { "bShowGrids", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHexagonGridSettings), &Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_bShowGrids_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_bShowGrids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_bShowGrids_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHexagonGridSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_GridSensingVisualizerMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_DecalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_GridSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_bGridSnap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexagonGridSettings_Statics::NewProp_bShowGrids,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHexagonGridSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHexagonGridSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHexagonGridSettings_Statics::ClassParams = {
		&UHexagonGridSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHexagonGridSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHexagonGridSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHexagonGridSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHexagonGridSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHexagonGridSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHexagonGridSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHexagonGridSettings, 4158508757);
	template<> GRIDEDITOR_API UClass* StaticClass<UHexagonGridSettings>()
	{
		return UHexagonGridSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHexagonGridSettings(Z_Construct_UClass_UHexagonGridSettings, &UHexagonGridSettings::StaticClass, TEXT("/Script/GridEditor"), TEXT("UHexagonGridSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHexagonGridSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
