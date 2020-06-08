// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGrid;
struct FIntVector;
struct FVector;
#ifdef GRIDRUNTIME_Grid_generated_h
#error "Grid.generated.h already included, missing '#pragma once' in Grid.h"
#endif
#define GRIDRUNTIME_Grid_generated_h

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_SPARSE_DATA
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_RPC_WRAPPERS \
	virtual void GetNeighbors_Implementation(TArray<UGrid*>& Grids); \
 \
	DECLARE_FUNCTION(execGetNeighbors) \
	{ \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_Grids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNeighbors_Implementation(Z_Param_Out_Grids); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCoord) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntVector*)Z_Param__Result=P_THIS->GetCoord(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEmpty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsEmpty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistance) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_Dest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDistance(Z_Param_Dest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetVisibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_NewVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVisibility(Z_Param_NewVisibility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqual) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_R); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Equal(Z_Param_R); \
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
		P_GET_PROPERTY(UFloatProperty,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGridSize(Z_Param_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCenter(); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNeighbors) \
	{ \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_Grids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNeighbors_Implementation(Z_Param_Out_Grids); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCoord) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntVector*)Z_Param__Result=P_THIS->GetCoord(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEmpty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsEmpty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistance) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_Dest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDistance(Z_Param_Dest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetVisibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_NewVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVisibility(Z_Param_NewVisibility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqual) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_R); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Equal(Z_Param_R); \
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
		P_GET_PROPERTY(UFloatProperty,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGridSize(Z_Param_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCenter(); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_EVENT_PARMS \
	struct Grid_eventGetNeighbors_Parms \
	{ \
		TArray<UGrid*> Grids; \
	};


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_CALLBACK_WRAPPERS
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrid(); \
	friend struct Z_Construct_UClass_UGrid_Statics; \
public: \
	DECLARE_CLASS(UGrid, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGrid)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUGrid(); \
	friend struct Z_Construct_UClass_UGrid_Statics; \
public: \
	DECLARE_CLASS(UGrid, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGrid)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrid(UGrid&&); \
	NO_API UGrid(const UGrid&); \
public:


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrid(UGrid&&); \
	NO_API UGrid(const UGrid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGrid)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_PRIVATE_PROPERTY_OFFSET
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_22_PROLOG \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_EVENT_PARMS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_RPC_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_CALLBACK_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_INCLASS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_CALLBACK_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_INCLASS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDRUNTIME_API UClass* StaticClass<class UGrid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Grid_h


#define FOREACH_ENUM_EGRIDTYPE(op) \
	op(EGridType::Unknown) \
	op(EGridType::Square) \
	op(EGridType::Hexagon) 

enum class EGridType : uint8;
template<> GRIDRUNTIME_API UEnum* StaticEnum<EGridType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
