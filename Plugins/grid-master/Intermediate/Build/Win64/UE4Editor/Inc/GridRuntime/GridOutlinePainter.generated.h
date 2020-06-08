// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGrid;
struct FLinearColor;
#ifdef GRIDRUNTIME_GridOutlinePainter_generated_h
#error "GridOutlinePainter.generated.h already included, missing '#pragma once' in GridOutlinePainter.h"
#endif
#define GRIDRUNTIME_GridOutlinePainter_generated_h

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_SPARSE_DATA
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_RPC_WRAPPERS \
	virtual void GetColors_Implementation(UGrid* Grid, TArray<FLinearColor>& Colors); \
	virtual void GetColorPriority_Implementation(TArray<FLinearColor>& Colors); \
 \
	DECLARE_FUNCTION(execGetColors) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_Grid); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Colors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetColors_Implementation(Z_Param_Grid,Z_Param_Out_Colors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColorPriority) \
	{ \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Colors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetColorPriority_Implementation(Z_Param_Out_Colors); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetColors) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_Grid); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Colors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetColors_Implementation(Z_Param_Grid,Z_Param_Out_Colors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColorPriority) \
	{ \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Colors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetColorPriority_Implementation(Z_Param_Out_Colors); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_EVENT_PARMS \
	struct GridOutlinePainter_eventGetColorPriority_Parms \
	{ \
		TArray<FLinearColor> Colors; \
	}; \
	struct GridOutlinePainter_eventGetColors_Parms \
	{ \
		UGrid* Grid; \
		TArray<FLinearColor> Colors; \
	};


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_CALLBACK_WRAPPERS
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridOutlinePainter(); \
	friend struct Z_Construct_UClass_UGridOutlinePainter_Statics; \
public: \
	DECLARE_CLASS(UGridOutlinePainter, UGridPainter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridOutlinePainter)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUGridOutlinePainter(); \
	friend struct Z_Construct_UClass_UGridOutlinePainter_Statics; \
public: \
	DECLARE_CLASS(UGridOutlinePainter, UGridPainter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridOutlinePainter)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridOutlinePainter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridOutlinePainter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridOutlinePainter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridOutlinePainter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridOutlinePainter(UGridOutlinePainter&&); \
	NO_API UGridOutlinePainter(const UGridOutlinePainter&); \
public:


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridOutlinePainter(UGridOutlinePainter&&); \
	NO_API UGridOutlinePainter(const UGridOutlinePainter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridOutlinePainter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridOutlinePainter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridOutlinePainter)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_PRIVATE_PROPERTY_OFFSET
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_11_PROLOG \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_EVENT_PARMS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_RPC_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_CALLBACK_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_INCLASS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_CALLBACK_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_INCLASS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDRUNTIME_API UClass* StaticClass<class UGridOutlinePainter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridOutlinePainter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
