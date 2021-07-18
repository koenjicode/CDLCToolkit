// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuxActor.h"
#include "LuxBattleSetup.h"
#include "Engine/World.h"

#include "LuxBattleManager.generated.h"

/**
 * 
 */
UCLASS()
class LUXORGAME_API ALuxBattleManager : public ALuxActor
{
	GENERATED_BODY()
public:	
	UFUNCTION(BlueprintPure)
	ALuxBattleSetup* GetBattleSetup()
	{
		ALuxBattleSetup* battle = NewObject<ALuxBattleSetup>();
			return battle;
	}
	
	UFUNCTION(BlueprintPure)
	bool IsOnline();
	
	
};
