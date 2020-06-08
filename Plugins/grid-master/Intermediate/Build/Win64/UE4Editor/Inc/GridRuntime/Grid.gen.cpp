// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridRuntime/Public/Grid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrid() {}
// Cross Module References
	GRIDRUNTIME_API UEnum* Z_Construct_UEnum_GridRuntime_EGridType();
	UPackage* Z_Construct_UPackage__Script_GridRuntime();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGrid_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGrid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGrid_Equal();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGrid_GetCenter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGrid_GetCoord();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGrid_GetDistance();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGrid_GetGridSize();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGrid_GetNeighbors();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGrid_GetVisibility();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGrid_IsEmpty();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGrid_SetGridSize();
	GRIDRUNTIME_API UFunction* Z_Construct_UFunction_UGrid_SetVisibility();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
	GRIDRUNTIME_API UClass* Z_Construct_UClass_UGridInfo_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
// End Cross Module References
	static UEnum* EGridType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GridRuntime_EGridType, Z_Construct_UPackage__Script_GridRuntime(), TEXT("EGridType"));
		}
		return Singleton;
	}
	template<> GRIDRUNTIME_API UEnum* StaticEnum<EGridType>()
	{
		return EGridType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGridType(EGridType_StaticEnum, TEXT("/Script/GridRuntime"), TEXT("EGridType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GridRuntime_EGridType_Hash() { return 2716286413U; }
	UEnum* Z_Construct_UEnum_GridRuntime_EGridType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GridRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGridType"), 0, Get_Z_Construct_UEnum_GridRuntime_EGridType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGridType::Unknown", (int64)EGridType::Unknown },
				{ "EGridType::Square", (int64)EGridType::Square },
				{ "EGridType::Hexagon", (int64)EGridType::Hexagon },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Hexagon.Name", "EGridType::Hexagon" },
				{ "ModuleRelativePath", "Public/Grid.h" },
				{ "Square.Name", "EGridType::Square" },
				{ "Unknown.Name", "EGridType::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GridRuntime,
				nullptr,
				"EGridType",
				"EGridType",
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
	static FName NAME_UGrid_GetNeighbors = FName(TEXT("GetNeighbors"));
	void UGrid::GetNeighbors(TArray<UGrid*>& Grids)
	{
		Grid_eventGetNeighbors_Parms Parms;
		Parms.Grids=Grids;
		ProcessEvent(FindFunctionChecked(NAME_UGrid_GetNeighbors),&Parms);
		Grids=Parms.Grids;
	}
	void UGrid::StaticRegisterNativesUGrid()
	{
		UClass* Class = UGrid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Equal", &UGrid::execEqual },
			{ "GetCenter", &UGrid::execGetCenter },
			{ "GetCoord", &UGrid::execGetCoord },
			{ "GetDistance", &UGrid::execGetDistance },
			{ "GetGridSize", &UGrid::execGetGridSize },
			{ "GetNeighbors", &UGrid::execGetNeighbors },
			{ "GetVisibility", &UGrid::execGetVisibility },
			{ "IsEmpty", &UGrid::execIsEmpty },
			{ "SetGridSize", &UGrid::execSetGridSize },
			{ "SetVisibility", &UGrid::execSetVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGrid_Equal_Statics
	{
		struct Grid_eventEqual_Parms
		{
			const UGrid* R;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_R;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrid_Equal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Grid_eventEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrid_Equal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Grid_eventEqual_Parms), &Z_Construct_UFunction_UGrid_Equal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrid_Equal_Statics::NewProp_R_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrid_Equal_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grid_eventEqual_Parms, R), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrid_Equal_Statics::NewProp_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_Equal_Statics::NewProp_R_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrid_Equal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrid_Equal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrid_Equal_Statics::NewProp_R,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrid_Equal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrid_Equal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrid, nullptr, "Equal", nullptr, nullptr, sizeof(Grid_eventEqual_Parms), Z_Construct_UFunction_UGrid_Equal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_Equal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrid_Equal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_Equal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrid_Equal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrid_Equal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrid_GetCenter_Statics
	{
		struct Grid_eventGetCenter_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrid_GetCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grid_eventGetCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrid_GetCenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrid_GetCenter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrid_GetCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrid_GetCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrid, nullptr, "GetCenter", nullptr, nullptr, sizeof(Grid_eventGetCenter_Parms), Z_Construct_UFunction_UGrid_GetCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_GetCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrid_GetCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_GetCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrid_GetCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrid_GetCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrid_GetCoord_Statics
	{
		struct Grid_eventGetCoord_Parms
		{
			FIntVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrid_GetCoord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grid_eventGetCoord_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrid_GetCoord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrid_GetCoord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrid_GetCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrid_GetCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrid, nullptr, "GetCoord", nullptr, nullptr, sizeof(Grid_eventGetCoord_Parms), Z_Construct_UFunction_UGrid_GetCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_GetCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrid_GetCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_GetCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrid_GetCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrid_GetCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrid_GetDistance_Statics
	{
		struct Grid_eventGetDistance_Parms
		{
			const UGrid* Dest;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGrid_GetDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grid_eventGetDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrid_GetDistance_Statics::NewProp_Dest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrid_GetDistance_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grid_eventGetDistance_Parms, Dest), Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrid_GetDistance_Statics::NewProp_Dest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_GetDistance_Statics::NewProp_Dest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrid_GetDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrid_GetDistance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrid_GetDistance_Statics::NewProp_Dest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrid_GetDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "GridManager" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrid_GetDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrid, nullptr, "GetDistance", nullptr, nullptr, sizeof(Grid_eventGetDistance_Parms), Z_Construct_UFunction_UGrid_GetDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_GetDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrid_GetDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_GetDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrid_GetDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrid_GetDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrid_GetGridSize_Statics
	{
		struct Grid_eventGetGridSize_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGrid_GetGridSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grid_eventGetGridSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrid_GetGridSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrid_GetGridSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrid_GetGridSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrid_GetGridSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrid, nullptr, "GetGridSize", nullptr, nullptr, sizeof(Grid_eventGetGridSize_Parms), Z_Construct_UFunction_UGrid_GetGridSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_GetGridSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrid_GetGridSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_GetGridSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrid_GetGridSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrid_GetGridSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrid_GetNeighbors_Statics
	{
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Grids;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grids_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGrid_GetNeighbors_Statics::NewProp_Grids = { "Grids", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grid_eventGetNeighbors_Parms, Grids), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrid_GetNeighbors_Statics::NewProp_Grids_Inner = { "Grids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrid_GetNeighbors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrid_GetNeighbors_Statics::NewProp_Grids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrid_GetNeighbors_Statics::NewProp_Grids_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrid_GetNeighbors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrid_GetNeighbors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrid, nullptr, "GetNeighbors", nullptr, nullptr, sizeof(Grid_eventGetNeighbors_Parms), Z_Construct_UFunction_UGrid_GetNeighbors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_GetNeighbors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrid_GetNeighbors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_GetNeighbors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrid_GetNeighbors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrid_GetNeighbors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrid_GetVisibility_Statics
	{
		struct Grid_eventGetVisibility_Parms
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
	void Z_Construct_UFunction_UGrid_GetVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Grid_eventGetVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrid_GetVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Grid_eventGetVisibility_Parms), &Z_Construct_UFunction_UGrid_GetVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrid_GetVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrid_GetVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrid_GetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrid_GetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrid, nullptr, "GetVisibility", nullptr, nullptr, sizeof(Grid_eventGetVisibility_Parms), Z_Construct_UFunction_UGrid_GetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_GetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrid_GetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_GetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrid_GetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrid_GetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrid_IsEmpty_Statics
	{
		struct Grid_eventIsEmpty_Parms
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
	void Z_Construct_UFunction_UGrid_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Grid_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrid_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Grid_eventIsEmpty_Parms), &Z_Construct_UFunction_UGrid_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrid_IsEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrid_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrid_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "Comment", "/**\n\x09\x09if line trace test can't hit any WorldStatic object, then this grid is empty\n\x09*/" },
		{ "ModuleRelativePath", "Public/Grid.h" },
		{ "ToolTip", "if line trace test can't hit any WorldStatic object, then this grid is empty" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrid_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrid, nullptr, "IsEmpty", nullptr, nullptr, sizeof(Grid_eventIsEmpty_Parms), Z_Construct_UFunction_UGrid_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrid_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrid_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrid_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrid_SetGridSize_Statics
	{
		struct Grid_eventSetGridSize_Parms
		{
			float Size;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGrid_SetGridSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grid_eventSetGridSize_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrid_SetGridSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrid_SetGridSize_Statics::NewProp_Size,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrid_SetGridSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrid_SetGridSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrid, nullptr, "SetGridSize", nullptr, nullptr, sizeof(Grid_eventSetGridSize_Parms), Z_Construct_UFunction_UGrid_SetGridSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_SetGridSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrid_SetGridSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_SetGridSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrid_SetGridSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrid_SetGridSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrid_SetVisibility_Statics
	{
		struct Grid_eventSetVisibility_Parms
		{
			bool NewVisibility;
		};
		static void NewProp_NewVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrid_SetVisibility_Statics::NewProp_NewVisibility_SetBit(void* Obj)
	{
		((Grid_eventSetVisibility_Parms*)Obj)->NewVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrid_SetVisibility_Statics::NewProp_NewVisibility = { "NewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Grid_eventSetVisibility_Parms), &Z_Construct_UFunction_UGrid_SetVisibility_Statics::NewProp_NewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrid_SetVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrid_SetVisibility_Statics::NewProp_NewVisibility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrid_SetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrid_SetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrid, nullptr, "SetVisibility", nullptr, nullptr, sizeof(Grid_eventSetVisibility_Parms), Z_Construct_UFunction_UGrid_SetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_SetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrid_SetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid_SetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrid_SetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrid_SetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGrid_NoRegister()
	{
		return UGrid::StaticClass();
	}
	struct Z_Construct_UClass_UGrid_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GridType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GridType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GridRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGrid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrid_Equal, "Equal" }, // 3334877774
		{ &Z_Construct_UFunction_UGrid_GetCenter, "GetCenter" }, // 666137290
		{ &Z_Construct_UFunction_UGrid_GetCoord, "GetCoord" }, // 1131311462
		{ &Z_Construct_UFunction_UGrid_GetDistance, "GetDistance" }, // 1869020365
		{ &Z_Construct_UFunction_UGrid_GetGridSize, "GetGridSize" }, // 3447194108
		{ &Z_Construct_UFunction_UGrid_GetNeighbors, "GetNeighbors" }, // 1365370668
		{ &Z_Construct_UFunction_UGrid_GetVisibility, "GetVisibility" }, // 3539380753
		{ &Z_Construct_UFunction_UGrid_IsEmpty, "IsEmpty" }, // 3814136755
		{ &Z_Construct_UFunction_UGrid_SetGridSize, "SetGridSize" }, // 3461856788
		{ &Z_Construct_UFunction_UGrid_SetVisibility, "SetVisibility" }, // 494847465
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrid_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Grid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrid_Statics::NewProp_GridManager_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrid_Statics::NewProp_GridManager = { "GridManager", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrid, GridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrid_Statics::NewProp_GridManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrid_Statics::NewProp_GridManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrid_Statics::NewProp_GridInfo_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrid_Statics::NewProp_GridInfo = { "GridInfo", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrid, GridInfo), Z_Construct_UClass_UGridInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrid_Statics::NewProp_GridInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrid_Statics::NewProp_GridInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrid_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrid_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrid, Height), METADATA_PARAMS(Z_Construct_UClass_UGrid_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrid_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrid_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrid_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrid, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UGrid_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrid_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrid_Statics::NewProp_GridType_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGrid_Statics::NewProp_GridType = { "GridType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrid, GridType), Z_Construct_UEnum_GridRuntime_EGridType, METADATA_PARAMS(Z_Construct_UClass_UGrid_Statics::NewProp_GridType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrid_Statics::NewProp_GridType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGrid_Statics::NewProp_GridType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrid_Statics::NewProp_GridManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrid_Statics::NewProp_GridInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrid_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrid_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrid_Statics::NewProp_GridType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrid_Statics::NewProp_GridType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrid_Statics::ClassParams = {
		&UGrid::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrid_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrid, 158216907);
	template<> GRIDRUNTIME_API UClass* StaticClass<UGrid>()
	{
		return UGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrid(Z_Construct_UClass_UGrid, &UGrid::StaticClass, TEXT("/Script/GridRuntime"), TEXT("UGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
