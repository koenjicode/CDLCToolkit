#include "LuxorMatchData.h"

void ULuxorMatchData::StampCurrentTime() {
}

void ULuxorMatchData::SetStyleId(int32 PlayerIndex, int32 StyleId) {
}

void ULuxorMatchData::SetStageCode(const FString& StageCode) {
}

void ULuxorMatchData::SetRematchType(int32 rematchType) {
}

void ULuxorMatchData::SetRankPoint(int32 PlayerIndex, int32 rankPoint) {
}

void ULuxorMatchData::SetRankId(int32 PlayerIndex, int32 RankId) {
}

void ULuxorMatchData::SetProfileData(int32 PlayerIndex, const FLuxorBlueprintUserProfileData& profData) {
}

void ULuxorMatchData::SetMatchWinningStreak(int32 PlayerIndex, int32 MatchWinningStreak) {
}

void ULuxorMatchData::SetIsUniqueCharacter(bool isUniqueCharacter) {
}

void ULuxorMatchData::SetIsActiveUserCached(bool IsActiveUser) {
}

void ULuxorMatchData::SetColorIndex(int32 PlayerIndex, int32 colorIndex) {
}

void ULuxorMatchData::SetBattleType(int32 BattleFormat) {
}

void ULuxorMatchData::SetBattleFormat(int32 BattleFormat) {
}

void ULuxorMatchData::SetBattleCountMax(int32 battleCountMax) {
}

void ULuxorMatchData::SetBattleCount(int32 PlayerIndex, int32 BattleCount) {
}

void ULuxorMatchData::ResetRecentBattleResult(int32 PlayerIndex) {
}

bool ULuxorMatchData::IsEqualUser(const FLuxorBlueprintPeerInfo& inInfo, int32 PlayerIndex) const {
    return false;
}

float ULuxorMatchData::GetWinningAverage(int32 PlayerIndex) const {
    return 0.0f;
}

int32 ULuxorMatchData::GetStyleId(int32 PlayerIndex) const {
    return 0;
}

FDateTime ULuxorMatchData::GetStampTime() const {
    return FDateTime{};
}

FString ULuxorMatchData::GetStageCode() const {
    return TEXT("");
}

int32 ULuxorMatchData::GetRematchType() const {
    return 0;
}

int32 ULuxorMatchData::GetRankPoint(int32 PlayerIndex) const {
    return 0;
}

int32 ULuxorMatchData::GetRankId(int32 PlayerIndex) const {
    return 0;
}

FLuxorBlueprintUserProfileData ULuxorMatchData::GetProfileData(int32 PlayerIndex) const {
    return FLuxorBlueprintUserProfileData{};
}

int32 ULuxorMatchData::GetMostRankId(int32 PlayerIndex) const {
    return 0;
}

int32 ULuxorMatchData::GetMatchWonCountSum(int32 PlayerIndex) const {
    return 0;
}

int32 ULuxorMatchData::GetMatchWinningStreak(int32 PlayerIndex) const {
    return 0;
}

int32 ULuxorMatchData::GetMatchWinnerIndex() const {
    return 0;
}

bool ULuxorMatchData::GetIsUniqueCharacter() const {
    return false;
}

bool ULuxorMatchData::GetIsActiveUserCached() const {
    return false;
}

int32 ULuxorMatchData::GetColorIndex(int32 PlayerIndex) const {
    return 0;
}

int32 ULuxorMatchData::GetBattleType() const {
    return 0;
}

int32 ULuxorMatchData::GetBattleFormat() const {
    return 0;
}

int32 ULuxorMatchData::GetBattleCountMax() const {
    return 0;
}

int32 ULuxorMatchData::GetBattleCount(int32 PlayerIndex) const {
    return 0;
}

void ULuxorMatchData::DecideMatchWinnerIndex(int32 matchWinnerIndex) {
}

ULuxorMatchData::ULuxorMatchData() {
}

