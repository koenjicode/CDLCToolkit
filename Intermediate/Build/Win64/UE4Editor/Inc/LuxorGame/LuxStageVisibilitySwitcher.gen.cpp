// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxStageVisibilitySwitcher.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxStageVisibilitySwitcher() {}
// Cross Module References
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxStageVisibilitySwitcher_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxStageVisibilitySwitcher();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	void ALuxStageVisibilitySwitcher::StaticRegisterNativesALuxStageVisibilitySwitcher()
	{
	}
	UClass* Z_Construct_UClass_ALuxStageVisibilitySwitcher_NoRegister()
	{
		return ALuxStageVisibilitySwitcher::StaticClass();
	}
	UClass* Z_Construct_UClass_ALuxStageVisibilitySwitcher()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ALuxStageVisibilitySwitcher::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(EnablePositionCheck, ALuxStageVisibilitySwitcher);
				UProperty* NewProp_EnablePositionCheck = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EnablePositionCheck"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(EnablePositionCheck, ALuxStageVisibilitySwitcher), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(EnablePositionCheck, ALuxStageVisibilitySwitcher), sizeof(bool), true);
				UProperty* NewProp_DistanceThreshold = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DistanceThreshold"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DistanceThreshold, ALuxStageVisibilitySwitcher), 0x0010000000000005);
				UProperty* NewProp_BackAngleThresholdOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BackAngleThresholdOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BackAngleThresholdOffset, ALuxStageVisibilitySwitcher), 0x0010000000000005);
				UProperty* NewProp_ActorList = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ActorList"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ActorList, ALuxStageVisibilitySwitcher), 0x0010000000000005);
				UProperty* NewProp_ActorList_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ActorList, TEXT("ActorList"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_ArrowComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ArrowComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ArrowComponent, ALuxStageVisibilitySwitcher), 0x00100000000b0009, Z_Construct_UClass_UArrowComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<ALuxStageVisibilitySwitcher> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxStageVisibilitySwitcher.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageVisibilitySwitcher.h"));
				MetaData->SetValue(NewProp_EnablePositionCheck, TEXT("Category"), TEXT("LuxStageVisibilitySwitcher"));
				MetaData->SetValue(NewProp_EnablePositionCheck, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageVisibilitySwitcher.h"));
				MetaData->SetValue(NewProp_DistanceThreshold, TEXT("Category"), TEXT("LuxStageVisibilitySwitcher"));
				MetaData->SetValue(NewProp_DistanceThreshold, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageVisibilitySwitcher.h"));
				MetaData->SetValue(NewProp_BackAngleThresholdOffset, TEXT("Category"), TEXT("LuxStageVisibilitySwitcher"));
				MetaData->SetValue(NewProp_BackAngleThresholdOffset, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageVisibilitySwitcher.h"));
				MetaData->SetValue(NewProp_ActorList, TEXT("Category"), TEXT("LuxStageVisibilitySwitcher"));
				MetaData->SetValue(NewProp_ActorList, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageVisibilitySwitcher.h"));
				MetaData->SetValue(NewProp_ArrowComponent, TEXT("Category"), TEXT("Extras"));
				MetaData->SetValue(NewProp_ArrowComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ArrowComponent, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageVisibilitySwitcher.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuxStageVisibilitySwitcher, 3602727827);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuxStageVisibilitySwitcher(Z_Construct_UClass_ALuxStageVisibilitySwitcher, &ALuxStageVisibilitySwitcher::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ALuxStageVisibilitySwitcher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuxStageVisibilitySwitcher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
