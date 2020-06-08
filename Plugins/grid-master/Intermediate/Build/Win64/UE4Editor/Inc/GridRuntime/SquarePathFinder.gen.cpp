// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridRuntime/Public/Square/SquarePathFinder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSquarePathFinder() {}
// Cross Module References
	GRIDRUNTIME_API UClass* Z_Construct_UClass_USquarePathFinder_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_USquarePathFinder();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridPathFinder();
	UPackage* Z_Construct_UPackage__Script_GridRuntime();
// End Cross Module References
	void USquarePathFinder::StaticRegisterNativesUSquarePathFinder()
	{
	}
	UClass* Z_Construct_UClass_USquarePathFinder_NoRegister()
	{
		return USquarePathFinder::StaticClass();
	}
	struct Z_Construct_UClass_USquarePathFinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USquarePathFinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGridPathFinder,
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USquarePathFinder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Square/SquarePathFinder.h" },
		{ "ModuleRelativePath", "Public/Square/SquarePathFinder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USquarePathFinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USquarePathFinder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USquarePathFinder_Statics::ClassParams = {
		&USquarePathFinder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USquarePathFinder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USquarePathFinder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USquarePathFinder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USquarePathFinder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USquarePathFinder, 4059433940);
	template<> GRIDRUNTIME_API UClass* StaticClass<USquarePathFinder>()
	{
		return USquarePathFinder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USquarePathFinder(Z_Construct_UClass_USquarePathFinder, &USquarePathFinder::StaticClass, TEXT("/Script/GridRuntime"), TEXT("USquarePathFinder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USquarePathFinder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
