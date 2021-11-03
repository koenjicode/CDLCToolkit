// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxCreationTextureAsset.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxCreationTextureAsset() {}
// Cross Module References
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxCreationTextureAsset_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxCreationTextureAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void ULuxCreationTextureAsset::StaticRegisterNativesULuxCreationTextureAsset()
	{
	}
	UClass* Z_Construct_UClass_ULuxCreationTextureAsset_NoRegister()
	{
		return ULuxCreationTextureAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_ULuxCreationTextureAsset()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ULuxCreationTextureAsset::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_UIDefaultSize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("UIDefaultSize"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(UIDefaultSize, ULuxCreationTextureAsset), 0x0010000000000005);
				UProperty* NewProp_SizeMax = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SizeMax"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SizeMax, ULuxCreationTextureAsset), 0x0010000000000005);
				UProperty* NewProp_SizeMin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SizeMin"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SizeMin, ULuxCreationTextureAsset), 0x0010000000000005);
				UProperty* NewProp_DefaultColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultColor"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DefaultColor, ULuxCreationTextureAsset), 0x0010000000000005);
				UProperty* NewProp_DefaultColor_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DefaultColor, TEXT("DefaultColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_EditableFlags = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EditableFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(EditableFlags, ULuxCreationTextureAsset), 0x0010000000000005);
				UProperty* NewProp_EditableFlags_Inner = new(EC_InternalUseOnlyConstructor, NewProp_EditableFlags, TEXT("EditableFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, 0, sizeof(bool), true);
				UProperty* NewProp_Normal = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Normal"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Normal, ULuxCreationTextureAsset), 0x0010000000000005, Z_Construct_UClass_UTexture2D_NoRegister());
				UProperty* NewProp_Mask = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mask"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mask, ULuxCreationTextureAsset), 0x0010000000000005, Z_Construct_UClass_UTexture2D_NoRegister());
				UProperty* NewProp_Color = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Color"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Color, ULuxCreationTextureAsset), 0x0010000000000005, Z_Construct_UClass_UTexture2D_NoRegister());
				UProperty* NewProp_Identifier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Identifier"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Identifier, ULuxCreationTextureAsset), 0x0010000000000005);
				static TCppClassTypeInfo<TCppClassTypeTraits<ULuxCreationTextureAsset> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxCreationTextureAsset.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationTextureAsset.h"));
				MetaData->SetValue(NewProp_UIDefaultSize, TEXT("Category"), TEXT("LuxCreationTextureAsset"));
				MetaData->SetValue(NewProp_UIDefaultSize, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationTextureAsset.h"));
				MetaData->SetValue(NewProp_UIDefaultSize, TEXT("ToolTip"), TEXT("Default size on the ingame size slider. All Texture Assets have this set to 50."));
				MetaData->SetValue(NewProp_SizeMax, TEXT("Category"), TEXT("LuxCreationTextureAsset"));
				MetaData->SetValue(NewProp_SizeMax, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationTextureAsset.h"));
				MetaData->SetValue(NewProp_SizeMax, TEXT("ToolTip"), TEXT("For patterns SizeMin should be larger than SizeMax. A larger value will cause the texture to tile more, like what happens when you scale a pattern down ingame."));
				MetaData->SetValue(NewProp_SizeMin, TEXT("Category"), TEXT("LuxCreationTextureAsset"));
				MetaData->SetValue(NewProp_SizeMin, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationTextureAsset.h"));
				MetaData->SetValue(NewProp_SizeMin, TEXT("ToolTip"), TEXT("For patterns SizeMin should be larger than SizeMax. A larger value will cause the texture to tile more, like what happens when you scale a pattern down ingame."));
				MetaData->SetValue(NewProp_DefaultColor, TEXT("Category"), TEXT("LuxCreationTextureAsset"));
				MetaData->SetValue(NewProp_DefaultColor, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationTextureAsset.h"));
				MetaData->SetValue(NewProp_DefaultColor, TEXT("ToolTip"), TEXT("Default colors in creation."));
				MetaData->SetValue(NewProp_EditableFlags, TEXT("Category"), TEXT("LuxCreationTextureAsset"));
				MetaData->SetValue(NewProp_EditableFlags, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationTextureAsset.h"));
				MetaData->SetValue(NewProp_EditableFlags, TEXT("ToolTip"), TEXT("Valid color slots"));
				MetaData->SetValue(NewProp_Normal, TEXT("Category"), TEXT("LuxCreationTextureAsset"));
				MetaData->SetValue(NewProp_Normal, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationTextureAsset.h"));
				MetaData->SetValue(NewProp_Normal, TEXT("ToolTip"), TEXT("Normal Map"));
				MetaData->SetValue(NewProp_Mask, TEXT("Category"), TEXT("LuxCreationTextureAsset"));
				MetaData->SetValue(NewProp_Mask, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationTextureAsset.h"));
				MetaData->SetValue(NewProp_Mask, TEXT("ToolTip"), TEXT("Color Mask"));
				MetaData->SetValue(NewProp_Color, TEXT("Category"), TEXT("LuxCreationTextureAsset"));
				MetaData->SetValue(NewProp_Color, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationTextureAsset.h"));
				MetaData->SetValue(NewProp_Color, TEXT("ToolTip"), TEXT("Base Color"));
				MetaData->SetValue(NewProp_Identifier, TEXT("Category"), TEXT("LuxCreationTextureAsset"));
				MetaData->SetValue(NewProp_Identifier, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationTextureAsset.h"));
				MetaData->SetValue(NewProp_Identifier, TEXT("ToolTip"), TEXT("Unique Identifier; Its use atm is unknown."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuxCreationTextureAsset, 3439695539);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuxCreationTextureAsset(Z_Construct_UClass_ULuxCreationTextureAsset, &ULuxCreationTextureAsset::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ULuxCreationTextureAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuxCreationTextureAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
