// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGrid;
#ifdef GRIDRUNTIME_SquareGrid_generated_h
#error "SquareGrid.generated.h already included, missing '#pragma once' in SquareGrid.h"
#endif
#define GRIDRUNTIME_SquareGrid_generated_h

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_13_SPARSE_DATA
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSquareNeighbors) \
	{ \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_Grids); \
		P_GET_UBOOL(Z_Param_bDiagonal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSquareNeighbors(Z_Param_Out_Grids,Z_Param_bDiagonal); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSquareNeighbors) \
	{ \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_Grids); \
		P_GET_UBOOL(Z_Param_bDiagonal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSquareNeighbors(Z_Param_Out_Grids,Z_Param_bDiagonal); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSquareGrid(); \
	friend struct Z_Construct_UClass_USquareGrid_Statics; \
public: \
	DECLARE_CLASS(USquareGrid, UGrid, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(USquareGrid)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSquareGrid(); \
	friend struct Z_Construct_UClass_USquareGrid_Statics; \
public: \
	DECLARE_CLASS(USquareGrid, UGrid, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(USquareGrid)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USquareGrid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USquareGrid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USquareGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USquareGrid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USquareGrid(USquareGrid&&); \
	NO_API USquareGrid(const USquareGrid&); \
public:


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USquareGrid(USquareGrid&&); \
	NO_API USquareGrid(const USquareGrid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USquareGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USquareGrid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USquareGrid)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_13_PRIVATE_PROPERTY_OFFSET
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_10_PROLOG
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_13_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_13_RPC_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_13_INCLASS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_13_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_13_INCLASS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDRUNTIME_API UClass* StaticClass<class USquareGrid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Square_SquareGrid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
