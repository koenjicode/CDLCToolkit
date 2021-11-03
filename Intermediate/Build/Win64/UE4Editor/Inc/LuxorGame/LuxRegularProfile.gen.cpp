// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxRegularProfile.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxRegularProfile() {}
// Cross Module References
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxRegularProfile_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxRegularProfile();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxCreationProfile();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxBreastSwingParam();
	LUXORGAME_API UEnum* Z_Construct_UEnum_LuxorGame_ELuxCharacter();
// End Cross Module References
	void ULuxRegularProfile::StaticRegisterNativesULuxRegularProfile()
	{
	}
	UClass* Z_Construct_UClass_ULuxRegularProfile_NoRegister()
	{
		return ULuxRegularProfile::StaticClass();
	}
	UClass* Z_Construct_UClass_ULuxRegularProfile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ULuxCreationProfile();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ULuxRegularProfile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_SwingParams = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SwingParams"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SwingParams, ULuxRegularProfile), 0x0010000000000005);
				UProperty* NewProp_SwingParams_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SwingParams, TEXT("SwingParams"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLuxBreastSwingParam());
				UProperty* NewProp_Character = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Character"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Character, ULuxRegularProfile), 0x0010000000000005, Z_Construct_UEnum_LuxorGame_ELuxCharacter());
				UProperty* NewProp_Character_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Character, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				static TCppClassTypeInfo<TCppClassTypeTraits<ULuxRegularProfile> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxRegularProfile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxRegularProfile.h"));
				MetaData->SetValue(NewProp_SwingParams, TEXT("Category"), TEXT("Character"));
				MetaData->SetValue(NewProp_SwingParams, TEXT("ModuleRelativePath"), TEXT("Public/LuxRegularProfile.h"));
				MetaData->SetValue(NewProp_Character, TEXT("Category"), TEXT("Character"));
				MetaData->SetValue(NewProp_Character, TEXT("ModuleRelativePath"), TEXT("Public/LuxRegularProfile.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuxRegularProfile, 2119761103);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuxRegularProfile(Z_Construct_UClass_ULuxRegularProfile, &ULuxRegularProfile::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ULuxRegularProfile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuxRegularProfile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
