// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGridNavigationComponent;
class APawn;
class UGrid;
class UGridPathFinder;
#ifdef GRIDRUNTIME_GridNavigationComponent_generated_h
#error "GridNavigationComponent.generated.h already included, missing '#pragma once' in GridNavigationComponent.h"
#endif
#define GRIDRUNTIME_GridNavigationComponent_generated_h

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_19_DELEGATE \
struct _Script_GridRuntime_eventGridNavEventSignature_Parms \
{ \
	UGridNavigationComponent* Component; \
}; \
static inline void FGridNavEventSignature_DelegateWrapper(const FMulticastScriptDelegate& GridNavEventSignature, UGridNavigationComponent* Component) \
{ \
	_Script_GridRuntime_eventGridNavEventSignature_Parms Parms; \
	Parms.Component=Component; \
	GridNavEventSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_24_SPARSE_DATA
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMoveCompleted) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_UBOOL(Z_Param_Succ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMoveCompleted(Z_Param_Pawn,Z_Param_Succ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMoving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMoving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopMove(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestMove) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_DestGrid); \
		P_GET_OBJECT(UGridPathFinder,Z_Param_PathFinder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RequestMove(Z_Param_DestGrid,Z_Param_PathFinder); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMoveCompleted) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_UBOOL(Z_Param_Succ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMoveCompleted(Z_Param_Pawn,Z_Param_Succ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMoving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMoving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopMove(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestMove) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_DestGrid); \
		P_GET_OBJECT(UGridPathFinder,Z_Param_PathFinder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RequestMove(Z_Param_DestGrid,Z_Param_PathFinder); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridNavigationComponent(); \
	friend struct Z_Construct_UClass_UGridNavigationComponent_Statics; \
public: \
	DECLARE_CLASS(UGridNavigationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridNavigationComponent)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUGridNavigationComponent(); \
	friend struct Z_Construct_UClass_UGridNavigationComponent_Statics; \
public: \
	DECLARE_CLASS(UGridNavigationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridNavigationComponent)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridNavigationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridNavigationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridNavigationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridNavigationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridNavigationComponent(UGridNavigationComponent&&); \
	NO_API UGridNavigationComponent(const UGridNavigationComponent&); \
public:


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridNavigationComponent(UGridNavigationComponent&&); \
	NO_API UGridNavigationComponent(const UGridNavigationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridNavigationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridNavigationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridNavigationComponent)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwnerPawn() { return STRUCT_OFFSET(UGridNavigationComponent, OwnerPawn); } \
	FORCEINLINE static uint32 __PPO__OwnerController() { return STRUCT_OFFSET(UGridNavigationComponent, OwnerController); } \
	FORCEINLINE static uint32 __PPO__CurrentFollowingPath() { return STRUCT_OFFSET(UGridNavigationComponent, CurrentFollowingPath); } \
	FORCEINLINE static uint32 __PPO__Agents() { return STRUCT_OFFSET(UGridNavigationComponent, Agents); }


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_21_PROLOG
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_24_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_24_RPC_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_24_INCLASS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_24_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_24_INCLASS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDRUNTIME_API UClass* StaticClass<class UGridNavigationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Components_GridNavigationComponent_h


#define FOREACH_ENUM_EGRIDNAVMODE(op) \
	op(EGridNavMode::GridBased) \
	op(EGridNavMode::Free) 

enum class EGridNavMode : uint8;
template<> GRIDRUNTIME_API UEnum* StaticEnum<EGridNavMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
