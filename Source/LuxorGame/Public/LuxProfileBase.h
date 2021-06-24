// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuxorGame.h"
#include "LuxCreationTextureAsset.h"
#include "LuxCreationImportedPart.h"
#include "LuxProfileBase.generated.h"

/**
 * 
 */


UCLASS(BlueprintType)
class LUXORGAME_API ULuxProfileBase : public UDataAsset
{

	GENERATED_BODY()

public:
	ULuxProfileBase();
	~ULuxProfileBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
		TEnumAsByte<ELuxWeaponVariation> WeaponVariation;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
		TEnumAsByte<ELuxGender> Gender;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
		TEnumAsByte<ELuxSoulChargeType> SoulChargeType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
		int32 hitEffectPresetId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
		float BodyWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
		FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voice") // Overrides character voice with the selected ID. Regular profile can use values of other cast in decimal (ex: 064 -> 100 for Azwel). Creation profiles will just default to the first voice when these are used.
		int VoiceBankId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voice")
		int VoicePitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voice")
		int VoicePitchShifter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voice")
		int VoiceFormant;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voice")
		int VoiceEvilDepth;

};
USTRUCT(BlueprintType)
struct FLuxPartCategory
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxPartCategory> Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr<ULuxCreationImportedPart> Part;

};
USTRUCT(BlueprintType)
struct FLuxCreationColorSlotTexturePattern
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr<ULuxCreationTextureAsset> Pattern;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Size;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Rotate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bFlip_H;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bFlip_V;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray <FLuxCreationSingleColor> Color;

};

USTRUCT(BlueprintType)
struct FLuxCreationColorSlot
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLinearColor Color;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLuxCreationColorSlotTexturePattern Pattern;
};

USTRUCT(BlueprintType)
struct FLuxCreationPartsColor
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxPartCategory> Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<bool> EditableFlags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<bool> PatternFlags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FLuxCreationColorSlot> Slots;
};
USTRUCT(BlueprintType)
struct FLuxStickerSlot
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr<ULuxCreationTextureAsset> Sticker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray< FLuxCreationSingleColor> Color;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxStickerMode> Mode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxStickerGuide> Guide;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 StickerSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float StickerRot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CamRotZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CamRotY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float OffsetX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float OffsetY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bFlip_H;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bFlip_V;

};

USTRUCT(BlueprintType)
struct FLuxPartsSticker
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxPartCategory> Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FLuxStickerSlot> Slot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLinearColor PartsColorMask;

};
