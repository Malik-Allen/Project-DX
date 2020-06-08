// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class UGrid;
#ifdef GRIDRUNTIME_GridSensingComponent_generated_h
#error "GridSensingComponent.generated.h already included, missing '#pragma once' in GridSensingComponent.h"
#endif
#define GRIDRUNTIME_GridSensingComponent_generated_h

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_15_DELEGATE \
struct _Script_GridRuntime_eventSenseTestFunc_Parms \
{ \
	APawn* Pawn; \
	bool CouldSense; \
}; \
static inline void FSenseTestFunc_DelegateWrapper(const FScriptDelegate& SenseTestFunc, APawn* Pawn, bool& CouldSense) \
{ \
	_Script_GridRuntime_eventSenseTestFunc_Parms Parms; \
	Parms.Pawn=Pawn; \
	Parms.CouldSense=CouldSense ? true : false; \
	SenseTestFunc.ProcessDelegate<UObject>(&Parms); \
	CouldSense=Parms.CouldSense; \
}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_13_DELEGATE \
struct _Script_GridRuntime_eventSeePawnEvent_Parms \
{ \
	APawn* Pawn; \
}; \
static inline void FSeePawnEvent_DelegateWrapper(const FMulticastScriptDelegate& SeePawnEvent, APawn* Pawn) \
{ \
	_Script_GridRuntime_eventSeePawnEvent_Parms Parms; \
	Parms.Pawn=Pawn; \
	SeePawnEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_23_SPARSE_DATA
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDefaultSenseTestFunc) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_UBOOL_REF(Z_Param_Out_CouldSense); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DefaultSenseTestFunc(Z_Param_Pawn,Z_Param_Out_CouldSense); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSensingGrids) \
	{ \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_SensingGrids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSensingGrids(Z_Param_Out_SensingGrids); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCouldSeePawn) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CouldSeePawn(Z_Param_Pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSensingInterval) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewInterval); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSensingInterval(Z_Param_NewInterval); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDefaultSenseTestFunc) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_UBOOL_REF(Z_Param_Out_CouldSense); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DefaultSenseTestFunc(Z_Param_Pawn,Z_Param_Out_CouldSense); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSensingGrids) \
	{ \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_SensingGrids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSensingGrids(Z_Param_Out_SensingGrids); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCouldSeePawn) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CouldSeePawn(Z_Param_Pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSensingInterval) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewInterval); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSensingInterval(Z_Param_NewInterval); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridSensingComponent(); \
	friend struct Z_Construct_UClass_UGridSensingComponent_Statics; \
public: \
	DECLARE_CLASS(UGridSensingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridSensingComponent)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUGridSensingComponent(); \
	friend struct Z_Construct_UClass_UGridSensingComponent_Statics; \
public: \
	DECLARE_CLASS(UGridSensingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridSensingComponent)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridSensingComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridSensingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridSensingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridSensingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridSensingComponent(UGridSensingComponent&&); \
	NO_API UGridSensingComponent(const UGridSensingComponent&); \
public:


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridSensingComponent(UGridSensingComponent&&); \
	NO_API UGridSensingComponent(const UGridSensingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridSensingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridSensingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridSensingComponent)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_23_PRIVATE_PROPERTY_OFFSET
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_20_PROLOG
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_23_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_23_RPC_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_23_INCLASS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_23_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_23_INCLASS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDRUNTIME_API UClass* StaticClass<class UGridSensingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridSensingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
