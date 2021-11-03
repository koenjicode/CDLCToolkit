// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxStageMeshActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxStageMeshActor() {}
// Cross Module References
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxStageMeshActor_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxStageMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxStageMeshComponent_NoRegister();
// End Cross Module References
	void ALuxStageMeshActor::StaticRegisterNativesALuxStageMeshActor()
	{
	}
	UClass* Z_Construct_UClass_ALuxStageMeshActor_NoRegister()
	{
		return ALuxStageMeshActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ALuxStageMeshActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ALuxStageMeshActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_TranslucentMeshComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TranslucentMeshComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TranslucentMeshComponent, ALuxStageMeshActor), 0x00100000000a001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_SoftOpacityMeshComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SoftOpacityMeshComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SoftOpacityMeshComponent, ALuxStageMeshActor), 0x00100000000a001d, Z_Construct_UClass_ULuxStageMeshComponent_NoRegister());
				UProperty* NewProp_BaseMeshComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseMeshComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BaseMeshComponent, ALuxStageMeshActor), 0x00100000000a001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_FadeFrame = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FadeFrame"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(FadeFrame, ALuxStageMeshActor), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(TestEnabled, ALuxStageMeshActor);
				UProperty* NewProp_TestEnabled = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TestEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(TestEnabled, ALuxStageMeshActor), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(TestEnabled, ALuxStageMeshActor), sizeof(bool), true);
				static TCppClassTypeInfo<TCppClassTypeTraits<ALuxStageMeshActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxStageMeshActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageMeshActor.h"));
				MetaData->SetValue(NewProp_TranslucentMeshComponent, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_TranslucentMeshComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TranslucentMeshComponent, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageMeshActor.h"));
				MetaData->SetValue(NewProp_SoftOpacityMeshComponent, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_SoftOpacityMeshComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SoftOpacityMeshComponent, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageMeshActor.h"));
				MetaData->SetValue(NewProp_BaseMeshComponent, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_BaseMeshComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BaseMeshComponent, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageMeshActor.h"));
				MetaData->SetValue(NewProp_FadeFrame, TEXT("Category"), TEXT("LuxStageMeshActor"));
				MetaData->SetValue(NewProp_FadeFrame, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageMeshActor.h"));
				MetaData->SetValue(NewProp_TestEnabled, TEXT("Category"), TEXT("LuxStageMeshActor"));
				MetaData->SetValue(NewProp_TestEnabled, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageMeshActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuxStageMeshActor, 4279240633);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuxStageMeshActor(Z_Construct_UClass_ALuxStageMeshActor, &ALuxStageMeshActor::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ALuxStageMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuxStageMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
