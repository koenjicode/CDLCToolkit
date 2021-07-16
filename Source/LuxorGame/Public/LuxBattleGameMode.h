// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "LuxBattleManager.h"
#include "LuxBattleGameMode.generated.h"

/**
 * 
 */
UCLASS()
class LUXORGAME_API ALuxBattleGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Classes, meta = (DisplayName = "Battle Manager Class"))
	TSubclassOf<ALuxBattleManager> BattleManagerClass;

	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	
	
	
};
