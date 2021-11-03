// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxWeaponAssetPaths.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxWeaponAssetPaths() {}
// Cross Module References
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxWeaponAssetPaths_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxWeaponAssetPaths();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxAssetPathsBase();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FStringAssetReference();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxTraceColorApplySettingList();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxWeaponVariation();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxWeaponRawAsset();
// End Cross Module References
	void ULuxWeaponAssetPaths::StaticRegisterNativesULuxWeaponAssetPaths()
	{
	}
	UClass* Z_Construct_UClass_ULuxWeaponAssetPaths_NoRegister()
	{
		return ULuxWeaponAssetPaths::StaticClass();
	}
	UClass* Z_Construct_UClass_ULuxWeaponAssetPaths()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ULuxAssetPathsBase();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ULuxWeaponAssetPaths::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_AppxWeaponPath2 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AppxWeaponPath2"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AppxWeaponPath2, ULuxWeaponAssetPaths), 0x0010000000000005, Z_Construct_UScriptStruct_FStringAssetReference());
				UProperty* NewProp_AppxWeaponPath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AppxWeaponPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AppxWeaponPath, ULuxWeaponAssetPaths), 0x0010000000000005, Z_Construct_UScriptStruct_FStringAssetReference());
				UProperty* NewProp_TraceColorApplySettingLists = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TraceColorApplySettingLists"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(TraceColorApplySettingLists, ULuxWeaponAssetPaths), 0x0010000000000005);
				UProperty* NewProp_TraceColorApplySettingLists_Inner = new(EC_InternalUseOnlyConstructor, NewProp_TraceColorApplySettingLists, TEXT("TraceColorApplySettingLists"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLuxTraceColorApplySettingList());
				UProperty* NewProp_Variations = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Variations"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Variations, ULuxWeaponAssetPaths), 0x0010000000000005);
				UProperty* NewProp_Variations_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Variations, TEXT("Variations"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLuxWeaponVariation());
				UProperty* NewProp_RawAssets = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RawAssets"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(RawAssets, ULuxWeaponAssetPaths), 0x0010000000000005);
				UProperty* NewProp_RawAssets_Inner = new(EC_InternalUseOnlyConstructor, NewProp_RawAssets, TEXT("RawAssets"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLuxWeaponRawAsset());
				UProperty* NewProp_CharacterType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CharacterType"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(CharacterType, ULuxWeaponAssetPaths), 0x0010000000000005);
				static TCppClassTypeInfo<TCppClassTypeTraits<ULuxWeaponAssetPaths> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxWeaponAssetPaths.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxWeaponAssetPaths.h"));
				MetaData->SetValue(NewProp_AppxWeaponPath2, TEXT("Category"), TEXT("LuxWeaponAssetPaths"));
				MetaData->SetValue(NewProp_AppxWeaponPath2, TEXT("ModuleRelativePath"), TEXT("Public/LuxWeaponAssetPaths.h"));
				MetaData->SetValue(NewProp_AppxWeaponPath, TEXT("Category"), TEXT("LuxWeaponAssetPaths"));
				MetaData->SetValue(NewProp_AppxWeaponPath, TEXT("ModuleRelativePath"), TEXT("Public/LuxWeaponAssetPaths.h"));
				MetaData->SetValue(NewProp_TraceColorApplySettingLists, TEXT("Category"), TEXT("LuxWeaponAssetPaths"));
				MetaData->SetValue(NewProp_TraceColorApplySettingLists, TEXT("ModuleRelativePath"), TEXT("Public/LuxWeaponAssetPaths.h"));
				MetaData->SetValue(NewProp_Variations, TEXT("Category"), TEXT("LuxWeaponAssetPaths"));
				MetaData->SetValue(NewProp_Variations, TEXT("ModuleRelativePath"), TEXT("Public/LuxWeaponAssetPaths.h"));
				MetaData->SetValue(NewProp_RawAssets, TEXT("Category"), TEXT("LuxWeaponAssetPaths"));
				MetaData->SetValue(NewProp_RawAssets, TEXT("ModuleRelativePath"), TEXT("Public/LuxWeaponAssetPaths.h"));
				MetaData->SetValue(NewProp_CharacterType, TEXT("Category"), TEXT("LuxWeaponAssetPaths"));
				MetaData->SetValue(NewProp_CharacterType, TEXT("ModuleRelativePath"), TEXT("Public/LuxWeaponAssetPaths.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuxWeaponAssetPaths, 1753037738);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuxWeaponAssetPaths(Z_Construct_UClass_ULuxWeaponAssetPaths, &ULuxWeaponAssetPaths::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ULuxWeaponAssetPaths"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuxWeaponAssetPaths);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
