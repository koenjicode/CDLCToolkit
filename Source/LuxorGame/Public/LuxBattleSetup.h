// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuxActor.h"
#include "LuxBattlePlayerSetup.h"
#include "LuxBattleSetup.generated.h"

/**
 * 
 */
UCLASS()
class LUXORGAME_API ALuxBattleSetup : public ALuxActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bEndless;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ULuxBattlePlayerSetup* PlayerRight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ULuxBattlePlayerSetup* PlayerLeft;
};
