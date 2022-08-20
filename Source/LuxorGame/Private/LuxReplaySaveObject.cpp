#include "LuxReplaySaveObject.h"

class ULuxReplaySaveObject;

bool ULuxReplaySaveObject::SaveToMyReplay(const FLuxReplayListItemData& ListItemData) {
    return false;
}

bool ULuxReplaySaveObject::SaveToBattleLog(const FLuxReplayListItemData& ListItemData) {
    return false;
}

bool ULuxReplaySaveObject::RemoveNotUsableMyReplayData() {
    return false;
}

bool ULuxReplaySaveObject::RemoveNotUsableBattleLogData() {
    return false;
}

bool ULuxReplaySaveObject::RemoveFromMyReplay(const FLuxReplayListItemData& ListItemData) {
    return false;
}

bool ULuxReplaySaveObject::IsLimitNumMyReplay() {
    return false;
}

bool ULuxReplaySaveObject::IsExistMyReplay(const FLuxReplayListItemData& ReplayListItemData) {
    return false;
}

ULuxReplaySaveObject* ULuxReplaySaveObject::GetSaveObject(ELuxGameSaveObjectAccessType InAccessType) {
    return NULL;
}

bool ULuxReplaySaveObject::GetMyReplayData(int32 index, FLuxReplayListItemData& OutItemData) {
    return false;
}

bool ULuxReplaySaveObject::GetBattleLogData(int32 index, FLuxReplayListItemData& OutItemData) {
    return false;
}

ULuxReplaySaveObject::ULuxReplaySaveObject() {
    this->TemporaryReplayListIndex = 0;
}

