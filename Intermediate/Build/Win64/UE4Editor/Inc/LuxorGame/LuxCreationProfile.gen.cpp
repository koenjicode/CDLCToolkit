// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxCreationProfile.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxCreationProfile() {}
// Cross Module References
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxCreationProfile_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxCreationProfile();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxProfileBase();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
	LUXORGAME_API UEnum* Z_Construct_UEnum_LuxorGame_ELuxMuscleType();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxCreationTextureAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxTraceColorPalletSetting();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxPermanentEffectSetting();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxPartsSticker();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxOffsetPartSetting();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxCreationPartsColor();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxCreationSingleColor();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxCreationSkinColor();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxPartCategory();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxBodyScale();
	LUXORGAME_API UEnum* Z_Construct_UEnum_LuxorGame_ELuxFightStyle();
// End Cross Module References
	void ULuxCreationProfile::StaticRegisterNativesULuxCreationProfile()
	{
	}
	UClass* Z_Construct_UClass_ULuxCreationProfile_NoRegister()
	{
		return ULuxCreationProfile::StaticClass();
	}
	UClass* Z_Construct_UClass_ULuxCreationProfile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ULuxProfileBase();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ULuxCreationProfile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_UniqueTextureBaseName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("UniqueTextureBaseName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(UniqueTextureBaseName, ULuxCreationProfile), 0x0010000000000005);
				UProperty* NewProp_UniqueTexturePath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("UniqueTexturePath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(UniqueTexturePath, ULuxCreationProfile), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUniqueColorMask, ULuxCreationProfile);
				UProperty* NewProp_bUniqueColorMask = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUniqueColorMask"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUniqueColorMask, ULuxCreationProfile), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bUniqueColorMask, ULuxCreationProfile), sizeof(bool), true);
				UProperty* NewProp_Muscle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Muscle"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Muscle, ULuxCreationProfile), 0x0010000000000005, Z_Construct_UEnum_LuxorGame_ELuxMuscleType());
				UProperty* NewProp_Muscle_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Muscle, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_EmissionMaskBaseName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EmissionMaskBaseName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(EmissionMaskBaseName, ULuxCreationProfile), 0x0010000000000005);
				UProperty* NewProp_EmissionMaskPath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EmissionMaskPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(EmissionMaskPath, ULuxCreationProfile), 0x0010000000000005);
				UProperty* NewProp_EyebrowTexture = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EyebrowTexture"), RF_Public|RF_Transient|RF_MarkAsNative) UAssetObjectProperty(CPP_PROPERTY_BASE(EyebrowTexture, ULuxCreationProfile), 0x0014000000000005, Z_Construct_UClass_ULuxCreationTextureAsset_NoRegister());
				UProperty* NewProp_SkinReplaceMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SkinReplaceMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UAssetObjectProperty(CPP_PROPERTY_BASE(SkinReplaceMaterial, ULuxCreationProfile), 0x0014000000000005, Z_Construct_UClass_UMaterialInstance_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(PartsBreakableUpper, ULuxCreationProfile);
				UProperty* NewProp_PartsBreakableUpper = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PartsBreakableUpper"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(PartsBreakableUpper, ULuxCreationProfile), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(PartsBreakableUpper, ULuxCreationProfile), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(PartsBreakableMiddle, ULuxCreationProfile);
				UProperty* NewProp_PartsBreakableMiddle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PartsBreakableMiddle"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(PartsBreakableMiddle, ULuxCreationProfile), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(PartsBreakableMiddle, ULuxCreationProfile), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(PartsBreakableLower, ULuxCreationProfile);
				UProperty* NewProp_PartsBreakableLower = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PartsBreakableLower"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(PartsBreakableLower, ULuxCreationProfile), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(PartsBreakableLower, ULuxCreationProfile), sizeof(bool), true);
				UProperty* NewProp_TraceColorSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TraceColorSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(TraceColorSettings, ULuxCreationProfile), 0x0010000000000005);
				UProperty* NewProp_TraceColorSettings_Inner = new(EC_InternalUseOnlyConstructor, NewProp_TraceColorSettings, TEXT("TraceColorSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLuxTraceColorPalletSetting());
				UProperty* NewProp_PermanentEffects = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PermanentEffects"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(PermanentEffects, ULuxCreationProfile), 0x0010000000000005);
				UProperty* NewProp_PermanentEffects_Inner = new(EC_InternalUseOnlyConstructor, NewProp_PermanentEffects, TEXT("PermanentEffects"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLuxPermanentEffectSetting());
				UProperty* NewProp_Sticker = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sticker"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Sticker, ULuxCreationProfile), 0x0010000000000005);
				UProperty* NewProp_Sticker_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Sticker, TEXT("Sticker"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLuxPartsSticker());
				UProperty* NewProp_ExtraPartsSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ExtraPartsSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ExtraPartsSettings, ULuxCreationProfile), 0x0010000000000005);
				UProperty* NewProp_ExtraPartsSettings_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ExtraPartsSettings, TEXT("ExtraPartsSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLuxOffsetPartSetting());
				UProperty* NewProp_WeaponColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WeaponColor, ULuxCreationProfile), 0x0010000000000005, Z_Construct_UScriptStruct_FLuxCreationPartsColor());
				UProperty* NewProp_PartsColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PartsColor"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(PartsColor, ULuxCreationProfile), 0x0010000000000005);
				UProperty* NewProp_PartsColor_Inner = new(EC_InternalUseOnlyConstructor, NewProp_PartsColor, TEXT("PartsColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLuxCreationPartsColor());
				UProperty* NewProp_beardColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("beardColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(beardColor, ULuxCreationProfile), 0x0010000000000005, Z_Construct_UScriptStruct_FLuxCreationSingleColor());
				UProperty* NewProp_EyebrowColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EyebrowColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EyebrowColor, ULuxCreationProfile), 0x0010000000000005, Z_Construct_UScriptStruct_FLuxCreationSingleColor());
				UProperty* NewProp_ScleraEmission = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ScleraEmission"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ScleraEmission, ULuxCreationProfile), 0x0010000000000005, Z_Construct_UScriptStruct_FLuxCreationSingleColor());
				UProperty* NewProp_ScleraColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ScleraColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ScleraColor, ULuxCreationProfile), 0x0010000000000005, Z_Construct_UScriptStruct_FLuxCreationSingleColor());
				UProperty* NewProp_IrisEmission = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IrisEmission"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(IrisEmission, ULuxCreationProfile), 0x0010000000000005, Z_Construct_UScriptStruct_FLuxCreationSingleColor());
				UProperty* NewProp_IrisColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IrisColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(IrisColor, ULuxCreationProfile), 0x0010000000000005, Z_Construct_UScriptStruct_FLuxCreationSingleColor());
				UProperty* NewProp_SkinEmission = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SkinEmission"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SkinEmission, ULuxCreationProfile), 0x0010000000000005, Z_Construct_UScriptStruct_FLuxCreationSkinColor());
				UProperty* NewProp_SkinColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SkinColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SkinColor, ULuxCreationProfile), 0x0010000000000005, Z_Construct_UScriptStruct_FLuxCreationSkinColor());
				UProperty* NewProp_Parts = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Parts"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Parts, ULuxCreationProfile), 0x0010000000000005);
				UProperty* NewProp_Parts_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Parts, TEXT("Parts"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLuxPartCategory());
				UProperty* NewProp_BodyScales = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BodyScales"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(BodyScales, ULuxCreationProfile), 0x0010000000000005);
				UProperty* NewProp_BodyScales_Inner = new(EC_InternalUseOnlyConstructor, NewProp_BodyScales, TEXT("BodyScales"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLuxBodyScale());
				UProperty* NewProp_Style = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Style"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Style, ULuxCreationProfile), 0x0010000000000005, Z_Construct_UEnum_LuxorGame_ELuxFightStyle());
				UProperty* NewProp_Style_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Style, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_characterName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("characterName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(characterName, ULuxCreationProfile), 0x0010000000000005);
				static TCppClassTypeInfo<TCppClassTypeTraits<ULuxCreationProfile> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxCreationProfile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_UniqueTextureBaseName, TEXT("Category"), TEXT("Body|Skin"));
				MetaData->SetValue(NewProp_UniqueTextureBaseName, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_UniqueTextureBaseName, TEXT("ToolTip"), TEXT("Base filename shared between textures. Must use 'Unique' muscle type. Ex: nude_r00c"));
				MetaData->SetValue(NewProp_UniqueTexturePath, TEXT("Category"), TEXT("Body|Skin"));
				MetaData->SetValue(NewProp_UniqueTexturePath, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_UniqueTexturePath, TEXT("ToolTip"), TEXT("Folder path to custom textures. Must use 'Unique' muscle type. Ex: /Game/Chara/00c/Texture/"));
				MetaData->SetValue(NewProp_bUniqueColorMask, TEXT("Category"), TEXT("Body|Skin"));
				MetaData->SetValue(NewProp_bUniqueColorMask, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_bUniqueColorMask, TEXT("ToolTip"), TEXT("Specifies if a custom skin color mask is used."));
				MetaData->SetValue(NewProp_Muscle, TEXT("Category"), TEXT("Body|Skin"));
				MetaData->SetValue(NewProp_Muscle, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_Muscle, TEXT("ToolTip"), TEXT("Muscle type. Unique is used to load textures from 'UniqueTexturePath' + 'UniqueTextureBaseName'."));
				MetaData->SetValue(NewProp_EmissionMaskBaseName, TEXT("Category"), TEXT("Body|Skin"));
				MetaData->SetValue(NewProp_EmissionMaskBaseName, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_EmissionMaskBaseName, TEXT("ToolTip"), TEXT("Base filename shared between textures. Ex: nude_r00c"));
				MetaData->SetValue(NewProp_EmissionMaskPath, TEXT("Category"), TEXT("Body|Skin"));
				MetaData->SetValue(NewProp_EmissionMaskPath, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_EmissionMaskPath, TEXT("ToolTip"), TEXT("Folder path to custom textures. Ex: /Game/Chara/00c/Texture/"));
				MetaData->SetValue(NewProp_EyebrowTexture, TEXT("Category"), TEXT("Body|Hair"));
				MetaData->SetValue(NewProp_EyebrowTexture, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_EyebrowTexture, TEXT("ToolTip"), TEXT("LuxCreationTextureAsset that replaces the eyebrow texture."));
				MetaData->SetValue(NewProp_SkinReplaceMaterial, TEXT("Category"), TEXT("Body|Skin"));
				MetaData->SetValue(NewProp_SkinReplaceMaterial, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_SkinReplaceMaterial, TEXT("ToolTip"), TEXT("Material that replaces all materials that have IsSkin set to 1.0."));
				MetaData->SetValue(NewProp_PartsBreakableUpper, TEXT("Category"), TEXT("Equipment|BreakFlags"));
				MetaData->SetValue(NewProp_PartsBreakableUpper, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_PartsBreakableMiddle, TEXT("Category"), TEXT("Equipment|BreakFlags"));
				MetaData->SetValue(NewProp_PartsBreakableMiddle, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_PartsBreakableLower, TEXT("Category"), TEXT("Equipment|BreakFlags"));
				MetaData->SetValue(NewProp_PartsBreakableLower, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_TraceColorSettings, TEXT("Category"), TEXT("VFX|Colors"));
				MetaData->SetValue(NewProp_TraceColorSettings, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_PermanentEffects, TEXT("Category"), TEXT("VFX"));
				MetaData->SetValue(NewProp_PermanentEffects, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_Sticker, TEXT("Category"), TEXT("Sticker"));
				MetaData->SetValue(NewProp_Sticker, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_ExtraPartsSettings, TEXT("Category"), TEXT("Equipment|Extra Part"));
				MetaData->SetValue(NewProp_ExtraPartsSettings, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_WeaponColor, TEXT("Category"), TEXT("Weapon|Colors"));
				MetaData->SetValue(NewProp_WeaponColor, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_PartsColor, TEXT("Category"), TEXT("Equipment|Colors"));
				MetaData->SetValue(NewProp_PartsColor, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_beardColor, TEXT("Category"), TEXT("Body|Hair|Colors"));
				MetaData->SetValue(NewProp_beardColor, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_EyebrowColor, TEXT("Category"), TEXT("Body|Hair|Colors"));
				MetaData->SetValue(NewProp_EyebrowColor, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_ScleraEmission, TEXT("Category"), TEXT("Body|Eye|Colors"));
				MetaData->SetValue(NewProp_ScleraEmission, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_ScleraColor, TEXT("Category"), TEXT("Body|Eye|Colors"));
				MetaData->SetValue(NewProp_ScleraColor, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_IrisEmission, TEXT("Category"), TEXT("Body|Eye|Colors"));
				MetaData->SetValue(NewProp_IrisEmission, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_IrisColor, TEXT("Category"), TEXT("Body|Eye|Colors"));
				MetaData->SetValue(NewProp_IrisColor, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_SkinEmission, TEXT("Category"), TEXT("Body|Skin|Colors"));
				MetaData->SetValue(NewProp_SkinEmission, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_SkinColor, TEXT("Category"), TEXT("Body|Skin|Colors"));
				MetaData->SetValue(NewProp_SkinColor, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_Parts, TEXT("Category"), TEXT("Equipment"));
				MetaData->SetValue(NewProp_Parts, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_BodyScales, TEXT("Category"), TEXT("Body"));
				MetaData->SetValue(NewProp_BodyScales, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_Style, TEXT("Category"), TEXT("Character"));
				MetaData->SetValue(NewProp_Style, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
				MetaData->SetValue(NewProp_characterName, TEXT("Category"), TEXT("Character"));
				MetaData->SetValue(NewProp_characterName, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationProfile.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuxCreationProfile, 1370211282);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuxCreationProfile(Z_Construct_UClass_ULuxCreationProfile, &ULuxCreationProfile::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ULuxCreationProfile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuxCreationProfile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
