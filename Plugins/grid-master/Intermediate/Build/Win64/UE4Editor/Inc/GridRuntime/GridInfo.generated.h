// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRIDRUNTIME_GridInfo_generated_h
#error "GridInfo.generated.h already included, missing '#pragma once' in GridInfo.h"
#endif
#define GRIDRUNTIME_GridInfo_generated_h

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_SPARSE_DATA
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_RPC_WRAPPERS \
	virtual void Clear_Implementation(); \
 \
	DECLARE_FUNCTION(execDirty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Dirty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Clear_Implementation(); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDirty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Dirty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Clear_Implementation(); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_EVENT_PARMS
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_CALLBACK_WRAPPERS
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridInfo(); \
	friend struct Z_Construct_UClass_UGridInfo_Statics; \
public: \
	DECLARE_CLASS(UGridInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridInfo)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGridInfo(); \
	friend struct Z_Construct_UClass_UGridInfo_Statics; \
public: \
	DECLARE_CLASS(UGridInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridInfo)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridInfo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridInfo(UGridInfo&&); \
	NO_API UGridInfo(const UGridInfo&); \
public:


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridInfo(UGridInfo&&); \
	NO_API UGridInfo(const UGridInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridInfo)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_PRIVATE_PROPERTY_OFFSET
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_13_PROLOG \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_EVENT_PARMS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_RPC_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_CALLBACK_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_INCLASS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_CALLBACK_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_INCLASS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDRUNTIME_API UClass* StaticClass<class UGridInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
