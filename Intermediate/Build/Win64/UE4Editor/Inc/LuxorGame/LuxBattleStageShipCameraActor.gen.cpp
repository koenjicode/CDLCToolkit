// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxBattleStageShipCameraActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxBattleStageShipCameraActor() {}
// Cross Module References
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleStageShipCameraActor_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleStageShipCameraActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxBattleStageShipScendParam();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxBattleStageShipScendState();
// End Cross Module References
	void ALuxBattleStageShipCameraActor::StaticRegisterNativesALuxBattleStageShipCameraActor()
	{
	}
	UClass* Z_Construct_UClass_ALuxBattleStageShipCameraActor_NoRegister()
	{
		return ALuxBattleStageShipCameraActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ALuxBattleStageShipCameraActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ALuxBattleStageShipCameraActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_ScendParamZ = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ScendParamZ"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ScendParamZ, ALuxBattleStageShipCameraActor), 0x0010000000000005, Z_Construct_UScriptStruct_FLuxBattleStageShipScendParam());
				UProperty* NewProp_ScendParamX = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ScendParamX"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ScendParamX, ALuxBattleStageShipCameraActor), 0x0010000000000005, Z_Construct_UScriptStruct_FLuxBattleStageShipScendParam());
				UProperty* NewProp_ScendStateZ = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ScendStateZ"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ScendStateZ, ALuxBattleStageShipCameraActor), 0x0010000000020001, Z_Construct_UScriptStruct_FLuxBattleStageShipScendState());
				UProperty* NewProp_ScendStateX = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ScendStateX"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ScendStateX, ALuxBattleStageShipCameraActor), 0x0010000000020001, Z_Construct_UScriptStruct_FLuxBattleStageShipScendState());
				UProperty* NewProp_Range = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Range"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Range, ALuxBattleStageShipCameraActor), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsFighting, ALuxBattleStageShipCameraActor);
				UProperty* NewProp_bIsFighting = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsFighting"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsFighting, ALuxBattleStageShipCameraActor), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bIsFighting, ALuxBattleStageShipCameraActor), sizeof(bool), true);
				static TCppClassTypeInfo<TCppClassTypeTraits<ALuxBattleStageShipCameraActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxBattleStageShipCameraActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageShipCameraActor.h"));
				MetaData->SetValue(NewProp_ScendParamZ, TEXT("Category"), TEXT("LuxBattleStageShipCameraActor"));
				MetaData->SetValue(NewProp_ScendParamZ, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageShipCameraActor.h"));
				MetaData->SetValue(NewProp_ScendParamX, TEXT("Category"), TEXT("LuxBattleStageShipCameraActor"));
				MetaData->SetValue(NewProp_ScendParamX, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageShipCameraActor.h"));
				MetaData->SetValue(NewProp_ScendStateZ, TEXT("Category"), TEXT("LuxBattleStageShipCameraActor"));
				MetaData->SetValue(NewProp_ScendStateZ, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageShipCameraActor.h"));
				MetaData->SetValue(NewProp_ScendStateX, TEXT("Category"), TEXT("LuxBattleStageShipCameraActor"));
				MetaData->SetValue(NewProp_ScendStateX, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageShipCameraActor.h"));
				MetaData->SetValue(NewProp_Range, TEXT("Category"), TEXT("LuxBattleStageShipCameraActor"));
				MetaData->SetValue(NewProp_Range, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageShipCameraActor.h"));
				MetaData->SetValue(NewProp_bIsFighting, TEXT("Category"), TEXT("LuxBattleStageShipCameraActor"));
				MetaData->SetValue(NewProp_bIsFighting, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleStageShipCameraActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuxBattleStageShipCameraActor, 1049895522);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuxBattleStageShipCameraActor(Z_Construct_UClass_ALuxBattleStageShipCameraActor, &ALuxBattleStageShipCameraActor::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ALuxBattleStageShipCameraActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuxBattleStageShipCameraActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
