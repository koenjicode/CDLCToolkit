#include "LuxMatchSettingSync.h"

void ULuxMatchSettingSync::SendStage(int32 InStageId, bool inIsRandom) {
}

void ULuxMatchSettingSync::SendProfileSet() {
}

void ULuxMatchSettingSync::SendGuestProfile() {
}

void ULuxMatchSettingSync::SendGuestCharacter(const FLuxMatchCharacterData& inPassiveCharaData) {
}

void ULuxMatchSettingSync::SendGuestAll(const FLuxMatchCharacterData& inPassiveCharaData) {
}

void ULuxMatchSettingSync::SendCharacterSet(const FLuxMatchCharacterData& inActiveCharaData, const FLuxMatchCharacterData& inPassiveCharaData) {
}

void ULuxMatchSettingSync::SendCharacterComplete() {
}

void ULuxMatchSettingSync::SendAllComplete() {
}

void ULuxMatchSettingSync::SendAll(const FLuxMatchCharacterData& inActiveCharaData, const FLuxMatchCharacterData& inPassiveCharaData, int32 InStageId) {
}

void ULuxMatchSettingSync::RequestVerifyString(const FString& inCharacterName) {
}

void ULuxMatchSettingSync::RequestStage() {
}

void ULuxMatchSettingSync::RequestProfile() {
}

void ULuxMatchSettingSync::RequestPermissionCheck(const FLuxorBlueprintUserProfileData& InProfileData) {
}

void ULuxMatchSettingSync::RequestCharacterSet() {
}

void ULuxMatchSettingSync::ReadyToConnect() {
}

bool ULuxMatchSettingSync::IsRandomStage() const {
    return false;
}

bool ULuxMatchSettingSync::IsConnected() const {
    return false;
}

bool ULuxMatchSettingSync::IsCompleted() const {
    return false;
}

void ULuxMatchSettingSync::Initialize() {
}

int32 ULuxMatchSettingSync::GetStageId() const {
    return 0;
}

int32 ULuxMatchSettingSync::GetRandomSeed() const {
    return 0;
}

FLuxorBlueprintUserProfileData ULuxMatchSettingSync::GetProfileData(int32 PlayerIndex) const {
    return FLuxorBlueprintUserProfileData{};
}

int32 ULuxMatchSettingSync::GetMatchDataStyleId(const FLuxMatchCharacterData& inCharacterData) {
    return 0;
}

FLuxMatchCharacterData ULuxMatchSettingSync::GetCharaData(int32 PlayerIndex) const {
    return FLuxMatchCharacterData{};
}

void ULuxMatchSettingSync::Finalize() {
}

ULuxMatchSettingSync::ULuxMatchSettingSync() {
}

