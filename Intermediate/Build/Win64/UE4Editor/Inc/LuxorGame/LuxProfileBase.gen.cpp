// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxProfileBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxProfileBase() {}
// Cross Module References
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxPartsSticker();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxStickerSlot();
	LUXORGAME_API UEnum* Z_Construct_UEnum_LuxorGame_ELuxPartCategory();
	LUXORGAME_API UEnum* Z_Construct_UEnum_LuxorGame_ELuxStickerGuide();
	LUXORGAME_API UEnum* Z_Construct_UEnum_LuxorGame_ELuxStickerMode();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxCreationSingleColor();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxCreationTextureAsset_NoRegister();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxCreationPartsColor();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxCreationColorSlot();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxCreationColorSlotTexturePattern();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxPartCategory();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxCreationImportedPart_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxProfileBase_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxProfileBase();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	LUXORGAME_API UEnum* Z_Construct_UEnum_LuxorGame_ELuxSoulChargeType();
	LUXORGAME_API UEnum* Z_Construct_UEnum_LuxorGame_ELuxGender();
	LUXORGAME_API UEnum* Z_Construct_UEnum_LuxorGame_ELuxWeaponVariation();
// End Cross Module References
class UScriptStruct* FLuxPartsSticker::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LUXORGAME_API uint32 Get_Z_Construct_UScriptStruct_FLuxPartsSticker_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLuxPartsSticker, Z_Construct_UPackage__Script_LuxorGame(), TEXT("LuxPartsSticker"), sizeof(FLuxPartsSticker), Get_Z_Construct_UScriptStruct_FLuxPartsSticker_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLuxPartsSticker(FLuxPartsSticker::StaticStruct, TEXT("/Script/LuxorGame"), TEXT("LuxPartsSticker"), false, nullptr, nullptr);
static struct FScriptStruct_LuxorGame_StaticRegisterNativesFLuxPartsSticker
{
	FScriptStruct_LuxorGame_StaticRegisterNativesFLuxPartsSticker()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LuxPartsSticker")),new UScriptStruct::TCppStructOps<FLuxPartsSticker>);
	}
} ScriptStruct_LuxorGame_StaticRegisterNativesFLuxPartsSticker;
	UScriptStruct* Z_Construct_UScriptStruct_FLuxPartsSticker()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_LuxorGame();
		extern uint32 Get_Z_Construct_UScriptStruct_FLuxPartsSticker_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LuxPartsSticker"), sizeof(FLuxPartsSticker), Get_Z_Construct_UScriptStruct_FLuxPartsSticker_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LuxPartsSticker"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FLuxPartsSticker>, EStructFlags(0x00000001));
			UProperty* NewProp_PartsColorMask = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PartsColorMask"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PartsColorMask, FLuxPartsSticker), 0x0010000000000005, Z_Construct_UScriptStruct_FLinearColor());
			UProperty* NewProp_Slot = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Slot"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Slot, FLuxPartsSticker), 0x0010000000000005);
			UProperty* NewProp_Slot_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Slot, TEXT("Slot"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLuxStickerSlot());
			UProperty* NewProp_Type = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Type"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Type, FLuxPartsSticker), 0x0010000000000005, Z_Construct_UEnum_LuxorGame_ELuxPartCategory());
			UProperty* NewProp_Type_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Type, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_PartsColorMask, TEXT("Category"), TEXT("LuxPartsSticker"));
			MetaData->SetValue(NewProp_PartsColorMask, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_Slot, TEXT("Category"), TEXT("LuxPartsSticker"));
			MetaData->SetValue(NewProp_Slot, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_Type, TEXT("Category"), TEXT("LuxPartsSticker"));
			MetaData->SetValue(NewProp_Type, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLuxPartsSticker_CRC() { return 650106532U; }
class UScriptStruct* FLuxStickerSlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LUXORGAME_API uint32 Get_Z_Construct_UScriptStruct_FLuxStickerSlot_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLuxStickerSlot, Z_Construct_UPackage__Script_LuxorGame(), TEXT("LuxStickerSlot"), sizeof(FLuxStickerSlot), Get_Z_Construct_UScriptStruct_FLuxStickerSlot_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLuxStickerSlot(FLuxStickerSlot::StaticStruct, TEXT("/Script/LuxorGame"), TEXT("LuxStickerSlot"), false, nullptr, nullptr);
static struct FScriptStruct_LuxorGame_StaticRegisterNativesFLuxStickerSlot
{
	FScriptStruct_LuxorGame_StaticRegisterNativesFLuxStickerSlot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LuxStickerSlot")),new UScriptStruct::TCppStructOps<FLuxStickerSlot>);
	}
} ScriptStruct_LuxorGame_StaticRegisterNativesFLuxStickerSlot;
	UScriptStruct* Z_Construct_UScriptStruct_FLuxStickerSlot()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_LuxorGame();
		extern uint32 Get_Z_Construct_UScriptStruct_FLuxStickerSlot_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LuxStickerSlot"), sizeof(FLuxStickerSlot), Get_Z_Construct_UScriptStruct_FLuxStickerSlot_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LuxStickerSlot"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FLuxStickerSlot>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFlip_V, FLuxStickerSlot);
			UProperty* NewProp_bFlip_V = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bFlip_V"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFlip_V, FLuxStickerSlot), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bFlip_V, FLuxStickerSlot), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFlip_H, FLuxStickerSlot);
			UProperty* NewProp_bFlip_H = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bFlip_H"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFlip_H, FLuxStickerSlot), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bFlip_H, FLuxStickerSlot), sizeof(bool), true);
			UProperty* NewProp_OffsetY = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("OffsetY"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(OffsetY, FLuxStickerSlot), 0x0010000000000005);
			UProperty* NewProp_OffsetX = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("OffsetX"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(OffsetX, FLuxStickerSlot), 0x0010000000000005);
			UProperty* NewProp_CamRotY = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CamRotY"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CamRotY, FLuxStickerSlot), 0x0010000000000005);
			UProperty* NewProp_CamRotZ = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CamRotZ"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CamRotZ, FLuxStickerSlot), 0x0010000000000005);
			UProperty* NewProp_StickerRot = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StickerRot"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StickerRot, FLuxStickerSlot), 0x0010000000000005);
			UProperty* NewProp_StickerSize = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StickerSize"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(StickerSize, FLuxStickerSlot), 0x0010000000000005);
			UProperty* NewProp_Guide = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Guide"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Guide, FLuxStickerSlot), 0x0010000000000005, Z_Construct_UEnum_LuxorGame_ELuxStickerGuide());
			UProperty* NewProp_Guide_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Guide, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Mode = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Mode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Mode, FLuxStickerSlot), 0x0010000000000005, Z_Construct_UEnum_LuxorGame_ELuxStickerMode());
			UProperty* NewProp_Mode_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Mode, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Color = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Color"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Color, FLuxStickerSlot), 0x0010000000000005);
			UProperty* NewProp_Color_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Color, TEXT("Color"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLuxCreationSingleColor());
			UProperty* NewProp_Sticker = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Sticker"), RF_Public|RF_Transient|RF_MarkAsNative) UAssetObjectProperty(CPP_PROPERTY_BASE(Sticker, FLuxStickerSlot), 0x0014000000000005, Z_Construct_UClass_ULuxCreationTextureAsset_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_bFlip_V, TEXT("Category"), TEXT("LuxStickerSlot"));
			MetaData->SetValue(NewProp_bFlip_V, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_bFlip_H, TEXT("Category"), TEXT("LuxStickerSlot"));
			MetaData->SetValue(NewProp_bFlip_H, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_OffsetY, TEXT("Category"), TEXT("LuxStickerSlot"));
			MetaData->SetValue(NewProp_OffsetY, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_OffsetX, TEXT("Category"), TEXT("LuxStickerSlot"));
			MetaData->SetValue(NewProp_OffsetX, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_CamRotY, TEXT("Category"), TEXT("LuxStickerSlot"));
			MetaData->SetValue(NewProp_CamRotY, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_CamRotZ, TEXT("Category"), TEXT("LuxStickerSlot"));
			MetaData->SetValue(NewProp_CamRotZ, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_StickerRot, TEXT("Category"), TEXT("LuxStickerSlot"));
			MetaData->SetValue(NewProp_StickerRot, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_StickerSize, TEXT("Category"), TEXT("LuxStickerSlot"));
			MetaData->SetValue(NewProp_StickerSize, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_Guide, TEXT("Category"), TEXT("LuxStickerSlot"));
			MetaData->SetValue(NewProp_Guide, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_Mode, TEXT("Category"), TEXT("LuxStickerSlot"));
			MetaData->SetValue(NewProp_Mode, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_Color, TEXT("Category"), TEXT("LuxStickerSlot"));
			MetaData->SetValue(NewProp_Color, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_Sticker, TEXT("Category"), TEXT("LuxStickerSlot"));
			MetaData->SetValue(NewProp_Sticker, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLuxStickerSlot_CRC() { return 2869944180U; }
class UScriptStruct* FLuxCreationPartsColor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LUXORGAME_API uint32 Get_Z_Construct_UScriptStruct_FLuxCreationPartsColor_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLuxCreationPartsColor, Z_Construct_UPackage__Script_LuxorGame(), TEXT("LuxCreationPartsColor"), sizeof(FLuxCreationPartsColor), Get_Z_Construct_UScriptStruct_FLuxCreationPartsColor_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLuxCreationPartsColor(FLuxCreationPartsColor::StaticStruct, TEXT("/Script/LuxorGame"), TEXT("LuxCreationPartsColor"), false, nullptr, nullptr);
static struct FScriptStruct_LuxorGame_StaticRegisterNativesFLuxCreationPartsColor
{
	FScriptStruct_LuxorGame_StaticRegisterNativesFLuxCreationPartsColor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LuxCreationPartsColor")),new UScriptStruct::TCppStructOps<FLuxCreationPartsColor>);
	}
} ScriptStruct_LuxorGame_StaticRegisterNativesFLuxCreationPartsColor;
	UScriptStruct* Z_Construct_UScriptStruct_FLuxCreationPartsColor()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_LuxorGame();
		extern uint32 Get_Z_Construct_UScriptStruct_FLuxCreationPartsColor_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LuxCreationPartsColor"), sizeof(FLuxCreationPartsColor), Get_Z_Construct_UScriptStruct_FLuxCreationPartsColor_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LuxCreationPartsColor"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FLuxCreationPartsColor>, EStructFlags(0x00000001));
			UProperty* NewProp_Slots = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Slots"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Slots, FLuxCreationPartsColor), 0x0010000000000005);
			UProperty* NewProp_Slots_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Slots, TEXT("Slots"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLuxCreationColorSlot());
			UProperty* NewProp_PatternFlags = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PatternFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(PatternFlags, FLuxCreationPartsColor), 0x0010000000000005);
			UProperty* NewProp_PatternFlags_Inner = new(EC_InternalUseOnlyConstructor, NewProp_PatternFlags, TEXT("PatternFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, 0, sizeof(bool), true);
			UProperty* NewProp_EditableFlags = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("EditableFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(EditableFlags, FLuxCreationPartsColor), 0x0010000000000005);
			UProperty* NewProp_EditableFlags_Inner = new(EC_InternalUseOnlyConstructor, NewProp_EditableFlags, TEXT("EditableFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, 0, sizeof(bool), true);
			UProperty* NewProp_Type = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Type"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Type, FLuxCreationPartsColor), 0x0010000000000005, Z_Construct_UEnum_LuxorGame_ELuxPartCategory());
			UProperty* NewProp_Type_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Type, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_Slots, TEXT("Category"), TEXT("LuxCreationPartsColor"));
			MetaData->SetValue(NewProp_Slots, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_PatternFlags, TEXT("Category"), TEXT("LuxCreationPartsColor"));
			MetaData->SetValue(NewProp_PatternFlags, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_EditableFlags, TEXT("Category"), TEXT("LuxCreationPartsColor"));
			MetaData->SetValue(NewProp_EditableFlags, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_Type, TEXT("Category"), TEXT("LuxCreationPartsColor"));
			MetaData->SetValue(NewProp_Type, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLuxCreationPartsColor_CRC() { return 3283542317U; }
class UScriptStruct* FLuxCreationColorSlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LUXORGAME_API uint32 Get_Z_Construct_UScriptStruct_FLuxCreationColorSlot_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLuxCreationColorSlot, Z_Construct_UPackage__Script_LuxorGame(), TEXT("LuxCreationColorSlot"), sizeof(FLuxCreationColorSlot), Get_Z_Construct_UScriptStruct_FLuxCreationColorSlot_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLuxCreationColorSlot(FLuxCreationColorSlot::StaticStruct, TEXT("/Script/LuxorGame"), TEXT("LuxCreationColorSlot"), false, nullptr, nullptr);
static struct FScriptStruct_LuxorGame_StaticRegisterNativesFLuxCreationColorSlot
{
	FScriptStruct_LuxorGame_StaticRegisterNativesFLuxCreationColorSlot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LuxCreationColorSlot")),new UScriptStruct::TCppStructOps<FLuxCreationColorSlot>);
	}
} ScriptStruct_LuxorGame_StaticRegisterNativesFLuxCreationColorSlot;
	UScriptStruct* Z_Construct_UScriptStruct_FLuxCreationColorSlot()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_LuxorGame();
		extern uint32 Get_Z_Construct_UScriptStruct_FLuxCreationColorSlot_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LuxCreationColorSlot"), sizeof(FLuxCreationColorSlot), Get_Z_Construct_UScriptStruct_FLuxCreationColorSlot_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LuxCreationColorSlot"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FLuxCreationColorSlot>, EStructFlags(0x00000001));
			UProperty* NewProp_Pattern = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Pattern"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Pattern, FLuxCreationColorSlot), 0x0010000000000005, Z_Construct_UScriptStruct_FLuxCreationColorSlotTexturePattern());
			UProperty* NewProp_Color = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Color"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Color, FLuxCreationColorSlot), 0x0010000000000005, Z_Construct_UScriptStruct_FLinearColor());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOverride, FLuxCreationColorSlot);
			UProperty* NewProp_bOverride = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOverride, FLuxCreationColorSlot), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bOverride, FLuxCreationColorSlot), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_Pattern, TEXT("Category"), TEXT("LuxCreationColorSlot"));
			MetaData->SetValue(NewProp_Pattern, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_Color, TEXT("Category"), TEXT("LuxCreationColorSlot"));
			MetaData->SetValue(NewProp_Color, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_bOverride, TEXT("Category"), TEXT("LuxCreationColorSlot"));
			MetaData->SetValue(NewProp_bOverride, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLuxCreationColorSlot_CRC() { return 538556155U; }
class UScriptStruct* FLuxCreationColorSlotTexturePattern::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LUXORGAME_API uint32 Get_Z_Construct_UScriptStruct_FLuxCreationColorSlotTexturePattern_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLuxCreationColorSlotTexturePattern, Z_Construct_UPackage__Script_LuxorGame(), TEXT("LuxCreationColorSlotTexturePattern"), sizeof(FLuxCreationColorSlotTexturePattern), Get_Z_Construct_UScriptStruct_FLuxCreationColorSlotTexturePattern_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLuxCreationColorSlotTexturePattern(FLuxCreationColorSlotTexturePattern::StaticStruct, TEXT("/Script/LuxorGame"), TEXT("LuxCreationColorSlotTexturePattern"), false, nullptr, nullptr);
static struct FScriptStruct_LuxorGame_StaticRegisterNativesFLuxCreationColorSlotTexturePattern
{
	FScriptStruct_LuxorGame_StaticRegisterNativesFLuxCreationColorSlotTexturePattern()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LuxCreationColorSlotTexturePattern")),new UScriptStruct::TCppStructOps<FLuxCreationColorSlotTexturePattern>);
	}
} ScriptStruct_LuxorGame_StaticRegisterNativesFLuxCreationColorSlotTexturePattern;
	UScriptStruct* Z_Construct_UScriptStruct_FLuxCreationColorSlotTexturePattern()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_LuxorGame();
		extern uint32 Get_Z_Construct_UScriptStruct_FLuxCreationColorSlotTexturePattern_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LuxCreationColorSlotTexturePattern"), sizeof(FLuxCreationColorSlotTexturePattern), Get_Z_Construct_UScriptStruct_FLuxCreationColorSlotTexturePattern_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LuxCreationColorSlotTexturePattern"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FLuxCreationColorSlotTexturePattern>, EStructFlags(0x00000001));
			UProperty* NewProp_Color = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Color"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Color, FLuxCreationColorSlotTexturePattern), 0x0010000000000005);
			UProperty* NewProp_Color_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Color, TEXT("Color"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLuxCreationSingleColor());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFlip_V, FLuxCreationColorSlotTexturePattern);
			UProperty* NewProp_bFlip_V = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bFlip_V"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFlip_V, FLuxCreationColorSlotTexturePattern), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bFlip_V, FLuxCreationColorSlotTexturePattern), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFlip_H, FLuxCreationColorSlotTexturePattern);
			UProperty* NewProp_bFlip_H = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bFlip_H"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFlip_H, FLuxCreationColorSlotTexturePattern), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bFlip_H, FLuxCreationColorSlotTexturePattern), sizeof(bool), true);
			UProperty* NewProp_Rotate = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Rotate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Rotate, FLuxCreationColorSlotTexturePattern), 0x0010000000000005);
			UProperty* NewProp_Size = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Size"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Size, FLuxCreationColorSlotTexturePattern), 0x0010000000000005);
			UProperty* NewProp_Pattern = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Pattern"), RF_Public|RF_Transient|RF_MarkAsNative) UAssetObjectProperty(CPP_PROPERTY_BASE(Pattern, FLuxCreationColorSlotTexturePattern), 0x0014000000000005, Z_Construct_UClass_ULuxCreationTextureAsset_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_Color, TEXT("Category"), TEXT("LuxCreationColorSlotTexturePattern"));
			MetaData->SetValue(NewProp_Color, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_bFlip_V, TEXT("Category"), TEXT("LuxCreationColorSlotTexturePattern"));
			MetaData->SetValue(NewProp_bFlip_V, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_bFlip_H, TEXT("Category"), TEXT("LuxCreationColorSlotTexturePattern"));
			MetaData->SetValue(NewProp_bFlip_H, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_Rotate, TEXT("Category"), TEXT("LuxCreationColorSlotTexturePattern"));
			MetaData->SetValue(NewProp_Rotate, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_Size, TEXT("Category"), TEXT("LuxCreationColorSlotTexturePattern"));
			MetaData->SetValue(NewProp_Size, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_Pattern, TEXT("Category"), TEXT("LuxCreationColorSlotTexturePattern"));
			MetaData->SetValue(NewProp_Pattern, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLuxCreationColorSlotTexturePattern_CRC() { return 1522580437U; }
class UScriptStruct* FLuxPartCategory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LUXORGAME_API uint32 Get_Z_Construct_UScriptStruct_FLuxPartCategory_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLuxPartCategory, Z_Construct_UPackage__Script_LuxorGame(), TEXT("LuxPartCategory"), sizeof(FLuxPartCategory), Get_Z_Construct_UScriptStruct_FLuxPartCategory_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLuxPartCategory(FLuxPartCategory::StaticStruct, TEXT("/Script/LuxorGame"), TEXT("LuxPartCategory"), false, nullptr, nullptr);
static struct FScriptStruct_LuxorGame_StaticRegisterNativesFLuxPartCategory
{
	FScriptStruct_LuxorGame_StaticRegisterNativesFLuxPartCategory()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LuxPartCategory")),new UScriptStruct::TCppStructOps<FLuxPartCategory>);
	}
} ScriptStruct_LuxorGame_StaticRegisterNativesFLuxPartCategory;
	UScriptStruct* Z_Construct_UScriptStruct_FLuxPartCategory()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_LuxorGame();
		extern uint32 Get_Z_Construct_UScriptStruct_FLuxPartCategory_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LuxPartCategory"), sizeof(FLuxPartCategory), Get_Z_Construct_UScriptStruct_FLuxPartCategory_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LuxPartCategory"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FLuxPartCategory>, EStructFlags(0x00000001));
			UProperty* NewProp_Part = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Part"), RF_Public|RF_Transient|RF_MarkAsNative) UAssetObjectProperty(CPP_PROPERTY_BASE(Part, FLuxPartCategory), 0x0014000000000005, Z_Construct_UClass_ULuxCreationImportedPart_NoRegister());
			UProperty* NewProp_Type = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Type"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Type, FLuxPartCategory), 0x0010000000000005, Z_Construct_UEnum_LuxorGame_ELuxPartCategory());
			UProperty* NewProp_Type_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Type, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_Part, TEXT("Category"), TEXT("LuxPartCategory"));
			MetaData->SetValue(NewProp_Part, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
			MetaData->SetValue(NewProp_Type, TEXT("Category"), TEXT("LuxPartCategory"));
			MetaData->SetValue(NewProp_Type, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLuxPartCategory_CRC() { return 1549319041U; }
	void ULuxProfileBase::StaticRegisterNativesULuxProfileBase()
	{
	}
	UClass* Z_Construct_UClass_ULuxProfileBase_NoRegister()
	{
		return ULuxProfileBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ULuxProfileBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ULuxProfileBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_VoiceEvilDepth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VoiceEvilDepth"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(VoiceEvilDepth, ULuxProfileBase), 0x0010000000000005);
				UProperty* NewProp_VoiceFormant = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VoiceFormant"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(VoiceFormant, ULuxProfileBase), 0x0010000000000005);
				UProperty* NewProp_VoicePitchShifter = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VoicePitchShifter"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(VoicePitchShifter, ULuxProfileBase), 0x0010000000000005);
				UProperty* NewProp_VoicePitch = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VoicePitch"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(VoicePitch, ULuxProfileBase), 0x0010000000000005);
				UProperty* NewProp_VoiceBankId = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VoiceBankId"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(VoiceBankId, ULuxProfileBase), 0x0010000000000005);
				UProperty* NewProp_DisplayName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DisplayName"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(DisplayName, ULuxProfileBase), 0x0010000000000005);
				UProperty* NewProp_BodyWeight = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BodyWeight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BodyWeight, ULuxProfileBase), 0x0010000000000005);
				UProperty* NewProp_hitEffectPresetId = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("hitEffectPresetId"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(hitEffectPresetId, ULuxProfileBase), 0x0010000000000005);
				UProperty* NewProp_SoulChargeType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SoulChargeType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(SoulChargeType, ULuxProfileBase), 0x0010000000000005, Z_Construct_UEnum_LuxorGame_ELuxSoulChargeType());
				UProperty* NewProp_SoulChargeType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_SoulChargeType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_Gender = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Gender"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Gender, ULuxProfileBase), 0x0010000000000005, Z_Construct_UEnum_LuxorGame_ELuxGender());
				UProperty* NewProp_Gender_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Gender, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_WeaponVariation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponVariation"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(WeaponVariation, ULuxProfileBase), 0x0010000000000005, Z_Construct_UEnum_LuxorGame_ELuxWeaponVariation());
				UProperty* NewProp_WeaponVariation_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_WeaponVariation, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				static TCppClassTypeInfo<TCppClassTypeTraits<ULuxProfileBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxProfileBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
				MetaData->SetValue(NewProp_VoiceEvilDepth, TEXT("Category"), TEXT("Voice"));
				MetaData->SetValue(NewProp_VoiceEvilDepth, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
				MetaData->SetValue(NewProp_VoiceFormant, TEXT("Category"), TEXT("Voice"));
				MetaData->SetValue(NewProp_VoiceFormant, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
				MetaData->SetValue(NewProp_VoicePitchShifter, TEXT("Category"), TEXT("Voice"));
				MetaData->SetValue(NewProp_VoicePitchShifter, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
				MetaData->SetValue(NewProp_VoicePitch, TEXT("Category"), TEXT("Voice"));
				MetaData->SetValue(NewProp_VoicePitch, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
				MetaData->SetValue(NewProp_VoiceBankId, TEXT("Category"), TEXT("Voice"));
				MetaData->SetValue(NewProp_VoiceBankId, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
				MetaData->SetValue(NewProp_VoiceBankId, TEXT("ToolTip"), TEXT("Overrides character voice with the selected ID. Regular profile can use values of other cast in decimal (ex: 064 -> 100 for Azwel). Creation profiles will just default to the first voice when these are used."));
				MetaData->SetValue(NewProp_DisplayName, TEXT("Category"), TEXT("Character"));
				MetaData->SetValue(NewProp_DisplayName, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
				MetaData->SetValue(NewProp_BodyWeight, TEXT("Category"), TEXT("Character"));
				MetaData->SetValue(NewProp_BodyWeight, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
				MetaData->SetValue(NewProp_hitEffectPresetId, TEXT("Category"), TEXT("Character|Effects"));
				MetaData->SetValue(NewProp_hitEffectPresetId, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
				MetaData->SetValue(NewProp_SoulChargeType, TEXT("Category"), TEXT("Character|Effects"));
				MetaData->SetValue(NewProp_SoulChargeType, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
				MetaData->SetValue(NewProp_Gender, TEXT("Category"), TEXT("Character"));
				MetaData->SetValue(NewProp_Gender, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
				MetaData->SetValue(NewProp_WeaponVariation, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_WeaponVariation, TEXT("ModuleRelativePath"), TEXT("Public/LuxProfileBase.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuxProfileBase, 2260186305);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuxProfileBase(Z_Construct_UClass_ULuxProfileBase, &ULuxProfileBase::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ULuxProfileBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuxProfileBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
