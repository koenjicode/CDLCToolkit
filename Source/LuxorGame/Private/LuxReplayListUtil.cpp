#include "LuxReplayListUtil.h"

class ULuxorMatchData;

TArray<uint8> ULuxReplayListUtil::GetRaw(const FLuxReplayListItemData& ReplayListItemData) {
    return TArray<uint8>();
}

bool ULuxReplayListUtil::GetData(const TArray<uint8>& Raw, FLuxReplayListItemData& OutItemData) {
    return false;
}

FLuxReplayListItemData ULuxReplayListUtil::CreateReplayListItemData(const ULuxorMatchData* matchData) {
    return FLuxReplayListItemData{};
}

ULuxReplayListUtil::ULuxReplayListUtil() {
}

