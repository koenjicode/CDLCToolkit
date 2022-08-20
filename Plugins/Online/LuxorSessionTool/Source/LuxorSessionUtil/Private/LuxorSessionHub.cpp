#include "LuxorSessionHub.h"

class UObject;
class ULuxorMatchData;

void ULuxorSessionHub::RequestWatchEnd() {
}

void ULuxorSessionHub::RequestWatchCancel() {
}

void ULuxorSessionHub::RequestSitInChair() {
}

void ULuxorSessionHub::RequestSetWonRound(int32 WonRound) {
}

void ULuxorSessionHub::RequestSetUsingMultiplayerFeatures(int32 MainUserId, bool UsingMP) {
}

void ULuxorSessionHub::RequestSendPacketMessage(const FString& Message) {
}

void ULuxorSessionHub::RequestSendChatMessageId(int32 MessageId) {
}

void ULuxorSessionHub::RequestSendChatMessage(const FString& Message) {
}

bool ULuxorSessionHub::RequestReady(int32 RequestType) {
    return false;
}

void ULuxorSessionHub::RequestLockHostInfo() {
}

void ULuxorSessionHub::RequestLineUpBehined() {
}

void ULuxorSessionHub::RequestLeaveChair() {
}

void ULuxorSessionHub::RequestKick(const FLuxorBlueprintPeerInfo& PeerInfo) {
}

void ULuxorSessionHub::RequestInvitePartyMember(int32 MainUserId) {
}

void ULuxorSessionHub::RequestChangePlaySide(uint8 side) {
}

bool ULuxorSessionHub::RequestCancelReady() {
    return false;
}

void ULuxorSessionHub::RequestBattleEndToLobby(int32 inResult) {
}

void ULuxorSessionHub::RequestBattleEnd(int32 inResult) {
}

void ULuxorSessionHub::RequestBackLobby() {
}

void ULuxorSessionHub::RequestAFK() {
}

void ULuxorSessionHub::RemoveSessionHubReceiver(UObject* InSessionHubReceiver) {
}

void ULuxorSessionHub::RemoveOnHubTournamentJoinEvent() {
}

void ULuxorSessionHub::RemoveOnHubPlayTogetherEvent() {
}

void ULuxorSessionHub::RemoveOnHubInviteAccepted() {
}

bool ULuxorSessionHub::RankMatchMaking(int32 inMainUserId, const FName inSessionName, const FLuxorRankMatchSessionSetting& inRMSessionSetting) {
    return false;
}

bool ULuxorSessionHub::PlayerMatchMaking(int32 inMainUserId, const FName inSessionName, const FLuxorPlayerMatchSessionSetting& inPMSessionSetting) {
    return false;
}

bool ULuxorSessionHub::JoinSession(int32 inMainUserId, const FName inSessionName, const FLuxorBlueprintFindSessionResult& SearchResult) {
    return false;
}

void ULuxorSessionHub::Initialize() {
}

ULuxorMatchData* ULuxorSessionHub::GetMatchData() {
    return NULL;
}

bool ULuxorSessionHub::FindRankSession(int32 inMainUserId, const FName inSessionName, int32 MaxResults, bool bUseLAN, const FLuxorRankMatchSessionSetting& inRMSessionSetting) {
    return false;
}

bool ULuxorSessionHub::FindPlayerSession(int32 inMainUserId, const FName inSessionName, int32 MaxResults, bool bUseLAN, const FLuxorPlayerMatchSessionSetting& inPMSessionSetting) {
    return false;
}

void ULuxorSessionHub::Finalize() {
}

bool ULuxorSessionHub::DestroySession(int32 inMainUserId, const FName inSessionName) {
    return false;
}

bool ULuxorSessionHub::CreateRankSession(int32 inMainUserId, const FName inSessionName, const FLuxorRankMatchSessionSetting& inRMSessionSetting) {
    return false;
}

bool ULuxorSessionHub::CreatePlayerSession(int32 inMainUserId, const FName inSessionName, const FLuxorPlayerMatchSessionSetting& inPMSessionSetting) {
    return false;
}

void ULuxorSessionHub::AddSessionHubReceiver(UObject* InSessionHubReceiver) {
}

void ULuxorSessionHub::AddOnHubTournamentJoinEvent(ULuxorSessionHub::FOnHubTournamentJoinEvent InOnHubTournamentJoinEvent) {
}

void ULuxorSessionHub::AddOnHubPlayTogetherEvent(ULuxorSessionHub::FOnHubPlayTogetherEvent InOnHubPlayTogetherEvent) {
}

void ULuxorSessionHub::AddOnHubInviteAccepted(ULuxorSessionHub::FOnHubInviteReceived InOnHubInviteAccepted) {
}

ULuxorSessionHub::ULuxorSessionHub() {
    this->matchData = NULL;
    this->DevSessionChannelSetting = NULL;
}

