// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxStageHideableMeshActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxStageHideableMeshActor() {}
// Cross Module References
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxStageHideableMeshActor_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxStageHideableMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxStageMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ALuxStageHideableMeshActor::StaticRegisterNativesALuxStageHideableMeshActor()
	{
	}
	UClass* Z_Construct_UClass_ALuxStageHideableMeshActor_NoRegister()
	{
		return ALuxStageHideableMeshActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ALuxStageHideableMeshActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ALuxStageHideableMeshActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_DitherFrame = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DitherFrame"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(DitherFrame, ALuxStageHideableMeshActor), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDitherEnabled, ALuxStageHideableMeshActor);
				UProperty* NewProp_bDitherEnabled = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDitherEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDitherEnabled, ALuxStageHideableMeshActor), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bDitherEnabled, ALuxStageHideableMeshActor), sizeof(bool), true);
				UProperty* NewProp_DitherMeshComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DitherMeshComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DitherMeshComponent, ALuxStageHideableMeshActor), 0x00100000000a001d, Z_Construct_UClass_ULuxStageMeshComponent_NoRegister());
				UProperty* NewProp_BaseMeshComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseMeshComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BaseMeshComponent, ALuxStageHideableMeshActor), 0x00100000000a001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<ALuxStageHideableMeshActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxStageHideableMeshActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageHideableMeshActor.h"));
				MetaData->SetValue(NewProp_DitherFrame, TEXT("Category"), TEXT("LuxStageHideableMeshActor"));
				MetaData->SetValue(NewProp_DitherFrame, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageHideableMeshActor.h"));
				MetaData->SetValue(NewProp_bDitherEnabled, TEXT("Category"), TEXT("LuxStageHideableMeshActor"));
				MetaData->SetValue(NewProp_bDitherEnabled, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageHideableMeshActor.h"));
				MetaData->SetValue(NewProp_DitherMeshComponent, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_DitherMeshComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_DitherMeshComponent, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageHideableMeshActor.h"));
				MetaData->SetValue(NewProp_BaseMeshComponent, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_BaseMeshComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BaseMeshComponent, TEXT("ModuleRelativePath"), TEXT("Public/LuxStageHideableMeshActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuxStageHideableMeshActor, 3665052202);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuxStageHideableMeshActor(Z_Construct_UClass_ALuxStageHideableMeshActor, &ALuxStageHideableMeshActor::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ALuxStageHideableMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuxStageHideableMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
