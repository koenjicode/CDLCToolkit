// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxAssetPathsBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxAssetPathsBase() {}
// Cross Module References
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxAssetPathsBase_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxAssetPathsBase();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxNamedAssetReference();
// End Cross Module References
	void ULuxAssetPathsBase::StaticRegisterNativesULuxAssetPathsBase()
	{
	}
	UClass* Z_Construct_UClass_ULuxAssetPathsBase_NoRegister()
	{
		return ULuxAssetPathsBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ULuxAssetPathsBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ULuxAssetPathsBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_NamedReferences = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NamedReferences"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(NamedReferences, ULuxAssetPathsBase), 0x0010000000000005);
				UProperty* NewProp_NamedReferences_Inner = new(EC_InternalUseOnlyConstructor, NewProp_NamedReferences, TEXT("NamedReferences"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLuxNamedAssetReference());
				static TCppClassTypeInfo<TCppClassTypeTraits<ULuxAssetPathsBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxAssetPathsBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxAssetPathsBase.h"));
				MetaData->SetValue(NewProp_NamedReferences, TEXT("Category"), TEXT("LuxAssetPathsBase"));
				MetaData->SetValue(NewProp_NamedReferences, TEXT("ModuleRelativePath"), TEXT("Public/LuxAssetPathsBase.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuxAssetPathsBase, 1504446757);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuxAssetPathsBase(Z_Construct_UClass_ULuxAssetPathsBase, &ULuxAssetPathsBase::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ULuxAssetPathsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuxAssetPathsBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
