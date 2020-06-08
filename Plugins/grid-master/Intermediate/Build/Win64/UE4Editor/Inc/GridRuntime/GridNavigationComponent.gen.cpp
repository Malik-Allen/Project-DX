// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridRuntime/Public/Components/GridNavigationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridNavigationComponent() {}
// Cross Module References
	GRIDRUNTIME_API UFunction* Z_Construct_UDelegateFunction_GridRuntime_GridNavEventSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GridRuntime();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridNavigationComponent_NoRegister();
	GRIDRUNTIME_API UEnum* Z_Construct_UEnum_GridRuntime_EGridNavMode();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridNavigationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridNavigationComponent_IsMoving();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridNavigationComponent_OnMoveCompleted();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridNavigationComponent_RequestMove();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridPathFinder_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGrid_NoRegister();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGridNavigationComponent_StopMove();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridNavigationAgent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GridRuntime_GridNavEventSignature__DelegateSignature_Statics
	{
		struct _Script_GridRuntime_eventGridNavEventSignature_Parms
		{
			UGridNavigationComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GridRuntime_GridNavEventSignature__DelegateSignature_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GridRuntime_GridNavEventSignature__DelegateSignature_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GridRuntime_eventGridNavEventSignature_Parms, Component), Z_Construct_UClass_UGridNavigationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_GridRuntime_GridNavEventSignature__DelegateSignature_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridRuntime_GridNavEventSignature__DelegateSignature_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GridRuntime_GridNavEventSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridRuntime_GridNavEventSignature__DelegateSignature_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GridRuntime_GridNavEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GridNavigationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GridRuntime_GridNavEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GridRuntime, nullptr, "GridNavEventSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_GridRuntime_eventGridNavEventSignature_Parms), Z_Construct_UDelegateFunction_GridRuntime_GridNavEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridRuntime_GridNavEventSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GridRuntime_GridNavEventSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridRuntime_GridNavEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GridRuntime_GridNavEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GridRuntime_GridNavEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EGridNavMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GridRuntime_EGridNavMode, Z_Construct_UPackage__Script_GridRuntime(), TEXT("EGridNavMode"));
		}
		return Singleton;
	}
	template<> GRIDRUNTIME_API UEnum* StaticEnum<EGridNavMode>()
	{
		return EGridNavMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGridNavMode(EGridNavMode_StaticEnum, TEXT("/Script/GridRuntime"), TEXT("EGridNavMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GridRuntime_EGridNavMode_Hash() { return 53314351U; }
	UEnum* Z_Construct_UEnum_GridRuntime_EGridNavMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GridRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGridNavMode"), 0, Get_Z_Construct_UEnum_GridRuntime_EGridNavMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGridNavMode::GridBased", (int64)EGridNavMode::GridBased },
				{ "EGridNavMode::Free", (int64)EGridNavMode::Free },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Free.Name", "EGridNavMode::Free" },
				{ "GridBased.Name", "EGridNavMode::GridBased" },
				{ "ModuleRelativePath", "Public/Components/GridNavigationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GridRuntime,
				nullptr,
				"EGridNavMode",
				"EGridNavMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UGridNavigationComponent::StaticRegisterNativesUGridNavigationComponent()
	{
		UClass* Class = UGridNavigationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsMoving", &UGridNavigationComponent::execIsMoving },
			{ "OnMoveCompleted", &UGridNavigationComponent::execOnMoveCompleted },
			{ "RequestMove", &UGridNavigationComponent::execRequestMove },
			{ "StopMove", &UGridNavigationComponent::execStopMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridNavigationComponent_IsMoving_Statics
	{
		struct GridNavigationComponent_eventIsMoving_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGridNavigationComponent_IsMoving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridNavigationComponent_eventIsMoving_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridNavigationComponent_IsMoving_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridNavigationComponent_eventIsMoving_Parms), &Z_Construct_UFunction_UGridNavigationComponent_IsMoving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridNavigationComponent_IsMoving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridNavigationComponent_IsMoving_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridNavigationComponent_IsMoving_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridNavigationComponent" },
		{ "ModuleRelativePath", "Public/Components/GridNavigationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridNavigationComponent_IsMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridNavigationComponent, nullptr, "IsMoving", nullptr, nullptr, sizeof(GridNavigationComponent_eventIsMoving_Parms), Z_Construct_UFunction_UGridNavigationComponent_IsMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridNavigationComponent_IsMoving_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridNavigationComponent_IsMoving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridNavigationComponent_IsMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridNavigationComponent_IsMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridNavigationComponent_IsMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridNavigationComponent_OnMoveCompleted_Statics
	{
		struct GridNavigationComponent_eventOnMoveCompleted_Parms
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
	void Z_Construct_UFunction_UGridNavigationComponent_OnMoveCompleted_Statics::NewProp_Succ_SetBit(void* Obj)
	{
		((GridNavigationComponent_eventOnMoveCompleted_Parms*)Obj)->Succ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridNavigationComponent_OnMoveCompleted_Statics::NewProp_Succ = { "Succ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridNavigationComponent_eventOnMoveCompleted_Parms), &Z_Construct_UFunction_UGridNavigationComponent_OnMoveCompleted_Statics::NewProp_Succ_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridNavigationComponent_OnMoveCompleted_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridNavigationComponent_eventOnMoveCompleted_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridNavigationComponent_OnMoveCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridNavigationComponent_OnMoveCompleted_Statics::NewProp_Succ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridNavigationComponent_OnMoveCompleted_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridNavigationComponent_OnMoveCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GridNavigationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridNavigationComponent_OnMoveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridNavigationComponent, nullptr, "OnMoveCompleted", nullptr, nullptr, sizeof(GridNavigationComponent_eventOnMoveCompleted_Parms), Z_Construct_UFunction_UGridNavigationComponent_OnMoveCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridNavigationComponent_OnMoveCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridNavigationComponent_OnMoveCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridNavigationComponent_OnMoveCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridNavigationComponent_OnMoveCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridNavigationComponent_OnMoveCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridNavigationComponent_RequestMove_Statics
	{
		struct GridNavigationComponent_eventRequestMove_Parms
		{
			UGrid* DestGrid;
			UGridPathFinder* PathFinder;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathFinder;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestGrid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGridNavigationComponent_RequestMove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridNavigationComponent_eventRequestMove_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridNavigationComponent_RequestMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridNavigationComponent_eventRequestMove_Parms), &Z_Construct_UFunction_UGridNavigationComponent_RequestMove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridNavigationComponent_RequestMove_Statics::NewProp_PathFinder = { "PathFinder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridNavigationComponent_eventRequestMove_Parms, PathFinder), Z_Construct_UClass_UGridPathFinder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridNavigationComponent_RequestMove_Statics::NewProp_DestGrid = { "DestGrid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridNavigationComponent_eventRequestMove_Parms, DestGrid), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridNavigationComponent_RequestMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridNavigationComponent_RequestMove_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridNavigationComponent_RequestMove_Statics::NewProp_PathFinder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridNavigationComponent_RequestMove_Statics::NewProp_DestGrid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridNavigationComponent_RequestMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridNavigationComponent" },
		{ "Comment", "/**\n\x09*\x09@note make sure character's \"Max Acceleration\" large enough for smooth moving\n\x09\x09@note if PathFinder == null, GridManager's default PathFinder will be used\n\x09*/" },
		{ "CPP_Default_PathFinder", "None" },
		{ "ModuleRelativePath", "Public/Components/GridNavigationComponent.h" },
		{ "ToolTip", "@note make sure character's \"Max Acceleration\" large enough for smooth moving\n         @note if PathFinder == null, GridManager's default PathFinder will be used" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridNavigationComponent_RequestMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridNavigationComponent, nullptr, "RequestMove", nullptr, nullptr, sizeof(GridNavigationComponent_eventRequestMove_Parms), Z_Construct_UFunction_UGridNavigationComponent_RequestMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridNavigationComponent_RequestMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridNavigationComponent_RequestMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridNavigationComponent_RequestMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridNavigationComponent_RequestMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridNavigationComponent_RequestMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridNavigationComponent_StopMove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridNavigationComponent_StopMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridNavigationComponent" },
		{ "ModuleRelativePath", "Public/Components/GridNavigationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridNavigationComponent_StopMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridNavigationComponent, nullptr, "StopMove", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridNavigationComponent_StopMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridNavigationComponent_StopMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridNavigationComponent_StopMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridNavigationComponent_StopMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGridNavigationComponent_NoRegister()
	{
		return UGridNavigationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGridNavigationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Agents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Agents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Agents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFollowingPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentFollowingPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentFollowingPath_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NavMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NavMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AgentClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AgentClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnArrivalGoal_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnArrivalGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnArrivalNewGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnArrivalNewGrid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridNavigationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridNavigationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridNavigationComponent_IsMoving, "IsMoving" }, // 1662303606
		{ &Z_Construct_UFunction_UGridNavigationComponent_OnMoveCompleted, "OnMoveCompleted" }, // 1169632404
		{ &Z_Construct_UFunction_UGridNavigationComponent_RequestMove, "RequestMove" }, // 4151054670
		{ &Z_Construct_UFunction_UGridNavigationComponent_StopMove, "StopMove" }, // 2731230974
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridNavigationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Grid" },
		{ "IncludePath", "Components/GridNavigationComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/GridNavigationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_Agents_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/GridNavigationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_Agents = { "Agents", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridNavigationComponent, Agents), METADATA_PARAMS(Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_Agents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_Agents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_Agents_Inner = { "Agents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGridNavigationAgent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_CurrentFollowingPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/GridNavigationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_CurrentFollowingPath = { "CurrentFollowingPath", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridNavigationComponent, CurrentFollowingPath), METADATA_PARAMS(Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_CurrentFollowingPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_CurrentFollowingPath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_CurrentFollowingPath_Inner = { "CurrentFollowingPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_OwnerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/GridNavigationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridNavigationComponent, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_OwnerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_OwnerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_OwnerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/GridNavigationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_OwnerPawn = { "OwnerPawn", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridNavigationComponent, OwnerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_OwnerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_OwnerPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_NavMode_MetaData[] = {
		{ "Category", "GridNavigationComponent" },
		{ "ModuleRelativePath", "Public/Components/GridNavigationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_NavMode = { "NavMode", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridNavigationComponent, NavMode), Z_Construct_UEnum_GridRuntime_EGridNavMode, METADATA_PARAMS(Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_NavMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_NavMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_NavMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_AgentClasses_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** if you implement a new GridNavigationAgent, add that class to this Array */" },
		{ "ModuleRelativePath", "Public/Components/GridNavigationComponent.h" },
		{ "ToolTip", "if you implement a new GridNavigationAgent, add that class to this Array" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_AgentClasses = { "AgentClasses", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridNavigationComponent, AgentClasses), METADATA_PARAMS(Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_AgentClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_AgentClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_AgentClasses_Inner = { "AgentClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGridNavigationAgent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_OnArrivalGoal_MetaData[] = {
		{ "Category", "GridNavigationComponent" },
		{ "ModuleRelativePath", "Public/Components/GridNavigationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_OnArrivalGoal = { "OnArrivalGoal", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridNavigationComponent, OnArrivalGoal), Z_Construct_UDelegateFunction_GridRuntime_GridNavEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_OnArrivalGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_OnArrivalGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_OnArrivalNewGrid_MetaData[] = {
		{ "Category", "GridNavigationComponent" },
		{ "ModuleRelativePath", "Public/Components/GridNavigationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_OnArrivalNewGrid = { "OnArrivalNewGrid", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridNavigationComponent, OnArrivalNewGrid), Z_Construct_UDelegateFunction_GridRuntime_GridNavEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_OnArrivalNewGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_OnArrivalNewGrid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridNavigationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_Agents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_Agents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_CurrentFollowingPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_CurrentFollowingPath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_OwnerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_OwnerPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_NavMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_NavMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_AgentClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_AgentClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_OnArrivalGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridNavigationComponent_Statics::NewProp_OnArrivalNewGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridNavigationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridNavigationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGridNavigationComponent_Statics::ClassParams = {
		&UGridNavigationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGridNavigationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridNavigationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGridNavigationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridNavigationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridNavigationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGridNavigationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGridNavigationComponent, 3119478181);
	template<> GRIDRUNTIME_API UClass* StaticClass<UGridNavigationComponent>()
	{
		return UGridNavigationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridNavigationComponent(Z_Construct_UClass_UGridNavigationComponent, &UGridNavigationComponent::StaticClass, TEXT("/Script/GridRuntime"), TEXT("UGridNavigationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridNavigationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
