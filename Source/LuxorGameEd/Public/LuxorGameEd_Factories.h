// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
#include "AssetTypeCategories.h"
#include "Factories/Factory.h"
#include "EditorReimportHandler.h"
#include "LuxAssetPathsBase.h"
#include "LuxCreationPartBase.h"
#include "LuxCreationTextureAsset.h"
#include "LuxLoadableBase.h"
#include "LuxorGameEd.h"
#include "LuxProfileBase.h"
#include "LuxorGameEd_Factories.generated.h"

#define LOCTEXT_NAMESPACE "FLuxorGameEdModule"

static EAssetTypeCategories::Type Luxor;

UCLASS()
class LUXORGAMEED_API ULuxProfileBase_Factory : public UFactory
{
	GENERATED_UCLASS_BODY()
	
	ULuxProfileBase_Factory();

protected:
	virtual bool IsMacroFactory() const { return false; }
	
public:
	// UFactory interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory interface
};


class FATA_ULuxProfileBaseFactoryActions : public FAssetTypeActions_Base {
public:
	virtual FText GetName() const override { return LOCTEXT("LuxorBaseProfile","Luxor Base Profile"); }
	virtual uint32 GetCategories() override { return Luxor; }
	virtual FColor GetTypeColor() const override { return FColor(127,255,255); }
	virtual FText GetAssetDescription(const FAssetData &AssetData) const override { return LOCTEXT("LuxorDescription","Base Profile for Luxor."); }
	virtual UClass* GetSupportedClass() const override { return ULuxProfileBase::StaticClass(); }
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
	virtual FText GetName() const override { return LOCTEXT("LuxCreationTextureAsset","LuxCreationTextureAsset"); }
	virtual uint32 GetCategories() override { return Luxor; }
	virtual FColor GetTypeColor() const override { return FColor(127,255,255); }
	virtual FText GetAssetDescription(const FAssetData &AssetData) const override { return LOCTEXT("LuxorDescription","Lux Creation Texture Asset."); }
	virtual UClass* GetSupportedClass() const override { return ULuxCreationTextureAsset::StaticClass(); }
};


UCLASS()
class LUXORGAMEED_API ULuxAssetPathsBase_Factory : public UFactory
{
	GENERATED_UCLASS_BODY()
	
	ULuxAssetPathsBase_Factory();

protected:
	virtual bool IsMacroFactory() const { return false; }
	
public:
	// UFactory interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory interface
};


class FATA_ULuxAssetPathsBaseFactoryActions : public FAssetTypeActions_Base {
public:
	virtual FText GetName() const override { return LOCTEXT("LuxAssetPathsBase","Lux Asset Paths Base"); }
	virtual uint32 GetCategories() override { return Luxor; }
	virtual FColor GetTypeColor() const override { return FColor(127,255,255); }
	virtual FText GetAssetDescription(const FAssetData &AssetData) const override { return LOCTEXT("LuxorDescription","Lux Asset Paths Base."); }
	virtual UClass* GetSupportedClass() const override { return ULuxAssetPathsBase::StaticClass(); }
};


UCLASS()
class LUXORGAMEED_API ULuxCreationPartBase_Factory : public UFactory
{
	GENERATED_UCLASS_BODY()
	
	ULuxCreationPartBase_Factory();

protected:
	virtual bool IsMacroFactory() const { return false; }
	
public:
	// UFactory interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory interface
};


class FATA_ULuxCreationPartBaseFactoryActions : public FAssetTypeActions_Base {
public:
	virtual FText GetName() const override { return LOCTEXT("ULuxCreationPartBase","ULuxCreationPartBase"); }
	virtual uint32 GetCategories() override { return Luxor; }
	virtual FColor GetTypeColor() const override { return FColor(127,255,255); }
	virtual FText GetAssetDescription(const FAssetData &AssetData) const override { return LOCTEXT("LuxorDescription","Lux Creation Part Base."); }
	virtual UClass* GetSupportedClass() const override { return ULuxCreationPartBase::StaticClass(); }
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
