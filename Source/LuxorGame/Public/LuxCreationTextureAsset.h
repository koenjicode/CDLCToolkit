// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuxorGame.h"
#include "LuxCreationTextureAsset.generated.h"

/**
 *
 */
UCLASS(BlueprintType)
class LUXORGAME_API ULuxCreationTextureAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	ULuxCreationTextureAsset();

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // Unique Identifier; Its use atm is unknown.
		FName Identifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // Base Color
		UTexture2D* Color;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // Color Mask
		UTexture2D* Mask;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // Normal Map
		UTexture2D* Normal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // Valid color slots
		TArray<bool> EditableFlags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)// Default colors in creation.
		TArray< FLinearColor> DefaultColor; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // For patterns SizeMin should be larger than SizeMax. A larger value will cause the texture to tile more, like what happens when you scale a pattern down ingame.
		float SizeMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // For patterns SizeMin should be larger than SizeMax. A larger value will cause the texture to tile more, like what happens when you scale a pattern down ingame.
		float SizeMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // Default size on the ingame size slider. All Texture Assets have this set to 50.
		int32 UIDefaultSize;

	
};
