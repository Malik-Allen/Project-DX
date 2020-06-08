// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FVector;
class UGrid;
#ifdef GRIDRUNTIME_PathGuide_generated_h
#error "PathGuide.generated.h already included, missing '#pragma once' in PathGuide.h"
#endif
#define GRIDRUNTIME_PathGuide_generated_h

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_15_SPARSE_DATA
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDestinationDecalMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDestinationDecalMaterial(Z_Param_NewMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartDecalMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStartDecalMaterial(Z_Param_NewMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomPoints) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCustomPoints(Z_Param_Out_Points); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPath) \
	{ \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPath(Z_Param_Out_Path); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDestinationDecalMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDestinationDecalMaterial(Z_Param_NewMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartDecalMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStartDecalMaterial(Z_Param_NewMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomPoints) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCustomPoints(Z_Param_Out_Points); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPath) \
	{ \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPath(Z_Param_Out_Path); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPathGuide(); \
	friend struct Z_Construct_UClass_APathGuide_Statics; \
public: \
	DECLARE_CLASS(APathGuide, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(APathGuide)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPathGuide(); \
	friend struct Z_Construct_UClass_APathGuide_Statics; \
public: \
	DECLARE_CLASS(APathGuide, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(APathGuide)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APathGuide(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APathGuide) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APathGuide); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APathGuide); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APathGuide(APathGuide&&); \
	NO_API APathGuide(const APathGuide&); \
public:


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APathGuide(APathGuide&&); \
	NO_API APathGuide(const APathGuide&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APathGuide); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APathGuide); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APathGuide)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartDecalComp() { return STRUCT_OFFSET(APathGuide, StartDecalComp); } \
	FORCEINLINE static uint32 __PPO__DestDecalComp() { return STRUCT_OFFSET(APathGuide, DestDecalComp); } \
	FORCEINLINE static uint32 __PPO__PathLineComponent() { return STRUCT_OFFSET(APathGuide, PathLineComponent); }


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_12_PROLOG
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_15_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_15_RPC_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_15_INCLASS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_15_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_15_INCLASS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDRUNTIME_API UClass* StaticClass<class APathGuide>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_PathGuide_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
