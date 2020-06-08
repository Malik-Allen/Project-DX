// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridEditor/Private/GridInfo_Editor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridInfo_Editor() {}
// Cross Module References
	GRIDEDITOR_API UClass* Z_Construct_UClass_UGridInfo_Editor_NoRegister();
	GRIDEDITOR_API UClass* Z_Construct_UClass_UGridInfo_Editor();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridInfo();
	UPackage* Z_Construct_UPackage__Script_GridEditor();
// End Cross Module References
	void UGridInfo_Editor::StaticRegisterNativesUGridInfo_Editor()
	{
	}
	UClass* Z_Construct_UClass_UGridInfo_Editor_NoRegister()
	{
		return UGridInfo_Editor::StaticClass();
	}
	struct Z_Construct_UClass_UGridInfo_Editor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridInfo_Editor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGridInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_GridEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridInfo_Editor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GridInfo_Editor.h" },
		{ "ModuleRelativePath", "Private/GridInfo_Editor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridInfo_Editor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridInfo_Editor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGridInfo_Editor_Statics::ClassParams = {
		&UGridInfo_Editor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridInfo_Editor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridInfo_Editor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridInfo_Editor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGridInfo_Editor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGridInfo_Editor, 3138603258);
	template<> GRIDEDITOR_API UClass* StaticClass<UGridInfo_Editor>()
	{
		return UGridInfo_Editor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridInfo_Editor(Z_Construct_UClass_UGridInfo_Editor, &UGridInfo_Editor::StaticClass, TEXT("/Script/GridEditor"), TEXT("UGridInfo_Editor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridInfo_Editor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
