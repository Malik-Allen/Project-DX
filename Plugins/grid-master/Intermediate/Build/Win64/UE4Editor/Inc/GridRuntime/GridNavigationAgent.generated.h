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
#ifdef GRIDRUNTIME_GridNavigationAgent_generated_h
#error "GridNavigationAgent.generated.h already included, missing '#pragma once' in GridNavigationAgent.h"
#endif
#define GRIDRUNTIME_GridNavigationAgent_generated_h

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_7_DELEGATE \
struct _Script_GridRuntime_eventGridNavAgentEvent_Parms \
{ \
	APawn* Pawn; \
	bool Succ; \
}; \
static inline void FGridNavAgentEvent_DelegateWrapper(const FMulticastScriptDelegate& GridNavAgentEvent, APawn* Pawn, bool Succ) \
{ \
	_Script_GridRuntime_eventGridNavAgentEvent_Parms Parms; \
	Parms.Pawn=Pawn; \
	Parms.Succ=Succ ? true : false; \
	GridNavAgentEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_SPARSE_DATA
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_RPC_WRAPPERS \
	virtual void StopMove_Implementation(); \
	virtual bool RequestMove_Implementation(APawn* Pawn, UGrid* From, UGrid* To); \
	virtual bool Check_Implementation(APawn* Pawn, UGrid* From, UGrid* To); \
 \
	DECLARE_FUNCTION(execStopMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopMove_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestMove) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_OBJECT(UGrid,Z_Param_From); \
		P_GET_OBJECT(UGrid,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RequestMove_Implementation(Z_Param_Pawn,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheck) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_OBJECT(UGrid,Z_Param_From); \
		P_GET_OBJECT(UGrid,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Check_Implementation(Z_Param_Pawn,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopMove_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestMove) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_OBJECT(UGrid,Z_Param_From); \
		P_GET_OBJECT(UGrid,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RequestMove_Implementation(Z_Param_Pawn,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheck) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_OBJECT(UGrid,Z_Param_From); \
		P_GET_OBJECT(UGrid,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Check_Implementation(Z_Param_Pawn,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_EVENT_PARMS \
	struct GridNavigationAgent_eventCheck_Parms \
	{ \
		APawn* Pawn; \
		UGrid* From; \
		UGrid* To; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GridNavigationAgent_eventCheck_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GridNavigationAgent_eventRequestMove_Parms \
	{ \
		APawn* Pawn; \
		UGrid* From; \
		UGrid* To; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GridNavigationAgent_eventRequestMove_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_CALLBACK_WRAPPERS
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridNavigationAgent(); \
	friend struct Z_Construct_UClass_UGridNavigationAgent_Statics; \
public: \
	DECLARE_CLASS(UGridNavigationAgent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridNavigationAgent)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGridNavigationAgent(); \
	friend struct Z_Construct_UClass_UGridNavigationAgent_Statics; \
public: \
	DECLARE_CLASS(UGridNavigationAgent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridNavigationAgent)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridNavigationAgent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridNavigationAgent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridNavigationAgent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridNavigationAgent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridNavigationAgent(UGridNavigationAgent&&); \
	NO_API UGridNavigationAgent(const UGridNavigationAgent&); \
public:


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridNavigationAgent(UGridNavigationAgent&&); \
	NO_API UGridNavigationAgent(const UGridNavigationAgent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridNavigationAgent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridNavigationAgent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridNavigationAgent)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_PRIVATE_PROPERTY_OFFSET
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_13_PROLOG \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_EVENT_PARMS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_RPC_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_CALLBACK_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_INCLASS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_CALLBACK_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_INCLASS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDRUNTIME_API UClass* StaticClass<class UGridNavigationAgent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationAgent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
