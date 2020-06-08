// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGrid;
struct FBoxSphereBounds;
class AActor;
struct FHitResult;
struct FLinearColor;
struct FIntVector;
class UGridPathFinder;
struct FGridPathfindingRequest;
#ifdef GRIDRUNTIME_GridUtilities_generated_h
#error "GridUtilities.generated.h already included, missing '#pragma once' in GridUtilities.h"
#endif
#define GRIDRUNTIME_GridUtilities_generated_h

#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_18_SPARSE_DATA
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBoundsByGridArray) \
	{ \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_Grids); \
		P_GET_STRUCT_REF(FBoxSphereBounds,Z_Param_Out_Bounds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGridUtilities::GetBoundsByGridArray(Z_Param_Out_Grids,Z_Param_Out_Bounds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGridTraceSingleForObjects) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_Grid); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TraceDistance); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGridUtilities::GridTraceSingleForObjects(Z_Param_Grid,Z_Param_TraceDistance,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_GridGrid) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_A); \
		P_GET_OBJECT(UGrid,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGridUtilities::NotEqual_GridGrid(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_GridGrid) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_A); \
		P_GET_OBJECT(UGrid,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGridUtilities::EqualEqual_GridGrid(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_IntVectorInt) \
	{ \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_L); \
		P_GET_PROPERTY(UIntProperty,Z_Param_R); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntVector*)Z_Param__Result=UGridUtilities::Multiply_IntVectorInt(Z_Param_Out_L,Z_Param_R); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_IntVectorIntVector) \
	{ \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_L); \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_R); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntVector*)Z_Param__Result=UGridUtilities::Add_IntVectorIntVector(Z_Param_Out_L,Z_Param_Out_R); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_IntVectorIntVector) \
	{ \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_L); \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_R); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntVector*)Z_Param__Result=UGridUtilities::Subtract_IntVectorIntVector(Z_Param_Out_L,Z_Param_Out_R); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReachableGrids) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Sender); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxCost); \
		P_GET_OBJECT(UGridPathFinder,Z_Param_PathFinder); \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGridUtilities::GetReachableGrids(Z_Param_Sender,Z_Param_MaxCost,Z_Param_PathFinder,Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPath) \
	{ \
		P_GET_STRUCT_REF(FGridPathfindingRequest,Z_Param_Out_Request); \
		P_GET_OBJECT(UGridPathFinder,Z_Param_PathFinder); \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGridUtilities::FindPath(Z_Param_Out_Request,Z_Param_PathFinder,Z_Param_Out_Result); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBoundsByGridArray) \
	{ \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_Grids); \
		P_GET_STRUCT_REF(FBoxSphereBounds,Z_Param_Out_Bounds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGridUtilities::GetBoundsByGridArray(Z_Param_Out_Grids,Z_Param_Out_Bounds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGridTraceSingleForObjects) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_Grid); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TraceDistance); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGridUtilities::GridTraceSingleForObjects(Z_Param_Grid,Z_Param_TraceDistance,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_GridGrid) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_A); \
		P_GET_OBJECT(UGrid,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGridUtilities::NotEqual_GridGrid(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_GridGrid) \
	{ \
		P_GET_OBJECT(UGrid,Z_Param_A); \
		P_GET_OBJECT(UGrid,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGridUtilities::EqualEqual_GridGrid(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_IntVectorInt) \
	{ \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_L); \
		P_GET_PROPERTY(UIntProperty,Z_Param_R); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntVector*)Z_Param__Result=UGridUtilities::Multiply_IntVectorInt(Z_Param_Out_L,Z_Param_R); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_IntVectorIntVector) \
	{ \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_L); \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_R); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntVector*)Z_Param__Result=UGridUtilities::Add_IntVectorIntVector(Z_Param_Out_L,Z_Param_Out_R); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_IntVectorIntVector) \
	{ \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_L); \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_R); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntVector*)Z_Param__Result=UGridUtilities::Subtract_IntVectorIntVector(Z_Param_Out_L,Z_Param_Out_R); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReachableGrids) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Sender); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxCost); \
		P_GET_OBJECT(UGridPathFinder,Z_Param_PathFinder); \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGridUtilities::GetReachableGrids(Z_Param_Sender,Z_Param_MaxCost,Z_Param_PathFinder,Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPath) \
	{ \
		P_GET_STRUCT_REF(FGridPathfindingRequest,Z_Param_Out_Request); \
		P_GET_OBJECT(UGridPathFinder,Z_Param_PathFinder); \
		P_GET_TARRAY_REF(UGrid*,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGridUtilities::FindPath(Z_Param_Out_Request,Z_Param_PathFinder,Z_Param_Out_Result); \
		P_NATIVE_END; \
	}


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridUtilities(); \
	friend struct Z_Construct_UClass_UGridUtilities_Statics; \
public: \
	DECLARE_CLASS(UGridUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridUtilities)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUGridUtilities(); \
	friend struct Z_Construct_UClass_UGridUtilities_Statics; \
public: \
	DECLARE_CLASS(UGridUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridUtilities)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridUtilities(UGridUtilities&&); \
	NO_API UGridUtilities(const UGridUtilities&); \
public:


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridUtilities(UGridUtilities&&); \
	NO_API UGridUtilities(const UGridUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridUtilities)


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_18_PRIVATE_PROPERTY_OFFSET
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_15_PROLOG
#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_18_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_18_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_18_RPC_WRAPPERS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_18_INCLASS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_18_PRIVATE_PROPERTY_OFFSET \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_18_SPARSE_DATA \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_18_INCLASS_NO_PURE_DECLS \
	ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDRUNTIME_API UClass* StaticClass<class UGridUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDX_Plugins_grid_master_Source_GridRuntime_Public_Util_GridUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
