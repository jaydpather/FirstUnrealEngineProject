// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FIRSTUEPROJECT_FirstUEProjectProjectile_generated_h
#error "FirstUEProjectProjectile.generated.h already included, missing '#pragma once' in FirstUEProjectProjectile.h"
#endif
#define FIRSTUEPROJECT_FirstUEProjectProjectile_generated_h

#define FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_15_SPARSE_DATA
#define FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstUEProjectProjectile(); \
	friend struct Z_Construct_UClass_AFirstUEProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AFirstUEProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstUEProject"), NO_API) \
	DECLARE_SERIALIZER(AFirstUEProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFirstUEProjectProjectile(); \
	friend struct Z_Construct_UClass_AFirstUEProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AFirstUEProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstUEProject"), NO_API) \
	DECLARE_SERIALIZER(AFirstUEProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstUEProjectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstUEProjectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstUEProjectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstUEProjectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstUEProjectProjectile(AFirstUEProjectProjectile&&); \
	NO_API AFirstUEProjectProjectile(const AFirstUEProjectProjectile&); \
public:


#define FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstUEProjectProjectile(AFirstUEProjectProjectile&&); \
	NO_API AFirstUEProjectProjectile(const AFirstUEProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstUEProjectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstUEProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstUEProjectProjectile)


#define FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AFirstUEProjectProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFirstUEProjectProjectile, ProjectileMovement); }


#define FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_12_PROLOG
#define FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_15_SPARSE_DATA \
	FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_15_RPC_WRAPPERS \
	FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_15_INCLASS \
	FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_15_SPARSE_DATA \
	FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTUEPROJECT_API UClass* StaticClass<class AFirstUEProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstUEProject_Source_FirstUEProject_FirstUEProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
