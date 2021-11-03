// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LuxBattleChara.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuxBattleChara() {}
// Cross Module References
	LUXORGAME_API UFunction* Z_Construct_UFunction_ALuxBattleChara_ApplyCreationColor();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleChara();
	LUXORGAME_API UFunction* Z_Construct_UFunction_ALuxBattleChara_GetBreakFlag();
	LUXORGAME_API UFunction* Z_Construct_UFunction_ALuxBattleChara_RefreshAppearance();
	LUXORGAME_API UFunction* Z_Construct_UFunction_ALuxBattleChara_ReplaceChara();
	LUXORGAME_API UFunction* Z_Construct_UFunction_ALuxBattleChara_ReplaceWeapon();
	LUXORGAME_API UFunction* Z_Construct_UFunction_ALuxBattleChara_SetBreakFlag();
	LUXORGAME_API UFunction* Z_Construct_UFunction_ALuxBattleChara_SetEvilFlag();
	LUXORGAME_API UFunction* Z_Construct_UFunction_ALuxBattleChara_SetMaterialChargeRate();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxBattleChara_NoRegister();
	LUXORGAME_API UClass* Z_Construct_UClass_ALuxCharaActor();
	UPackage* Z_Construct_UPackage__Script_LuxorGame();
	LUXORGAME_API UClass* Z_Construct_UClass_ULuxBattlePlayerSetup_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	LUXORGAME_API UEnum* Z_Construct_UEnum_LuxorGame_ELuxPartsSE();
	LUXORGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLuxPermanentEffectSetting();
// End Cross Module References
	void ALuxBattleChara::StaticRegisterNativesALuxBattleChara()
	{
		UClass* Class = ALuxBattleChara::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ApplyCreationColor", (Native)&ALuxBattleChara::execApplyCreationColor },
			{ "GetBreakFlag", (Native)&ALuxBattleChara::execGetBreakFlag },
			{ "RefreshAppearance", (Native)&ALuxBattleChara::execRefreshAppearance },
			{ "ReplaceChara", (Native)&ALuxBattleChara::execReplaceChara },
			{ "ReplaceWeapon", (Native)&ALuxBattleChara::execReplaceWeapon },
			{ "SetBreakFlag", (Native)&ALuxBattleChara::execSetBreakFlag },
			{ "SetEvilFlag", (Native)&ALuxBattleChara::execSetEvilFlag },
			{ "SetMaterialChargeRate", (Native)&ALuxBattleChara::execSetMaterialChargeRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ALuxBattleChara_ApplyCreationColor()
	{
		UObject* Outer = Z_Construct_UClass_ALuxBattleChara();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ApplyCreationColor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleChara.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALuxBattleChara_GetBreakFlag()
	{
		struct LuxBattleChara_eventGetBreakFlag_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ALuxBattleChara();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetBreakFlag"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(LuxBattleChara_eventGetBreakFlag_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, LuxBattleChara_eventGetBreakFlag_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleChara.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALuxBattleChara_RefreshAppearance()
	{
		UObject* Outer = Z_Construct_UClass_ALuxBattleChara();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RefreshAppearance"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleChara.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALuxBattleChara_ReplaceChara()
	{
		struct LuxBattleChara_eventReplaceChara_Parms
		{
			int32 inCharaID;
		};
		UObject* Outer = Z_Construct_UClass_ALuxBattleChara();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReplaceChara"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(LuxBattleChara_eventReplaceChara_Parms));
			UProperty* NewProp_inCharaID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("inCharaID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(inCharaID, LuxBattleChara_eventReplaceChara_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleChara.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALuxBattleChara_ReplaceWeapon()
	{
		struct LuxBattleChara_eventReplaceWeapon_Parms
		{
			int32 inWeaponID;
		};
		UObject* Outer = Z_Construct_UClass_ALuxBattleChara();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReplaceWeapon"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(LuxBattleChara_eventReplaceWeapon_Parms));
			UProperty* NewProp_inWeaponID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("inWeaponID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(inWeaponID, LuxBattleChara_eventReplaceWeapon_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleChara.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALuxBattleChara_SetBreakFlag()
	{
		struct LuxBattleChara_eventSetBreakFlag_Parms
		{
			int32 flag;
		};
		UObject* Outer = Z_Construct_UClass_ALuxBattleChara();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetBreakFlag"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(LuxBattleChara_eventSetBreakFlag_Parms));
			UProperty* NewProp_flag = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("flag"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(flag, LuxBattleChara_eventSetBreakFlag_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleChara.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALuxBattleChara_SetEvilFlag()
	{
		struct LuxBattleChara_eventSetEvilFlag_Parms
		{
			bool inFlag;
		};
		UObject* Outer = Z_Construct_UClass_ALuxBattleChara();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetEvilFlag"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(LuxBattleChara_eventSetEvilFlag_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(inFlag, LuxBattleChara_eventSetEvilFlag_Parms);
			UProperty* NewProp_inFlag = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("inFlag"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(inFlag, LuxBattleChara_eventSetEvilFlag_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(inFlag, LuxBattleChara_eventSetEvilFlag_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleChara.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALuxBattleChara_SetMaterialChargeRate()
	{
		struct LuxBattleChara_eventSetMaterialChargeRate_Parms
		{
			float inValue;
		};
		UObject* Outer = Z_Construct_UClass_ALuxBattleChara();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetMaterialChargeRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(LuxBattleChara_eventSetMaterialChargeRate_Parms));
			UProperty* NewProp_inValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("inValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(inValue, LuxBattleChara_eventSetMaterialChargeRate_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleChara.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALuxBattleChara_NoRegister()
	{
		return ALuxBattleChara::StaticClass();
	}
	UClass* Z_Construct_UClass_ALuxBattleChara()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ALuxCharaActor();
			Z_Construct_UPackage__Script_LuxorGame();
			OuterClass = ALuxBattleChara::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ALuxBattleChara_ApplyCreationColor());
				OuterClass->LinkChild(Z_Construct_UFunction_ALuxBattleChara_GetBreakFlag());
				OuterClass->LinkChild(Z_Construct_UFunction_ALuxBattleChara_RefreshAppearance());
				OuterClass->LinkChild(Z_Construct_UFunction_ALuxBattleChara_ReplaceChara());
				OuterClass->LinkChild(Z_Construct_UFunction_ALuxBattleChara_ReplaceWeapon());
				OuterClass->LinkChild(Z_Construct_UFunction_ALuxBattleChara_SetBreakFlag());
				OuterClass->LinkChild(Z_Construct_UFunction_ALuxBattleChara_SetEvilFlag());
				OuterClass->LinkChild(Z_Construct_UFunction_ALuxBattleChara_SetMaterialChargeRate());

				UProperty* NewProp_PlayerSetupOverride = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PlayerSetupOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayerSetupOverride, ALuxBattleChara), 0x0010000000000005, Z_Construct_UClass_ULuxBattlePlayerSetup_NoRegister());
				UProperty* NewProp_PlayerIndex = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PlayerIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PlayerIndex, ALuxBattleChara), 0x0010000000000005);
				UProperty* NewProp_CharaID = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CharaID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(CharaID, ALuxBattleChara), 0x0010000000000005);
				UProperty* NewProp_WeaponID = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(WeaponID, ALuxBattleChara), 0x0010000000000005);
				UProperty* NewProp_TraceManager = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TraceManager"), RF_Public|RF_Transient|RF_MarkAsNative) UAssetObjectProperty(CPP_PROPERTY_BASE(TraceManager, ALuxBattleChara), 0x0014000000000005, Z_Construct_UClass_UObject_NoRegister());
				UProperty* NewProp_SEMaterials = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SEMaterials"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SEMaterials, ALuxBattleChara), 0x0010000000000005);
				UProperty* NewProp_SEMaterials_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SEMaterials, TEXT("SEMaterials"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UEnum_LuxorGame_ELuxPartsSE());
				UProperty* NewProp_SEMaterials_Inner_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_SEMaterials_Inner, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_PermanentEffects = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PermanentEffects"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(PermanentEffects, ALuxBattleChara), 0x0010000000000005);
				UProperty* NewProp_PermanentEffects_Inner = new(EC_InternalUseOnlyConstructor, NewProp_PermanentEffects, TEXT("PermanentEffects"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLuxPermanentEffectSetting());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALuxBattleChara_ApplyCreationColor(), "ApplyCreationColor"); // 1205400323
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALuxBattleChara_GetBreakFlag(), "GetBreakFlag"); // 3157739831
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALuxBattleChara_RefreshAppearance(), "RefreshAppearance"); // 509338947
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALuxBattleChara_ReplaceChara(), "ReplaceChara"); // 2603190613
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALuxBattleChara_ReplaceWeapon(), "ReplaceWeapon"); // 3827861763
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALuxBattleChara_SetBreakFlag(), "SetBreakFlag"); // 3670882320
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALuxBattleChara_SetEvilFlag(), "SetEvilFlag"); // 1299593228
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALuxBattleChara_SetMaterialChargeRate(), "SetMaterialChargeRate"); // 159970024
				static TCppClassTypeInfo<TCppClassTypeTraits<ALuxBattleChara> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LuxBattleChara.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleChara.h"));
				MetaData->SetValue(NewProp_PlayerSetupOverride, TEXT("Category"), TEXT("LuxBattleChara"));
				MetaData->SetValue(NewProp_PlayerSetupOverride, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleChara.h"));
				MetaData->SetValue(NewProp_PlayerIndex, TEXT("Category"), TEXT("LuxBattleChara"));
				MetaData->SetValue(NewProp_PlayerIndex, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleChara.h"));
				MetaData->SetValue(NewProp_CharaID, TEXT("Category"), TEXT("LuxBattleChara"));
				MetaData->SetValue(NewProp_CharaID, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleChara.h"));
				MetaData->SetValue(NewProp_WeaponID, TEXT("Category"), TEXT("LuxBattleChara"));
				MetaData->SetValue(NewProp_WeaponID, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleChara.h"));
				MetaData->SetValue(NewProp_TraceManager, TEXT("Category"), TEXT("LuxBattleChara"));
				MetaData->SetValue(NewProp_TraceManager, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleChara.h"));
				MetaData->SetValue(NewProp_SEMaterials, TEXT("Category"), TEXT("LuxBattleChara"));
				MetaData->SetValue(NewProp_SEMaterials, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleChara.h"));
				MetaData->SetValue(NewProp_PermanentEffects, TEXT("Category"), TEXT("LuxBattleChara"));
				MetaData->SetValue(NewProp_PermanentEffects, TEXT("ModuleRelativePath"), TEXT("Public/LuxBattleChara.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuxBattleChara, 2868784613);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuxBattleChara(Z_Construct_UClass_ALuxBattleChara, &ALuxBattleChara::StaticClass, TEXT("/Script/LuxorGame"), TEXT("ALuxBattleChara"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuxBattleChara);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
