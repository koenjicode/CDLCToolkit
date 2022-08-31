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
		TSharedRef<IAssetTypeActions> ACT_ULuxCreationProfileFactoryActions = MakeShareable(new FATA_ULuxCreationProfileFactoryActions);
		AssetTools.RegisterAssetTypeActions(ACT_ULuxCreationProfileFactoryActions);
		TSharedRef<IAssetTypeActions> ACT_ULuxRegularProfileFactoryActions = MakeShareable(new FATA_ULuxRegularProfileFactoryActions);
		AssetTools.RegisterAssetTypeActions(ACT_ULuxRegularProfileFactoryActions);
		TSharedRef<IAssetTypeActions> ACT_ULuxCreationTextureAssetFactoryActions = MakeShareable(new FATA_ULuxCreationTextureAssetFactoryActions);
		AssetTools.RegisterAssetTypeActions(ACT_ULuxCreationTextureAssetFactoryActions);
		TSharedRef<IAssetTypeActions> ACT_ULuxCharacterAssetPathsFactoryActions = MakeShareable(new FATA_ULuxCharacterAssetPathsFactoryActions);
		AssetTools.RegisterAssetTypeActions(ACT_ULuxCharacterAssetPathsFactoryActions);
		TSharedRef<IAssetTypeActions> ACT_ULuxStageAssetPathsFactoryActions = MakeShareable(new FATA_ULuxStageAssetPathsFactoryActions);
		AssetTools.RegisterAssetTypeActions(ACT_ULuxStageAssetPathsFactoryActions);
		TSharedRef<IAssetTypeActions> ACT_ULuxVoiceAssetPathsFactoryActions = MakeShareable(new FATA_ULuxVoiceAssetPathsFactoryActions);
		AssetTools.RegisterAssetTypeActions(ACT_ULuxVoiceAssetPathsFactoryActions);
		TSharedRef<IAssetTypeActions> ACT_ULuxWeaponAssetPathsFactoryActions = MakeShareable(new FATA_ULuxWeaponAssetPathsFactoryActions);
		AssetTools.RegisterAssetTypeActions(ACT_ULuxWeaponAssetPathsFactoryActions);
		TSharedRef<IAssetTypeActions> ACT_ULuxCreationImportedPartFactoryActions = MakeShareable(new FATA_ULuxCreationImportedPartFactoryActions);
		AssetTools.RegisterAssetTypeActions(ACT_ULuxCreationImportedPartFactoryActions);
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