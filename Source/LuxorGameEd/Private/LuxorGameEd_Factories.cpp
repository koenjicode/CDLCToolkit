// Fill out your copyright notice in the Description page of Project Settings.

#include "LuxorGameEd/Public/LuxorGameEd_Factories.h"

#include "AssetTypeCategories.h"
#include "LuxProfileBase.h"
#include "Package.h"
#include "PackageName.h"
#include "Paths.h"

#define LOCTEXT_NAMESPACE "FLuxorGameEdModule"

ULuxCreationProfile_Factory::ULuxCreationProfile_Factory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	{
		bCreateNew = true;
		bEditAfterNew = true;
		SupportedClass = ULuxCreationProfile::StaticClass();
	}


UObject* ULuxCreationProfile_Factory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
		return NewObject<ULuxCreationProfile>(InParent, Class, Name, Flags, Context);
}

ULuxRegularProfile_Factory::ULuxRegularProfile_Factory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = ULuxRegularProfile::StaticClass();
}


UObject* ULuxRegularProfile_Factory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<ULuxRegularProfile>(InParent, Class, Name, Flags, Context);
}


ULuxCreationTextureAsset_Factory::ULuxCreationTextureAsset_Factory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = ULuxCreationTextureAsset::StaticClass();
}


UObject* ULuxCreationTextureAsset_Factory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<ULuxCreationTextureAsset>(InParent, Class, Name, Flags, Context);
}

ULuxCharacterAssetPaths_Factory::ULuxCharacterAssetPaths_Factory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = ULuxCharacterAssetPaths::StaticClass();
}


UObject* ULuxCharacterAssetPaths_Factory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<ULuxCharacterAssetPaths>(InParent, Class, Name, Flags, Context);
}


ULuxStageAssetPaths_Factory::ULuxStageAssetPaths_Factory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = ULuxStageAssetPaths::StaticClass();
}


UObject* ULuxStageAssetPaths_Factory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<ULuxStageAssetPaths>(InParent, Class, Name, Flags, Context);
}


ULuxVoiceAssetPaths_Factory::ULuxVoiceAssetPaths_Factory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = ULuxVoiceAssetPaths::StaticClass();
}


UObject* ULuxVoiceAssetPaths_Factory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<ULuxVoiceAssetPaths>(InParent, Class, Name, Flags, Context);
}


ULuxWeaponAssetPaths_Factory::ULuxWeaponAssetPaths_Factory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = ULuxWeaponAssetPaths::StaticClass();
}


UObject* ULuxWeaponAssetPaths_Factory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<ULuxWeaponAssetPaths>(InParent, Class, Name, Flags, Context);
}


ULuxCreationImportedPart_Factory::ULuxCreationImportedPart_Factory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = ULuxCreationImportedPart::StaticClass();
}


UObject* ULuxCreationImportedPart_Factory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<ULuxCreationImportedPart>(InParent, Class, Name, Flags, Context);
}

ULuxLoadableBase_Factory::ULuxLoadableBase_Factory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = ULuxLoadableBase::StaticClass();
}


UObject* ULuxLoadableBase_Factory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<ULuxLoadableBase>(InParent, Class, Name, Flags, Context);
}

ULuxBattleMovePlayData_Factory::ULuxBattleMovePlayData_Factory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = ULuxBattleMovePlayData::StaticClass();
}


UObject* ULuxBattleMovePlayData_Factory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<ULuxBattleMovePlayData>(InParent, Class, Name, Flags, Context);
}


#undef LOCTEXT_NAMESPACE