// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxLevelScriptActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxLevelScriptActor() {}
// Cross Module References
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxLevelScriptActor_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxLevelScriptActor();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
// End Cross Module References
	void ALuxLevelScriptActor::StaticRegisterNativesALuxLevelScriptActor()
	{
	}
	UClass* Z_Construct_UClass_ALuxLevelScriptActor_NoRegister()
	{
		return ALuxLevelScriptActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ALuxLevelScriptActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ALevelScriptActor();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ALuxLevelScriptActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900280u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ALuxLevelScriptActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxLevelScriptActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxLevelScriptActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuxLevelScriptActor, 2756263635);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuxLevelScriptActor(Z_Construct_UClass_ALuxLevelScriptActor, &ALuxLevelScriptActor::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ALuxLevelScriptActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuxLevelScriptActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
