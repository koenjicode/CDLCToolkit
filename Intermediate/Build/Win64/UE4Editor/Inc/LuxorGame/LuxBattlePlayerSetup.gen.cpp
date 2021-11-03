// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxBattlePlayerSetup.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxBattlePlayerSetup() {}
// Cross Module References
	LUXORGAME_API UFunction* Z_Construct_UFunction_ULuxBattlePlayerSetup_CreatePlayerSetup();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxBattlePlayerSetup();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxCreationProfile_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxBattlePlayerSetup_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxLoadableBase();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UAssetObjectProperty();
	LUXORGAME_API UEnum* Z_Construct_UEnum_LuxorGame_ELuxWeaponVariation();
// End Cross Module References
	void ULuxBattlePlayerSetup::StaticRegisterNativesULuxBattlePlayerSetup()
	{
		UClass* Class = ULuxBattlePlayerSetup::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CreatePlayerSetup", (Native)&ULuxBattlePlayerSetup::execCreatePlayerSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ULuxBattlePlayerSetup_CreatePlayerSetup()
	{
		struct LuxBattlePlayerSetup_eventCreatePlayerSetup_Parms
		{
			ULuxCreationProfile* inProfile;
		};
		UObject* Outer = Z_Construct_UClass_ULuxBattlePlayerSetup();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CreatePlayerSetup"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(LuxBattlePlayerSetup_eventCreatePlayerSetup_Parms));
			UProperty* NewProp_inProfile = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("inProfile"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(inProfile, LuxBattlePlayerSetup_eventCreatePlayerSetup_Parms), 0x0010000000000080, Z_Construct_UClass_ULuxCreationProfile_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattlePlayerSetup.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULuxBattlePlayerSetup_NoRegister()
	{
		return ULuxBattlePlayerSetup::StaticClass();
	}
	UClass* Z_Construct_UClass_ULuxBattlePlayerSetup()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ULuxLoadableBase();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ULuxBattlePlayerSetup::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ULuxBattlePlayerSetup_CreatePlayerSetup());

				UProperty* NewProp_OverrideCharacterPaths = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OverrideCharacterPaths"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverrideCharacterPaths, ULuxBattlePlayerSetup), 0x0010000000000005, Z_Construct_UClass_UAssetObjectProperty());
				UProperty* NewProp_OverrideWeaponPaths = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OverrideWeaponPaths"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverrideWeaponPaths, ULuxBattlePlayerSetup), 0x0010000000000005, Z_Construct_UClass_UAssetObjectProperty());
				UProperty* NewProp_OverrideVoicePaths = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OverrideVoicePaths"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverrideVoicePaths, ULuxBattlePlayerSetup), 0x0010000000000005, Z_Construct_UClass_UAssetObjectProperty());
				UProperty* NewProp_InputDeviceID = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InputDeviceID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(InputDeviceID, ULuxBattlePlayerSetup), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(OverrideDNA, ULuxBattlePlayerSetup);
				UProperty* NewProp_OverrideDNA = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OverrideDNA"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(OverrideDNA, ULuxBattlePlayerSetup), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(OverrideDNA, ULuxBattlePlayerSetup), sizeof(bool), true);
				UProperty* NewProp_WeaponVariation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponVariation"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(WeaponVariation, ULuxBattlePlayerSetup), 0x0010000000000005, Z_Construct_UEnum_LuxorGame_ELuxWeaponVariation());
				UProperty* NewProp_WeaponVariation_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_WeaponVariation, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ULuxBattlePlayerSetup_CreatePlayerSetup(), "CreatePlayerSetup"); // 2223004472
				static TCppClassTypeInfo<TCppClassTypeTraits<ULuxBattlePlayerSetup> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxBattlePlayerSetup.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattlePlayerSetup.h"));
				MetaData->SetValue(NewProp_OverrideCharacterPaths, TEXT("Category"), TEXT("LuxBattlePlayerSetup"));
				MetaData->SetValue(NewProp_OverrideCharacterPaths, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattlePlayerSetup.h"));
				MetaData->SetValue(NewProp_OverrideWeaponPaths, TEXT("Category"), TEXT("LuxBattlePlayerSetup"));
				MetaData->SetValue(NewProp_OverrideWeaponPaths, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattlePlayerSetup.h"));
				MetaData->SetValue(NewProp_OverrideVoicePaths, TEXT("Category"), TEXT("LuxBattlePlayerSetup"));
				MetaData->SetValue(NewProp_OverrideVoicePaths, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattlePlayerSetup.h"));
				MetaData->SetValue(NewProp_InputDeviceID, TEXT("Category"), TEXT("LuxBattlePlayerSetup"));
				MetaData->SetValue(NewProp_InputDeviceID, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattlePlayerSetup.h"));
				MetaData->SetValue(NewProp_OverrideDNA, TEXT("Category"), TEXT("LuxBattlePlayerSetup"));
				MetaData->SetValue(NewProp_OverrideDNA, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattlePlayerSetup.h"));
				MetaData->SetValue(NewProp_WeaponVariation, TEXT("Category"), TEXT("LuxBattlePlayerSetup"));
				MetaData->SetValue(NewProp_WeaponVariation, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattlePlayerSetup.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuxBattlePlayerSetup, 2536287984);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuxBattlePlayerSetup(Z_Construct_UClass_ULuxBattlePlayerSetup, &ULuxBattlePlayerSetup::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ULuxBattlePlayerSetup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuxBattlePlayerSetup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
