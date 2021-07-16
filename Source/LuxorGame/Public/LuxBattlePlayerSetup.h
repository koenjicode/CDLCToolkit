// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuxLoadableBase.h"
#include "LuxCreationProfile.h"
#include "LuxBattlePlayerSetup.generated.h"

/**
 * 
 */
UCLASS()
class LUXORGAME_API ULuxBattlePlayerSetup : public ULuxLoadableBase
{
	GENERATED_BODY()
public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxWeaponVariation> WeaponVariation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool OverrideDNA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 InputDeviceID;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UAssetObjectProperty* OverrideVoicePaths;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UAssetObjectProperty* OverrideWeaponPaths;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UAssetObjectProperty* OverrideCharacterPaths;

	UFUNCTION(BlueprintCallable)
		void CreatePlayerSetup(ULuxCreationProfile* inProfile)
	{

	}


	
	
};
