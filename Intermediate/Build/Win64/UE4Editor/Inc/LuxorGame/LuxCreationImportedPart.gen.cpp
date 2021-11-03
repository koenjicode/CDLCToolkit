// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxCreationImportedPart.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxCreationImportedPart() {}
// Cross Module References
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxCreationImportedPart_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxCreationImportedPart();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxFacialAsset_NoRegister();
	LUXORGAME_API UEnum* Z_Construct_UEnum_LuxorGame_ELuxPartsSE();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FStringAssetReference();
	LUXORGAME_API UEnum* Z_Construct_UEnum_LuxorGame_ELuxPartsBreak();
	LUXORGAME_API UEnum* Z_Construct_UEnum_LuxorGame_ELuxGender();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxOffsetPart();
	LUXORGAME_API UEnum* Z_Construct_UEnum_LuxorGame_ELuxColorEditableFlag();
	LUXORGAME_API UEnum* Z_Construct_UEnum_LuxorGame_ELuxPartSlot();
	LUXORGAME_API UEnum* Z_Construct_UEnum_LuxorGame_ELuxPartCategory();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxVariationRequest();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxMeshDataVariation();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxSlotMeshData();
	LUXORGAME_API UEnum* Z_Construct_UEnum_LuxorGame_ELuxPartPriority();
// End Cross Module References
	void ULuxCreationImportedPart::StaticRegisterNativesULuxCreationImportedPart()
	{
	}
	UClass* Z_Construct_UClass_ULuxCreationImportedPart_NoRegister()
	{
		return ULuxCreationImportedPart::StaticClass();
	}
	UClass* Z_Construct_UClass_ULuxCreationImportedPart()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ULuxCreationImportedPart::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_Supplements = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Supplements"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Supplements, ULuxCreationImportedPart), 0x001000800000000d);
				UProperty* NewProp_Supplements_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Supplements, TEXT("Supplements"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0002000000080008, Z_Construct_UClass_ULuxFacialAsset_NoRegister());
				UProperty* NewProp_SEMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SEMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(SEMaterial, ULuxCreationImportedPart), 0x0010000000000005, Z_Construct_UEnum_LuxorGame_ELuxPartsSE());
				UProperty* NewProp_SEMaterial_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_SEMaterial, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_ThumbnailPath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ThumbnailPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ThumbnailPath, ULuxCreationImportedPart), 0x0010000000000005, Z_Construct_UScriptStruct_FStringAssetReference());
				UProperty* NewProp_BreakType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BreakType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(BreakType, ULuxCreationImportedPart), 0x0010000000000005, Z_Construct_UEnum_LuxorGame_ELuxPartsBreak());
				UProperty* NewProp_BreakType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_BreakType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsUnbreakable, ULuxCreationImportedPart);
				UProperty* NewProp_bIsUnbreakable = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsUnbreakable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsUnbreakable, ULuxCreationImportedPart), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bIsUnbreakable, ULuxCreationImportedPart), sizeof(bool), true);
				UProperty* NewProp_Gender = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Gender"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Gender, ULuxCreationImportedPart), 0x0010000000000005, Z_Construct_UEnum_LuxorGame_ELuxGender());
				UProperty* NewProp_Gender_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Gender, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_Identifier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Identifier"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Identifier, ULuxCreationImportedPart), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDisableBreastSwing, ULuxCreationImportedPart);
				UProperty* NewProp_bDisableBreastSwing = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDisableBreastSwing"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDisableBreastSwing, ULuxCreationImportedPart), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bDisableBreastSwing, ULuxCreationImportedPart), sizeof(bool), true);
				UProperty* NewProp_OffsetPart = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OffsetPart"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OffsetPart, ULuxCreationImportedPart), 0x0010000000000005, Z_Construct_UScriptStruct_FLuxOffsetPart());
				UProperty* NewProp_UnderwearColorFlags = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("UnderwearColorFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(UnderwearColorFlags, ULuxCreationImportedPart), 0x0010000000000005);
				UProperty* NewProp_UnderwearColorFlags_Inner = new(EC_InternalUseOnlyConstructor, NewProp_UnderwearColorFlags, TEXT("UnderwearColorFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, 0, sizeof(bool), true);
				UProperty* NewProp_ColorEditFlags = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ColorEditFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ColorEditFlags, ULuxCreationImportedPart), 0x0010000000000005);
				UProperty* NewProp_ColorEditFlags_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ColorEditFlags, TEXT("ColorEditFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UEnum_LuxorGame_ELuxColorEditableFlag());
				UProperty* NewProp_ColorEditFlags_Inner_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ColorEditFlags_Inner, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsUnique, ULuxCreationImportedPart);
				UProperty* NewProp_bIsUnique = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsUnique"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsUnique, ULuxCreationImportedPart), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bIsUnique, ULuxCreationImportedPart), sizeof(bool), true);
				UProperty* NewProp_DeletePartNames = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DeletePartNames"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DeletePartNames, ULuxCreationImportedPart), 0x0010000000000005);
				UProperty* NewProp_DeletePartNames_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DeletePartNames, TEXT("DeletePartNames"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_DeleteSlots = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DeleteSlots"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DeleteSlots, ULuxCreationImportedPart), 0x0010000000000005);
				UProperty* NewProp_DeleteSlots_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DeleteSlots, TEXT("DeleteSlots"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UEnum_LuxorGame_ELuxPartSlot());
				UProperty* NewProp_DeleteSlots_Inner_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_DeleteSlots_Inner, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_OnewayDeleteCategory = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnewayDeleteCategory"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(OnewayDeleteCategory, ULuxCreationImportedPart), 0x0010000000000005);
				UProperty* NewProp_OnewayDeleteCategory_Inner = new(EC_InternalUseOnlyConstructor, NewProp_OnewayDeleteCategory, TEXT("OnewayDeleteCategory"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UEnum_LuxorGame_ELuxPartCategory());
				UProperty* NewProp_OnewayDeleteCategory_Inner_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_OnewayDeleteCategory_Inner, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_DeleteCategory = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DeleteCategory"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DeleteCategory, ULuxCreationImportedPart), 0x0010000000000005);
				UProperty* NewProp_DeleteCategory_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DeleteCategory, TEXT("DeleteCategory"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UEnum_LuxorGame_ELuxPartCategory());
				UProperty* NewProp_DeleteCategory_Inner_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_DeleteCategory_Inner, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_VariationRequest = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VariationRequest"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(VariationRequest, ULuxCreationImportedPart), 0x0010000000000005, Z_Construct_UScriptStruct_FLuxVariationRequest());
				UProperty* NewProp_MeshVariations = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshVariations"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(MeshVariations, ULuxCreationImportedPart), 0x0010000000000005);
				UProperty* NewProp_MeshVariations_Inner = new(EC_InternalUseOnlyConstructor, NewProp_MeshVariations, TEXT("MeshVariations"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLuxMeshDataVariation());
				UProperty* NewProp_DefaultMeshes = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultMeshes"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DefaultMeshes, ULuxCreationImportedPart), 0x0010000000000005);
				UProperty* NewProp_DefaultMeshes_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DefaultMeshes, TEXT("DefaultMeshes"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLuxSlotMeshData());
				UProperty* NewProp_Priority = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Priority"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Priority, ULuxCreationImportedPart), 0x0010000000000005, Z_Construct_UEnum_LuxorGame_ELuxPartPriority());
				UProperty* NewProp_Priority_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Priority, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_Category = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Category"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Category, ULuxCreationImportedPart), 0x0010000000000005, Z_Construct_UEnum_LuxorGame_ELuxPartCategory());
				UProperty* NewProp_Category_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Category, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				static TCppClassTypeInfo<TCppClassTypeTraits<ULuxCreationImportedPart> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxCreationImportedPart.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("CLASS"));
				MetaData->SetValue(NewProp_Supplements, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_Supplements, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Supplements, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_Supplements, TEXT("ToolTip"), TEXT("Setup LuxFacialAsset to load .mot and .tbl files for facial animation. This is only used for faces."));
				MetaData->SetValue(NewProp_Supplements_Inner, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_Supplements_Inner, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Supplements_Inner, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_Supplements_Inner, TEXT("ToolTip"), TEXT("Setup LuxFacialAsset to load .mot and .tbl files for facial animation. This is only used for faces."));
				MetaData->SetValue(NewProp_SEMaterial, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_SEMaterial, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_SEMaterial, TEXT("ToolTip"), TEXT("Specifies what sound effect to use for this item."));
				MetaData->SetValue(NewProp_ThumbnailPath, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_ThumbnailPath, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_BreakType, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_BreakType, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_BreakType, TEXT("ToolTip"), TEXT("Break category for this item."));
				MetaData->SetValue(NewProp_bIsUnbreakable, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_bIsUnbreakable, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_bIsUnbreakable, TEXT("ToolTip"), TEXT("Specifies if this item is Unbreakable."));
				MetaData->SetValue(NewProp_Gender, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_Gender, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_Gender, TEXT("ToolTip"), TEXT("Gender that uses this item."));
				MetaData->SetValue(NewProp_Identifier, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_Identifier, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_Identifier, TEXT("ToolTip"), TEXT("Unique Identifier used to reference this item. Other items add this to 'DeletePartNames' for conflicts with said item. It should be the same name as the filename for this item."));
				MetaData->SetValue(NewProp_bDisableBreastSwing, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_bDisableBreastSwing, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_bDisableBreastSwing, TEXT("ToolTip"), TEXT("Disables breast swing. An example of an item that uses this is the Valkyrie chest piece."));
				MetaData->SetValue(NewProp_OffsetPart, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_OffsetPart, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_OffsetPart, TEXT("ToolTip"), TEXT("Setup Extra/Movable Item Properties."));
				MetaData->SetValue(NewProp_UnderwearColorFlags, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_UnderwearColorFlags, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_UnderwearColorFlags, TEXT("ToolTip"), TEXT("Specifies which color slots use the limited underwear color pallet."));
				MetaData->SetValue(NewProp_ColorEditFlags, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_ColorEditFlags, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_ColorEditFlags, TEXT("ToolTip"), TEXT("Valid color slots."));
				MetaData->SetValue(NewProp_bIsUnique, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_bIsUnique, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_bIsUnique, TEXT("ToolTip"), TEXT("What this does is currently unknown. All cast character's equipment has this checked."));
				MetaData->SetValue(NewProp_DeletePartNames, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_DeletePartNames, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_DeletePartNames, TEXT("ToolTip"), TEXT("List of items that conflict with this item. Use the item's 'Identifier' string."));
				MetaData->SetValue(NewProp_DeleteSlots, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_DeleteSlots, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_DeleteSlots, TEXT("ToolTip"), TEXT("List of Mesh Slots to hide."));
				MetaData->SetValue(NewProp_OnewayDeleteCategory, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_OnewayDeleteCategory, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_OnewayDeleteCategory, TEXT("ToolTip"), TEXT("List of item categories that conflict with this item. The difference between 'DeleteCategory' and 'OnewayDeleteCategory' is unknown atm. Most items use 'OnewayDeleteCategory'."));
				MetaData->SetValue(NewProp_DeleteCategory, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_DeleteCategory, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_DeleteCategory, TEXT("ToolTip"), TEXT("List of item categories that conflict with this item. The difference between 'DeleteCategory' and 'OnewayDeleteCategory' is unknown atm. Most items use 'OnewayDeleteCategory'."));
				MetaData->SetValue(NewProp_VariationRequest, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_VariationRequest, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_VariationRequest, TEXT("ToolTip"), TEXT("specifies a variation this item loads as well as slots to load said variation."));
				MetaData->SetValue(NewProp_MeshVariations, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_MeshVariations, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_MeshVariations, TEXT("ToolTip"), TEXT("Setup variations for Slots to be used when other items request them with 'VariationRequest'"));
				MetaData->SetValue(NewProp_DefaultMeshes, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_DefaultMeshes, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_DefaultMeshes, TEXT("ToolTip"), TEXT("Default meshes"));
				MetaData->SetValue(NewProp_Priority, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_Priority, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_Category, TEXT("Category"), TEXT("LuxCreationImportedPart"));
				MetaData->SetValue(NewProp_Category, TEXT("ModuleRelativePath"), TEXT("Public/LuxCreationImportedPart.h"));
				MetaData->SetValue(NewProp_Category, TEXT("ToolTip"), TEXT("Item Category"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuxCreationImportedPart, 574714501);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuxCreationImportedPart(Z_Construct_UClass_ULuxCreationImportedPart, &ULuxCreationImportedPart::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ULuxCreationImportedPart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuxCreationImportedPart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
