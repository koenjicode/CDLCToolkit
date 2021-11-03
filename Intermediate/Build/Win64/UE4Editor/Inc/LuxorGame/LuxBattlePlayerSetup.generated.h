// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULuxCreationProfile;
#ifdef LUXORGAME_LuxBattlePlayerSetup_generated_h
#error "LuxBattlePlayerSetup.generated.h already included, missing '#pragma once' in LuxBattlePlayerSetup.h"
#endif
#define LUXORGAME_LuxBattlePlayerSetup_generated_h

#define LuxorGame2_Source_LuxorGame_Public_LuxBattlePlayerSetup_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreatePlayerSetup) \
	{ \
		P_GET_OBJECT(ULuxCreationProfile,Z_Param_inProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CreatePlayerSetup(Z_Param_inProfile); \
		P_NATIVE_END; \
	}


#define LuxorGame2_Source_LuxorGame_Public_LuxBattlePlayerSetup_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreatePlayerSetup) \
	{ \
		P_GET_OBJECT(ULuxCreationProfile,Z_Param_inProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CreatePlayerSetup(Z_Param_inProfile); \
		P_NATIVE_END; \
	}


#define LuxorGame2_Source_LuxorGame_Public_LuxBattlePlayerSetup_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuxBattlePlayerSetup(); \
	friend LUXORGAME_API class UClass* Z_Construct_UClass_ULuxBattlePlayerSetup(); \
public: \
	DECLARE_CLASS(ULuxBattlePlayerSetup, ULuxLoadableBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LuxorGame"), NO_API) \
	DECLARE_SERIALIZER(ULuxBattlePlayerSetup) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define LuxorGame2_Source_LuxorGame_Public_LuxBattlePlayerSetup_h_16_INCLASS \
private: \
	static void StaticRegisterNativesULuxBattlePlayerSetup(); \
	friend LUXORGAME_API class UClass* Z_Construct_UClass_ULuxBattlePlayerSetup(); \
public: \
	DECLARE_CLASS(ULuxBattlePlayerSetup, ULuxLoadableBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LuxorGame"), NO_API) \
	DECLARE_SERIALIZER(ULuxBattlePlayerSetup) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define LuxorGame2_Source_LuxorGame_Public_LuxBattlePlayerSetup_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuxBattlePlayerSetup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuxBattlePlayerSetup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuxBattlePlayerSetup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuxBattlePlayerSetup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuxBattlePlayerSetup(ULuxBattlePlayerSetup&&); \
	NO_API ULuxBattlePlayerSetup(const ULuxBattlePlayerSetup&); \
public:


#define LuxorGame2_Source_LuxorGame_Public_LuxBattlePlayerSetup_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuxBattlePlayerSetup() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuxBattlePlayerSetup(ULuxBattlePlayerSetup&&); \
	NO_API ULuxBattlePlayerSetup(const ULuxBattlePlayerSetup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuxBattlePlayerSetup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuxBattlePlayerSetup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULuxBattlePlayerSetup)


#define LuxorGame2_Source_LuxorGame_Public_LuxBattlePlayerSetup_h_16_PRIVATE_PROPERTY_OFFSET
#define LuxorGame2_Source_LuxorGame_Public_LuxBattlePlayerSetup_h_13_PROLOG
#define LuxorGame2_Source_LuxorGame_Public_LuxBattlePlayerSetup_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LuxorGame2_Source_LuxorGame_Public_LuxBattlePlayerSetup_h_16_PRIVATE_PROPERTY_OFFSET \
	LuxorGame2_Source_LuxorGame_Public_LuxBattlePlayerSetup_h_16_RPC_WRAPPERS \
	LuxorGame2_Source_LuxorGame_Public_LuxBattlePlayerSetup_h_16_INCLASS \
	LuxorGame2_Source_LuxorGame_Public_LuxBattlePlayerSetup_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LuxorGame2_Source_LuxorGame_Public_LuxBattlePlayerSetup_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LuxorGame2_Source_LuxorGame_Public_LuxBattlePlayerSetup_h_16_PRIVATE_PROPERTY_OFFSET \
	LuxorGame2_Source_LuxorGame_Public_LuxBattlePlayerSetup_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	LuxorGame2_Source_LuxorGame_Public_LuxBattlePlayerSetup_h_16_INCLASS_NO_PURE_DECLS \
	LuxorGame2_Source_LuxorGame_Public_LuxBattlePlayerSetup_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LuxorGame2_Source_LuxorGame_Public_LuxBattlePlayerSetup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
