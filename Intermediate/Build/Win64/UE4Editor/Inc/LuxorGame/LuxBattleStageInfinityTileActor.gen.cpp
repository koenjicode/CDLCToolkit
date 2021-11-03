// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxBattleStageInfinityTileActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxBattleStageInfinityTileActor() {}
// Cross Module References
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleStageInfinityTileActor_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleStageInfinityTileActor();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxActor();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
// End Cross Module References
	void ALuxBattleStageInfinityTileActor::StaticRegisterNativesALuxBattleStageInfinityTileActor()
	{
	}
	UClass* Z_Construct_UClass_ALuxBattleStageInfinityTileActor_NoRegister()
	{
		return ALuxBattleStageInfinityTileActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ALuxBattleStageInfinityTileActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ALuxActor();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ALuxBattleStageInfinityTileActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ALuxBattleStageInfinityTileActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxBattleStageInfinityTileActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageInfinityTileActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuxBattleStageInfinityTileActor, 2544357255);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuxBattleStageInfinityTileActor(Z_Construct_UClass_ALuxBattleStageInfinityTileActor, &ALuxBattleStageInfinityTileActor::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ALuxBattleStageInfinityTileActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuxBattleStageInfinityTileActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
