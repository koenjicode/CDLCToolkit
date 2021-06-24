// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuxCreationProfile.h"
#include "LuxRegularProfile.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class LUXORGAME_API ULuxRegularProfile : public ULuxCreationProfile
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
		TEnumAsByte<ELuxCharacter> Character;
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
		TArray<FLuxBreastSwingParam> SwingParams;

};
