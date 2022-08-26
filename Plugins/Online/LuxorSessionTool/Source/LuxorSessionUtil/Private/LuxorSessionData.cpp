#include "LuxorSessionData.h"

void ULuxorSessionData::SetSessionRttValue(const FLuxorBlueprintFindSessionResult& inSessionData) {
}

void ULuxorSessionData::ResetSessionRttValue() {
}

void ULuxorSessionData::ResetPeerRttValue() {
}

FName ULuxorSessionData::RankMatchName() {
    return NAME_None;
}

FName ULuxorSessionData::PlayerMatchName() {
    return NAME_None;
}

bool ULuxorSessionData::IsValid(const FLuxorBlueprintPeerInfo& inInfo) {
    return false;
}

bool ULuxorSessionData::IsSpectator(const FLuxorBlueprintPeerInfo& inInfo) {
    return false;
}

bool ULuxorSessionData::IsSignInUser(int32 InUserId) {
    return false;
}

bool ULuxorSessionData::IsSessionConnecting() {
    return false;
}

bool ULuxorSessionData::IsRest(const FLuxorBlueprintPeerInfo& inInfo) {
    return false;
}

bool ULuxorSessionData::IsReadyBattle(const FLuxorBlueprintPeerInfo& inInfo) {
    return false;
}

bool ULuxorSessionData::IsReady(const FLuxorBlueprintPeerInfo& inInfo) {
    return false;
}

bool ULuxorSessionData::IsPassiveUser() {
    return false;
}

bool ULuxorSessionData::IsMatchConnecting() {
    return false;
}

bool ULuxorSessionData::IsLoggedInUser(int32 InUserId) {
    return false;
}

bool ULuxorSessionData::IsLocal(const FLuxorBlueprintPeerInfo& inInfo) {
    return false;
}

bool ULuxorSessionData::IsHost(const FLuxorBlueprintPeerInfo& inInfo) {
    return false;
}

bool ULuxorSessionData::IsExistSession(const FName& inSessionName) {
    return false;
}

bool ULuxorSessionData::IsEnableReady(const FLuxorBlueprintPeerInfo& inInfo) {
    return false;
}

bool ULuxorSessionData::IsActiveUser() {
    return false;
}

int32 ULuxorSessionData::GetWonCount(const FLuxorBlueprintPeerInfo& inInfo) {
    return 0;
}

int32 ULuxorSessionData::GetWinningCount(const FLuxorBlueprintPeerInfo& inInfo) {
    return 0;
}

FString ULuxorSessionData::GetSessionResultRoomName(const FLuxorBlueprintFindSessionResult& inSessionData) {
    return TEXT("");
}

int32 ULuxorSessionData::GetSessionResultQosSetting(const FLuxorBlueprintFindSessionResult& inSessionData) {
    return 0;
}

int32 ULuxorSessionData::GetSessionResultPlayStyle(const FLuxorBlueprintFindSessionResult& inSessionData) {
    return 0;
}

void ULuxorSessionData::GetSessionResultPlayerNum(const FLuxorBlueprintFindSessionResult& inSessionData, int32& outPublicNum, int32& outPrivateNum, int32& outOpenPublicNum, int32& outOpenPrivateNum) {
}

FString ULuxorSessionData::GetSessionResultOwnerNetId(const FLuxorBlueprintFindSessionResult& inSessionData) {
    return TEXT("");
}

FString ULuxorSessionData::GetSessionResultName(const FLuxorBlueprintFindSessionResult& inSessionData) {
    return TEXT("");
}

int32 ULuxorSessionData::GetSessionResultMostRankId(const FLuxorBlueprintFindSessionResult& inSessionData) {
    return 0;
}

int32 ULuxorSessionData::GetSessionResultLangId(const FLuxorBlueprintFindSessionResult& inSessionData) {
    return 0;
}

int32 ULuxorSessionData::GetSessionResultBattleType(const FLuxorBlueprintFindSessionResult& inSessionData) {
    return 0;
}

int32 ULuxorSessionData::GetSessionResultBattleTime(const FLuxorBlueprintFindSessionResult& inSessionData) {
    return 0;
}

int32 ULuxorSessionData::GetSessionResultBattleFormat(const FLuxorBlueprintFindSessionResult& inSessionData) {
    return 0;
}

int32 ULuxorSessionData::GetSessionResultBattleCount(const FLuxorBlueprintFindSessionResult& inSessionData) {
    return 0;
}

int32 ULuxorSessionData::GetSessionResultAreaSetting(const FLuxorBlueprintFindSessionResult& inSessionData) {
    return 0;
}

int32 ULuxorSessionData::GetSessionResultAreaId(const FLuxorBlueprintFindSessionResult& inSessionData) {
    return 0;
}

int32 ULuxorSessionData::GetSessionResultAntenna(const FLuxorBlueprintFindSessionResult& inSessionData) {
    return 0;
}

int32 ULuxorSessionData::GetSessionPlayStyle(const FName& inSessionName) {
    return 0;
}

void ULuxorSessionData::GetSessionPlayerNum(const FName& inSessionName, int32& outPublicNum, int32& outPrivateNum, int32& outOpenPublicNum, int32& outOpenPrivateNum) {
}

TArray<FLuxorBlueprintPeerInfo> ULuxorSessionData::GetSessionPeerList() {
    return TArray<FLuxorBlueprintPeerInfo>();
}

int32 ULuxorSessionData::GetSessionLanguageSetting(const FName& inSessionName) {
    return 0;
}

int32 ULuxorSessionData::GetSessionBattleType(const FName& inSessionName) {
    return 0;
}

int32 ULuxorSessionData::GetSessionBattleTime(const FName& inSessionName) {
    return 0;
}

int32 ULuxorSessionData::GetSessionBattleFormat(const FName& inSessionName) {
    return 0;
}

int32 ULuxorSessionData::GetSessionBattleCount(const FName& inSessionName) {
    return 0;
}

int32 ULuxorSessionData::GetSessionAreaSetting(const FName& inSessionName) {
    return 0;
}

bool ULuxorSessionData::GetSessionAccessType(const FName& inSessionName) {
    return false;
}

int32 ULuxorSessionData::GetRttMax() {
    return 0;
}

float ULuxorSessionData::GetRttAverage() {
    return 0.0f;
}

int32 ULuxorSessionData::GetRoundWinMarker(const FLuxorBlueprintPeerInfo& inInfo) {
    return 0;
}

uint8 ULuxorSessionData::GetRequestPlaySide(const FLuxorBlueprintPeerInfo& inInfo) {
    return 0;
}

int32 ULuxorSessionData::GetRegion(const FLuxorBlueprintPeerInfo& inInfo) {
    return 0;
}

FString ULuxorSessionData::GetPeerRttValue(const FLuxorBlueprintPeerInfo& inInfo) {
    return TEXT("");
}

FLuxorBlueprintPeerInfo ULuxorSessionData::GetOpponentPeerInfo() {
    return FLuxorBlueprintPeerInfo{};
}

int32 ULuxorSessionData::GetMostValuableCharacterClass(const FLuxorBlueprintPeerInfo& inInfo) {
    return 0;
}

int32 ULuxorSessionData::GetLossCount(const FLuxorBlueprintPeerInfo& inInfo) {
    return 0;
}

FLuxorBlueprintPeerInfo ULuxorSessionData::GetLocalPeerInfo() {
    return FLuxorBlueprintPeerInfo{};
}

FString ULuxorSessionData::GetLanguageCode(const FLuxorBlueprintPeerInfo& inInfo) {
    return TEXT("");
}

int32 ULuxorSessionData::GetIcmpRtt() {
    return 0;
}

FString ULuxorSessionData::GetDisplayName(const FLuxorBlueprintPeerInfo& inInfo) {
    return TEXT("");
}

TArray<FLuxorChatMessageItem> ULuxorSessionData::GetChatMessageIdArray() {
    return TArray<FLuxorChatMessageItem>();
}

int32 ULuxorSessionData::GetAntennaValue(const FLuxorBlueprintPeerInfo& inInfo) {
    return 0;
}

void ULuxorSessionData::CalcPeerRttValue(const FLuxorBlueprintPeerInfo& inInfo) {
}

ULuxorSessionData::ULuxorSessionData() {
}

