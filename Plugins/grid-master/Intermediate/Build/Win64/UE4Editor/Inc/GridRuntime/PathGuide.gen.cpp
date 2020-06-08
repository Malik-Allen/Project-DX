// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridRuntime/Public/Util/PathGuide.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathGuide() {}
// Cross Module References
	GRIDRUNTIME_API UClass* Z_Construct_UClass_APathGuide_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_APathGuide();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GridRuntime();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_APathGuide_Clear();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_APathGuide_SetCustomPoints();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_APathGuide_SetDestinationDecalMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_APathGuide_SetPath();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGrid_NoRegister();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_APathGuide_SetStartDecalMaterial();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_ULineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	GRIDRUNTIME_API UEnum* Z_Construct_UEnum_GridRuntime_EGridType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void APathGuide::StaticRegisterNativesAPathGuide()
	{
		UClass* Class = APathGuide::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &APathGuide::execClear },
			{ "SetCustomPoints", &APathGuide::execSetCustomPoints },
			{ "SetDestinationDecalMaterial", &APathGuide::execSetDestinationDecalMaterial },
			{ "SetPath", &APathGuide::execSetPath },
			{ "SetStartDecalMaterial", &APathGuide::execSetStartDecalMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APathGuide_Clear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathGuide_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "PathGuide" },
		{ "ModuleRelativePath", "Public/Util/PathGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APathGuide_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathGuide, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APathGuide_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APathGuide_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APathGuide_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APathGuide_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APathGuide_SetCustomPoints_Statics
	{
		struct PathGuide_eventSetCustomPoints_Parms
		{
			TArray<FVector> Points;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathGuide_SetCustomPoints_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APathGuide_SetCustomPoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathGuide_eventSetCustomPoints_Parms, Points), METADATA_PARAMS(Z_Construct_UFunction_APathGuide_SetCustomPoints_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APathGuide_SetCustomPoints_Statics::NewProp_Points_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APathGuide_SetCustomPoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APathGuide_SetCustomPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathGuide_SetCustomPoints_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathGuide_SetCustomPoints_Statics::NewProp_Points_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathGuide_SetCustomPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "PathGuide" },
		{ "ModuleRelativePath", "Public/Util/PathGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APathGuide_SetCustomPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathGuide, nullptr, "SetCustomPoints", nullptr, nullptr, sizeof(PathGuide_eventSetCustomPoints_Parms), Z_Construct_UFunction_APathGuide_SetCustomPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APathGuide_SetCustomPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APathGuide_SetCustomPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APathGuide_SetCustomPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APathGuide_SetCustomPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APathGuide_SetCustomPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APathGuide_SetDestinationDecalMaterial_Statics
	{
		struct PathGuide_eventSetDestinationDecalMaterial_Parms
		{
			UMaterialInterface* NewMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APathGuide_SetDestinationDecalMaterial_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathGuide_eventSetDestinationDecalMaterial_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APathGuide_SetDestinationDecalMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathGuide_SetDestinationDecalMaterial_Statics::NewProp_NewMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathGuide_SetDestinationDecalMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "PathGuide" },
		{ "Comment", "/** set materical to null will disable desitination decal */" },
		{ "ModuleRelativePath", "Public/Util/PathGuide.h" },
		{ "ToolTip", "set materical to null will disable desitination decal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APathGuide_SetDestinationDecalMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathGuide, nullptr, "SetDestinationDecalMaterial", nullptr, nullptr, sizeof(PathGuide_eventSetDestinationDecalMaterial_Parms), Z_Construct_UFunction_APathGuide_SetDestinationDecalMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APathGuide_SetDestinationDecalMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APathGuide_SetDestinationDecalMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APathGuide_SetDestinationDecalMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APathGuide_SetDestinationDecalMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APathGuide_SetDestinationDecalMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APathGuide_SetPath_Statics
	{
		struct PathGuide_eventSetPath_Parms
		{
			TArray<UGrid*> Path;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Path_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathGuide_SetPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APathGuide_SetPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathGuide_eventSetPath_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_APathGuide_SetPath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APathGuide_SetPath_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APathGuide_SetPath_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APathGuide_SetPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathGuide_SetPath_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathGuide_SetPath_Statics::NewProp_Path_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathGuide_SetPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "PathGuide" },
		{ "ModuleRelativePath", "Public/Util/PathGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APathGuide_SetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathGuide, nullptr, "SetPath", nullptr, nullptr, sizeof(PathGuide_eventSetPath_Parms), Z_Construct_UFunction_APathGuide_SetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APathGuide_SetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APathGuide_SetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APathGuide_SetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APathGuide_SetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APathGuide_SetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APathGuide_SetStartDecalMaterial_Statics
	{
		struct PathGuide_eventSetStartDecalMaterial_Parms
		{
			UMaterialInterface* NewMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APathGuide_SetStartDecalMaterial_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathGuide_eventSetStartDecalMaterial_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APathGuide_SetStartDecalMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathGuide_SetStartDecalMaterial_Statics::NewProp_NewMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathGuide_SetStartDecalMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "PathGuide" },
		{ "Comment", "/** set materical to null will disable start decal */" },
		{ "ModuleRelativePath", "Public/Util/PathGuide.h" },
		{ "ToolTip", "set materical to null will disable start decal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APathGuide_SetStartDecalMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathGuide, nullptr, "SetStartDecalMaterial", nullptr, nullptr, sizeof(PathGuide_eventSetStartDecalMaterial_Parms), Z_Construct_UFunction_APathGuide_SetStartDecalMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APathGuide_SetStartDecalMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APathGuide_SetStartDecalMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APathGuide_SetStartDecalMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APathGuide_SetStartDecalMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APathGuide_SetStartDecalMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APathGuide_NoRegister()
	{
		return APathGuide::StaticClass();
	}
	struct Z_Construct_UClass_APathGuide_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathLineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathLineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestDecalComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestDecalComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDecalComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartDecalComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalSizeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecalSizeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GridType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GridType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBreakThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineBreakThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationDecalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestinationDecalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDecalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartDecalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APathGuide_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APathGuide_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APathGuide_Clear, "Clear" }, // 2702802285
		{ &Z_Construct_UFunction_APathGuide_SetCustomPoints, "SetCustomPoints" }, // 2487709755
		{ &Z_Construct_UFunction_APathGuide_SetDestinationDecalMaterial, "SetDestinationDecalMaterial" }, // 3886890503
		{ &Z_Construct_UFunction_APathGuide_SetPath, "SetPath" }, // 2050444311
		{ &Z_Construct_UFunction_APathGuide_SetStartDecalMaterial, "SetStartDecalMaterial" }, // 1050109406
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathGuide_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n\x09Used for rendering path\n*/" },
		{ "IncludePath", "Util/PathGuide.h" },
		{ "ModuleRelativePath", "Public/Util/PathGuide.h" },
		{ "ToolTip", "Used for rendering path" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathGuide_Statics::NewProp_PathLineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Util/PathGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APathGuide_Statics::NewProp_PathLineComponent = { "PathLineComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathGuide, PathLineComponent), Z_Construct_UClass_ULineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APathGuide_Statics::NewProp_PathLineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathGuide_Statics::NewProp_PathLineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathGuide_Statics::NewProp_DestDecalComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Util/PathGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APathGuide_Statics::NewProp_DestDecalComp = { "DestDecalComp", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathGuide, DestDecalComp), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APathGuide_Statics::NewProp_DestDecalComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathGuide_Statics::NewProp_DestDecalComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathGuide_Statics::NewProp_StartDecalComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Util/PathGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APathGuide_Statics::NewProp_StartDecalComp = { "StartDecalComp", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathGuide, StartDecalComp), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APathGuide_Statics::NewProp_StartDecalComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathGuide_Statics::NewProp_StartDecalComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathGuide_Statics::NewProp_DecalSizeScale_MetaData[] = {
		{ "Category", "PathGuide" },
		{ "Comment", "/** using DecalSizeScale can make the decal smaller(or larger) than grid size */" },
		{ "ModuleRelativePath", "Public/Util/PathGuide.h" },
		{ "ToolTip", "using DecalSizeScale can make the decal smaller(or larger) than grid size" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APathGuide_Statics::NewProp_DecalSizeScale = { "DecalSizeScale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathGuide, DecalSizeScale), METADATA_PARAMS(Z_Construct_UClass_APathGuide_Statics::NewProp_DecalSizeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathGuide_Statics::NewProp_DecalSizeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathGuide_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "PathGuide" },
		{ "Comment", "/** set GridSize manually if you use SetCustomPoints, otherwise the decal will rendering incorrect */" },
		{ "ModuleRelativePath", "Public/Util/PathGuide.h" },
		{ "ToolTip", "set GridSize manually if you use SetCustomPoints, otherwise the decal will rendering incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APathGuide_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathGuide, GridSize), METADATA_PARAMS(Z_Construct_UClass_APathGuide_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathGuide_Statics::NewProp_GridSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathGuide_Statics::NewProp_GridType_MetaData[] = {
		{ "Category", "PathGuide" },
		{ "Comment", "/** set GridType manually if you use SetCustomPoints, otherwise the decal will rendering incorrect */" },
		{ "ModuleRelativePath", "Public/Util/PathGuide.h" },
		{ "ToolTip", "set GridType manually if you use SetCustomPoints, otherwise the decal will rendering incorrect" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APathGuide_Statics::NewProp_GridType = { "GridType", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathGuide, GridType), Z_Construct_UEnum_GridRuntime_EGridType, METADATA_PARAMS(Z_Construct_UClass_APathGuide_Statics::NewProp_GridType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathGuide_Statics::NewProp_GridType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APathGuide_Statics::NewProp_GridType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathGuide_Statics::NewProp_LineBreakThreshold_MetaData[] = {
		{ "Category", "PathGuide" },
		{ "ModuleRelativePath", "Public/Util/PathGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APathGuide_Statics::NewProp_LineBreakThreshold = { "LineBreakThreshold", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathGuide, LineBreakThreshold), METADATA_PARAMS(Z_Construct_UClass_APathGuide_Statics::NewProp_LineBreakThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathGuide_Statics::NewProp_LineBreakThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathGuide_Statics::NewProp_ZOffset_MetaData[] = {
		{ "Category", "PathGuide" },
		{ "Comment", "/** using ZOffset to make sure the path is higher than terrain */" },
		{ "ModuleRelativePath", "Public/Util/PathGuide.h" },
		{ "ToolTip", "using ZOffset to make sure the path is higher than terrain" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APathGuide_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathGuide, ZOffset), METADATA_PARAMS(Z_Construct_UClass_APathGuide_Statics::NewProp_ZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathGuide_Statics::NewProp_ZOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathGuide_Statics::NewProp_DestinationDecalMaterial_MetaData[] = {
		{ "Category", "PathGuide" },
		{ "ModuleRelativePath", "Public/Util/PathGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APathGuide_Statics::NewProp_DestinationDecalMaterial = { "DestinationDecalMaterial", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathGuide, DestinationDecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APathGuide_Statics::NewProp_DestinationDecalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathGuide_Statics::NewProp_DestinationDecalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathGuide_Statics::NewProp_StartDecalMaterial_MetaData[] = {
		{ "Category", "PathGuide" },
		{ "ModuleRelativePath", "Public/Util/PathGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APathGuide_Statics::NewProp_StartDecalMaterial = { "StartDecalMaterial", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathGuide, StartDecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APathGuide_Statics::NewProp_StartDecalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathGuide_Statics::NewProp_StartDecalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathGuide_Statics::NewProp_PathThickness_MetaData[] = {
		{ "Category", "PathGuide" },
		{ "ModuleRelativePath", "Public/Util/PathGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APathGuide_Statics::NewProp_PathThickness = { "PathThickness", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathGuide, PathThickness), METADATA_PARAMS(Z_Construct_UClass_APathGuide_Statics::NewProp_PathThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathGuide_Statics::NewProp_PathThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathGuide_Statics::NewProp_PathColor_MetaData[] = {
		{ "Category", "PathGuide" },
		{ "ModuleRelativePath", "Public/Util/PathGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APathGuide_Statics::NewProp_PathColor = { "PathColor", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathGuide, PathColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_APathGuide_Statics::NewProp_PathColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathGuide_Statics::NewProp_PathColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APathGuide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathGuide_Statics::NewProp_PathLineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathGuide_Statics::NewProp_DestDecalComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathGuide_Statics::NewProp_StartDecalComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathGuide_Statics::NewProp_DecalSizeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathGuide_Statics::NewProp_GridSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathGuide_Statics::NewProp_GridType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathGuide_Statics::NewProp_GridType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathGuide_Statics::NewProp_LineBreakThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathGuide_Statics::NewProp_ZOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathGuide_Statics::NewProp_DestinationDecalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathGuide_Statics::NewProp_StartDecalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathGuide_Statics::NewProp_PathThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathGuide_Statics::NewProp_PathColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APathGuide_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APathGuide>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APathGuide_Statics::ClassParams = {
		&APathGuide::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APathGuide_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APathGuide_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APathGuide_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APathGuide_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APathGuide()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APathGuide_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APathGuide, 2433733146);
	template<> GRIDRUNTIME_API UClass* StaticClass<APathGuide>()
	{
		return APathGuide::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APathGuide(Z_Construct_UClass_APathGuide, &APathGuide::StaticClass, TEXT("/Script/GridRuntime"), TEXT("APathGuide"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APathGuide);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
