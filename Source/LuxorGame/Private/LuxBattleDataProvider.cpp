#include "LuxBattleDataProvider.h"

class UObject;

bool ULuxBattleDataProvider::SetPlayerInfo(UObject* WorldContext, ELuxPlayerInfoType Type, int32 inIndex, bool inBool, int32 inInt, float inFloat) {
    return false;
}

bool ULuxBattleDataProvider::IsWaitingBattleMode(UObject* WorldContext) {
    return false;
}

bool ULuxBattleDataProvider::IsSkippableBattleMode(UObject* WorldContext) {
    return false;
}

bool ULuxBattleDataProvider::IsInitialized(UObject* WorldContext) {
    return false;
}

bool ULuxBattleDataProvider::IsCompletedBattle(UObject* WorldContext) {
    return false;
}

bool ULuxBattleDataProvider::IsBattleDraw(UObject* WorldContextObject) {
    return false;
}

int32 ULuxBattleDataProvider::GetWinnerPlayerIndex(UObject* WorldContextObject) {
    return 0;
}

void ULuxBattleDataProvider::GetWeaponGauge(UObject* WorldContextObject, FVector2D& outGauge, int32 inIndex) {
}

void ULuxBattleDataProvider::GetSoulChargeTimeGauge(UObject* WorldContextObject, FVector2D& outGauge, int32 inIndex) {
}

void ULuxBattleDataProvider::GetRoundMarker(UObject* WorldContextObject, FVector2D& outVector, int32 inPlayerIndex) {
}

void ULuxBattleDataProvider::GetPlayerInfo(UObject* WorldContext, ELuxPlayerInfoType Type, int32 inIndex, bool& outBool, int32& outInt, float& outFloat) {
}

int32 ULuxBattleDataProvider::GetMatchWinner(UObject* WorldContextObject) {
    return 0;
}

void ULuxBattleDataProvider::GetHealthGauge(UObject* WorldContextObject, FVector2D& outGauge, int32 inIndex) {
}

void ULuxBattleDataProvider::GetGuardGauge(UObject* WorldContextObject, FVector2D& outGauge, int32 inIndex) {
}

int32 ULuxBattleDataProvider::GetCharaValue(UObject* WorldContextObject, int32 inPlayerIndex, int32 inValueIndex) {
    return 0;
}

int32 ULuxBattleDataProvider::GetBattleWinner(UObject* WorldContextObject) {
    return 0;
}

int32 ULuxBattleDataProvider::GetBattleTime(UObject* WorldContextObject) {
    return 0;
}

int32 ULuxBattleDataProvider::GetBattleResult(UObject* WorldContextObject) {
    return 0;
}

int32 ULuxBattleDataProvider::GetBattleNum(UObject* WorldContextObject) {
    return 0;
}

void ULuxBattleDataProvider::GetBattleInfo(UObject* WorldContext, ELuxBattleInfoType Type, bool& outBool, int32& outInt, float& outFloat) {
}

ULuxBattleDataProvider::ULuxBattleDataProvider() {
}

