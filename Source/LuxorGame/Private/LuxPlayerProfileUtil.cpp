#include "LuxPlayerProfileUtil.h"

bool ULuxPlayerProfileUtil::IsServerDirty(const FLuxorBlueprintUserProfileData& inProfData) {
    return false;
}

int32 ULuxPlayerProfileUtil::GetWinningStreak(const FLuxorBlueprintUserProfileData& inProfData, int32 StyleId) {
    return 0;
}

float ULuxPlayerProfileUtil::GetWinningAverage(const FLuxorBlueprintUserProfileData& inProfData, int32 StyleId) {
    return 0.0f;
}

TArray<bool> ULuxPlayerProfileUtil::GetWinLossRecords(const FLuxorBlueprintUserProfileData& inProfData, int32 StyleId) {
    return TArray<bool>();
}

int32 ULuxPlayerProfileUtil::GetStyleRank(const FLuxorBlueprintUserProfileData& inProfData, int32 StyleId) {
    return 0;
}

int32 ULuxPlayerProfileUtil::GetShougouPlateId(const FLuxorBlueprintUserProfileData& inProfData) {
    return 0;
}

FString ULuxPlayerProfileUtil::GetRegionStr(const FLuxorBlueprintUserProfileData& inProfData) {
    return TEXT("");
}

int32 ULuxPlayerProfileUtil::GetRegion(const FLuxorBlueprintUserProfileData& inProfData) {
    return 0;
}

TArray<int32> ULuxPlayerProfileUtil::GetRankMatchWinLoseCount(const FLuxorBlueprintUserProfileData& inProfData, int32 StyleId) {
    return TArray<int32>();
}

int32 ULuxPlayerProfileUtil::GetRankedMatchWonNum(const FLuxorBlueprintUserProfileData& inProfData) {
    return 0;
}

int32 ULuxPlayerProfileUtil::GetRankedMatchNum(const FLuxorBlueprintUserProfileData& inProfData) {
    return 0;
}

int32 ULuxPlayerProfileUtil::GetPlayerPoint(const FLuxorBlueprintUserProfileData& inProfData, int32 StyleId) {
    return 0;
}

int32 ULuxPlayerProfileUtil::GetPlayerMatchWonNum(const FLuxorBlueprintUserProfileData& inProfData) {
    return 0;
}

int32 ULuxPlayerProfileUtil::GetPlayerMatchNum(const FLuxorBlueprintUserProfileData& inProfData) {
    return 0;
}

int32 ULuxPlayerProfileUtil::GetMostRankId(const FLuxorBlueprintUserProfileData& inProfData) {
    return 0;
}

void ULuxPlayerProfileUtil::GetLocalPlayerProfile(FLuxorBlueprintUserProfileData& outData) {
}

FString ULuxPlayerProfileUtil::GetLanguageStr(const FLuxorBlueprintUserProfileData& inProfData) {
    return TEXT("");
}

int32 ULuxPlayerProfileUtil::GetLanguage(const FLuxorBlueprintUserProfileData& inProfData) {
    return 0;
}

FString ULuxPlayerProfileUtil::GetDisplayNameByProfile(const FLuxorBlueprintUserProfileData& inProfData) {
    return TEXT("");
}

ULuxPlayerProfileUtil::ULuxPlayerProfileUtil() {
}

