// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridRuntime/Public/GridPathfindingParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridPathfindingParams() {}
// Cross Module References
	GRIDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridPathfindingRequest();
	UPackage* Z_Construct_UPackage__Script_GridRuntime();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGrid_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridPathFinder_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridPathFinder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridPathFinder_GetCost();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridPathFinder_GetDestination();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridPathFinder_GetExtraTags();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridPathFinder_GetGridManager();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridPathFinder_GetSender();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridPathFinder_GetStart();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridPathFinder_Heuristic();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridPathFinder_IsReachable();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridPathFinder_Reset();
// End Cross Module References
class UScriptStruct* FGridPathfindingRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GRIDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FGridPathfindingRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridPathfindingRequest, Z_Construct_UPackage__Script_GridRuntime(), TEXT("GridPathfindingRequest"), sizeof(FGridPathfindingRequest), Get_Z_Construct_UScriptStruct_FGridPathfindingRequest_Hash());
	}
	return Singleton;
}
template<> GRIDRUNTIME_API UScriptStruct* StaticStruct<FGridPathfindingRequest>()
{
	return FGridPathfindingRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGridPathfindingRequest(FGridPathfindingRequest::StaticStruct, TEXT("/Script/GridRuntime"), TEXT("GridPathfindingRequest"), false, nullptr, nullptr);
static struct FScriptStruct_GridRuntime_StaticRegisterNativesFGridPathfindingRequest
{
	FScriptStruct_GridRuntime_StaticRegisterNativesFGridPathfindingRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GridPathfindingRequest")),new UScriptStruct::TCppStructOps<FGridPathfindingRequest>);
	}
} ScriptStruct_GridRuntime_StaticRegisterNativesFGridPathfindingRequest;
	struct Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtraTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveDest_MetaData[];
#endif
		static void NewProp_bRemoveDest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveDest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSearchStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSearchStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Destination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sender_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sender;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GridPathfindingParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridPathfindingRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_ExtraTags_MetaData[] = {
		{ "Category", "GridPathFindingRequest" },
		{ "ModuleRelativePath", "Public/GridPathfindingParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_ExtraTags = { "ExtraTags", nullptr, (EPropertyFlags)0x0010040000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridPathfindingRequest, ExtraTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_ExtraTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_ExtraTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_bRemoveDest_MetaData[] = {
		{ "Category", "GridPathFindingRequest" },
		{ "ModuleRelativePath", "Public/GridPathfindingParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_bRemoveDest_SetBit(void* Obj)
	{
		((FGridPathfindingRequest*)Obj)->bRemoveDest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_bRemoveDest = { "bRemoveDest", nullptr, (EPropertyFlags)0x0010040000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGridPathfindingRequest), &Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_bRemoveDest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_bRemoveDest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_bRemoveDest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_MaxSearchStep_MetaData[] = {
		{ "Category", "GridPathFindingRequest" },
		{ "ModuleRelativePath", "Public/GridPathfindingParams.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_MaxSearchStep = { "MaxSearchStep", nullptr, (EPropertyFlags)0x0010040000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridPathfindingRequest, MaxSearchStep), METADATA_PARAMS(Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_MaxSearchStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_MaxSearchStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_MaxCost_MetaData[] = {
		{ "Category", "GridPathFindingRequest" },
		{ "ModuleRelativePath", "Public/GridPathfindingParams.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_MaxCost = { "MaxCost", nullptr, (EPropertyFlags)0x0010040000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridPathfindingRequest, MaxCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_MaxCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_MaxCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_Destination_MetaData[] = {
		{ "Category", "GridPathFindingRequest" },
		{ "ModuleRelativePath", "Public/GridPathfindingParams.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridPathfindingRequest, Destination), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_Destination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_Start_MetaData[] = {
		{ "Category", "GridPathFindingRequest" },
		{ "ModuleRelativePath", "Public/GridPathfindingParams.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridPathfindingRequest, Start), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_Sender_MetaData[] = {
		{ "Category", "GridPathFindingRequest" },
		{ "ModuleRelativePath", "Public/GridPathfindingParams.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridPathfindingRequest, Sender), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_Sender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_Sender_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_ExtraTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_bRemoveDest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_MaxSearchStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_MaxCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_Destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::NewProp_Sender,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
		nullptr,
		&NewStructOps,
		"GridPathfindingRequest",
		sizeof(FGridPathfindingRequest),
		alignof(FGridPathfindingRequest),
		Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGridPathfindingRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGridPathfindingRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GridRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GridPathfindingRequest"), sizeof(FGridPathfindingRequest), Get_Z_Construct_UScriptStruct_FGridPathfindingRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGridPathfindingRequest_Hash() { return 1715777735U; }
	static FName NAME_UGridPathFinder_GetCost = FName(TEXT("GetCost"));
	int32 UGridPathFinder::GetCost(UGrid* From, UGrid* To)
	{
		GridPathFinder_eventGetCost_Parms Parms;
		Parms.From=From;
		Parms.To=To;
		ProcessEvent(FindFunctionChecked(NAME_UGridPathFinder_GetCost),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGridPathFinder_Heuristic = FName(TEXT("Heuristic"));
	int32 UGridPathFinder::Heuristic(UGrid* From, UGrid* To)
	{
		GridPathFinder_eventHeuristic_Parms Parms;
		Parms.From=From;
		Parms.To=To;
		ProcessEvent(FindFunctionChecked(NAME_UGridPathFinder_Heuristic),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGridPathFinder_IsReachable = FName(TEXT("IsReachable"));
	bool UGridPathFinder::IsReachable(UGrid* Start, UGrid* Dest)
	{
		GridPathFinder_eventIsReachable_Parms Parms;
		Parms.Start=Start;
		Parms.Dest=Dest;
		ProcessEvent(FindFunctionChecked(NAME_UGridPathFinder_IsReachable),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGridPathFinder_Reset = FName(TEXT("Reset"));
	void UGridPathFinder::Reset()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGridPathFinder_Reset),NULL);
	}
	void UGridPathFinder::StaticRegisterNativesUGridPathFinder()
	{
		UClass* Class = UGridPathFinder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCost", &UGridPathFinder::execGetCost },
			{ "GetDestination", &UGridPathFinder::execGetDestination },
			{ "GetExtraTags", &UGridPathFinder::execGetExtraTags },
			{ "GetGridManager", &UGridPathFinder::execGetGridManager },
			{ "GetSender", &UGridPathFinder::execGetSender },
			{ "GetStart", &UGridPathFinder::execGetStart },
			{ "Heuristic", &UGridPathFinder::execHeuristic },
			{ "IsReachable", &UGridPathFinder::execIsReachable },
			{ "Reset", &UGridPathFinder::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridPathFinder_GetCost_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridPathFinder_GetCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPathFinder_eventGetCost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridPathFinder_GetCost_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPathFinder_eventGetCost_Parms, To), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridPathFinder_GetCost_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPathFinder_eventGetCost_Parms, From), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridPathFinder_GetCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathFinder_GetCost_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathFinder_GetCost_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathFinder_GetCost_Statics::NewProp_From,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridPathFinder_GetCost_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridPathFinder" },
		{ "ModuleRelativePath", "Public/GridPathfindingParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridPathFinder_GetCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridPathFinder, nullptr, "GetCost", nullptr, nullptr, sizeof(GridPathFinder_eventGetCost_Parms), Z_Construct_UFunction_UGridPathFinder_GetCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathFinder_GetCost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridPathFinder_GetCost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathFinder_GetCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridPathFinder_GetCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridPathFinder_GetCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridPathFinder_GetDestination_Statics
	{
		struct GridPathFinder_eventGetDestination_Parms
		{
			UGrid* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridPathFinder_GetDestination_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPathFinder_eventGetDestination_Parms, ReturnValue), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridPathFinder_GetDestination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathFinder_GetDestination_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridPathFinder_GetDestination_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridPathFinder" },
		{ "ModuleRelativePath", "Public/GridPathfindingParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridPathFinder_GetDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridPathFinder, nullptr, "GetDestination", nullptr, nullptr, sizeof(GridPathFinder_eventGetDestination_Parms), Z_Construct_UFunction_UGridPathFinder_GetDestination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathFinder_GetDestination_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridPathFinder_GetDestination_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathFinder_GetDestination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridPathFinder_GetDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridPathFinder_GetDestination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridPathFinder_GetExtraTags_Statics
	{
		struct GridPathFinder_eventGetExtraTags_Parms
		{
			FGameplayTagContainer ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridPathFinder_GetExtraTags_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridPathFinder_GetExtraTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPathFinder_eventGetExtraTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UGridPathFinder_GetExtraTags_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathFinder_GetExtraTags_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridPathFinder_GetExtraTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathFinder_GetExtraTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridPathFinder_GetExtraTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridPathFinder" },
		{ "ModuleRelativePath", "Public/GridPathfindingParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridPathFinder_GetExtraTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridPathFinder, nullptr, "GetExtraTags", nullptr, nullptr, sizeof(GridPathFinder_eventGetExtraTags_Parms), Z_Construct_UFunction_UGridPathFinder_GetExtraTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathFinder_GetExtraTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridPathFinder_GetExtraTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathFinder_GetExtraTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridPathFinder_GetExtraTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridPathFinder_GetExtraTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridPathFinder_GetGridManager_Statics
	{
		struct GridPathFinder_eventGetGridManager_Parms
		{
			AGridManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridPathFinder_GetGridManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPathFinder_eventGetGridManager_Parms, ReturnValue), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridPathFinder_GetGridManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathFinder_GetGridManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridPathFinder_GetGridManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridPathFinder" },
		{ "ModuleRelativePath", "Public/GridPathfindingParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridPathFinder_GetGridManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridPathFinder, nullptr, "GetGridManager", nullptr, nullptr, sizeof(GridPathFinder_eventGetGridManager_Parms), Z_Construct_UFunction_UGridPathFinder_GetGridManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathFinder_GetGridManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridPathFinder_GetGridManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathFinder_GetGridManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridPathFinder_GetGridManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridPathFinder_GetGridManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridPathFinder_GetSender_Statics
	{
		struct GridPathFinder_eventGetSender_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridPathFinder_GetSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPathFinder_eventGetSender_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridPathFinder_GetSender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathFinder_GetSender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridPathFinder_GetSender_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridPathFinder" },
		{ "ModuleRelativePath", "Public/GridPathfindingParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridPathFinder_GetSender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridPathFinder, nullptr, "GetSender", nullptr, nullptr, sizeof(GridPathFinder_eventGetSender_Parms), Z_Construct_UFunction_UGridPathFinder_GetSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathFinder_GetSender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridPathFinder_GetSender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathFinder_GetSender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridPathFinder_GetSender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridPathFinder_GetSender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridPathFinder_GetStart_Statics
	{
		struct GridPathFinder_eventGetStart_Parms
		{
			UGrid* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridPathFinder_GetStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPathFinder_eventGetStart_Parms, ReturnValue), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridPathFinder_GetStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathFinder_GetStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridPathFinder_GetStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridPathFinder" },
		{ "ModuleRelativePath", "Public/GridPathfindingParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridPathFinder_GetStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridPathFinder, nullptr, "GetStart", nullptr, nullptr, sizeof(GridPathFinder_eventGetStart_Parms), Z_Construct_UFunction_UGridPathFinder_GetStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathFinder_GetStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridPathFinder_GetStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathFinder_GetStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridPathFinder_GetStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridPathFinder_GetStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridPathFinder_Heuristic_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridPathFinder_Heuristic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPathFinder_eventHeuristic_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridPathFinder_Heuristic_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPathFinder_eventHeuristic_Parms, To), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridPathFinder_Heuristic_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPathFinder_eventHeuristic_Parms, From), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridPathFinder_Heuristic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathFinder_Heuristic_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathFinder_Heuristic_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathFinder_Heuristic_Statics::NewProp_From,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridPathFinder_Heuristic_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridPathFinder" },
		{ "ModuleRelativePath", "Public/GridPathfindingParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridPathFinder_Heuristic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridPathFinder, nullptr, "Heuristic", nullptr, nullptr, sizeof(GridPathFinder_eventHeuristic_Parms), Z_Construct_UFunction_UGridPathFinder_Heuristic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathFinder_Heuristic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridPathFinder_Heuristic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathFinder_Heuristic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridPathFinder_Heuristic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridPathFinder_Heuristic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridPathFinder_IsReachable_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dest;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGridPathFinder_IsReachable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridPathFinder_eventIsReachable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridPathFinder_IsReachable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridPathFinder_eventIsReachable_Parms), &Z_Construct_UFunction_UGridPathFinder_IsReachable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridPathFinder_IsReachable_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPathFinder_eventIsReachable_Parms, Dest), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridPathFinder_IsReachable_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPathFinder_eventIsReachable_Parms, Start), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridPathFinder_IsReachable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathFinder_IsReachable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathFinder_IsReachable_Statics::NewProp_Dest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathFinder_IsReachable_Statics::NewProp_Start,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridPathFinder_IsReachable_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridPathFinder" },
		{ "Comment", "/** If return false, the pawn can't move from 'Start' to 'Dest', the path has been blocked, and the cost will be ignore */" },
		{ "ModuleRelativePath", "Public/GridPathfindingParams.h" },
		{ "ToolTip", "If return false, the pawn can't move from 'Start' to 'Dest', the path has been blocked, and the cost will be ignore" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridPathFinder_IsReachable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridPathFinder, nullptr, "IsReachable", nullptr, nullptr, sizeof(GridPathFinder_eventIsReachable_Parms), Z_Construct_UFunction_UGridPathFinder_IsReachable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathFinder_IsReachable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridPathFinder_IsReachable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathFinder_IsReachable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridPathFinder_IsReachable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridPathFinder_IsReachable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridPathFinder_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridPathFinder_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridPathFinder" },
		{ "ModuleRelativePath", "Public/GridPathfindingParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridPathFinder_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridPathFinder, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridPathFinder_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathFinder_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridPathFinder_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridPathFinder_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGridPathFinder_NoRegister()
	{
		return UGridPathFinder::StaticClass();
	}
	struct Z_Construct_UClass_UGridPathFinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridPathFinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridPathFinder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridPathFinder_GetCost, "GetCost" }, // 1757757110
		{ &Z_Construct_UFunction_UGridPathFinder_GetDestination, "GetDestination" }, // 3597056958
		{ &Z_Construct_UFunction_UGridPathFinder_GetExtraTags, "GetExtraTags" }, // 1667934611
		{ &Z_Construct_UFunction_UGridPathFinder_GetGridManager, "GetGridManager" }, // 3539345101
		{ &Z_Construct_UFunction_UGridPathFinder_GetSender, "GetSender" }, // 163898957
		{ &Z_Construct_UFunction_UGridPathFinder_GetStart, "GetStart" }, // 3758688078
		{ &Z_Construct_UFunction_UGridPathFinder_Heuristic, "Heuristic" }, // 4194640864
		{ &Z_Construct_UFunction_UGridPathFinder_IsReachable, "IsReachable" }, // 2678840188
		{ &Z_Construct_UFunction_UGridPathFinder_Reset, "Reset" }, // 217344486
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPathFinder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09""Default pathfinder using manhattan distance to calculate cost.\n\x09Inherit from USquarePathFinder or UHexagonPathFinder to customize pathfinding\n*/" },
		{ "IncludePath", "GridPathfindingParams.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GridPathfindingParams.h" },
		{ "ToolTip", "Default pathfinder using manhattan distance to calculate cost.\nInherit from USquarePathFinder or UHexagonPathFinder to customize pathfinding" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPathFinder_Statics::NewProp_GridManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/GridPathfindingParams.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridPathFinder_Statics::NewProp_GridManager = { "GridManager", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridPathFinder, GridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridPathFinder_Statics::NewProp_GridManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPathFinder_Statics::NewProp_GridManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridPathFinder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPathFinder_Statics::NewProp_GridManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridPathFinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridPathFinder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGridPathFinder_Statics::ClassParams = {
		&UGridPathFinder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGridPathFinder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridPathFinder_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridPathFinder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPathFinder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridPathFinder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGridPathFinder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGridPathFinder, 4012250704);
	template<> GRIDRUNTIME_API UClass* StaticClass<UGridPathFinder>()
	{
		return UGridPathFinder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridPathFinder(Z_Construct_UClass_UGridPathFinder, &UGridPathFinder::StaticClass, TEXT("/Script/GridRuntime"), TEXT("UGridPathFinder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridPathFinder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
