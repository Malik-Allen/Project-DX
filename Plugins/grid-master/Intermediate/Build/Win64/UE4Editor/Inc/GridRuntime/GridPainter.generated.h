// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGrid;
#ifdef GRIDRUNTIME_GridPainter_generated_h
#error "GridPainter.generated.h already included, missing '#pragma once' in GridPainter.h"
#endif
#define GRIDRUNTIME_GridPainter_generated_h

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_SPARSE_DATA
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_RPC_WRAPPERS \
	virtual void TickImpl_Implementation(float DeltaTime); \
	virtual void UpdateGridState_Implementation(UGrid* Grid); \
 \
	DECLARE_FUNCTION(execTickImpl) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TickImpl_Implementation(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateGridState) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_Grid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateGridState_Implementation(Z_Param_Grid); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTickImpl) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TickImpl_Implementation(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateGridState) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_Grid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateGridState_Implementation(Z_Param_Grid); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_EVENT_PARMS \
	struct GridPainter_eventTickImpl_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct GridPainter_eventUpdateGridState_Parms \
	{ \
		UGrid* Grid; \
	};


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_CALLBACK_WRAPPERS
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridPainter(); \
	friend struct Z_Construct_UClass_UGridPainter_Statics; \
public: \
	DECLARE_CLASS(UGridPainter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridPainter)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGridPainter(); \
	friend struct Z_Construct_UClass_UGridPainter_Statics; \
public: \
	DECLARE_CLASS(UGridPainter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridPainter)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridPainter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridPainter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridPainter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridPainter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridPainter(UGridPainter&&); \
	NO_API UGridPainter(const UGridPainter&); \
public:


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridPainter(UGridPainter&&); \
	NO_API UGridPainter(const UGridPainter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridPainter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridPainter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridPainter)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsTickable() { return STRUCT_OFFSET(UGridPainter, bIsTickable); } \
	FORCEINLINE static uint32 __PPO__TickInterval() { return STRUCT_OFFSET(UGridPainter, TickInterval); }


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_13_PROLOG \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_EVENT_PARMS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_RPC_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_CALLBACK_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_INCLASS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_CALLBACK_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_INCLASS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDRUNTIME_API UClass* StaticClass<class UGridPainter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridPainter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
