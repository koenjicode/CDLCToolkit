// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
#include "AssetTypeCategories.h"
#include "Factories/Factory.h"
#include "EditorReimportHandler.h"
#include "LuxCharacterAssetPaths.h"
#include "LuxStageAssetPaths.h"
#include "LuxVoiceAssetPaths.h"
#include "LuxWeaponAssetPaths.h"
#include "LuxCreationPartBase.h"
#include "LuxCreationImportedPart.h"
#include "LuxCreationTextureAsset.h"
#include "LuxLoadableBase.h"
#include "LuxorGameEd.h"
#include "LuxCreationProfile.h"
#include "LuxRegularProfile.h"
#include "LuxorGameEd_Factories.generated.h"

#define LOCTEXT_NAMESPACE "FLuxorGameEdModule"

static EAssetTypeCategories::Type Luxor;

UCLASS()
class LUXORGAMEED_API ULuxCreationProfile_Factory : public UFactory
{
	GENERATED_UCLASS_BODY()
	
	ULuxCreationProfile_Factory();

protected:
	virtual bool IsMacroFactory() const { return false; }
	
public:
	// UFactory interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory interface
};


class FATA_ULuxCreationProfileFactoryActions : public FAssetTypeActions_Base {
public:
	virtual FText GetName() const override { return LOCTEXT("LuxorCreationProfile","Luxor Creation Profile"); }
	virtual uint32 GetCategories() override { return Luxor; }
	virtual FColor GetTypeColor() const override { return FColor(66, 135, 245); }
	virtual FText GetAssetDescription(const FAssetData &AssetData) const override { return LOCTEXT("LuxorDescription","Creation Profile for Luxor."); }
	virtual UClass* GetSupportedClass() const override { return ULuxCreationProfile::StaticClass(); }
};


UCLASS()
class LUXORGAMEED_API ULuxRegularProfile_Factory : public UFactory
{
	GENERATED_UCLASS_BODY()

		ULuxRegularProfile_Factory();

protected:
	virtual bool IsMacroFactory() const { return false; }

public:
	// UFactory interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory interface
};


class FATA_ULuxRegularProfileFactoryActions : public FAssetTypeActions_Base {
public:
	virtual FText GetName() const override { return LOCTEXT("LuxorRegularProfile", "Luxor Regular Profile"); }
	virtual uint32 GetCategories() override { return Luxor; }
	virtual FColor GetTypeColor() const override { return FColor(66, 135, 245); }
	virtual FText GetAssetDescription(const FAssetData &AssetData) const override { return LOCTEXT("LuxorDescription", "Regular Profile for Luxor."); }
	virtual UClass* GetSupportedClass() const override { return ULuxRegularProfile::StaticClass(); }
};


UCLASS()
class LUXORGAMEED_API ULuxCreationTextureAsset_Factory : public UFactory
{
	GENERATED_UCLASS_BODY()
	
	ULuxCreationTextureAsset_Factory();

protected:
	virtual bool IsMacroFactory() const { return false; }
	
public:
	// UFactory interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory interface
};


class FATA_ULuxCreationTextureAssetFactoryActions : public FAssetTypeActions_Base {
public:
	virtual FText GetName() const override { return LOCTEXT("LuxCreationTextureAsset","Lux Creation Texture Asset"); }
	virtual uint32 GetCategories() override { return Luxor; }
	virtual FColor GetTypeColor() const override { return FColor(78, 39, 207); }
	virtual FText GetAssetDescription(const FAssetData &AssetData) const override { return LOCTEXT("LuxorDescription","Used for makeup, patterns, stickers and eyebrows."); }
	virtual UClass* GetSupportedClass() const override { return ULuxCreationTextureAsset::StaticClass(); }
};


UCLASS()
class LUXORGAMEED_API ULuxCharacterAssetPaths_Factory : public UFactory
{
	GENERATED_UCLASS_BODY()
	
	ULuxCharacterAssetPaths_Factory();

protected:
	virtual bool IsMacroFactory() const { return false; }
	
public:
	// UFactory interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory interface
};


class FATA_ULuxCharacterAssetPathsFactoryActions : public FAssetTypeActions_Base {
public:
	virtual FText GetName() const override { return LOCTEXT("LuxCharacterAssetPaths","Lux Character Asset Paths"); }
	virtual uint32 GetCategories() override { return Luxor; }
	virtual FColor GetTypeColor() const override { return FColor(50, 168, 113); }
	virtual FText GetAssetDescription(const FAssetData &AssetData) const override { return LOCTEXT("LuxorDescription","Setup for character moveset files."); }
	virtual UClass* GetSupportedClass() const override { return ULuxCharacterAssetPaths::StaticClass(); }
};


UCLASS()
class LUXORGAMEED_API ULuxStageAssetPaths_Factory : public UFactory
{
	GENERATED_UCLASS_BODY()

		ULuxStageAssetPaths_Factory();

protected:
	virtual bool IsMacroFactory() const { return false; }

public:
	// UFactory interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory interface
};


class FATA_ULuxStageAssetPathsFactoryActions : public FAssetTypeActions_Base {
public:
	virtual FText GetName() const override { return LOCTEXT("LuxStageAssetPaths", "Lux Stage Asset Paths"); }
	virtual uint32 GetCategories() override { return Luxor; }
	virtual FColor GetTypeColor() const override { return FColor(50, 168, 113); }
	virtual FText GetAssetDescription(const FAssetData &AssetData) const override { return LOCTEXT("LuxorDescription", "Setup for stage parameters and camera data."); }
	virtual UClass* GetSupportedClass() const override { return ULuxStageAssetPaths::StaticClass(); }
};


UCLASS()
class LUXORGAMEED_API ULuxVoiceAssetPaths_Factory : public UFactory
{
	GENERATED_UCLASS_BODY()

		ULuxVoiceAssetPaths_Factory();

protected:
	virtual bool IsMacroFactory() const { return false; }

public:
	// UFactory interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory interface
};


class FATA_ULuxVoiceAssetPathsFactoryActions : public FAssetTypeActions_Base {
public:
	virtual FText GetName() const override { return LOCTEXT("LuxVoiceAssetPaths", "Lux Voice Asset Paths"); }
	virtual uint32 GetCategories() override { return Luxor; }
	virtual FColor GetTypeColor() const override { return FColor(50, 168, 113); }
	virtual FText GetAssetDescription(const FAssetData &AssetData) const override { return LOCTEXT("LuxorDescription", "Lux Voice Asset Paths."); }
	virtual UClass* GetSupportedClass() const override { return ULuxVoiceAssetPaths::StaticClass(); }
};


UCLASS()
class LUXORGAMEED_API ULuxWeaponAssetPaths_Factory : public UFactory
{
	GENERATED_UCLASS_BODY()

		ULuxWeaponAssetPaths_Factory();

protected:
	virtual bool IsMacroFactory() const { return false; }

public:
	// UFactory interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory interface
};


class FATA_ULuxWeaponAssetPathsFactoryActions : public FAssetTypeActions_Base {
public:
	virtual FText GetName() const override { return LOCTEXT("LuxWeaponAssetPaths", "Lux Weapon Asset Paths"); }
	virtual uint32 GetCategories() override { return Luxor; }
	virtual FColor GetTypeColor() const override { return FColor(50, 168, 113); }
	virtual FText GetAssetDescription(const FAssetData &AssetData) const override { return LOCTEXT("LuxorDescription", "Lux Weapon Asset Paths."); }
	virtual UClass* GetSupportedClass() const override { return ULuxAssetPathsBase::StaticClass(); }
};


UCLASS()
class LUXORGAMEED_API ULuxCreationImportedPart_Factory : public UFactory
{
	GENERATED_UCLASS_BODY()
	
	ULuxCreationImportedPart_Factory();

protected:
	virtual bool IsMacroFactory() const { return false; }
	
public:
	// UFactory interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory interface
};


class FATA_ULuxCreationImportedPartFactoryActions : public FAssetTypeActions_Base {
public:
	virtual FText GetName() const override { return LOCTEXT("ULuxCreationImportedPart","LuxCreationImportedPart"); }
	virtual uint32 GetCategories() override { return Luxor; }
	virtual FColor GetTypeColor() const override { return FColor(150, 23, 23); }
	virtual FText GetAssetDescription(const FAssetData &AssetData) const override { return LOCTEXT("LuxorDescription","Lux Creation Imported Part."); }
	virtual UClass* GetSupportedClass() const override { return ULuxCreationImportedPart::StaticClass(); }
};

UCLASS()
class LUXORGAMEED_API ULuxLoadableBase_Factory : public UFactory
{
	GENERATED_UCLASS_BODY()
	
	ULuxLoadableBase_Factory();

protected:
	virtual bool IsMacroFactory() const { return false; }
	
public:
	// UFactory interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory interface
};


class FATA_ULuxLoadableBaseFactoryActions : public FAssetTypeActions_Base {
public:
	virtual FText GetName() const override { return LOCTEXT("ULuxLoadableBase","ULuxLoadableBase"); }
	virtual uint32 GetCategories() override { return Luxor; }
	virtual FColor GetTypeColor() const override { return FColor(127,255,255); }
	virtual FText GetAssetDescription(const FAssetData &AssetData) const override { return LOCTEXT("LuxorDescription","Lux Loadable Base."); }
	virtual UClass* GetSupportedClass() const override { return ULuxLoadableBase::StaticClass(); }
};



#undef LOCTEXT_NAMESPACE
