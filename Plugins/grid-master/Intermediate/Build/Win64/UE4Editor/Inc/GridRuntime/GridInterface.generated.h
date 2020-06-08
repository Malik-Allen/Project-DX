// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGridManager;
#ifdef GRIDRUNTIME_GridInterface_generated_h
#error "GridInterface.generated.h already included, missing '#pragma once' in GridInterface.h"
#endif
#define GRIDRUNTIME_GridInterface_generated_h

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_SPARSE_DATA
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_RPC_WRAPPERS \
	virtual AGridManager* GetGridManager_Implementation() const { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetGridManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AGridManager**)Z_Param__Result=P_THIS->GetGridManager_Implementation(); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual AGridManager* GetGridManager_Implementation() const { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetGridManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AGridManager**)Z_Param__Result=P_THIS->GetGridManager_Implementation(); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_EVENT_PARMS \
	struct GridPawnInterface_eventGetGridManager_Parms \
	{ \
		AGridManager* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GridPawnInterface_eventGetGridManager_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_CALLBACK_WRAPPERS
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridPawnInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridPawnInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridPawnInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridPawnInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridPawnInterface(UGridPawnInterface&&); \
	NO_API UGridPawnInterface(const UGridPawnInterface&); \
public:


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridPawnInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridPawnInterface(UGridPawnInterface&&); \
	NO_API UGridPawnInterface(const UGridPawnInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridPawnInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridPawnInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridPawnInterface)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGridPawnInterface(); \
	friend struct Z_Construct_UClass_UGridPawnInterface_Statics; \
public: \
	DECLARE_CLASS(UGridPawnInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridPawnInterface)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_GENERATED_UINTERFACE_BODY() \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_GENERATED_UINTERFACE_BODY() \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGridPawnInterface() {} \
public: \
	typedef UGridPawnInterface UClassType; \
	typedef IGridPawnInterface ThisClass; \
	static AGridManager* Execute_GetGridManager(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IGridPawnInterface() {} \
public: \
	typedef UGridPawnInterface UClassType; \
	typedef IGridPawnInterface ThisClass; \
	static AGridManager* Execute_GetGridManager(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_9_PROLOG \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_EVENT_PARMS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_RPC_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_CALLBACK_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_CALLBACK_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDRUNTIME_API UClass* StaticClass<class UGridPawnInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_GridInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
