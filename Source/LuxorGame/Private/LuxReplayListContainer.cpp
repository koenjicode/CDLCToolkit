#include "LuxReplayListContainer.h"

bool ULuxReplayListContainer::RequestReplayFile(const FString& Key, int32 ID) {
    return false;
}

void ULuxReplayListContainer::RequestReadyReplay() {
}

bool ULuxReplayListContainer::RequestPlayerProfile() {
    return false;
}

void ULuxReplayListContainer::OnRequestPlay() {
}

bool ULuxReplayListContainer::IsExistReplayData(const FString& Key) {
    return false;
}

FString ULuxReplayListContainer::GetRightPlayerNetIdStr() {
    return TEXT("");
}

FString ULuxReplayListContainer::GetLeftPlayerNetIdStr() {
    return TEXT("");
}

FLuxReplayListItemData ULuxReplayListContainer::GetCurrentItemData() {
    return FLuxReplayListItemData{};
}

bool ULuxReplayListContainer::CreateProvideDataByMyReplay(FUIDataObject& DataObject) {
    return false;
}

bool ULuxReplayListContainer::CreateProvideDataByBattleLog(FUIDataObject& DataObject) {
    return false;
}

bool ULuxReplayListContainer::CreateDescriptionProvideData(FUIDataObject& DataObject) {
    return false;
}

void ULuxReplayListContainer::ApplyTemporaryData() {
}

ULuxReplayListContainer::ULuxReplayListContainer() {
}

