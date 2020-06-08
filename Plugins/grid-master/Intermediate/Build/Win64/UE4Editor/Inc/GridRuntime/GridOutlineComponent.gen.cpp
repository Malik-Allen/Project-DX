// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridRuntime/Public/Components/GridOutlineComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridOutlineComponent() {}
// Cross Module References
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridOutlineComponent_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridOutlineComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_GridRuntime();
// End Cross Module References
	void UGridOutlineComponent::StaticRegisterNativesUGridOutlineComponent()
	{
	}
	UClass* Z_Construct_UClass_UGridOutlineComponent_NoRegister()
	{
		return UGridOutlineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGridOutlineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridOutlineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridOutlineComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Components/GridOutlineComponent.h" },
		{ "ModuleRelativePath", "Public/Components/GridOutlineComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridOutlineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridOutlineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGridOutlineComponent_Statics::ClassParams = {
		&UGridOutlineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGridOutlineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridOutlineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridOutlineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGridOutlineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGridOutlineComponent, 1539939955);
	template<> GRIDRUNTIME_API UClass* StaticClass<UGridOutlineComponent>()
	{
		return UGridOutlineComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridOutlineComponent(Z_Construct_UClass_UGridOutlineComponent, &UGridOutlineComponent::StaticClass, TEXT("/Script/GridRuntime"), TEXT("UGridOutlineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridOutlineComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
