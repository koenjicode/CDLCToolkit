// Fill out your copyright notice in the Description page of Project Settings.

#include "LuxBattleFunctionLibrary.h"


ALuxBattleGameMode* ULuxBattleFunctionLibrary::GetBattleGameMode(UObject* WorldContext)
{
	ALuxBattleGameMode* mode = NewObject<ALuxBattleGameMode>();
	return mode;
}

ALuxBattleManager* ULuxBattleFunctionLibrary::GetBattleManager(UObject* WorldContext)
{
	ALuxBattleManager* manager = NewObject<ALuxBattleManager>();
	return manager;
}

bool ULuxBattleFunctionLibrary::BattlePauseEnabled(UObject * WorldContext)
{
	return false;
}

bool ULuxBattleFunctionLibrary::IsBattleOnline(UObject * WorldContext)
{
	return false;
}

bool ULuxBattleFunctionLibrary::IsBattlePlaying(UObject * WorldContext)
{
	return false;
}

bool ULuxBattleFunctionLibrary::IsFinishBlow(UObject * WorldContext)
{
	return false;
}

bool ULuxBattleFunctionLibrary::IsMatchFinished(UObject * WorldContext)
{
	return false;
}

void ULuxBattleFunctionLibrary::SetImmortaltiy(UObject * WorldContext, int32 inPlayerIndex, bool bImmortal)
{
}

void ULuxBattleFunctionLibrary::SetSoulGaugeInfinity(UObject * WorldContext, int32 inPlayerIndex, bool bInfinite)
{
}

