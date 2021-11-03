// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxBattleManager.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxBattleManager() {}
// Cross Module References
	LUXORGAME_API UFunction* Z_Construct_UFunction_ALuxBattleManager_GetBattleSetup();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleManager();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleSetup_NoRegister();
	LUXORGAME_API UFunction* Z_Construct_UFunction_ALuxBattleManager_IsOnline();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleManager_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxActor();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
// End Cross Module References
	void ALuxBattleManager::StaticRegisterNativesALuxBattleManager()
	{
		UClass* Class = ALuxBattleManager::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetBattleSetup", (Native)&ALuxBattleManager::execGetBattleSetup },
			{ "IsOnline", (Native)&ALuxBattleManager::execIsOnline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ALuxBattleManager_GetBattleSetup()
	{
		struct LuxBattleManager_eventGetBattleSetup_Parms
		{
			ALuxBattleSetup* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ALuxBattleManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetBattleSetup"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14020401, 65535, sizeof(LuxBattleManager_eventGetBattleSetup_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, LuxBattleManager_eventGetBattleSetup_Parms), 0x0010000000000580, Z_Construct_UClass_ALuxBattleSetup_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleManager.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALuxBattleManager_IsOnline()
	{
		struct LuxBattleManager_eventIsOnline_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ALuxBattleManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsOnline"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14020401, 65535, sizeof(LuxBattleManager_eventIsOnline_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, LuxBattleManager_eventIsOnline_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, LuxBattleManager_eventIsOnline_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, LuxBattleManager_eventIsOnline_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleManager.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALuxBattleManager_NoRegister()
	{
		return ALuxBattleManager::StaticClass();
	}
	UClass* Z_Construct_UClass_ALuxBattleManager()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ALuxActor();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ALuxBattleManager::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ALuxBattleManager_GetBattleSetup());
				OuterClass->LinkChild(Z_Construct_UFunction_ALuxBattleManager_IsOnline());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALuxBattleManager_GetBattleSetup(), "GetBattleSetup"); // 1996007582
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALuxBattleManager_IsOnline(), "IsOnline"); // 650754422
				static TCppClassTypeInfo<TCppClassTypeTraits<ALuxBattleManager> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxBattleManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleManager.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuxBattleManager, 1539253527);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuxBattleManager(Z_Construct_UClass_ALuxBattleManager, &ALuxBattleManager::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ALuxBattleManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuxBattleManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
