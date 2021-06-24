// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuxAssetPathsBase.h"
#include "LuxorGame.h"
#include "LuxStageAssetPaths.generated.h"

/**
 * 
 */
UCLASS()
class LUXORGAME_API ULuxStageAssetPaths : public ULuxAssetPathsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName Identifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FLuxStageRawAsset> RawAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLuxStageSetting Setting;
	
	
	
};
