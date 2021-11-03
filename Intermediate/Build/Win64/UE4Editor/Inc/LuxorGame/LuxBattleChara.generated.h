// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LUXORGAME_LuxBattleChara_generated_h
#error "LuxBattleChara.generated.h already included, missing '#pragma once' in LuxBattleChara.h"
#endif
#define LUXORGAME_LuxBattleChara_generated_h

#define LuxorGame2_Source_LuxorGame_Public_LuxBattleChara_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMaterialChargeRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMaterialChargeRate(Z_Param_inValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEvilFlag) \
	{ \
		P_GET_UBOOL(Z_Param_inFlag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEvilFlag(Z_Param_inFlag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBreakFlag) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_flag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBreakFlag(Z_Param_flag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceWeapon) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_inWeaponID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ReplaceWeapon(Z_Param_inWeaponID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceChara) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_inCharaID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ReplaceChara(Z_Param_inCharaID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRefreshAppearance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RefreshAppearance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBreakFlag) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetBreakFlag(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyCreationColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ApplyCreationColor(); \
		P_NATIVE_END; \
	}


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleChara_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMaterialChargeRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMaterialChargeRate(Z_Param_inValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEvilFlag) \
	{ \
		P_GET_UBOOL(Z_Param_inFlag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEvilFlag(Z_Param_inFlag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBreakFlag) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_flag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBreakFlag(Z_Param_flag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceWeapon) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_inWeaponID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ReplaceWeapon(Z_Param_inWeaponID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceChara) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_inCharaID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ReplaceChara(Z_Param_inCharaID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRefreshAppearance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RefreshAppearance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBreakFlag) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetBreakFlag(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyCreationColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ApplyCreationColor(); \
		P_NATIVE_END; \
	}


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleChara_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALuxBattleChara(); \
	friend LUXORGAME_API class UClass* Z_Construct_UClass_ALuxBattleChara(); \
public: \
	DECLARE_CLASS(ALuxBattleChara, ALuxCharaActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LuxorGame"), NO_API) \
	DECLARE_SERIALIZER(ALuxBattleChara) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleChara_h_17_INCLASS \
private: \
	static void StaticRegisterNativesALuxBattleChara(); \
	friend LUXORGAME_API class UClass* Z_Construct_UClass_ALuxBattleChara(); \
public: \
	DECLARE_CLASS(ALuxBattleChara, ALuxCharaActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LuxorGame"), NO_API) \
	DECLARE_SERIALIZER(ALuxBattleChara) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleChara_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALuxBattleChara(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALuxBattleChara) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALuxBattleChara); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALuxBattleChara); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALuxBattleChara(ALuxBattleChara&&); \
	NO_API ALuxBattleChara(const ALuxBattleChara&); \
public:


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleChara_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALuxBattleChara(ALuxBattleChara&&); \
	NO_API ALuxBattleChara(const ALuxBattleChara&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALuxBattleChara); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALuxBattleChara); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALuxBattleChara)


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleChara_h_17_PRIVATE_PROPERTY_OFFSET
#define LuxorGame2_Source_LuxorGame_Public_LuxBattleChara_h_14_PROLOG
#define LuxorGame2_Source_LuxorGame_Public_LuxBattleChara_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleChara_h_17_PRIVATE_PROPERTY_OFFSET \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleChara_h_17_RPC_WRAPPERS \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleChara_h_17_INCLASS \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleChara_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LuxorGame2_Source_LuxorGame_Public_LuxBattleChara_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleChara_h_17_PRIVATE_PROPERTY_OFFSET \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleChara_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleChara_h_17_INCLASS_NO_PURE_DECLS \
	LuxorGame2_Source_LuxorGame_Public_LuxBattleChara_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LuxorGame2_Source_LuxorGame_Public_LuxBattleChara_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
