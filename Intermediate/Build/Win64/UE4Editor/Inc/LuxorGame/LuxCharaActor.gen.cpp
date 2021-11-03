// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxCharaActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxCharaActor() {}
// Cross Module References
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxCharaActor_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxCharaActor();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxActor();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void ALuxCharaActor::StaticRegisterNativesALuxCharaActor()
	{
	}
	UClass* Z_Construct_UClass_ALuxCharaActor_NoRegister()
	{
		return ALuxCharaActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ALuxCharaActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ALuxActor();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ALuxCharaActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_WeaponMeshComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponMeshComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WeaponMeshComponent, ALuxCharaActor), 0x001000000008000d, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_CharaMeshComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CharaMeshComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CharaMeshComponent, ALuxCharaActor), 0x001000000008000d, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<ALuxCharaActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxCharaActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxCharaActor.h"));
				MetaData->SetValue(NewProp_WeaponMeshComponent, TEXT("Category"), TEXT("LuxCharaActor"));
				MetaData->SetValue(NewProp_WeaponMeshComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_WeaponMeshComponent, TEXT("ModuleRelativePath"), TEXT("Public/LuxCharaActor.h"));
				MetaData->SetValue(NewProp_CharaMeshComponent, TEXT("Category"), TEXT("LuxCharaActor"));
				MetaData->SetValue(NewProp_CharaMeshComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CharaMeshComponent, TEXT("ModuleRelativePath"), TEXT("Public/LuxCharaActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuxCharaActor, 2553736162);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuxCharaActor(Z_Construct_UClass_ALuxCharaActor, &ALuxCharaActor::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ALuxCharaActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuxCharaActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
