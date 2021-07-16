// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuxCharaActor.h"
#include "LuxorGame.h"
#include "LuxBattlePlayerSetup.h"
#include "LuxBattleChara.generated.h"

/**
 * 
 */
UCLASS()
class LUXORGAME_API ALuxBattleChara : public ALuxCharaActor
{
	GENERATED_BODY()
public:
	ALuxBattleChara();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FLuxPermanentEffectSetting> PermanentEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TEnumAsByte<ELuxPartsSE>> SEMaterials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr<UObject> TraceManager;

		int32 BreakFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 WeaponID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 CharaID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 PlayerIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ULuxBattlePlayerSetup* PlayerSetupOverride;

	

	UFUNCTION(BlueprintCallable)
		void ApplyCreationColor()
	{

	}

	UFUNCTION(BlueprintCallable)
		int32 GetBreakFlag()
	{
		return BreakFlag;
	}

	UFUNCTION(BlueprintCallable)
		void RefreshAppearance()
	{

	}

	UFUNCTION(BlueprintCallable)
		void ReplaceChara(int32 inCharaID)
	{

	}

	UFUNCTION(BlueprintCallable)
		void ReplaceWeapon(int32 inWeaponID)
	{

	}

	UFUNCTION(BlueprintCallable)
		void SetBreakFlag(int32 flag)
	{
		BreakFlag = flag;
	}

	UFUNCTION(BlueprintCallable)
		void SetEvilFlag(bool inFlag)
	{

	}

	UFUNCTION(BlueprintCallable)
		void SetMaterialChargeRate(float inValue)
	{

	}
};
