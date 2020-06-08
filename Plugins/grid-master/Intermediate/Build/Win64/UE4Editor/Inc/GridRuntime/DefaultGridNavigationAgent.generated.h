// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAIRequestID;
#ifdef GRIDRUNTIME_DefaultGridNavigationAgent_generated_h
#error "DefaultGridNavigationAgent.generated.h already included, missing '#pragma once' in DefaultGridNavigationAgent.h"
#endif
#define GRIDRUNTIME_DefaultGridNavigationAgent_generated_h

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_15_SPARSE_DATA
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAIControllerMoveCompeleted) \
	{ \
		P_GET_STRUCT(FAIRequestID,Z_Param_RequestID); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAIControllerMoveCompeleted(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_Result)); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAIControllerMoveCompeleted) \
	{ \
		P_GET_STRUCT(FAIRequestID,Z_Param_RequestID); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAIControllerMoveCompeleted(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_Result)); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDefaultGridNavigationAgent(); \
	friend struct Z_Construct_UClass_UDefaultGridNavigationAgent_Statics; \
public: \
	DECLARE_CLASS(UDefaultGridNavigationAgent, UGridNavigationAgent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDefaultGridNavigationAgent)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDefaultGridNavigationAgent(); \
	friend struct Z_Construct_UClass_UDefaultGridNavigationAgent_Statics; \
public: \
	DECLARE_CLASS(UDefaultGridNavigationAgent, UGridNavigationAgent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDefaultGridNavigationAgent)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDefaultGridNavigationAgent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDefaultGridNavigationAgent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDefaultGridNavigationAgent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultGridNavigationAgent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDefaultGridNavigationAgent(UDefaultGridNavigationAgent&&); \
	NO_API UDefaultGridNavigationAgent(const UDefaultGridNavigationAgent&); \
public:


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDefaultGridNavigationAgent(UDefaultGridNavigationAgent&&); \
	NO_API UDefaultGridNavigationAgent(const UDefaultGridNavigationAgent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDefaultGridNavigationAgent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultGridNavigationAgent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDefaultGridNavigationAgent)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentPawn() { return STRUCT_OFFSET(UDefaultGridNavigationAgent, CurrentPawn); } \
	FORCEINLINE static uint32 __PPO__CurrentController() { return STRUCT_OFFSET(UDefaultGridNavigationAgent, CurrentController); }


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_12_PROLOG
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_15_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_15_RPC_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_15_INCLASS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_15_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_15_INCLASS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDRUNTIME_API UClass* StaticClass<class UDefaultGridNavigationAgent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_DefaultGridNavigationAgent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
