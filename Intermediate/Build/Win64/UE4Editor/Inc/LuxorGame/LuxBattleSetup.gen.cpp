// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxBattleSetup.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxBattleSetup() {}
// Cross Module References
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleSetup_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleSetup();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxActor();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxBattlePlayerSetup_NoRegister();
// End Cross Module References
	void ALuxBattleSetup::StaticRegisterNativesALuxBattleSetup()
	{
	}
	UClass* Z_Construct_UClass_ALuxBattleSetup_NoRegister()
	{
		return ALuxBattleSetup::StaticClass();
	}
	UClass* Z_Construct_UClass_ALuxBattleSetup()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ALuxActor();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ALuxBattleSetup::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_PlayerLeft = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PlayerLeft"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayerLeft, ALuxBattleSetup), 0x0010000000000005, Z_Construct_UClass_ULuxBattlePlayerSetup_NoRegister());
				UProperty* NewProp_PlayerRight = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PlayerRight"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayerRight, ALuxBattleSetup), 0x0010000000000005, Z_Construct_UClass_ULuxBattlePlayerSetup_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEndless, ALuxBattleSetup);
				UProperty* NewProp_bEndless = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEndless"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEndless, ALuxBattleSetup), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bEndless, ALuxBattleSetup), sizeof(bool), true);
				static TCppClassTypeInfo<TCppClassTypeTraits<ALuxBattleSetup> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxBattleSetup.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleSetup.h"));
				MetaData->SetValue(NewProp_PlayerLeft, TEXT("Category"), TEXT("LuxBattleSetup"));
				MetaData->SetValue(NewProp_PlayerLeft, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleSetup.h"));
				MetaData->SetValue(NewProp_PlayerRight, TEXT("Category"), TEXT("LuxBattleSetup"));
				MetaData->SetValue(NewProp_PlayerRight, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleSetup.h"));
				MetaData->SetValue(NewProp_bEndless, TEXT("Category"), TEXT("LuxBattleSetup"));
				MetaData->SetValue(NewProp_bEndless, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleSetup.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuxBattleSetup, 1160633159);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuxBattleSetup(Z_Construct_UClass_ALuxBattleSetup, &ALuxBattleSetup::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ALuxBattleSetup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuxBattleSetup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
