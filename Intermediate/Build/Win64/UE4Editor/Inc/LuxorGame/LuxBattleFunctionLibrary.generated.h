// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class ALuxBattleManager;
class ALuxBattleGameMode;
#ifdef LUXORGAME_LuxBattleFunctionLibrary_generated_h
#error "LuxBattleFunctionLibrary.generated.h already included, missing '#pragma once' in LuxBattleFunctionLibrary.h"
#endif
#define LUXORGAME_LuxBattleFunctionLibrary_generated_h

#define LuxorGame2_Source_LuxorGame_Public_LuxBattleFunctionLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSoulGaugeInfinity) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_GET_PROPERTY(UIntProperty,Z_Param_inPlayerIndex); \
		P_GET_UBOOL(Z_Param_bInfinite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULuxBattleFunctionLibrary::SetSoulGaugeInfinity(Z_Param_WorldContext,Z_Param_inPlayerIndex,Z_Param_bInfinite); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetImmortality) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_GET_PROPERTY(UIntProperty,Z_Param_inPlayerIndex); \
		P_GET_UBOOL(Z_Param_bImmortal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULuxBattleFunctionLibrary::SetImmortality(Z_Param_WorldContext,Z_Param_inPlayerIndex,Z_Param_bImmortal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMatchFinished) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULuxBattleFunctionLibrary::IsMatchFinished(Z_Param_WorldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFinishBlow) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULuxBattleFunctionLibrary::IsFinishBlow(Z_Param_WorldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBattlePlaying) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULuxBattleFunctionLibrary::IsBattlePlaying(Z_Param_WorldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBattleOnline) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULuxBattleFunctionLibrary::IsBattleOnline(Z_Param_WorldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBattlePauseEnabled) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULuxBattleFunctionLibrary::BattlePauseEnabled(Z_Param_WorldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBattleManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ALuxBattleManager**)Z_Param__Result=ULuxBattleFunctionLibrary::GetBattleManager(Z_Param_WorldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBattleGameMode) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ALuxBattleGameMode**)Z_Param__Result=ULuxBattleFunctionLibrary::GetBattleGameMode(Z_Param_WorldContext); \
		P_NATIVE_END; \
	}


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSoulGaugeInfinity) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_GET_PROPERTY(UIntProperty,Z_Param_inPlayerIndex); \
		P_GET_UBOOL(Z_Param_bInfinite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULuxBattleFunctionLibrary::SetSoulGaugeInfinity(Z_Param_WorldContext,Z_Param_inPlayerIndex,Z_Param_bInfinite); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetImmortality) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_GET_PROPERTY(UIntProperty,Z_Param_inPlayerIndex); \
		P_GET_UBOOL(Z_Param_bImmortal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULuxBattleFunctionLibrary::SetImmortality(Z_Param_WorldContext,Z_Param_inPlayerIndex,Z_Param_bImmortal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMatchFinished) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULuxBattleFunctionLibrary::IsMatchFinished(Z_Param_WorldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFinishBlow) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULuxBattleFunctionLibrary::IsFinishBlow(Z_Param_WorldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBattlePlaying) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULuxBattleFunctionLibrary::IsBattlePlaying(Z_Param_WorldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBattleOnline) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULuxBattleFunctionLibrary::IsBattleOnline(Z_Param_WorldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBattlePauseEnabled) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULuxBattleFunctionLibrary::BattlePauseEnabled(Z_Param_WorldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBattleManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ALuxBattleManager**)Z_Param__Result=ULuxBattleFunctionLibrary::GetBattleManager(Z_Param_WorldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBattleGameMode) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ALuxBattleGameMode**)Z_Param__Result=ULuxBattleFunctionLibrary::GetBattleGameMode(Z_Param_WorldContext); \
		P_NATIVE_END; \
	}


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuxBattleFunctionLibrary(); \
	friend LUXORGAME_API class UClass* Z_Construct_UClass_ULuxBattleFunctionLibrary(); \
public: \
	DECLARE_CLASS(ULuxBattleFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LuxorGame"), NO_API) \
	DECLARE_SERIALIZER(ULuxBattleFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleFunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesULuxBattleFunctionLibrary(); \
	friend LUXORGAME_API class UClass* Z_Construct_UClass_ULuxBattleFunctionLibrary(); \
public: \
	DECLARE_CLASS(ULuxBattleFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LuxorGame"), NO_API) \
	DECLARE_SERIALIZER(ULuxBattleFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuxBattleFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuxBattleFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuxBattleFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuxBattleFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuxBattleFunctionLibrary(ULuxBattleFunctionLibrary&&); \
	NO_API ULuxBattleFunctionLibrary(const ULuxBattleFunctionLibrary&); \
public:


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuxBattleFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuxBattleFunctionLibrary(ULuxBattleFunctionLibrary&&); \
	NO_API ULuxBattleFunctionLibrary(const ULuxBattleFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuxBattleFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuxBattleFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuxBattleFunctionLibrary)


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define LuxorGame2_Source_LuxorGame_Public_LuxBattleFunctionLibrary_h_14_PROLOG
#define LuxorGame2_Source_LuxorGame_Public_LuxBattleFunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleFunctionLibrary_h_17_RPC_WRAPPERS \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleFunctionLibrary_h_17_INCLASS \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LuxorGame2_Source_LuxorGame_Public_LuxBattleFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
