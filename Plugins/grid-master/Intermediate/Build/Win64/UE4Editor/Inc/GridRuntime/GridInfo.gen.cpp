// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridRuntime/Public/GridInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridInfo() {}
// Cross Module References
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridInfo_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GridRuntime();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridInfo_Clear();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridInfo_Dirty();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	static FName NAME_UGridInfo_Clear = FName(TEXT("Clear"));
	void UGridInfo::Clear()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGridInfo_Clear),NULL);
	}
	void UGridInfo::StaticRegisterNativesUGridInfo()
	{
		UClass* Class = UGridInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UGridInfo::execClear },
			{ "Dirty", &UGridInfo::execDirty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridInfo_Clear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridInfo_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridInfo" },
		{ "ModuleRelativePath", "Public/GridInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridInfo_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridInfo, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridInfo_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridInfo_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridInfo_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridInfo_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridInfo_Dirty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridInfo_Dirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridInfo" },
		{ "Comment", "/**\n\x09property has changed, notify GridPainter refresh grid state\n\x09*/" },
		{ "ModuleRelativePath", "Public/GridInfo.h" },
		{ "ToolTip", "property has changed, notify GridPainter refresh grid state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridInfo_Dirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridInfo, nullptr, "Dirty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridInfo_Dirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridInfo_Dirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridInfo_Dirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridInfo_Dirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGridInfo_NoRegister()
	{
		return UGridInfo::StaticClass();
	}
	struct Z_Construct_UClass_UGridInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridInfo_Clear, "Clear" }, // 2025759068
		{ &Z_Construct_UFunction_UGridInfo_Dirty, "Dirty" }, // 1363776769
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GridInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GridInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridInfo_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GridInfo" },
		{ "ModuleRelativePath", "Public/GridInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridInfo_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridInfo, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGridInfo_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridInfo_Statics::NewProp_GameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridInfo_Statics::NewProp_HitResult_MetaData[] = {
		{ "Category", "GridInfo" },
		{ "ModuleRelativePath", "Public/GridInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridInfo_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridInfo, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_UGridInfo_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridInfo_Statics::NewProp_HitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridInfo_Statics::NewProp_GameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridInfo_Statics::NewProp_HitResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGridInfo_Statics::ClassParams = {
		&UGridInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGridInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridInfo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGridInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGridInfo, 3007506455);
	template<> GRIDRUNTIME_API UClass* StaticClass<UGridInfo>()
	{
		return UGridInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridInfo(Z_Construct_UClass_UGridInfo, &UGridInfo::StaticClass, TEXT("/Script/GridRuntime"), TEXT("UGridInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
