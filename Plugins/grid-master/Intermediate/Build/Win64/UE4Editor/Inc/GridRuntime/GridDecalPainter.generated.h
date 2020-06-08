// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UGrid;
#ifdef GRIDRUNTIME_GridDecalPainter_generated_h
#error "GridDecalPainter.generated.h already included, missing '#pragma once' in GridDecalPainter.h"
#endif
#define GRIDRUNTIME_GridDecalPainter_generated_h

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_SPARSE_DATA
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_RPC_WRAPPERS \
	virtual UMaterialInterface* GetDecalMaterial_Implementation(UGrid* Grid); \
 \
	DECLARE_FUNCTION(execGetDecalMaterial) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_Grid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetDecalMaterial_Implementation(Z_Param_Grid); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDecalMaterial) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_Grid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetDecalMaterial_Implementation(Z_Param_Grid); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_EVENT_PARMS \
	struct GridDecalPainter_eventGetDecalMaterial_Parms \
	{ \
		UGrid* Grid; \
		UMaterialInterface* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GridDecalPainter_eventGetDecalMaterial_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_CALLBACK_WRAPPERS
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridDecalPainter(); \
	friend struct Z_Construct_UClass_UGridDecalPainter_Statics; \
public: \
	DECLARE_CLASS(UGridDecalPainter, UGridPainter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridDecalPainter)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUGridDecalPainter(); \
	friend struct Z_Construct_UClass_UGridDecalPainter_Statics; \
public: \
	DECLARE_CLASS(UGridDecalPainter, UGridPainter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridDecalPainter)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridDecalPainter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridDecalPainter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridDecalPainter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridDecalPainter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridDecalPainter(UGridDecalPainter&&); \
	NO_API UGridDecalPainter(const UGridDecalPainter&); \
public:


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridDecalPainter(UGridDecalPainter&&); \
	NO_API UGridDecalPainter(const UGridDecalPainter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridDecalPainter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridDecalPainter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridDecalPainter)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Grid2Decal() { return STRUCT_OFFSET(UGridDecalPainter, Grid2Decal); }


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_10_PROLOG \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_EVENT_PARMS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_RPC_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_CALLBACK_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_INCLASS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_CALLBACK_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_INCLASS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDRUNTIME_API UClass* StaticClass<class UGridDecalPainter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridPainter_GridDecalPainter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
