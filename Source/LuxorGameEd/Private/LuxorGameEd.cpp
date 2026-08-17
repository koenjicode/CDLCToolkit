// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "LuxorGameEd/Public/LuxorGameEd.h"

#include "AssetToolsModule.h"
#include "IAssetTools.h"
#include "LuxorGameEd_Factories.h"

// Strict IWYU Includes required for UE4.17
#include "Styling/SlateStyleRegistry.h"
#include "Brushes/SlateImageBrush.h"
#include "Misc/Paths.h"

#define LOCTEXT_NAMESPACE "FLuxorGameEdModule"

void FLuxorGameEdModule::StartupModule()
{
	
	StyleSet = MakeShareable(new FSlateStyleSet("LuxorGameEdStyle"));

	FString ContentRoot = FPaths::GameDir() / TEXT("Resources");
	StyleSet->SetContentRoot(ContentRoot);

	// Register Icons for ULuxCreationProfile
	StyleSet->Set("ClassIcon.LuxCreationProfile", new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("Profile.png")), FVector2D(16.0f, 16.0f)));
	StyleSet->Set("ClassThumbnail.LuxCreationProfile", new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("Profile.png")), FVector2D(64.0f, 64.0f)));

	// Register Icons for ULuxRegularProfile
	StyleSet->Set("ClassIcon.LuxRegularProfile", new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("Profile.png")), FVector2D(16.0f, 16.0f)));
	StyleSet->Set("ClassThumbnail.LuxRegularProfile", new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("Profile.png")), FVector2D(64.0f, 64.0f)));

	// Register Icons for ULuxCreationTextureAsset
	StyleSet->Set("ClassIcon.LuxCreationTextureAsset", new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("CreationTexture.png")), FVector2D(16.0f, 16.0f)));
	StyleSet->Set("ClassThumbnail.LuxCreationTextureAsset", new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("CreationTexture.png")), FVector2D(64.0f, 64.0f)));

	// Register Icons for ULuxCreationImportedPart
	StyleSet->Set("ClassIcon.LuxCreationImportedPart", new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("ImportPart.png")), FVector2D(16.0f, 16.0f)));
	StyleSet->Set("ClassThumbnail.LuxCreationImportedPart", new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("ImportPart.png")), FVector2D(64.0f, 64.0f)));

	// Register Icons for ULuxCharacterAssetPaths
	StyleSet->Set("ClassIcon.LuxCharacterAssetPaths", new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("CharacterAssets.png")), FVector2D(16.0f, 16.0f)));
	StyleSet->Set("ClassThumbnail.LuxCharacterAssetPaths", new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("CharacterAssets.png")), FVector2D(64.0f, 64.0f)));

	// Register Icons for ULuxStageAssetPaths
	StyleSet->Set("ClassIcon.LuxStageAssetPaths", new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("StageAssets.png")), FVector2D(16.0f, 16.0f)));
	StyleSet->Set("ClassThumbnail.LuxStageAssetPaths", new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("StageAssets.png")), FVector2D(64.0f, 64.0f)));
	
	// Register Icons for ULuxVoiceAssetPaths
	StyleSet->Set("ClassIcon.LuxVoiceAssetPaths", new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("VoiceAssets.png")), FVector2D(16.0f, 16.0f)));
	StyleSet->Set("ClassThumbnail.LuxVoiceAssetPaths", new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("VoiceAssets.png")), FVector2D(64.0f, 64.0f)));
	
	// Register Icons for ULuxWeaponAssetPaths
	StyleSet->Set("ClassIcon.LuxWeaponAssetPaths", new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("WeaponAssets.png")), FVector2D(16.0f, 16.0f)));
	StyleSet->Set("ClassThumbnail.LuxWeaponAssetPaths", new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("WeaponAssets.png")), FVector2D(64.0f, 64.0f)));

	// Register Icons for ULuxBattleMovePlayData
	StyleSet->Set("ClassIcon.LuxBattleMovePlayData", new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("MovePlayData.png")), FVector2D(16.0f, 16.0f)));
	StyleSet->Set("ClassThumbnail.LuxBattleMovePlayData", new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("MovePlayData.png")), FVector2D(64.0f, 64.0f)));

	// Register with the engine
	FSlateStyleRegistry::RegisterSlateStyle(*StyleSet.Get());


	IAssetTools &AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	Luxor = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("Luxor")), LOCTEXT("Luxor", "Luxor"));

	// Helper macro to clean up registration and cache it for shutdown
#define REGISTER_ACTION(ActionClass) \
		{ \
			TSharedRef<IAssetTypeActions> Action = MakeShareable(new ActionClass); \
			AssetTools.RegisterAssetTypeActions(Action); \
			CreatedAssetTypeActions.Add(Action); \
		}

	REGISTER_ACTION(FATA_ULuxCreationProfileFactoryActions);
	REGISTER_ACTION(FATA_ULuxRegularProfileFactoryActions);
	REGISTER_ACTION(FATA_ULuxCreationTextureAssetFactoryActions);
	REGISTER_ACTION(FATA_ULuxCharacterAssetPathsFactoryActions);
	REGISTER_ACTION(FATA_ULuxStageAssetPathsFactoryActions);
	REGISTER_ACTION(FATA_ULuxVoiceAssetPathsFactoryActions);
	REGISTER_ACTION(FATA_ULuxWeaponAssetPathsFactoryActions);
	REGISTER_ACTION(FATA_ULuxCreationImportedPartFactoryActions);
	REGISTER_ACTION(FATA_ULuxLoadableBaseFactoryActions);
	REGISTER_ACTION(FATA_ULuxBattleMovePlayDataFactoryActions);

#undef REGISTER_ACTION
}

void FLuxorGameEdModule::ShutdownModule()
{
	if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
		for (int32 i = 0; i < CreatedAssetTypeActions.Num(); ++i)
		{
			AssetTools.UnregisterAssetTypeActions(CreatedAssetTypeActions[i].ToSharedRef());
		}
	}
	CreatedAssetTypeActions.Empty();

	if (StyleSet.IsValid())
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*StyleSet.Get());
		StyleSet.Reset();
	}
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FLuxorGameEdModule, LuxorGameEd)