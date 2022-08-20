#include "LuxBattleFunctionLibrary.h"

class ALuxBattlePauseController;
class UObject;
class ALuxBattleGameMode;
class ALuxBattleManager;

void ULuxBattleFunctionLibrary::StepInBattlePause(UObject* WorldContext) {
}

void ULuxBattleFunctionLibrary::SetUserInputCheck(UObject* WorldContext, bool bEnabled) {
}

void ULuxBattleFunctionLibrary::SetSoulGaugeInfinity(UObject* WorldContext, int32 inPlayerIndex, bool bInfinite) {
}

void ULuxBattleFunctionLibrary::SetImmortality(UObject* WorldContext, int32 inPlayerIndex, bool bImmortal) {
}

void ULuxBattleFunctionLibrary::SetBattlePause(UObject* WorldContext, ELuxBattlePauseType inType, bool bPause) {
}

bool ULuxBattleFunctionLibrary::IsMatchFinished(UObject* WorldContext) {
    return false;
}

bool ULuxBattleFunctionLibrary::IsLocalUserControl(UObject* WorldContext, int32 PlayerIndex) {
    return false;
}

bool ULuxBattleFunctionLibrary::IsFinishBlow(UObject* WorldContext) {
    return false;
}

bool ULuxBattleFunctionLibrary::IsBattlePlaying(UObject* WorldContext) {
    return false;
}

bool ULuxBattleFunctionLibrary::IsBattlePaused(UObject* WorldContext, ELuxBattlePauseType inType) {
    return false;
}

bool ULuxBattleFunctionLibrary::IsBattleOnlineInputSync(UObject* WorldContext) {
    return false;
}

bool ULuxBattleFunctionLibrary::IsBattleOnline(UObject* WorldContext) {
    return false;
}

void ULuxBattleFunctionLibrary::GetBuildConfiguration(FString& Configuration) {
}

ALuxBattlePauseController* ULuxBattleFunctionLibrary::GetBattlePauseController(UObject* WorldContext) {
    return NULL;
}

ALuxBattleManager* ULuxBattleFunctionLibrary::GetBattleManager(UObject* WorldContext) {
    return NULL;
}

ALuxBattleGameMode* ULuxBattleFunctionLibrary::GetBattleGameMode(UObject* WorldContext) {
    return NULL;
}

bool ULuxBattleFunctionLibrary::BattlePauseEnabled(UObject* WorldContext) {
    return false;
}

ULuxBattleFunctionLibrary::ULuxBattleFunctionLibrary() {
}

