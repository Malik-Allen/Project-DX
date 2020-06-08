// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef GRIDRUNTIME_LineComponent_generated_h
#error "LineComponent.generated.h already included, missing '#pragma once' in LineComponent.h"
#endif
#define GRIDRUNTIME_LineComponent_generated_h

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_16_SPARSE_DATA
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPoints) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPoints(Z_Param_Out_Points); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPoints) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPoints(Z_Param_Out_Points); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULineComponent(); \
	friend struct Z_Construct_UClass_ULineComponent_Statics; \
public: \
	DECLARE_CLASS(ULineComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULineComponent)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesULineComponent(); \
	friend struct Z_Construct_UClass_ULineComponent_Statics; \
public: \
	DECLARE_CLASS(ULineComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULineComponent)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULineComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULineComponent(ULineComponent&&); \
	NO_API ULineComponent(const ULineComponent&); \
public:


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULineComponent(ULineComponent&&); \
	NO_API ULineComponent(const ULineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULineComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULineComponent)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_16_PRIVATE_PROPERTY_OFFSET
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_13_PROLOG
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_16_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_16_RPC_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_16_INCLASS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_16_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_16_INCLASS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDRUNTIME_API UClass* StaticClass<class ULineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_LineComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
