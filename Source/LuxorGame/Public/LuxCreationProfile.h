// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuxProfileBase.h"
#include "LuxCreationProfile.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class LUXORGAME_API ULuxCreationProfile : public ULuxProfileBase
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
		FString characterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
		TEnumAsByte<ELuxFightStyle> Style;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body")
		TArray<FLuxBodyScale> BodyScales;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment")
		TArray<FLuxPartCategory> Parts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body|Skin|Colors")
		FLuxCreationSkinColor SkinColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body|Skin|Colors")
		FLuxCreationSkinColor SkinEmission;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body|Eye|Colors")
		FLuxCreationSingleColor IrisColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body|Eye|Colors")
		FLuxCreationSingleColor IrisEmission;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body|Eye|Colors")
		FLuxCreationSingleColor ScleraColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body|Eye|Colors")
		FLuxCreationSingleColor ScleraEmission;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body|Hair|Colors")
		FLuxCreationSingleColor EyebrowColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body|Hair|Colors")
		FLuxCreationSingleColor beardColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment|Colors")
		TArray<FLuxCreationPartsColor> PartsColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon|Colors")
		FLuxCreationPartsColor WeaponColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment|Extra Part")
		TArray<FLuxOffsetPartSetting> ExtraPartsSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sticker")
		TArray <FLuxPartsSticker> Sticker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VFX")
		TArray <FLuxPermanentEffectSetting> PermanentEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VFX|Colors")
		TArray <FLuxTraceColorPalletSetting> TraceColorSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment|BreakFlags")
		bool PartsBreakableLower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment|BreakFlags")
		bool PartsBreakableMiddle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment|BreakFlags")
		bool PartsBreakableUpper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body|Skin") // Material that replaces all materials that have IsSkin set to 1.0.
		TAssetPtr <UMaterialInstance> SkinReplaceMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body|Hair") // LuxCreationTextureAsset that replaces the eyebrow texture.
		TAssetPtr<ULuxCreationTextureAsset> EyebrowTexture;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Body|Skin") // Folder path to custom textures. Ex: /Game/Chara/00c/Texture/
		FString EmissionMaskPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body|Skin") // Base filename shared between textures. Ex: nude_r00c
		FString EmissionMaskBaseName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body|Skin") // Muscle type. Unique is used to load textures from 'UniqueTexturePath' + 'UniqueTextureBaseName'.
		ELuxMuscleType Muscle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body|Skin") // Specifies if a custom skin color mask is used.
		bool bUniqueColorMask;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body|Skin") // Folder path to custom textures. Must use 'Unique' muscle type. Ex: /Game/Chara/00c/Texture/
		FString UniqueTexturePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body|Skin") // Base filename shared between textures. Must use 'Unique' muscle type. Ex: nude_r00c 
		FString UniqueTextureBaseName;

	
};
