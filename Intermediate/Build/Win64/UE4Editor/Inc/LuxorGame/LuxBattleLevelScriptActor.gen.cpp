// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxBattleLevelScriptActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxBattleLevelScriptActor() {}
// Cross Module References
	LUXORGAME_API UFunction* Z_Construct_UFunction_ALuxBattleLevelScriptActor_OnRoundStarted();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleLevelScriptActor();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleLevelScriptActor_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxLevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
// End Cross Module References
	static FName NAME_ALuxBattleLevelScriptActor_OnRoundStarted = FName(TEXT("OnRoundStarted"));
	void ALuxBattleLevelScriptActor::OnRoundStarted(int32 CurrentRound)
	{
		LuxBattleLevelScriptActor_eventOnRoundStarted_Parms Parms;
		Parms.CurrentRound=CurrentRound;
		ProcessEvent(FindFunctionChecked(NAME_ALuxBattleLevelScriptActor_OnRoundStarted),&Parms);
	}
	void ALuxBattleLevelScriptActor::StaticRegisterNativesALuxBattleLevelScriptActor()
	{
	}
	UFunction* Z_Construct_UFunction_ALuxBattleLevelScriptActor_OnRoundStarted()
	{
		UObject* Outer = Z_Construct_UClass_ALuxBattleLevelScriptActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnRoundStarted"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535, sizeof(LuxBattleLevelScriptActor_eventOnRoundStarted_Parms));
			UProperty* NewProp_CurrentRound = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CurrentRound"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(CurrentRound, LuxBattleLevelScriptActor_eventOnRoundStarted_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleLevelScriptActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALuxBattleLevelScriptActor_NoRegister()
	{
		return ALuxBattleLevelScriptActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ALuxBattleLevelScriptActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ALuxLevelScriptActor();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ALuxBattleLevelScriptActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900280u;

				OuterClass->LinkChild(Z_Construct_UFunction_ALuxBattleLevelScriptActor_OnRoundStarted());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALuxBattleLevelScriptActor_OnRoundStarted(), "OnRoundStarted"); // 1736462641
				static TCppClassTypeInfo<TCppClassTypeTraits<ALuxBattleLevelScriptActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxBattleLevelScriptActor.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleLevelScriptActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuxBattleLevelScriptActor, 2227569420);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuxBattleLevelScriptActor(Z_Construct_UClass_ALuxBattleLevelScriptActor, &ALuxBattleLevelScriptActor::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ALuxBattleLevelScriptActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuxBattleLevelScriptActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
