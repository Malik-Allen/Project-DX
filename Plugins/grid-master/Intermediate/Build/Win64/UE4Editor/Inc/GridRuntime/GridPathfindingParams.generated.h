// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGrid;
struct FGameplayTagContainer;
class AGridManager;
class AActor;
#ifdef GRIDRUNTIME_GridPathfindingParams_generated_h
#error "GridPathfindingParams.generated.h already included, missing '#pragma once' in GridPathfindingParams.h"
#endif
#define GRIDRUNTIME_GridPathfindingParams_generated_h

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGridPathfindingRequest_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GRIDRUNTIME_API UScriptStruct* StaticStruct<struct FGridPathfindingRequest>();

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_SPARSE_DATA
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_RPC_WRAPPERS \
	virtual void Reset_Implementation(); \
	virtual int32 Heuristic_Implementation(UGrid* From, UGrid* To); \
	virtual int32 GetCost_Implementation(UGrid* From, UGrid* To); \
	virtual bool IsReachable_Implementation(UGrid* Start, UGrid* Dest); \
 \
	DECLARE_FUNCTION(execReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reset_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHeuristic) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_From); \
		P_GET_OBJECT(UGrid,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->Heuristic_Implementation(Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCost) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_From); \
		P_GET_OBJECT(UGrid,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCost_Implementation(Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReachable) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_Start); \
		P_GET_OBJECT(UGrid,Z_Param_Dest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsReachable_Implementation(Z_Param_Start,Z_Param_Dest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExtraTags) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetExtraTags(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGridManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AGridManager**)Z_Param__Result=P_THIS->GetGridManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSender) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetSender(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDestination) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGrid**)Z_Param__Result=P_THIS->GetDestination(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGrid**)Z_Param__Result=P_THIS->GetStart(); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reset_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHeuristic) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_From); \
		P_GET_OBJECT(UGrid,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->Heuristic_Implementation(Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCost) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_From); \
		P_GET_OBJECT(UGrid,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCost_Implementation(Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReachable) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_Start); \
		P_GET_OBJECT(UGrid,Z_Param_Dest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsReachable_Implementation(Z_Param_Start,Z_Param_Dest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExtraTags) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetExtraTags(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGridManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AGridManager**)Z_Param__Result=P_THIS->GetGridManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSender) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetSender(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDestination) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGrid**)Z_Param__Result=P_THIS->GetDestination(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGrid**)Z_Param__Result=P_THIS->GetStart(); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_EVENT_PARMS \
	struct GridPathFinder_eventGetCost_Parms \
	{ \
		UGrid* From; \
		UGrid* To; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GridPathFinder_eventGetCost_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GridPathFinder_eventHeuristic_Parms \
	{ \
		UGrid* From; \
		UGrid* To; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GridPathFinder_eventHeuristic_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GridPathFinder_eventIsReachable_Parms \
	{ \
		UGrid* Start; \
		UGrid* Dest; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GridPathFinder_eventIsReachable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_CALLBACK_WRAPPERS
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridPathFinder(); \
	friend struct Z_Construct_UClass_UGridPathFinder_Statics; \
public: \
	DECLARE_CLASS(UGridPathFinder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridPathFinder)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUGridPathFinder(); \
	friend struct Z_Construct_UClass_UGridPathFinder_Statics; \
public: \
	DECLARE_CLASS(UGridPathFinder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridPathFinder)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridPathFinder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridPathFinder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridPathFinder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridPathFinder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridPathFinder(UGridPathFinder&&); \
	NO_API UGridPathFinder(const UGridPathFinder&); \
public:


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridPathFinder(UGridPathFinder&&); \
	NO_API UGridPathFinder(const UGridPathFinder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridPathFinder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridPathFinder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridPathFinder)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_PRIVATE_PROPERTY_OFFSET
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_44_PROLOG \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_EVENT_PARMS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_RPC_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_CALLBACK_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_INCLASS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_CALLBACK_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_INCLASS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDRUNTIME_API UClass* StaticClass<class UGridPathFinder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPathfindingParams_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
