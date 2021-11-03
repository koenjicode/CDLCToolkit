// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxBattleStageSetup.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxBattleStageSetup() {}
// Cross Module References
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleStageSetup_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleStageSetup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
// End Cross Module References
	void ALuxBattleStageSetup::StaticRegisterNativesALuxBattleStageSetup()
	{
	}
	UClass* Z_Construct_UClass_ALuxBattleStageSetup_NoRegister()
	{
		return ALuxBattleStageSetup::StaticClass();
	}
	UClass* Z_Construct_UClass_ALuxBattleStageSetup()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ALuxBattleStageSetup::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_StageIndex = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StageIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(StageIndex, ALuxBattleStageSetup), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsAstral, ALuxBattleStageSetup);
				UProperty* NewProp_IsAstral = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IsAstral"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsAstral, ALuxBattleStageSetup), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(IsAstral, ALuxBattleStageSetup), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(WithHole, ALuxBattleStageSetup);
				UProperty* NewProp_WithHole = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WithHole"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(WithHole, ALuxBattleStageSetup), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(WithHole, ALuxBattleStageSetup), sizeof(bool), true);
				UProperty* NewProp_ExtraStageParam = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ExtraStageParam"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ExtraStageParam, ALuxBattleStageSetup), 0x0010000000000005);
				static TCppClassTypeInfo<TCppClassTypeTraits<ALuxBattleStageSetup> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxBattleStageSetup.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageSetup.h"));
				MetaData->SetValue(NewProp_StageIndex, TEXT("Category"), TEXT("LuxBattleStageSetup"));
				MetaData->SetValue(NewProp_StageIndex, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageSetup.h"));
				MetaData->SetValue(NewProp_IsAstral, TEXT("Category"), TEXT("LuxBattleStageSetup"));
				MetaData->SetValue(NewProp_IsAstral, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageSetup.h"));
				MetaData->SetValue(NewProp_WithHole, TEXT("Category"), TEXT("LuxBattleStageSetup"));
				MetaData->SetValue(NewProp_WithHole, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageSetup.h"));
				MetaData->SetValue(NewProp_ExtraStageParam, TEXT("Category"), TEXT("LuxBattleStageSetup"));
				MetaData->SetValue(NewProp_ExtraStageParam, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageSetup.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuxBattleStageSetup, 2795263130);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuxBattleStageSetup(Z_Construct_UClass_ALuxBattleStageSetup, &ALuxBattleStageSetup::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ALuxBattleStageSetup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuxBattleStageSetup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
