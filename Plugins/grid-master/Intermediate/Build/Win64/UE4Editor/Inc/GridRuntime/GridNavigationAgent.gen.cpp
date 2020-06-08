// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridRuntime/Public/Components/GridNavigationAgent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridNavigationAgent() {}
// Cross Module References
	GRIDRUNTIME_API UFunction* Z_Construct_UDelegateFunction_GridRuntime_GridNavAgentEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GridRuntime();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridNavigationAgent_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridNavigationAgent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridNavigationAgent_Check();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGrid_NoRegister();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridNavigationAgent_RequestMove();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridNavigationAgent_StopMove();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GridRuntime_GridNavAgentEvent__DelegateSignature_Statics
	{
		struct _Script_GridRuntime_eventGridNavAgentEvent_Parms
		{
			APawn* Pawn;
			bool Succ;
		};
		static void NewProp_Succ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Succ;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_GridRuntime_GridNavAgentEvent__DelegateSignature_Statics::NewProp_Succ_SetBit(void* Obj)
	{
		((_Script_GridRuntime_eventGridNavAgentEvent_Parms*)Obj)->Succ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GridRuntime_GridNavAgentEvent__DelegateSignature_Statics::NewProp_Succ = { "Succ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_GridRuntime_eventGridNavAgentEvent_Parms), &Z_Construct_UDelegateFunction_GridRuntime_GridNavAgentEvent__DelegateSignature_Statics::NewProp_Succ_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GridRuntime_GridNavAgentEvent__DelegateSignature_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GridRuntime_eventGridNavAgentEvent_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GridRuntime_GridNavAgentEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridRuntime_GridNavAgentEvent__DelegateSignature_Statics::NewProp_Succ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridRuntime_GridNavAgentEvent__DelegateSignature_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GridRuntime_GridNavAgentEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GridNavigationAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GridRuntime_GridNavAgentEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GridRuntime, nullptr, "GridNavAgentEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_GridRuntime_eventGridNavAgentEvent_Parms), Z_Construct_UDelegateFunction_GridRuntime_GridNavAgentEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridRuntime_GridNavAgentEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GridRuntime_GridNavAgentEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridRuntime_GridNavAgentEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GridRuntime_GridNavAgentEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GridRuntime_GridNavAgentEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_UGridNavigationAgent_Check = FName(TEXT("Check"));
	bool UGridNavigationAgent::Check(APawn* Pawn, UGrid* From, UGrid* To)
	{
		GridNavigationAgent_eventCheck_Parms Parms;
		Parms.Pawn=Pawn;
		Parms.From=From;
		Parms.To=To;
		ProcessEvent(FindFunctionChecked(NAME_UGridNavigationAgent_Check),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGridNavigationAgent_RequestMove = FName(TEXT("RequestMove"));
	bool UGridNavigationAgent::RequestMove(APawn* Pawn, UGrid* From, UGrid* To)
	{
		GridNavigationAgent_eventRequestMove_Parms Parms;
		Parms.Pawn=Pawn;
		Parms.From=From;
		Parms.To=To;
		ProcessEvent(FindFunctionChecked(NAME_UGridNavigationAgent_RequestMove),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGridNavigationAgent_StopMove = FName(TEXT("StopMove"));
	void UGridNavigationAgent::StopMove()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGridNavigationAgent_StopMove),NULL);
	}
	void UGridNavigationAgent::StaticRegisterNativesUGridNavigationAgent()
	{
		UClass* Class = UGridNavigationAgent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Check", &UGridNavigationAgent::execCheck },
			{ "RequestMove", &UGridNavigationAgent::execRequestMove },
			{ "StopMove", &UGridNavigationAgent::execStopMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridNavigationAgent_Check_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGridNavigationAgent_Check_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridNavigationAgent_eventCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridNavigationAgent_Check_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridNavigationAgent_eventCheck_Parms), &Z_Construct_UFunction_UGridNavigationAgent_Check_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridNavigationAgent_Check_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridNavigationAgent_eventCheck_Parms, To), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridNavigationAgent_Check_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridNavigationAgent_eventCheck_Parms, From), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridNavigationAgent_Check_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridNavigationAgent_eventCheck_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridNavigationAgent_Check_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridNavigationAgent_Check_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridNavigationAgent_Check_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridNavigationAgent_Check_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridNavigationAgent_Check_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridNavigationAgent_Check_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridNavigationAgent" },
		{ "Comment", "/** check if this agent can process this move */" },
		{ "ModuleRelativePath", "Public/Components/GridNavigationAgent.h" },
		{ "ToolTip", "check if this agent can process this move" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridNavigationAgent_Check_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridNavigationAgent, nullptr, "Check", nullptr, nullptr, sizeof(GridNavigationAgent_eventCheck_Parms), Z_Construct_UFunction_UGridNavigationAgent_Check_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridNavigationAgent_Check_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridNavigationAgent_Check_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridNavigationAgent_Check_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridNavigationAgent_Check()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridNavigationAgent_Check_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridNavigationAgent_RequestMove_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGridNavigationAgent_RequestMove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridNavigationAgent_eventRequestMove_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridNavigationAgent_RequestMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridNavigationAgent_eventRequestMove_Parms), &Z_Construct_UFunction_UGridNavigationAgent_RequestMove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridNavigationAgent_RequestMove_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridNavigationAgent_eventRequestMove_Parms, To), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridNavigationAgent_RequestMove_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridNavigationAgent_eventRequestMove_Parms, From), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridNavigationAgent_RequestMove_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridNavigationAgent_eventRequestMove_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridNavigationAgent_RequestMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridNavigationAgent_RequestMove_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridNavigationAgent_RequestMove_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridNavigationAgent_RequestMove_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridNavigationAgent_RequestMove_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridNavigationAgent_RequestMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridNavigationAgent" },
		{ "Comment", "/** if you override RequestMove, when the pawn arrival destination, you should call OnMoveCompleted */" },
		{ "ModuleRelativePath", "Public/Components/GridNavigationAgent.h" },
		{ "ToolTip", "if you override RequestMove, when the pawn arrival destination, you should call OnMoveCompleted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridNavigationAgent_RequestMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridNavigationAgent, nullptr, "RequestMove", nullptr, nullptr, sizeof(GridNavigationAgent_eventRequestMove_Parms), Z_Construct_UFunction_UGridNavigationAgent_RequestMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridNavigationAgent_RequestMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridNavigationAgent_RequestMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridNavigationAgent_RequestMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridNavigationAgent_RequestMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridNavigationAgent_RequestMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridNavigationAgent_StopMove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridNavigationAgent_StopMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridNavigationAgent" },
		{ "ModuleRelativePath", "Public/Components/GridNavigationAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridNavigationAgent_StopMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridNavigationAgent, nullptr, "StopMove", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridNavigationAgent_StopMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridNavigationAgent_StopMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridNavigationAgent_StopMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridNavigationAgent_StopMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGridNavigationAgent_NoRegister()
	{
		return UGridNavigationAgent::StaticClass();
	}
	struct Z_Construct_UClass_UGridNavigationAgent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMoveCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMoveCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridNavigationAgent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridNavigationAgent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridNavigationAgent_Check, "Check" }, // 3868867749
		{ &Z_Construct_UFunction_UGridNavigationAgent_RequestMove, "RequestMove" }, // 981997487
		{ &Z_Construct_UFunction_UGridNavigationAgent_StopMove, "StopMove" }, // 2549453293
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridNavigationAgent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * GridNavigationAgent is used to control the pawn's movement behavior.\n   inherit from this class to implement special movement(jump, climb, etc)\n */" },
		{ "IncludePath", "Components/GridNavigationAgent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/GridNavigationAgent.h" },
		{ "ToolTip", "GridNavigationAgent is used to control the pawn's movement behavior.\n   inherit from this class to implement special movement(jump, climb, etc)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridNavigationAgent_Statics::NewProp_OnMoveCompleted_MetaData[] = {
		{ "Category", "GridNavigationAgent" },
		{ "ModuleRelativePath", "Public/Components/GridNavigationAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGridNavigationAgent_Statics::NewProp_OnMoveCompleted = { "OnMoveCompleted", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridNavigationAgent, OnMoveCompleted), Z_Construct_UDelegateFunction_GridRuntime_GridNavAgentEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGridNavigationAgent_Statics::NewProp_OnMoveCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridNavigationAgent_Statics::NewProp_OnMoveCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridNavigationAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridNavigationAgent_Statics::NewProp_OnMoveCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridNavigationAgent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridNavigationAgent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGridNavigationAgent_Statics::ClassParams = {
		&UGridNavigationAgent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGridNavigationAgent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridNavigationAgent_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGridNavigationAgent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridNavigationAgent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridNavigationAgent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGridNavigationAgent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGridNavigationAgent, 2866109785);
	template<> GRIDRUNTIME_API UClass* StaticClass<UGridNavigationAgent>()
	{
		return UGridNavigationAgent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridNavigationAgent(Z_Construct_UClass_UGridNavigationAgent, &UGridNavigationAgent::StaticClass, TEXT("/Script/GridRuntime"), TEXT("UGridNavigationAgent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridNavigationAgent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
