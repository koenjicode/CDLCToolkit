#include "LuxUIBattleLauncher.h"

class ULuxUIBattleLauncher;

void ULuxUIBattleLauncher::Start(FUIBattleLauncherStartParam InStartParam) {
}

void ULuxUIBattleLauncher::Setup(const FUIDataObject& InBattleSetting) {
}

void ULuxUIBattleLauncher::SetSlipOutMode(bool bEnable) {
}

void ULuxUIBattleLauncher::SetReplayMode(bool bEnable) {
}

void ULuxUIBattleLauncher::SetRecordMode(bool bEnable) {
}

void ULuxUIBattleLauncher::SetRandomSeed(int32 InRandomSeed) {
}

void ULuxUIBattleLauncher::SetNoRingOutMode(bool bEnable) {
}

void ULuxUIBattleLauncher::SetEndlessMode(bool bEnable) {
}

void ULuxUIBattleLauncher::SetDamageUpMode(bool bEnable) {
}

void ULuxUIBattleLauncher::SetCurrentBattlePlayerIndex(ELuxUIBattlePlayerSide InPlayerSide, int32 inPlayerIndex) {
}

void ULuxUIBattleLauncher::SetConsecutiveBattleSetting(const FUIDataObject& InConsecutiveBattleSetting) {
}

void ULuxUIBattleLauncher::SetBlowUpMode(bool bEnable) {
}

void ULuxUIBattleLauncher::SetBGM(int32 InBgmID) {
}

void ULuxUIBattleLauncher::ResetAccumulatedRoundNum() {
}

void ULuxUIBattleLauncher::OverrideBattleSetting(const FUIDataObject& InOverrideBattleSetting) {
}

void ULuxUIBattleLauncher::OverrideBattlePlayerSetting(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, const FUIDataObject& InBattlePlayerSetting) {
}

void ULuxUIBattleLauncher::MissionSkillSettingIntervalBattle(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, const TArray<FString>& InMissionSkillIDs, const FUIDataObject& InBattleSettingInfo) {
}

void ULuxUIBattleLauncher::MissionSkillSettingBeforeBattle(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, const TArray<FString>& InMissionSkillIDs) {
}

bool ULuxUIBattleLauncher::IsExistNextBattlePlayer(ELuxUIBattlePlayerSide InPlayerSide) const {
    return false;
}

bool ULuxUIBattleLauncher::IsBattleControllByCpu(ELuxUIBattlePlayerSide InPlayerSide) const {
    return false;
}

int32 ULuxUIBattleLauncher::GetPlayerNum(ELuxUIBattlePlayerSide InPlayerSide) const {
    return 0;
}

ULuxUIBattleLauncher* ULuxUIBattleLauncher::GetInstance() {
    return NULL;
}

int32 ULuxUIBattleLauncher::GetCurrentBattlePlayerIndex(ELuxUIBattlePlayerSide InPlayerSide) const {
    return 0;
}

FString ULuxUIBattleLauncher::GetBattleStageCode() const {
    return TEXT("");
}

FUIDataObject ULuxUIBattleLauncher::GetBattlePlayerSetting(ELuxUIBattlePlayerSide InPlayerSide, int32 inPlayerIndex) const {
    return FUIDataObject{};
}

FUIDataObject ULuxUIBattleLauncher::GetBattleCharaWeaponSetting(ELuxUIBattlePlayerSide InPlayerSide, int32 inPlayerIndex) const {
    return FUIDataObject{};
}

FString ULuxUIBattleLauncher::GetBattleCharaName(ELuxUIBattlePlayerSide InPlayerSide, int32 inPlayerIndex) const {
    return TEXT("");
}

int32 ULuxUIBattleLauncher::GetBattleCharaColor(ELuxUIBattlePlayerSide InPlayerSide, int32 inPlayerIndex) const {
    return 0;
}

FString ULuxUIBattleLauncher::GetBattleCharaCode(ELuxUIBattlePlayerSide InPlayerSide, int32 inPlayerIndex) const {
    return TEXT("");
}

FString ULuxUIBattleLauncher::GetBattleCharaAuthorName(ELuxUIBattlePlayerSide InPlayerSide, int32 inPlayerIndex) const {
    return TEXT("");
}

int32 ULuxUIBattleLauncher::GetAccumulatedRoundNum() const {
    return 0;
}

void ULuxUIBattleLauncher::Finish() {
}

void ULuxUIBattleLauncher::ChangeBattleWeaponGauge(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, int32 InWeaponGauge) {
}

void ULuxUIBattleLauncher::ChangeBattleVersusType(ELuxUIBattleVersusType InVersusType) {
}

void ULuxUIBattleLauncher::ChangeBattleTime(ELuxUIBattleTime InBattleTime) {
}

void ULuxUIBattleLauncher::ChangeBattleStageSetting(const FUIDataObject& InBattleStageSetting) {
}

void ULuxUIBattleLauncher::ChangeBattleRounds(int32 InBattleRounds) {
}

void ULuxUIBattleLauncher::ChangeBattlePlayerWeaponSetting(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, const FUIDataObject& InBattlePlayerWeaponSetting) {
}

void ULuxUIBattleLauncher::ChangeBattlePlayerSetting(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, const FUIDataObject& InBattlePlayerSetting) {
}

void ULuxUIBattleLauncher::ChangeBattlePlayerItemSetting(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, const FUIDataObject& InBattlePlayerItemSetting) {
}

void ULuxUIBattleLauncher::ChangeBattleLifeInit(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, float InLifeInit) {
}

void ULuxUIBattleLauncher::ChangeBattleLife(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, const FVector2D& inLife) {
}

void ULuxUIBattleLauncher::ChangeBattleCpuWazaLevel(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, int32 InWazaLevel) {
}

void ULuxUIBattleLauncher::ChangeBattleCpuType(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, const FString& InCpuType) {
}

void ULuxUIBattleLauncher::ChangeBattleCpuRankLevel(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, int32 InRankLevel) {
}

void ULuxUIBattleLauncher::ChangeBattleCpuPersonality(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, int32 InPersonality) {
}

void ULuxUIBattleLauncher::ChangeBattleCameraType(ELuxUIBattleCameraType InBattleCameraType) {
}

void ULuxUIBattleLauncher::AddToAccumulatedRoundNum(int32 RoundNum) {
}

ULuxUIBattleLauncher::ULuxUIBattleLauncher() {
    this->PlayerLeft = NULL;
    this->PlayerRight = NULL;
}

