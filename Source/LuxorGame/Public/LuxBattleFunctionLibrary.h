// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LuxBattleGameMode.h"
#include "LuxBattleManager.h"
#include "LuxBattleFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class LUXORGAME_API ULuxBattleFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:	
	UFUNCTION(BlueprintPure,meta=(WorldContext = "WorldContext"))
	static ALuxBattleGameMode* GetBattleGameMode(UObject* WorldContext);


	UFUNCTION(BlueprintPure,meta=(WorldContext="WorldContext"))
		static ALuxBattleManager* GetBattleManager(UObject* WorldContext);

	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContext"))
		static bool BattlePauseEnabled(UObject* WorldContext);

	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContext"))
		static bool IsBattleOnline(UObject* WorldContext);

	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContext"))
		static bool IsBattlePlaying(UObject* WorldContext);

	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContext"))
		static bool IsFinishBlow(UObject* WorldContext);

	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContext"))
		static bool IsMatchFinished(UObject* WorldContext);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContext"))
		static void SetImmortaltiy(UObject* WorldContext,int32 inPlayerIndex,bool bImmortal);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContext"))
		static void SetSoulGaugeInfinity(UObject* WorldContext,int32 inPlayerIndex,bool bInfinite);
	

	
	
};
