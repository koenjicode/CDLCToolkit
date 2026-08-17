// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
#include "AssetTypeCategories.h"
#include "ModuleManager.h"
#include "LuxorGameEd_Factories.h"

// Required for keeping track of the Style Set in 4.17
#include "Styling/SlateStyle.h" 

class FLuxorGameEdModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	// Holds the Slate Style Set for our custom icons
	TSharedPtr<FSlateStyleSet> StyleSet;

	// Caches the created asset type actions for safe unregistration during shutdown
	TArray<TSharedPtr<IAssetTypeActions>> CreatedAssetTypeActions;
};