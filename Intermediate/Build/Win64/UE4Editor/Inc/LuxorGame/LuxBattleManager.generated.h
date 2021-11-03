// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALuxBattleSetup;
#ifdef LUXORGAME_LuxBattleManager_generated_h
#error "LuxBattleManager.generated.h already included, missing '#pragma once' in LuxBattleManager.h"
#endif
#define LUXORGAME_LuxBattleManager_generated_h

#define LuxorGame2_Source_LuxorGame_Public_LuxBattleManager_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsOnline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsOnline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBattleSetup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ALuxBattleSetup**)Z_Param__Result=this->GetBattleSetup(); \
		P_NATIVE_END; \
	}


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsOnline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsOnline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBattleSetup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ALuxBattleSetup**)Z_Param__Result=this->GetBattleSetup(); \
		P_NATIVE_END; \
	}


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALuxBattleManager(); \
	friend LUXORGAME_API class UClass* Z_Construct_UClass_ALuxBattleManager(); \
public: \
	DECLARE_CLASS(ALuxBattleManager, ALuxActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LuxorGame"), NO_API) \
	DECLARE_SERIALIZER(ALuxBattleManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleManager_h_18_INCLASS \
private: \
	static void StaticRegisterNativesALuxBattleManager(); \
	friend LUXORGAME_API class UClass* Z_Construct_UClass_ALuxBattleManager(); \
public: \
	DECLARE_CLASS(ALuxBattleManager, ALuxActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LuxorGame"), NO_API) \
	DECLARE_SERIALIZER(ALuxBattleManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleManager_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALuxBattleManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALuxBattleManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALuxBattleManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALuxBattleManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALuxBattleManager(ALuxBattleManager&&); \
	NO_API ALuxBattleManager(const ALuxBattleManager&); \
public:


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleManager_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALuxBattleManager() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALuxBattleManager(ALuxBattleManager&&); \
	NO_API ALuxBattleManager(const ALuxBattleManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALuxBattleManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALuxBattleManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALuxBattleManager)


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleManager_h_18_PRIVATE_PROPERTY_OFFSET
#define LuxorGame2_Source_LuxorGame_Public_LuxBattleManager_h_15_PROLOG
#define LuxorGame2_Source_LuxorGame_Public_LuxBattleManager_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleManager_h_18_PRIVATE_PROPERTY_OFFSET \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleManager_h_18_RPC_WRAPPERS \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleManager_h_18_INCLASS \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleManager_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleManager_h_18_PRIVATE_PROPERTY_OFFSET \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleManager_h_18_INCLASS_NO_PURE_DECLS \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LuxorGame2_Source_LuxorGame_Public_LuxBattleManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
