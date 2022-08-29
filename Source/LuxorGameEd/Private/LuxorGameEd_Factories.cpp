// Fill out your copyright notice in the Description page of Project Settings.

#include "LuxorGameEd/Public/LuxorGameEd_Factories.h"

#include "AssetTypeCategories.h"
#include "LuxProfileBase.h"
#include "Package.h"
#include "PackageName.h"
#include "Paths.h"

#define LOCTEXT_NAMESPACE "FLuxorGameEdModule"

ULuxProfileBase_Factory::ULuxProfileBase_Factory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	{
		bCreateNew = true;
		bEditAfterNew = true;
		SupportedClass = ULuxProfileBase::StaticClass();
	}


UObject* ULuxProfileBase_Factory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
		return NewObject<ULuxProfileBase>(InParent, Class, Name, Flags, Context);
}


ULuxCreationTextureAsset_Factory::ULuxCreationTextureAsset_Factory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = ULuxProfileBase::StaticClass();
}


UObject* ULuxCreationTextureAsset_Factory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<ULuxCreationTextureAsset>(InParent, Class, Name, Flags, Context);
}

ULuxAssetPathsBase_Factory::ULuxAssetPathsBase_Factory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = ULuxAssetPathsBase::StaticClass();
}


UObject* ULuxAssetPathsBase_Factory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<ULuxProfileBase>(InParent, Class, Name, Flags, Context);
}


ULuxCreationPartBase_Factory::ULuxCreationPartBase_Factory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = ULuxCreationPartBase::StaticClass();
}


UObject* ULuxCreationPartBase_Factory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<ULuxCreationPartBase>(InParent, Class, Name, Flags, Context);
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


#undef LOCTEXT_NAMESPACE