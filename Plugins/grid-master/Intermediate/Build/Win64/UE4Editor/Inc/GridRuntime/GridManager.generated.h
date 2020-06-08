// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGridPathFinder;
struct FVector;
class UGrid;
struct FIntVector;
struct FBox;
#ifdef GRIDRUNTIME_GridManager_generated_h
#error "GridManager.generated.h already included, missing '#pragma once' in GridManager.h"
#endif
#define GRIDRUNTIME_GridManager_generated_h

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_16_SPARSE_DATA
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPathFinder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGridPathFinder**)Z_Param__Result=P_THIS->GetPathFinder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllGridInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearAllGridInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGridByPosition) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGrid**)Z_Param__Result=P_THIS->GetGridByPosition(Z_Param_Out_Position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGridByCoord) \
	{ \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Coord); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGrid**)Z_Param__Result=P_THIS->GetGridByCoord(Z_Param_Out_Coord); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGridsByCoord) \
	{ \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Coord); \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_Grids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGridsByCoord(Z_Param_Out_Coord,Z_Param_Out_Grids); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGridsByRange) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_Center); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Range); \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_Grids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGridsByRange(Z_Param_Center,Z_Param_Range,Z_Param_Out_Grids); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGridsByBound) \
	{ \
		P_GET_STRUCT_REF(FBox,Z_Param_Out_Bound); \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_Grids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGridsByBound(Z_Param_Out_Bound,Z_Param_Out_Grids); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGridSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGridSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGridSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GridSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGridSize(Z_Param_GridSize); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPathFinder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGridPathFinder**)Z_Param__Result=P_THIS->GetPathFinder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllGridInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearAllGridInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGridByPosition) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGrid**)Z_Param__Result=P_THIS->GetGridByPosition(Z_Param_Out_Position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGridByCoord) \
	{ \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Coord); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGrid**)Z_Param__Result=P_THIS->GetGridByCoord(Z_Param_Out_Coord); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGridsByCoord) \
	{ \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Coord); \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_Grids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGridsByCoord(Z_Param_Out_Coord,Z_Param_Out_Grids); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGridsByRange) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_Center); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Range); \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_Grids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGridsByRange(Z_Param_Center,Z_Param_Range,Z_Param_Out_Grids); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGridsByBound) \
	{ \
		P_GET_STRUCT_REF(FBox,Z_Param_Out_Bound); \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_Grids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGridsByBound(Z_Param_Out_Bound,Z_Param_Out_Grids); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGridSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGridSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGridSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GridSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGridSize(Z_Param_GridSize); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridManager(); \
	friend struct Z_Construct_UClass_AGridManager_Statics; \
public: \
	DECLARE_CLASS(AGridManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(AGridManager)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAGridManager(); \
	friend struct Z_Construct_UClass_AGridManager_Statics; \
public: \
	DECLARE_CLASS(AGridManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(AGridManager)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGridManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGridManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGridManager(AGridManager&&); \
	NO_API AGridManager(const AGridManager&); \
public:


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGridManager(AGridManager&&); \
	NO_API AGridManager(const AGridManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridManager)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GridSize() { return STRUCT_OFFSET(AGridManager, GridSize); } \
	FORCEINLINE static uint32 __PPO__GridPainter() { return STRUCT_OFFSET(AGridManager, GridPainter); } \
	FORCEINLINE static uint32 __PPO__PathFinder() { return STRUCT_OFFSET(AGridManager, PathFinder); }


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_13_PROLOG
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_16_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_16_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_16_RPC_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_16_INCLASS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_16_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_16_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_16_INCLASS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDRUNTIME_API UClass* StaticClass<class AGridManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
