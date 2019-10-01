// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COUNTRYROAD_CountryRoadCharacter_generated_h
#error "CountryRoadCharacter.generated.h already included, missing '#pragma once' in CountryRoadCharacter.h"
#endif
#define COUNTRYROAD_CountryRoadCharacter_generated_h

#define CountryRoad_Source_CountryRoad_CountryRoadCharacter_h_14_RPC_WRAPPERS
#define CountryRoad_Source_CountryRoad_CountryRoadCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define CountryRoad_Source_CountryRoad_CountryRoadCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACountryRoadCharacter(); \
	friend struct Z_Construct_UClass_ACountryRoadCharacter_Statics; \
public: \
	DECLARE_CLASS(ACountryRoadCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CountryRoad"), NO_API) \
	DECLARE_SERIALIZER(ACountryRoadCharacter)


#define CountryRoad_Source_CountryRoad_CountryRoadCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACountryRoadCharacter(); \
	friend struct Z_Construct_UClass_ACountryRoadCharacter_Statics; \
public: \
	DECLARE_CLASS(ACountryRoadCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CountryRoad"), NO_API) \
	DECLARE_SERIALIZER(ACountryRoadCharacter)


#define CountryRoad_Source_CountryRoad_CountryRoadCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACountryRoadCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACountryRoadCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACountryRoadCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACountryRoadCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACountryRoadCharacter(ACountryRoadCharacter&&); \
	NO_API ACountryRoadCharacter(const ACountryRoadCharacter&); \
public:


#define CountryRoad_Source_CountryRoad_CountryRoadCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACountryRoadCharacter(ACountryRoadCharacter&&); \
	NO_API ACountryRoadCharacter(const ACountryRoadCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACountryRoadCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACountryRoadCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACountryRoadCharacter)


#define CountryRoad_Source_CountryRoad_CountryRoadCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ACountryRoadCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ACountryRoadCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ACountryRoadCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ACountryRoadCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ACountryRoadCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ACountryRoadCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ACountryRoadCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ACountryRoadCharacter, L_MotionController); }


#define CountryRoad_Source_CountryRoad_CountryRoadCharacter_h_11_PROLOG
#define CountryRoad_Source_CountryRoad_CountryRoadCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CountryRoad_Source_CountryRoad_CountryRoadCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	CountryRoad_Source_CountryRoad_CountryRoadCharacter_h_14_RPC_WRAPPERS \
	CountryRoad_Source_CountryRoad_CountryRoadCharacter_h_14_INCLASS \
	CountryRoad_Source_CountryRoad_CountryRoadCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CountryRoad_Source_CountryRoad_CountryRoadCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CountryRoad_Source_CountryRoad_CountryRoadCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	CountryRoad_Source_CountryRoad_CountryRoadCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CountryRoad_Source_CountryRoad_CountryRoadCharacter_h_14_INCLASS_NO_PURE_DECLS \
	CountryRoad_Source_CountryRoad_CountryRoadCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COUNTRYROAD_API UClass* StaticClass<class ACountryRoadCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CountryRoad_Source_CountryRoad_CountryRoadCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
