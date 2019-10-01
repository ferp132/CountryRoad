// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
#ifdef COUNTRYROAD_CountryRoadProjectile_generated_h
#error "CountryRoadProjectile.generated.h already included, missing '#pragma once' in CountryRoadProjectile.h"
#endif
#define COUNTRYROAD_CountryRoadProjectile_generated_h

#define CountryRoad_Source_CountryRoad_CountryRoadProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define CountryRoad_Source_CountryRoad_CountryRoadProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define CountryRoad_Source_CountryRoad_CountryRoadProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACountryRoadProjectile(); \
	friend struct Z_Construct_UClass_ACountryRoadProjectile_Statics; \
public: \
	DECLARE_CLASS(ACountryRoadProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CountryRoad"), NO_API) \
	DECLARE_SERIALIZER(ACountryRoadProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define CountryRoad_Source_CountryRoad_CountryRoadProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACountryRoadProjectile(); \
	friend struct Z_Construct_UClass_ACountryRoadProjectile_Statics; \
public: \
	DECLARE_CLASS(ACountryRoadProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CountryRoad"), NO_API) \
	DECLARE_SERIALIZER(ACountryRoadProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define CountryRoad_Source_CountryRoad_CountryRoadProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACountryRoadProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACountryRoadProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACountryRoadProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACountryRoadProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACountryRoadProjectile(ACountryRoadProjectile&&); \
	NO_API ACountryRoadProjectile(const ACountryRoadProjectile&); \
public:


#define CountryRoad_Source_CountryRoad_CountryRoadProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACountryRoadProjectile(ACountryRoadProjectile&&); \
	NO_API ACountryRoadProjectile(const ACountryRoadProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACountryRoadProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACountryRoadProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACountryRoadProjectile)


#define CountryRoad_Source_CountryRoad_CountryRoadProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ACountryRoadProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ACountryRoadProjectile, ProjectileMovement); }


#define CountryRoad_Source_CountryRoad_CountryRoadProjectile_h_9_PROLOG
#define CountryRoad_Source_CountryRoad_CountryRoadProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CountryRoad_Source_CountryRoad_CountryRoadProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	CountryRoad_Source_CountryRoad_CountryRoadProjectile_h_12_RPC_WRAPPERS \
	CountryRoad_Source_CountryRoad_CountryRoadProjectile_h_12_INCLASS \
	CountryRoad_Source_CountryRoad_CountryRoadProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CountryRoad_Source_CountryRoad_CountryRoadProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CountryRoad_Source_CountryRoad_CountryRoadProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	CountryRoad_Source_CountryRoad_CountryRoadProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CountryRoad_Source_CountryRoad_CountryRoadProjectile_h_12_INCLASS_NO_PURE_DECLS \
	CountryRoad_Source_CountryRoad_CountryRoadProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COUNTRYROAD_API UClass* StaticClass<class ACountryRoadProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CountryRoad_Source_CountryRoad_CountryRoadProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
