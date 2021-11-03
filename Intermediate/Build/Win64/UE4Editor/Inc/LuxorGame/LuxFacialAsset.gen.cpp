// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxFacialAsset.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxFacialAsset() {}
// Cross Module References
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxFacialAsset_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxFacialAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxFacialPaths();
// End Cross Module References
	void ULuxFacialAsset::StaticRegisterNativesULuxFacialAsset()
	{
	}
	UClass* Z_Construct_UClass_ULuxFacialAsset_NoRegister()
	{
		return ULuxFacialAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_ULuxFacialAsset()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ULuxFacialAsset::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20101080u;


				UProperty* NewProp_FacialPaths = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FacialPaths"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FacialPaths, ULuxFacialAsset), 0x0010000000000005, Z_Construct_UScriptStruct_FLuxFacialPaths());
				static TCppClassTypeInfo<TCppClassTypeTraits<ULuxFacialAsset> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxFacialAsset.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxFacialAsset.h"));
				MetaData->SetValue(NewProp_FacialPaths, TEXT("Category"), TEXT("LuxFacialAsset"));
				MetaData->SetValue(NewProp_FacialPaths, TEXT("ModuleRelativePath"), TEXT("Public/LuxFacialAsset.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuxFacialAsset, 1855688164);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuxFacialAsset(Z_Construct_UClass_ULuxFacialAsset, &ULuxFacialAsset::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ULuxFacialAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuxFacialAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
