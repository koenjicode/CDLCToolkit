// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxBattleGameMode.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxBattleGameMode() {}
// Cross Module References
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleGameMode_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleManager_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void ALuxBattleGameMode::StaticRegisterNativesALuxBattleGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALuxBattleGameMode_NoRegister()
	{
		return ALuxBattleGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ALuxBattleGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ALuxBattleGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x2090028Cu;


				UProperty* NewProp_BattleManagerClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BattleManagerClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(BattleManagerClass, ALuxBattleGameMode), 0x0014000000000005, Z_Construct_UClass_ALuxBattleManager_NoRegister(), Z_Construct_UClass_UClass());
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ALuxBattleGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxBattleGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_BattleManagerClass, TEXT("Category"), TEXT("Classes"));
				MetaData->SetValue(NewProp_BattleManagerClass, TEXT("DisplayName"), TEXT("Battle Manager Class"));
				MetaData->SetValue(NewProp_BattleManagerClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleGameMode.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuxBattleGameMode, 1365250150);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuxBattleGameMode(Z_Construct_UClass_ALuxBattleGameMode, &ALuxBattleGameMode::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ALuxBattleGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuxBattleGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
