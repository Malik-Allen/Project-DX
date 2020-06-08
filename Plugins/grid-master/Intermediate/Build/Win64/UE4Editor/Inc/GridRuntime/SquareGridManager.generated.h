// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class USquareGrid;
class UGrid;
struct FIntVector;
#ifdef GRIDRUNTIME_SquareGridManager_generated_h
#error "SquareGridManager.generated.h already included, missing '#pragma once' in SquareGridManager.h"
#endif
#define GRIDRUNTIME_SquareGridManager_generated_h

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSquareGridArray_Statics; \
	GRIDRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GRIDRUNTIME_API UScriptStruct* StaticStruct<struct FSquareGridArray>();

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_31_SPARSE_DATA
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSquareGridByPosition) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USquareGrid**)Z_Param__Result=P_THIS->GetSquareGridByPosition(Z_Param_Out_Position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSquareGridsByRange) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_Center); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Range); \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_Grids); \
		P_GET_UBOOL(Z_Param_bDiagonal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSquareGridsByRange(Z_Param_Center,Z_Param_Range,Z_Param_Out_Grids,Z_Param_bDiagonal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSquareGridsByCoord) \
	{ \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Coord); \
		P_GET_TARRAY_REF(USquareGrid*,Z_Param_Out_Grids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSquareGridsByCoord(Z_Param_Out_Coord,Z_Param_Out_Grids); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSquareGridByPosition) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USquareGrid**)Z_Param__Result=P_THIS->GetSquareGridByPosition(Z_Param_Out_Position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSquareGridsByRange) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_Center); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Range); \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_Grids); \
		P_GET_UBOOL(Z_Param_bDiagonal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSquareGridsByRange(Z_Param_Center,Z_Param_Range,Z_Param_Out_Grids,Z_Param_bDiagonal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSquareGridsByCoord) \
	{ \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Coord); \
		P_GET_TARRAY_REF(USquareGrid*,Z_Param_Out_Grids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSquareGridsByCoord(Z_Param_Out_Coord,Z_Param_Out_Grids); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASquareGridManager(); \
	friend struct Z_Construct_UClass_ASquareGridManager_Statics; \
public: \
	DECLARE_CLASS(ASquareGridManager, AGridManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(ASquareGridManager)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_31_INCLASS \
private: \
	static void StaticRegisterNativesASquareGridManager(); \
	friend struct Z_Construct_UClass_ASquareGridManager_Statics; \
public: \
	DECLARE_CLASS(ASquareGridManager, AGridManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(ASquareGridManager)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASquareGridManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASquareGridManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASquareGridManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASquareGridManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASquareGridManager(ASquareGridManager&&); \
	NO_API ASquareGridManager(const ASquareGridManager&); \
public:


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASquareGridManager(ASquareGridManager&&); \
	NO_API ASquareGridManager(const ASquareGridManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASquareGridManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASquareGridManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASquareGridManager)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GridsPool() { return STRUCT_OFFSET(ASquareGridManager, GridsPool); }


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_28_PROLOG
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_31_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_31_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_31_RPC_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_31_INCLASS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_31_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_31_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_31_INCLASS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDRUNTIME_API UClass* StaticClass<class ASquareGridManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGridManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
