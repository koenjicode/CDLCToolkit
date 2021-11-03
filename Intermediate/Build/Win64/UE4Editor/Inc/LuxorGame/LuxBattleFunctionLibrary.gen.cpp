// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxBattleFunctionLibrary.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxBattleFunctionLibrary() {}
// Cross Module References
	LUXORGAME_API UFunction* Z_Construct_UFunction_ULuxBattleFunctionLibrary_BattlePauseEnabled();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxBattleFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	LUXORGAME_API UFunction* Z_Construct_UFunction_ULuxBattleFunctionLibrary_GetBattleGameMode();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleGameMode_NoRegister();
	LUXORGAME_API UFunction* Z_Construct_UFunction_ULuxBattleFunctionLibrary_GetBattleManager();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleManager_NoRegister();
	LUXORGAME_API UFunction* Z_Construct_UFunction_ULuxBattleFunctionLibrary_IsBattleOnline();
	LUXORGAME_API UFunction* Z_Construct_UFunction_ULuxBattleFunctionLibrary_IsBattlePlaying();
	LUXORGAME_API UFunction* Z_Construct_UFunction_ULuxBattleFunctionLibrary_IsFinishBlow();
	LUXORGAME_API UFunction* Z_Construct_UFunction_ULuxBattleFunctionLibrary_IsMatchFinished();
	LUXORGAME_API UFunction* Z_Construct_UFunction_ULuxBattleFunctionLibrary_SetImmortality();
	LUXORGAME_API UFunction* Z_Construct_UFunction_ULuxBattleFunctionLibrary_SetSoulGaugeInfinity();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxBattleFunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
// End Cross Module References
	void ULuxBattleFunctionLibrary::StaticRegisterNativesULuxBattleFunctionLibrary()
	{
		UClass* Class = ULuxBattleFunctionLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "BattlePauseEnabled", (Native)&ULuxBattleFunctionLibrary::execBattlePauseEnabled },
			{ "GetBattleGameMode", (Native)&ULuxBattleFunctionLibrary::execGetBattleGameMode },
			{ "GetBattleManager", (Native)&ULuxBattleFunctionLibrary::execGetBattleManager },
			{ "IsBattleOnline", (Native)&ULuxBattleFunctionLibrary::execIsBattleOnline },
			{ "IsBattlePlaying", (Native)&ULuxBattleFunctionLibrary::execIsBattlePlaying },
			{ "IsFinishBlow", (Native)&ULuxBattleFunctionLibrary::execIsFinishBlow },
			{ "IsMatchFinished", (Native)&ULuxBattleFunctionLibrary::execIsMatchFinished },
			{ "SetImmortality", (Native)&ULuxBattleFunctionLibrary::execSetImmortality },
			{ "SetSoulGaugeInfinity", (Native)&ULuxBattleFunctionLibrary::execSetSoulGaugeInfinity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ULuxBattleFunctionLibrary_BattlePauseEnabled()
	{
		struct LuxBattleFunctionLibrary_eventBattlePauseEnabled_Parms
		{
			UObject* WorldContext;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ULuxBattleFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BattlePauseEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(LuxBattleFunctionLibrary_eventBattlePauseEnabled_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, LuxBattleFunctionLibrary_eventBattlePauseEnabled_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, LuxBattleFunctionLibrary_eventBattlePauseEnabled_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, LuxBattleFunctionLibrary_eventBattlePauseEnabled_Parms), sizeof(bool), true);
			UProperty* NewProp_WorldContext = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContext"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContext, LuxBattleFunctionLibrary_eventBattlePauseEnabled_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContext"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULuxBattleFunctionLibrary_GetBattleGameMode()
	{
		struct LuxBattleFunctionLibrary_eventGetBattleGameMode_Parms
		{
			UObject* WorldContext;
			ALuxBattleGameMode* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ULuxBattleFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetBattleGameMode"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(LuxBattleFunctionLibrary_eventGetBattleGameMode_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, LuxBattleFunctionLibrary_eventGetBattleGameMode_Parms), 0x0010000000000580, Z_Construct_UClass_ALuxBattleGameMode_NoRegister());
			UProperty* NewProp_WorldContext = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContext"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContext, LuxBattleFunctionLibrary_eventGetBattleGameMode_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContext"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULuxBattleFunctionLibrary_GetBattleManager()
	{
		struct LuxBattleFunctionLibrary_eventGetBattleManager_Parms
		{
			UObject* WorldContext;
			ALuxBattleManager* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ULuxBattleFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetBattleManager"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(LuxBattleFunctionLibrary_eventGetBattleManager_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, LuxBattleFunctionLibrary_eventGetBattleManager_Parms), 0x0010000000000580, Z_Construct_UClass_ALuxBattleManager_NoRegister());
			UProperty* NewProp_WorldContext = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContext"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContext, LuxBattleFunctionLibrary_eventGetBattleManager_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContext"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULuxBattleFunctionLibrary_IsBattleOnline()
	{
		struct LuxBattleFunctionLibrary_eventIsBattleOnline_Parms
		{
			UObject* WorldContext;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ULuxBattleFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsBattleOnline"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(LuxBattleFunctionLibrary_eventIsBattleOnline_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, LuxBattleFunctionLibrary_eventIsBattleOnline_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, LuxBattleFunctionLibrary_eventIsBattleOnline_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, LuxBattleFunctionLibrary_eventIsBattleOnline_Parms), sizeof(bool), true);
			UProperty* NewProp_WorldContext = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContext"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContext, LuxBattleFunctionLibrary_eventIsBattleOnline_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContext"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULuxBattleFunctionLibrary_IsBattlePlaying()
	{
		struct LuxBattleFunctionLibrary_eventIsBattlePlaying_Parms
		{
			UObject* WorldContext;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ULuxBattleFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsBattlePlaying"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(LuxBattleFunctionLibrary_eventIsBattlePlaying_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, LuxBattleFunctionLibrary_eventIsBattlePlaying_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, LuxBattleFunctionLibrary_eventIsBattlePlaying_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, LuxBattleFunctionLibrary_eventIsBattlePlaying_Parms), sizeof(bool), true);
			UProperty* NewProp_WorldContext = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContext"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContext, LuxBattleFunctionLibrary_eventIsBattlePlaying_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContext"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULuxBattleFunctionLibrary_IsFinishBlow()
	{
		struct LuxBattleFunctionLibrary_eventIsFinishBlow_Parms
		{
			UObject* WorldContext;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ULuxBattleFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsFinishBlow"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(LuxBattleFunctionLibrary_eventIsFinishBlow_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, LuxBattleFunctionLibrary_eventIsFinishBlow_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, LuxBattleFunctionLibrary_eventIsFinishBlow_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, LuxBattleFunctionLibrary_eventIsFinishBlow_Parms), sizeof(bool), true);
			UProperty* NewProp_WorldContext = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContext"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContext, LuxBattleFunctionLibrary_eventIsFinishBlow_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContext"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULuxBattleFunctionLibrary_IsMatchFinished()
	{
		struct LuxBattleFunctionLibrary_eventIsMatchFinished_Parms
		{
			UObject* WorldContext;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ULuxBattleFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsMatchFinished"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(LuxBattleFunctionLibrary_eventIsMatchFinished_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, LuxBattleFunctionLibrary_eventIsMatchFinished_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, LuxBattleFunctionLibrary_eventIsMatchFinished_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, LuxBattleFunctionLibrary_eventIsMatchFinished_Parms), sizeof(bool), true);
			UProperty* NewProp_WorldContext = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContext"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContext, LuxBattleFunctionLibrary_eventIsMatchFinished_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContext"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULuxBattleFunctionLibrary_SetImmortality()
	{
		struct LuxBattleFunctionLibrary_eventSetImmortality_Parms
		{
			UObject* WorldContext;
			int32 inPlayerIndex;
			bool bImmortal;
		};
		UObject* Outer = Z_Construct_UClass_ULuxBattleFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetImmortality"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(LuxBattleFunctionLibrary_eventSetImmortality_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bImmortal, LuxBattleFunctionLibrary_eventSetImmortality_Parms);
			UProperty* NewProp_bImmortal = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bImmortal"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bImmortal, LuxBattleFunctionLibrary_eventSetImmortality_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bImmortal, LuxBattleFunctionLibrary_eventSetImmortality_Parms), sizeof(bool), true);
			UProperty* NewProp_inPlayerIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("inPlayerIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(inPlayerIndex, LuxBattleFunctionLibrary_eventSetImmortality_Parms), 0x0010000000000080);
			UProperty* NewProp_WorldContext = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContext"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContext, LuxBattleFunctionLibrary_eventSetImmortality_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContext"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULuxBattleFunctionLibrary_SetSoulGaugeInfinity()
	{
		struct LuxBattleFunctionLibrary_eventSetSoulGaugeInfinity_Parms
		{
			UObject* WorldContext;
			int32 inPlayerIndex;
			bool bInfinite;
		};
		UObject* Outer = Z_Construct_UClass_ULuxBattleFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSoulGaugeInfinity"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(LuxBattleFunctionLibrary_eventSetSoulGaugeInfinity_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bInfinite, LuxBattleFunctionLibrary_eventSetSoulGaugeInfinity_Parms);
			UProperty* NewProp_bInfinite = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bInfinite"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bInfinite, LuxBattleFunctionLibrary_eventSetSoulGaugeInfinity_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bInfinite, LuxBattleFunctionLibrary_eventSetSoulGaugeInfinity_Parms), sizeof(bool), true);
			UProperty* NewProp_inPlayerIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("inPlayerIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(inPlayerIndex, LuxBattleFunctionLibrary_eventSetSoulGaugeInfinity_Parms), 0x0010000000000080);
			UProperty* NewProp_WorldContext = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContext"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContext, LuxBattleFunctionLibrary_eventSetSoulGaugeInfinity_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContext"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULuxBattleFunctionLibrary_NoRegister()
	{
		return ULuxBattleFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_ULuxBattleFunctionLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ULuxBattleFunctionLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ULuxBattleFunctionLibrary_BattlePauseEnabled());
				OuterClass->LinkChild(Z_Construct_UFunction_ULuxBattleFunctionLibrary_GetBattleGameMode());
				OuterClass->LinkChild(Z_Construct_UFunction_ULuxBattleFunctionLibrary_GetBattleManager());
				OuterClass->LinkChild(Z_Construct_UFunction_ULuxBattleFunctionLibrary_IsBattleOnline());
				OuterClass->LinkChild(Z_Construct_UFunction_ULuxBattleFunctionLibrary_IsBattlePlaying());
				OuterClass->LinkChild(Z_Construct_UFunction_ULuxBattleFunctionLibrary_IsFinishBlow());
				OuterClass->LinkChild(Z_Construct_UFunction_ULuxBattleFunctionLibrary_IsMatchFinished());
				OuterClass->LinkChild(Z_Construct_UFunction_ULuxBattleFunctionLibrary_SetImmortality());
				OuterClass->LinkChild(Z_Construct_UFunction_ULuxBattleFunctionLibrary_SetSoulGaugeInfinity());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ULuxBattleFunctionLibrary_BattlePauseEnabled(), "BattlePauseEnabled"); // 2938521319
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ULuxBattleFunctionLibrary_GetBattleGameMode(), "GetBattleGameMode"); // 3349122910
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ULuxBattleFunctionLibrary_GetBattleManager(), "GetBattleManager"); // 4042581619
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ULuxBattleFunctionLibrary_IsBattleOnline(), "IsBattleOnline"); // 2468033880
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ULuxBattleFunctionLibrary_IsBattlePlaying(), "IsBattlePlaying"); // 3299353158
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ULuxBattleFunctionLibrary_IsFinishBlow(), "IsFinishBlow"); // 4007017623
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ULuxBattleFunctionLibrary_IsMatchFinished(), "IsMatchFinished"); // 3577189875
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ULuxBattleFunctionLibrary_SetImmortality(), "SetImmortality"); // 2506277513
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ULuxBattleFunctionLibrary_SetSoulGaugeInfinity(), "SetSoulGaugeInfinity"); // 1688559760
				static TCppClassTypeInfo<TCppClassTypeTraits<ULuxBattleFunctionLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxBattleFunctionLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleFunctionLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuxBattleFunctionLibrary, 2070939541);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuxBattleFunctionLibrary(Z_Construct_UClass_ULuxBattleFunctionLibrary, &ULuxBattleFunctionLibrary::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ULuxBattleFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuxBattleFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
