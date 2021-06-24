// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LuxorGame.h"
#include "LuxCreationTextureAsset.h"
#include "ColorData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FColorData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "Pattern")
	ULuxCreationTextureAsset* Pattern;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pattern")
	TArray<FLinearColor> PatternColors;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pattern")
		TArray<bool> EditableFlags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pattern") //Only values between SizeMin and SizeMax will show. 
		float Size;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pattern")
		float Rotate;
	
	
};
