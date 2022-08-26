#include "LuxCeBankManager.h"

class ULuxorMatchData;
class ULuxProfileFactory;

void ULuxCeBankManager::TitleToMainMenu() {
}

void ULuxCeBankManager::StartModeCnt() {
}

void ULuxCeBankManager::StartMatchingTimerIfNotStarted() {
}

void ULuxCeBankManager::SetUnfinishedBattleFlag(bool isUnfinished) {
}

void ULuxCeBankManager::SetMatchingTimeKPIParams(const FName mode_name, const ELuxCeBankMatchingResultType result_type, const int32 connect_status) {
}

void ULuxCeBankManager::SetMatchingParams(FName mode_name, const int32 PlayerIndex, const ULuxorMatchData* matchData) {
}

void ULuxCeBankManager::SetMatchingErrorNum(int32 C) {
}

void ULuxCeBankManager::SetIsMatchingTimeDirty(bool IsDirty) {
}

void ULuxCeBankManager::SetIsMatchingParamsDirty(bool IsDirty) {
}

void ULuxCeBankManager::SetInvitedStartFlag(bool F) {
}

void ULuxCeBankManager::SetFighterId(ELuxUIBattlePlayerSide side, int32 ID) {
}

void ULuxCeBankManager::SetAgreeKpiFlagToOption(const bool agree) {
}

void ULuxCeBankManager::ResetMatchingTimer() {
}

void ULuxCeBankManager::ResetMatchingErrorNum() {
}

void ULuxCeBankManager::RequestReport(const FString& reportId, const FString& reportedId, int32 reportType) {
}

void ULuxCeBankManager::RequestOnlineDataKpi() {
}

void ULuxCeBankManager::RequestOfflineDataKpi(const bool UseOnlineAPI) {
}

void ULuxCeBankManager::RequestLogin() {
}

void ULuxCeBankManager::RequestKpiAfterLogin() {
}

void ULuxCeBankManager::RequestKpi(const bool UseOnlineAPI) {
}

void ULuxCeBankManager::RequestCosmosCountry(const int32 pType, const FString& pUserId) {
}

void ULuxCeBankManager::RequestBan() {
}

void ULuxCeBankManager::RequestAgreeKpi(ELuxCeBankAgreeKpiType Type) {
}

void ULuxCeBankManager::RemoveOnKpiOnlineComplete() {
}

void ULuxCeBankManager::RemoveOnKpiOfflineComplete() {
}

void ULuxCeBankManager::RemoveOnEndMode() {
}

void ULuxCeBankManager::RemoveOnCeBankLoginWaitComplete() {
}

void ULuxCeBankManager::RemoveOnCeBankLoginComplete() {
}

void ULuxCeBankManager::RemoveOnAgreeKpiComplete() {
}

void ULuxCeBankManager::PrintCeBankView(const FString& str) {
}

void ULuxCeBankManager::OnSceneStart(const FString& SceneName) {
}

bool ULuxCeBankManager::IsCeBankEnable() {
    return false;
}

void ULuxCeBankManager::IncrementMatchingErrorNum(int32 C) {
}

int32 ULuxCeBankManager::GetSC6CharaId(int32 tradCharaId) {
    return 0;
}

int32 ULuxCeBankManager::GetMatchingTimer() const {
    return 0;
}

ELuxCeBankPlayModeType ULuxCeBankManager::GetCurrentMode() {
    return ELuxCeBankPlayModeType::ECBPMT_RANKED_MATCH;
}

void ULuxCeBankManager::AddRequestKpiSendReport() {
}

void ULuxCeBankManager::AddRequestKpiPartsInfo(const ULuxProfileFactory* factory, bool isRemove) {
}

void ULuxCeBankManager::AddRequestKpiOnlineGaugeInfo() {
}

void ULuxCeBankManager::AddRequestKpiOnlineFightersInfo() {
}

void ULuxCeBankManager::AddRequestKpiOnlineBattleInfo() {
}

void ULuxCeBankManager::AddRequestKpiMostUsedFightersInfo() {
}

void ULuxCeBankManager::AddRequestKpiMatchingTime() {
}

void ULuxCeBankManager::AddRequestKpiMatchingRTTAverage() {
}

void ULuxCeBankManager::AddRequestKpiMatchingRankDisparity(FName mode_name) {
}

void ULuxCeBankManager::AddRequestKpiMatchingCnt(FName mode_name) {
}

void ULuxCeBankManager::AddRequestKpiLanInfo() {
}

void ULuxCeBankManager::AddRequestKpiIcmpRttFailureRate(const TArray<FLuxorBlueprintFindSessionResult>& Results) {
}

void ULuxCeBankManager::AddRequestKpiHWLanguage() {
}

void ULuxCeBankManager::AddRequestKpiHWCountry() {
}

void ULuxCeBankManager::AddRequestKpiHighestOnlineRank() {
}

void ULuxCeBankManager::AddRequestKpiGameLanguage() {
}

void ULuxCeBankManager::AddRequestKpiDlc() {
}

void ULuxCeBankManager::AddRequestKpiCreationInfo() {
}

void ULuxCeBankManager::AddRequestKpiChraRankRatio(const int32 PlayerIndex, const ULuxorMatchData* matchData) {
}

void ULuxCeBankManager::AddRequestKpiAllChraRankRatio() {
}

bool ULuxCeBankManager::AddRequestAndRestartModeCnt() {
    return false;
}

void ULuxCeBankManager::AddOnKpiOnlineComplete(ULuxCeBankManager::FOnCeBankKpiComplete InOnKpiComplete) {
}

void ULuxCeBankManager::AddOnKpiOfflineComplete(ULuxCeBankManager::FOnCeBankKpiComplete InOnKpiComplete) {
}

void ULuxCeBankManager::AddOnEndMode(ULuxCeBankManager::FOnCeBankEndMode InOnEndMode) {
}

void ULuxCeBankManager::AddOnCeBankLoginWaitComplete(ULuxCeBankManager::FOnCeBankLoginWaitComplete InOnLoginWaitComplete) {
}

void ULuxCeBankManager::AddOnCeBankLoginComplete(ULuxCeBankManager::FOnCeBankLoginComplete InOnLoginComplete) {
}

void ULuxCeBankManager::AddOnAgreeKpiComplete(ULuxCeBankManager::FOnCeBankAgreeKpiComplete InOnAgreeKpiComplete) {
}

ULuxCeBankManager::ULuxCeBankManager() {
    this->m_pKpiOnLineData = NULL;
    this->m_pKpiOffLineDataOnLineApi = NULL;
    this->m_pKpiOffLineDataOffLineApi = NULL;
}

