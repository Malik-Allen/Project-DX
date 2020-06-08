// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridRuntime/Public/Components/DefaultGridNavigationAgent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultGridNavigationAgent() {}
// Cross Module References
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UDefaultGridNavigationAgent_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UDefaultGridNavigationAgent();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridNavigationAgent();
	UPackage* Z_Construct_UPackage__Script_GridRuntime();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UDefaultGridNavigationAgent_OnAIControllerMoveCompeleted();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void UDefaultGridNavigationAgent::StaticRegisterNativesUDefaultGridNavigationAgent()
	{
		UClass* Class = UDefaultGridNavigationAgent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAIControllerMoveCompeleted", &UDefaultGridNavigationAgent::execOnAIControllerMoveCompeleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDefaultGridNavigationAgent_OnAIControllerMoveCompeleted_Statics
	{
		struct DefaultGridNavigationAgent_eventOnAIControllerMoveCompeleted_Parms
		{
			FAIRequestID RequestID;
			TEnumAsByte<EPathFollowingResult::Type> Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDefaultGridNavigationAgent_OnAIControllerMoveCompeleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultGridNavigationAgent_eventOnAIControllerMoveCompeleted_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDefaultGridNavigationAgent_OnAIControllerMoveCompeleted_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultGridNavigationAgent_eventOnAIControllerMoveCompeleted_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDefaultGridNavigationAgent_OnAIControllerMoveCompeleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefaultGridNavigationAgent_OnAIControllerMoveCompeleted_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefaultGridNavigationAgent_OnAIControllerMoveCompeleted_Statics::NewProp_RequestID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDefaultGridNavigationAgent_OnAIControllerMoveCompeleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/DefaultGridNavigationAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDefaultGridNavigationAgent_OnAIControllerMoveCompeleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDefaultGridNavigationAgent, nullptr, "OnAIControllerMoveCompeleted", nullptr, nullptr, sizeof(DefaultGridNavigationAgent_eventOnAIControllerMoveCompeleted_Parms), Z_Construct_UFunction_UDefaultGridNavigationAgent_OnAIControllerMoveCompeleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDefaultGridNavigationAgent_OnAIControllerMoveCompeleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDefaultGridNavigationAgent_OnAIControllerMoveCompeleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDefaultGridNavigationAgent_OnAIControllerMoveCompeleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDefaultGridNavigationAgent_OnAIControllerMoveCompeleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDefaultGridNavigationAgent_OnAIControllerMoveCompeleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDefaultGridNavigationAgent_NoRegister()
	{
		return UDefaultGridNavigationAgent::StaticClass();
	}
	struct Z_Construct_UClass_UDefaultGridNavigationAgent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGridNavigationAgent,
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDefaultGridNavigationAgent_OnAIControllerMoveCompeleted, "OnAIControllerMoveCompeleted" }, // 574025841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Components/DefaultGridNavigationAgent.h" },
		{ "ModuleRelativePath", "Public/Components/DefaultGridNavigationAgent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::NewProp_CurrentController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DefaultGridNavigationAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::NewProp_CurrentController = { "CurrentController", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultGridNavigationAgent, CurrentController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::NewProp_CurrentController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::NewProp_CurrentController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::NewProp_CurrentPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DefaultGridNavigationAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::NewProp_CurrentPawn = { "CurrentPawn", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultGridNavigationAgent, CurrentPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::NewProp_CurrentPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::NewProp_CurrentPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::NewProp_AcceptanceRadius_MetaData[] = {
		{ "Category", "DefaultGridNavigationAgent" },
		{ "ModuleRelativePath", "Public/Components/DefaultGridNavigationAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultGridNavigationAgent, AcceptanceRadius), METADATA_PARAMS(Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::NewProp_AcceptanceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::NewProp_AcceptanceRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::NewProp_CurrentController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::NewProp_CurrentPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::NewProp_AcceptanceRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultGridNavigationAgent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::ClassParams = {
		&UDefaultGridNavigationAgent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDefaultGridNavigationAgent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDefaultGridNavigationAgent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDefaultGridNavigationAgent, 353268812);
	template<> GRIDRUNTIME_API UClass* StaticClass<UDefaultGridNavigationAgent>()
	{
		return UDefaultGridNavigationAgent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDefaultGridNavigationAgent(Z_Construct_UClass_UDefaultGridNavigationAgent, &UDefaultGridNavigationAgent::StaticClass, TEXT("/Script/GridRuntime"), TEXT("UDefaultGridNavigationAgent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultGridNavigationAgent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
