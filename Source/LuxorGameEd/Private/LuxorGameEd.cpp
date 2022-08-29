// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "LuxorGameEd/Public/LuxorGameEd.h"

#include "AssetToolsModule.h"
#include "IAssetTools.h"
#include "LuxorGameEd_Factories.h"

#define LOCTEXT_NAMESPACE "FLuxorGameEdModule"

void FLuxorGameEdModule::StartupModule()
{
	IAssetTools &AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	Luxor = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("Luxor")),LOCTEXT("Luxor","Luxor"));
	{
		TSharedRef<IAssetTypeActions> ACT_ULuxProfileBaseFactoryActions = MakeShareable(new FATA_ULuxProfileBaseFactoryActions);
		AssetTools.RegisterAssetTypeActions(ACT_ULuxProfileBaseFactoryActions);
		TSharedRef<IAssetTypeActions> ACT_ULuxCreationTextureAssetFactoryActions = MakeShareable(new FATA_ULuxCreationTextureAssetFactoryActions);
		AssetTools.RegisterAssetTypeActions(ACT_ULuxCreationTextureAssetFactoryActions);
		TSharedRef<IAssetTypeActions> ACT_ULuxAssetPathsBaseFactoryActions = MakeShareable(new FATA_ULuxAssetPathsBaseFactoryActions);
		AssetTools.RegisterAssetTypeActions(ACT_ULuxAssetPathsBaseFactoryActions);
		TSharedRef<IAssetTypeActions> ACT_ULuxCreationPartBaseFactoryActions = MakeShareable(new FATA_ULuxCreationPartBaseFactoryActions);
		AssetTools.RegisterAssetTypeActions(ACT_ULuxCreationPartBaseFactoryActions);
		TSharedRef<IAssetTypeActions> ACT_ULuxLoadableBaseFactoryActions = MakeShareable(new FATA_ULuxLoadableBaseFactoryActions);
		AssetTools.RegisterAssetTypeActions(ACT_ULuxLoadableBaseFactoryActions);
	}

	
}

void FLuxorGameEdModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}



#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FLuxorGameEdModule, LuxorGameEd)