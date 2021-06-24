// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuxorGame.h"
#include "LuxAssetPathsBase.h"
#include "LuxWeaponAssetPaths.generated.h"


/**
 * 
 */
UCLASS(BlueprintType)
class LUXORGAME_API ULuxWeaponAssetPaths : public ULuxAssetPathsBase
{
	GENERATED_BODY()

public:
	ULuxWeaponAssetPaths();
	~ULuxWeaponAssetPaths();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int CharacterType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray < FLuxWeaponRawAsset > RawAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray < FLuxWeaponVariation > Variations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray < FLuxTraceColorApplySettingList > TraceColorApplySettingLists;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FStringAssetReference AppxWeaponPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FStringAssetReference AppxWeaponPath2;


};
