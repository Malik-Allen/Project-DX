// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridRuntime/Public/Hexagon/HexagonPathFinder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHexagonPathFinder() {}
// Cross Module References
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UHexagonPathFinder_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UHexagonPathFinder();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridPathFinder();
	UPackage* Z_Construct_UPackage__Script_GridRuntime();
// End Cross Module References
	void UHexagonPathFinder::StaticRegisterNativesUHexagonPathFinder()
	{
	}
	UClass* Z_Construct_UClass_UHexagonPathFinder_NoRegister()
	{
		return UHexagonPathFinder::StaticClass();
	}
	struct Z_Construct_UClass_UHexagonPathFinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHexagonPathFinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGridPathFinder,
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexagonPathFinder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Hexagon/HexagonPathFinder.h" },
		{ "ModuleRelativePath", "Public/Hexagon/HexagonPathFinder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHexagonPathFinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHexagonPathFinder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHexagonPathFinder_Statics::ClassParams = {
		&UHexagonPathFinder::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHexagonPathFinder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHexagonPathFinder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHexagonPathFinder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHexagonPathFinder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHexagonPathFinder, 657982737);
	template<> GRIDRUNTIME_API UClass* StaticClass<UHexagonPathFinder>()
	{
		return UHexagonPathFinder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHexagonPathFinder(Z_Construct_UClass_UHexagonPathFinder, &UHexagonPathFinder::StaticClass, TEXT("/Script/GridRuntime"), TEXT("UHexagonPathFinder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHexagonPathFinder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
