// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UHexagonGrid;
struct FIntVector;
#ifdef GRIDRUNTIME_HexagonGridManager_generated_h
#error "HexagonGridManager.generated.h already included, missing '#pragma once' in HexagonGridManager.h"
#endif
#define GRIDRUNTIME_HexagonGridManager_generated_h

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHexagonGridArray_Statics; \
	GRIDRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GRIDRUNTIME_API UScriptStruct* StaticStruct<struct FHexagonGridArray>();

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_32_SPARSE_DATA
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHexagonGridByPosition) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Postion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UHexagonGrid**)Z_Param__Result=P_THIS->GetHexagonGridByPosition(Z_Param_Out_Postion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHexagonGridsByCoord) \
	{ \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Coord); \
		P_GET_TARRAY_REF(UHexagonGrid*,Z_Param_Out_Grids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetHexagonGridsByCoord(Z_Param_Out_Coord,Z_Param_Out_Grids); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHexagonGridByPosition) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Postion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UHexagonGrid**)Z_Param__Result=P_THIS->GetHexagonGridByPosition(Z_Param_Out_Postion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHexagonGridsByCoord) \
	{ \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Coord); \
		P_GET_TARRAY_REF(UHexagonGrid*,Z_Param_Out_Grids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetHexagonGridsByCoord(Z_Param_Out_Coord,Z_Param_Out_Grids); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHexagonGridManager(); \
	friend struct Z_Construct_UClass_AHexagonGridManager_Statics; \
public: \
	DECLARE_CLASS(AHexagonGridManager, AGridManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(AHexagonGridManager)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_32_INCLASS \
private: \
	static void StaticRegisterNativesAHexagonGridManager(); \
	friend struct Z_Construct_UClass_AHexagonGridManager_Statics; \
public: \
	DECLARE_CLASS(AHexagonGridManager, AGridManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(AHexagonGridManager)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHexagonGridManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHexagonGridManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHexagonGridManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHexagonGridManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHexagonGridManager(AHexagonGridManager&&); \
	NO_API AHexagonGridManager(const AHexagonGridManager&); \
public:


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHexagonGridManager(AHexagonGridManager&&); \
	NO_API AHexagonGridManager(const AHexagonGridManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHexagonGridManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHexagonGridManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHexagonGridManager)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GridsPool() { return STRUCT_OFFSET(AHexagonGridManager, GridsPool); }


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_29_PROLOG
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_32_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_32_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_32_RPC_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_32_INCLASS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_32_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_32_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_32_INCLASS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDRUNTIME_API UClass* StaticClass<class AHexagonGridManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Hexagon_HexagonGridManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
