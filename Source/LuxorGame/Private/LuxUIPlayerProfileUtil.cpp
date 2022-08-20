#include "LuxUIPlayerProfileUtil.h"

class ULuxCreationProfile;

void ULuxUIPlayerProfileUtil::SetStyleStatus(FLuxUIPlayerProfile& InPlayerProfile, const FString& InStyleName, FLuxUIExpStatus InStyleStatus) {
}

void ULuxUIPlayerProfileUtil::SetEquipWeaponIndex(FLuxUIPlayerProfile& InPlayerProfile, int32 WeaponIndex) {
}

void ULuxUIPlayerProfileUtil::GetStyleStatus(const FLuxUIPlayerProfile& InPlayerProfile, const FString& InStyleName, FLuxUIExpStatus& StyleStatus) {
}

int32 ULuxUIPlayerProfileUtil::GetStyleInt(const FLuxUIPlayerProfile& InPlayerProfile, ULuxCreationProfile* inProfile) {
    return 0;
}

int32 ULuxUIPlayerProfileUtil::GetSoulPoint(const FLuxUIPlayerProfile& InPlayerProfile, ELuxUIPlayerSoulCondition InSoulCondition) {
    return 0;
}

ELuxUIPlayerSoulLevel ULuxUIPlayerProfileUtil::GetSoulLevel(const FLuxUIPlayerProfile& InPlayerProfile, ELuxUIPlayerSoulCondition InSoulCondition) {
    return ELuxUIPlayerSoulLevel::Level1;
}

int32 ULuxUIPlayerProfileUtil::GetMoneyLevel(const FLuxUIPlayerProfile& InPlayerProfile) {
    return 0;
}

ELuxUIMissionDifficulty ULuxUIPlayerProfileUtil::GetMissionDifficulty(const FLuxUIPlayerProfile& InPlayerProfile) {
    return ELuxUIMissionDifficulty::Level0;
}

int32 ULuxUIPlayerProfileUtil::GetLibraMax() {
    return 0;
}

int32 ULuxUIPlayerProfileUtil::GetGoldMax() {
    return 0;
}

int32 ULuxUIPlayerProfileUtil::GetEquipWeaponIndex(const FLuxUIPlayerProfile& InPlayerProfile) {
    return 0;
}

ELuxUIAstralClearLevel ULuxUIPlayerProfileUtil::GetAstralMissionClearLevel(const int32& InClearCount) {
    return ELuxUIAstralClearLevel::Level1;
}

bool ULuxUIPlayerProfileUtil::CheckStyleLevelOver(const FLuxUIPlayerProfile& InPlayerProfile, ELuxFightStyle InStyle, int32 InLevel) {
    return false;
}

void ULuxUIPlayerProfileUtil::AddSoulPoint(FLuxUIPlayerProfile& InPlayerProfile, ELuxUIPlayerSoulCondition InSoulCondition, int32 InSoulPoint) {
}

ULuxUIPlayerProfileUtil::ULuxUIPlayerProfileUtil() {
}

