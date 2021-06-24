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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body")
		FLuxCreationSkinColor SkinColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body")
		FLuxCreationSkinColor SkinEmission;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body")
		FLuxCreationSingleColor IrisColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body")
		FLuxCreationSingleColor IrisEmission;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body")
		FLuxCreationSingleColor ScleraColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body")
		FLuxCreationSingleColor ScleraEmission;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body")
		FLuxCreationSingleColor EyebrowColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body")
		FLuxCreationSingleColor beardColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment")
		TArray<FLuxCreationPartsColor> PartsColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
		FLuxCreationPartsColor WeaponColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment")
		TArray<FLuxOffsetPartSetting> ExtraPartsSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sticker")
		TArray <FLuxPartsSticker> Sticker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VFX")
		TArray <FLuxPermanentEffectSetting> PermanentEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VFX")
		TArray <FLuxTraceColorPalletSetting> TraceColorSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment")
		bool PartsBreakableLower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment")
		bool PartsBreakableMiddle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment")
		bool PartsBreakableUpper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body") // Material that replaces all materials that have IsSkin set to 1.0.
		TAssetPtr <UMaterialInstance> SkinReplaceMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body") // LuxCreationTextureAsset that replaces the eyebrow texture.
		TAssetPtr<ULuxCreationTextureAsset> EyebrowTexture;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Body") // Folder path to custom textures. Ex: /Game/Chara/00c/Texture/
		FString EmissionMaskPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body") // Base filename shared between textures. Ex: nude_r00c
		FString EmissionMaskBaseName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body") // Muscle type. Unique is used to load textures from 'UniqueTexturePath' + 'UniqueTextureBaseName'.
		ELuxMuscleType Muscle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body") // Specifies if a custom skin color mask is used.
		bool bUniqueColorMask;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body") // Folder path to custom textures. Must use 'Unique' muscle type. Ex: /Game/Chara/00c/Texture/
		FString UniqueTexturePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body") // Base filename shared between textures. Must use 'Unique' muscle type. Ex: nude_r00c 
		FString UniqueTextureBaseName;

	
};
