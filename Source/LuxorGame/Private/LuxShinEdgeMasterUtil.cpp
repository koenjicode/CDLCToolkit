#include "LuxShinEdgeMasterUtil.h"

class ULuxSEMUtilHandle;
class UImage;
class UWidget;

void ULuxShinEdgeMasterUtil::UpdateCloudOpacity(const TArray<UImage*>& InClouds, const TArray<UWidget*>& InTargets) {
}

void ULuxShinEdgeMasterUtil::SpotsNearlySort(const FVector2D& InPosition, const TArray<UWidget*>& InTargets, TArray<UWidget*>& Spots) {
}

void ULuxShinEdgeMasterUtil::SetMissionListNavi() {
}

void ULuxShinEdgeMasterUtil::SetMissionDetailNavi(bool InHaveItem, bool InExistAssistor, bool InUseAssistor, bool InEncount, bool InExistUGC, bool InIgnoreReset) {
}

ULuxSEMUtilHandle* ULuxShinEdgeMasterUtil::RequestToGetOnlineProfileData(const FLuxSEMUtilCallback& InCallback) {
    return NULL;
}

bool ULuxShinEdgeMasterUtil::IsUniqueDataAvailable(const FUIDataObject& InSemUniqueData, const FString& InUniqueId) {
    return false;
}

bool ULuxShinEdgeMasterUtil::IsMissionSkill(const ELuxMissionSkillType& inType) {
    return false;
}

bool ULuxShinEdgeMasterUtil::IsEnableWildSpot(const FString& InSpotID) {
    return false;
}

bool ULuxShinEdgeMasterUtil::IsEnableUniqueSpot(const FUIDataObject& InSemUniqueData, const FString& InSpotID) {
    return false;
}

bool ULuxShinEdgeMasterUtil::IsBattleSkill(const ELuxMissionSkillType& inType) {
    return false;
}

void ULuxShinEdgeMasterUtil::getWeaponData(const FUIDataObject& InSemWeaponData, const FString& inWeaponID, bool& success, FUIDataObject& WeaponObject) {
}

void ULuxShinEdgeMasterUtil::GetUniqueData(const FUIDataObject& InSemUniqueData, const FString& InUniqueId, TArray<FString>& EnableIds, TArray<FString>& DisableIds) {
}

int32 ULuxShinEdgeMasterUtil::GetStyleLevelBorder(const FUIDataObject& InSemGameData, int32 InLevel, bool& MaxLevel) {
    return 0;
}

int32 ULuxShinEdgeMasterUtil::GetStringCountFromStringList(const TArray<FString>& InStringList, const FString& inString) {
    return 0;
}

int32 ULuxShinEdgeMasterUtil::GetSoulLevelBorder(const FUIDataObject& InSemGameData, int32 InLevel) {
    return 0;
}

FString ULuxShinEdgeMasterUtil::GetSkillName(const ELuxMissionSkillType& inType, TArray<float> InParams) {
    return TEXT("");
}

void ULuxShinEdgeMasterUtil::GetShopData(const FUIDataObject& InSemShopObject, const FString& InShopID, bool& success, FUIDataObject& ShopObject) {
}

bool ULuxShinEdgeMasterUtil::GetSEMWildMissionDataObject(FUIDataObject& UIObject) {
    return false;
}

bool ULuxShinEdgeMasterUtil::GetSEMWeaponObject(FUIDataObject& UIObject) {
    return false;
}

bool ULuxShinEdgeMasterUtil::GetSEMUniqueObject(FUIDataObject& UIObject) {
    return false;
}

bool ULuxShinEdgeMasterUtil::GetSEMShopObject(FUIDataObject& UIObject) {
    return false;
}

bool ULuxShinEdgeMasterUtil::GetSEMRewardObject(FUIDataObject& UIObject) {
    return false;
}

bool ULuxShinEdgeMasterUtil::GetSEMRandomSubMissionTableObject(FUIDataObject& UIObject) {
    return false;
}

bool ULuxShinEdgeMasterUtil::GetSEMLandObject(FUIDataObject& UIObject) {
    return false;
}

bool ULuxShinEdgeMasterUtil::GetSEMItemObject(FUIDataObject& UIObject) {
    return false;
}

bool ULuxShinEdgeMasterUtil::GetSEMElevationObject(FUIDataObject& UIObject) {
    return false;
}

bool ULuxShinEdgeMasterUtil::GetSEMDataObject(FUIDataObject& UIObject) {
    return false;
}

bool ULuxShinEdgeMasterUtil::GetSEMAreaObject(FUIDataObject& UIObject) {
    return false;
}

void ULuxShinEdgeMasterUtil::GetSearchMoneyRate(const FUIDataObject& InSemGameData, int32& km, int32& rate) {
}

int32 ULuxShinEdgeMasterUtil::GetSearchEncountDistance(const FUIDataObject& InSemGameData) {
    return 0;
}

int32 ULuxShinEdgeMasterUtil::GetSearchAbsolutelyEncountDistance(const FUIDataObject& InSemGameData) {
    return 0;
}

void ULuxShinEdgeMasterUtil::GetRewardData(const FUIDataObject& InSemRewardData, const FString& InRewardID, int32& Money, FUIDataObject& FoodObject, FUIDataObject& WeaponObject) {
}

void ULuxShinEdgeMasterUtil::GetLandData(const FUIDataObject& InSemLandData, const FString& InLandID, FString& OutLandType, TArray<FString>& EnableIds, TArray<FString>& DisableIds) {
}

void ULuxShinEdgeMasterUtil::GetItemData(const FUIDataObject& InSemItemData, const FString& inItemId, bool& success, FUIDataObject& ItemObject) {
}

void ULuxShinEdgeMasterUtil::GetElevationsByLineHitTest(const FVector2D& InStartLinePosition, const FVector2D& InEndLinePosition, const TArray<FLuxSEMElevationData>& InTargets, TArray<FLuxSEMElevationData>& Elevations) {
}

TArray<FString> ULuxShinEdgeMasterUtil::GetElevationIDs(const TArray<FLuxSEMElevationData>& Elevations) {
    return TArray<FString>();
}

float ULuxShinEdgeMasterUtil::GetDistanceTwoPoint(const FVector2D& InStartPoint, const FVector2D& InEndPoint, const FVector2D& InMapOriginPoint, float InCircleLength) {
    return 0.0f;
}

int32 ULuxShinEdgeMasterUtil::GetCharaLevelBorder(const FUIDataObject& InSemGameData, int32 InLevel, bool& MaxLevel) {
    return 0;
}

int32 ULuxShinEdgeMasterUtil::GetAssistorProfileDataNum(int32 InSEMSlotID) {
    return 0;
}

bool ULuxShinEdgeMasterUtil::DeleteOnlineProfileData(int32 inIndex) {
    return false;
}

bool ULuxShinEdgeMasterUtil::CopyOnlineProfileData(const FLuxProfileData& InProfileData, int32 inIndex) {
    return false;
}

ELuxShinEdgeMasterMissionSkillType ULuxShinEdgeMasterUtil::ConvToMissionSkill(const ELuxMissionSkillType& inType) {
    return ELuxShinEdgeMasterMissionSkillType::MISSION_SKILL_TYPE_NONE;
}

int32 ULuxShinEdgeMasterUtil::ConvToBattleSkill(const ELuxMissionSkillType& inType) {
    return 0;
}

int32 ULuxShinEdgeMasterUtil::ApplyStrangerProfileDataToAstralProfileData(int32 InSEMSlotID) {
    return 0;
}

int32 ULuxShinEdgeMasterUtil::ApplyStrangerProfileDataToAssistorProfileData(int32 InSEMSlotID, int32 InStrangerIndex) {
    return 0;
}

ULuxShinEdgeMasterUtil::ULuxShinEdgeMasterUtil() {
}

