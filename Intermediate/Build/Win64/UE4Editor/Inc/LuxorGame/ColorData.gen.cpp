// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ColorData.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorData() {}
// Cross Module References
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FColorData();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxCreationTextureAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FColorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LUXORGAME_API uint32 Get_Z_Construct_UScriptStruct_FColorData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorData, Z_Construct_UPackage__Script_LuxorGame(), TEXT("ColorData"), sizeof(FColorData), Get_Z_Construct_UScriptStruct_FColorData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FColorData(FColorData::StaticStruct, TEXT("/Script/LuxorGame"), TEXT("ColorData"), false, nullptr, nullptr);
static struct FScriptStruct_LuxorGame_StaticRegisterNativesFColorData
{
	FScriptStruct_LuxorGame_StaticRegisterNativesFColorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ColorData")),new UScriptStruct::TCppStructOps<FColorData>);
	}
} ScriptStruct_LuxorGame_StaticRegisterNativesFColorData;
	UScriptStruct* Z_Construct_UScriptStruct_FColorData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_LuxorGame();
		extern uint32 Get_Z_Construct_UScriptStruct_FColorData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColorData"), sizeof(FColorData), Get_Z_Construct_UScriptStruct_FColorData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ColorData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FColorData>, EStructFlags(0x00000001));
			UProperty* NewProp_Rotate = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Rotate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Rotate, FColorData), 0x0010000000000005);
			UProperty* NewProp_Size = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Size"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Size, FColorData), 0x0010000000000005);
			UProperty* NewProp_EditableFlags = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("EditableFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(EditableFlags, FColorData), 0x0010000000000005);
			UProperty* NewProp_EditableFlags_Inner = new(EC_InternalUseOnlyConstructor, NewProp_EditableFlags, TEXT("EditableFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, 0, sizeof(bool), true);
			UProperty* NewProp_PatternColors = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PatternColors"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(PatternColors, FColorData), 0x0010000000000005);
			UProperty* NewProp_PatternColors_Inner = new(EC_InternalUseOnlyConstructor, NewProp_PatternColors, TEXT("PatternColors"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLinearColor());
			UProperty* NewProp_Pattern = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Pattern"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Pattern, FColorData), 0x0010000000000005, Z_Construct_UClass_ULuxCreationTextureAsset_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ColorData.h"));
			MetaData->SetValue(NewProp_Rotate, TEXT("Category"), TEXT("Pattern"));
			MetaData->SetValue(NewProp_Rotate, TEXT("ModuleRelativePath"), TEXT("Public/ColorData.h"));
			MetaData->SetValue(NewProp_Size, TEXT("Category"), TEXT("Pattern"));
			MetaData->SetValue(NewProp_Size, TEXT("ModuleRelativePath"), TEXT("Public/ColorData.h"));
			MetaData->SetValue(NewProp_Size, TEXT("ToolTip"), TEXT("Only values between SizeMin and SizeMax will show."));
			MetaData->SetValue(NewProp_EditableFlags, TEXT("Category"), TEXT("Pattern"));
			MetaData->SetValue(NewProp_EditableFlags, TEXT("ModuleRelativePath"), TEXT("Public/ColorData.h"));
			MetaData->SetValue(NewProp_PatternColors, TEXT("Category"), TEXT("Pattern"));
			MetaData->SetValue(NewProp_PatternColors, TEXT("ModuleRelativePath"), TEXT("Public/ColorData.h"));
			MetaData->SetValue(NewProp_Pattern, TEXT("Category"), TEXT("Pattern"));
			MetaData->SetValue(NewProp_Pattern, TEXT("ModuleRelativePath"), TEXT("Public/ColorData.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColorData_CRC() { return 8472299U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
