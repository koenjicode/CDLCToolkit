// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxBattleStageWindActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxBattleStageWindActor() {}
// Cross Module References
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleStageWindActor_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleStageWindActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
// End Cross Module References
	void ALuxBattleStageWindActor::StaticRegisterNativesALuxBattleStageWindActor()
	{
	}
	UClass* Z_Construct_UClass_ALuxBattleStageWindActor_NoRegister()
	{
		return ALuxBattleStageWindActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ALuxBattleStageWindActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ALuxBattleStageWindActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_BaseInterval = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseInterval"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseInterval, ALuxBattleStageWindActor), 0x0010000000000005);
				UProperty* NewProp_NoiseInterval = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NoiseInterval"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NoiseInterval, ALuxBattleStageWindActor), 0x0010000000000005);
				UProperty* NewProp_Power = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Power"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Power, ALuxBattleStageWindActor), 0x0010000000000005);
				UProperty* NewProp_LifeTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LifeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LifeTime, ALuxBattleStageWindActor), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bTimeReduce, ALuxBattleStageWindActor);
				UProperty* NewProp_bTimeReduce = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bTimeReduce"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bTimeReduce, ALuxBattleStageWindActor), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bTimeReduce, ALuxBattleStageWindActor), sizeof(bool), true);
				UProperty* NewProp_NearReduceScale = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NearReduceScale"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NearReduceScale, ALuxBattleStageWindActor), 0x0010000000000005);
				UProperty* NewProp_FarDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FarDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FarDistance, ALuxBattleStageWindActor), 0x0010000000000005);
				UProperty* NewProp_FarScale = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FarScale"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FarScale, ALuxBattleStageWindActor), 0x0010000000000005);
				static TCppClassTypeInfo<TCppClassTypeTraits<ALuxBattleStageWindActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxBattleStageWindActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageWindActor.h"));
				MetaData->SetValue(NewProp_BaseInterval, TEXT("Category"), TEXT("LuxBattleStageWindActor"));
				MetaData->SetValue(NewProp_BaseInterval, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageWindActor.h"));
				MetaData->SetValue(NewProp_NoiseInterval, TEXT("Category"), TEXT("LuxBattleStageWindActor"));
				MetaData->SetValue(NewProp_NoiseInterval, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageWindActor.h"));
				MetaData->SetValue(NewProp_Power, TEXT("Category"), TEXT("LuxBattleStageWindActor"));
				MetaData->SetValue(NewProp_Power, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageWindActor.h"));
				MetaData->SetValue(NewProp_LifeTime, TEXT("Category"), TEXT("LuxBattleStageWindActor"));
				MetaData->SetValue(NewProp_LifeTime, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageWindActor.h"));
				MetaData->SetValue(NewProp_bTimeReduce, TEXT("Category"), TEXT("LuxBattleStageWindActor"));
				MetaData->SetValue(NewProp_bTimeReduce, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageWindActor.h"));
				MetaData->SetValue(NewProp_NearReduceScale, TEXT("Category"), TEXT("LuxBattleStageWindActor"));
				MetaData->SetValue(NewProp_NearReduceScale, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageWindActor.h"));
				MetaData->SetValue(NewProp_FarDistance, TEXT("Category"), TEXT("LuxBattleStageWindActor"));
				MetaData->SetValue(NewProp_FarDistance, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageWindActor.h"));
				MetaData->SetValue(NewProp_FarScale, TEXT("Category"), TEXT("LuxBattleStageWindActor"));
				MetaData->SetValue(NewProp_FarScale, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageWindActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuxBattleStageWindActor, 695735382);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuxBattleStageWindActor(Z_Construct_UClass_ALuxBattleStageWindActor, &ALuxBattleStageWindActor::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ALuxBattleStageWindActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuxBattleStageWindActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
