// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuxLevelScriptActor.h"
#include "LuxBattleLevelScriptActor.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleLevelScriptActor : public ALuxLevelScriptActor
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnRoundStarted(int CurrentRound);

	
	

};
