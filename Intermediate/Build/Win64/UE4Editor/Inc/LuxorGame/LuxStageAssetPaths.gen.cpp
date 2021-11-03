// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxStageAssetPaths.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxStageAssetPaths() {}
// Cross Module References
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxStageAssetPaths_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxStageAssetPaths();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxAssetPathsBase();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxStageSetting();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxStageRawAsset();
// End Cross Module References
	void ULuxStageAssetPaths::StaticRegisterNativesULuxStageAssetPaths()
	{
	}
	UClass* Z_Construct_UClass_ULuxStageAssetPaths_NoRegister()
	{
		return ULuxStageAssetPaths::StaticClass();
	}
	UClass* Z_Construct_UClass_ULuxStageAssetPaths()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ULuxAssetPathsBase();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ULuxStageAssetPaths::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_Setting = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Setting"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Setting, ULuxStageAssetPaths), 0x0010000000000005, Z_Construct_UScriptStruct_FLuxStageSetting());
				UProperty* NewProp_RawAssets = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RawAssets"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(RawAssets, ULuxStageAssetPaths), 0x0010000000000005);
				UProperty* NewProp_RawAssets_Inner = new(EC_InternalUseOnlyConstructor, NewProp_RawAssets, TEXT("RawAssets"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLuxStageRawAsset());
				UProperty* NewProp_Identifier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Identifier"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Identifier, ULuxStageAssetPaths), 0x0010000000000005);
				static TCppClassTypeInfo<TCppClassTypeTraits<ULuxStageAssetPaths> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxStageAssetPaths.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageAssetPaths.h"));
				MetaData->SetValue(NewProp_Setting, TEXT("Category"), TEXT("LuxStageAssetPaths"));
				MetaData->SetValue(NewProp_Setting, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageAssetPaths.h"));
				MetaData->SetValue(NewProp_RawAssets, TEXT("Category"), TEXT("LuxStageAssetPaths"));
				MetaData->SetValue(NewProp_RawAssets, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageAssetPaths.h"));
				MetaData->SetValue(NewProp_Identifier, TEXT("Category"), TEXT("LuxStageAssetPaths"));
				MetaData->SetValue(NewProp_Identifier, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageAssetPaths.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuxStageAssetPaths, 393291413);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuxStageAssetPaths(Z_Construct_UClass_ULuxStageAssetPaths, &ULuxStageAssetPaths::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ULuxStageAssetPaths"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuxStageAssetPaths);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
