// Fill out your copyright notice in the Description page of Project Settings.

#include "LuxBattleGameMode.h"

void ALuxBattleGameMode::InitGame(const FString & MapName, const FString & Options, FString & ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	if (BattleManagerClass == nullptr)
	{

	}
}
