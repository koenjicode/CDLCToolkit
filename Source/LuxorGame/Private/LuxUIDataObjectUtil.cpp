#include "LuxUIDataObjectUtil.h"

class UTexture2D;

FString ULuxUIDataObjectUtil::ToStr(ELuxWeaponVariation InWeaponVariation) {
    return TEXT("");
}

void ULuxUIDataObjectUtil::SaveSEMHudSetting() {
}

void ULuxUIDataObjectUtil::RevertPreviewHumanTraceData(const FUIDataObject& InData, FPreviewHumanTraceData& outData) {
}

void ULuxUIDataObjectUtil::ResetKeyObjectStore(const FString& InObjectStoreName, const FString& InKeyName) {
}

void ULuxUIDataObjectUtil::ResetAllObjectStore(const FString& InObjectStoreName) {
}

void ULuxUIDataObjectUtil::RandomWeaponIDFromWeaponTable(const FString& InSemWeaponTableID, FString& OutSemWeaponID) {
}

void ULuxUIDataObjectUtil::RandomItemIDFromItemTable(const FString& InSemItemTableID, FString& OutSemItemID) {
}

void ULuxUIDataObjectUtil::RandomAssistorIDFromAssistorTable(const FString& InSemAssistorTableID, FString& OutSemAssistorID) {
}

bool ULuxUIDataObjectUtil::MissionSkillInfo(const FString& InSkillID, ELuxShinEdgeMasterMissionSkillType& MissionSkill, TArray<float>& Percent) {
    return false;
}

void ULuxUIDataObjectUtil::MenuTopDataTitleChange(const FUIDataObject& InDataObject, const FString& InTextId, FUIDataObject& OutDataObject) {
}

void ULuxUIDataObjectUtil::MakeWeaponSortPower(bool asc_type, const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, TArray<int32>& SortKey, TArray<FUIDataObject>& SortSEMWeaponList) {
}

void ULuxUIDataObjectUtil::MakeWeaponSortKind(bool asc_type, const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, TArray<int32>& SortKey, TArray<FUIDataObject>& SortSEMWeaponList) {
}

void ULuxUIDataObjectUtil::MakeWeaponSortGetTime(bool asc_type, const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, TArray<int32>& SortKey, TArray<FUIDataObject>& SortSEMWeaponList) {
}

void ULuxUIDataObjectUtil::MakeWeaponSortEmptySlot(bool asc_type, const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, TArray<int32>& SortKey, TArray<FUIDataObject>& SortSEMWeaponList) {
}

void ULuxUIDataObjectUtil::MakeWeaponSortCritical(bool asc_type, const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, TArray<int32>& SortKey, TArray<FUIDataObject>& SortSEMWeaponList) {
}

FUIDataObject ULuxUIDataObjectUtil::MakeWeaponSettingFromWeaponID(const FString& inWeaponID) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeWeaponSettingFromSemWeaponIDCore(const FString& InSemWeaponID, const TArray<int32>& InPickupStyle) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeWeaponSettingFromSemWeaponID(const FString& InSemWeaponID) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeWeaponSettingFromSemShopWeaponID(const FString& InSemShopWeaponID) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeWeaponSettingFromCharaCodeVariation(const FString& inCharaCode, int32 InVariation) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeVersusBattleSetting(const FString& InLeftCharaCode, int32 InLeftCharaColor, const FString& InRightCharaCode, int32 InRightCharaColor, const FString& InStageCode) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeTrainingBattleSetting(const FString& InLeftCharaCode, int32 InLeftCharaColor, const FString& InRightCharaCode, int32 InRightCharaColor, const FString& InStageCode) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeStoryReward(TArray<FString> InRewardIDs) {
    return FUIDataObject{};
}

void ULuxUIDataObjectUtil::MakeSpotSortFromSpotViewList(const TArray<FUIDataObject>& InSEMSpotList, TArray<FUIDataObject>& SortSEMSpotList) {
}

void ULuxUIDataObjectUtil::MakeSkillSettingFromSemRandomSkillID(const FString& InSemRandomSkillID, TArray<FString>& SkilIDs, TArray<FString>& UniqueSkilIDs) {
}

void ULuxUIDataObjectUtil::MakeShopItemSortItemNum(bool asc_type, const TArray<FString>& InKey, const TArray<int32>& InPriceList, TArray<FString>& SortKey, TArray<int32>& SortPriceList) {
}

void ULuxUIDataObjectUtil::MakeShopItemSortID(bool asc_type, const TArray<FString>& InKey, const TArray<int32>& InPriceList, TArray<FString>& SortKey, TArray<int32>& SortPriceList) {
}

FUIDataObject ULuxUIDataObjectUtil::MakeShinEdgeMasterReward(const FString& InRewardID, bool InClearedMission, float InTimeBonus, float InLifeBonus) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeSEMWeaponSortData() {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeSEMWeaponShopSortData() {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeSEMWeaponListTopData(const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, const FString& InTilteText, const int32 InEquipIndex, const TArray<int32>& InDisabledindex, int32 InPlayerLv, const bool InDefaultWeapon, const bool InUseDeleteCommand) {
    return FUIDataObject{};
}

bool ULuxUIDataObjectUtil::MakeSEMWeaponListStyleFilter(const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, const int32 InStyle, bool bIgnoreEquipWeapon, TArray<int32>& OutKey, TArray<FUIDataObject>& OutSEMWeaponList) {
    return false;
}

FUIDataObject ULuxUIDataObjectUtil::MakeSEMWeaponListMenu(const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, const int32 InEquipIndex, const TArray<int32>& InDisabledindex, int32 InPlayerLv, const bool InDefaultWeapon) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeSEMStyleFilterData() {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeSEMShopWeaponListTopData(const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, const FString& InTilteText) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeSEMShopWeaponListMenu(const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeSEMShopWeaponCustomSkillSelect(const TArray<FString>& InBaseWeaponParts, const TArray<FString>& InMaterialWeaponParts, const TArray<FString>& InEnableSkillIDs) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeSEMShopItemListMenu(const TArray<FString>& InCategorise, const TArray<FString>& InKey, const TArray<int32>& InPrice) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeSEMShopItemListCategoriseMenuTopData(const TArray<FString>& Categorise, const TArray<FString>& InKey, const TArray<int32>& InPrice, const FString& InTilteText) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeSEMPlayerMenuTopData(int32 InListIndex) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeSEMMissionListMenuTopData(const FString& InFocusMissionID) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeSEMItemSortData() {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeSEMItemListPageData(bool InUseFoodPage, bool InUsePartsPage, bool InUseOtherPage) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeSEMItemListMenu(const TArray<FString>& InCategorise, const TArray<FString>& InKey, const TArray<FLuxUIGameItemData>& inValue, const TArray<FString>& InDisabledID) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeSEMItemListCategoriseMenuTopData(const TArray<FString>& Categorise, const TArray<FString>& InKey, const TArray<FLuxUIGameItemData>& inValue, const FString& InTilteText, const TArray<FString>& InDisabledID, const FUIDataObject InPageData) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeSEMAssistWeaponListTopData(const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, const FString& InTilteText, const FString& InSemAssistID, const int32 InEquipIndex, const TArray<int32>& InDisabledindex) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeSEMAssistWeaponListMenu(const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, const FString& InSemAssistID, const int32 InEquipIndex, const TArray<int32>& InDisabledindex) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeSEMAssistorListTopData(const FString& InTilteText, const FUIDataObject& InListData, bool InUseDeleteCommand, bool InIsShop) {
    return FUIDataObject{};
}

void ULuxUIDataObjectUtil::MakeRandomMission(const FString& InRandomMissionID, int32 Seed, FUIDataObject& MissionInfo) {
}

float ULuxUIDataObjectUtil::MakePlayerVitalitySetting(float InVitality) {
    return 0.0f;
}

FUIDataObject ULuxUIDataObjectUtil::MakePlayerSettingFromSemAssistor(const FLuxShinEdgeMasterAssistChara& InSemAssistor) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakePlayerSettingFromArcadeRegulationSetting(const FUIDataObject& InArcadeRegulationSetting) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeOverrideBattleSettingFromSemAssistor(const FUIDataObject& InBattleSetting, const FLuxShinEdgeMasterAssistChara& InSemAssistor) {
    return FUIDataObject{};
}

void ULuxUIDataObjectUtil::MakeMissionSortFromSpotMissionList(const TArray<FUIDataObject>& InSEMMissionList, TArray<FUIDataObject>& SortSEMMissionList) {
}

void ULuxUIDataObjectUtil::MakeMissionSort(const TArray<FUIDataObject>& InSEMMissionList, TArray<FUIDataObject>& SortSEMMissionList) {
}

FUIDataObject ULuxUIDataObjectUtil::MakeMissionBattleSettingFromBattleSetting(const FUIDataObject& InBattleSetting) {
    return FUIDataObject{};
}

void ULuxUIDataObjectUtil::MakeItemSortItemNum(bool asc_type, const TArray<FString>& InKey, const TArray<FLuxUIGameItemData>& InSEMItemList, TArray<FString>& SortKey, TArray<FLuxUIGameItemData>& SortSEMItemList) {
}

void ULuxUIDataObjectUtil::MakeItemSortID(bool asc_type, const TArray<FString>& InKey, const TArray<FLuxUIGameItemData>& InSEMItemList, TArray<FString>& SortKey, TArray<FLuxUIGameItemData>& SortSEMItemList) {
}

FUIDataObject ULuxUIDataObjectUtil::MakeEnemySettingFromArcadeRegulationSetting(const FUIDataObject& InArcadeRegulationSetting) {
    return FUIDataObject{};
}

bool ULuxUIDataObjectUtil::MakeEnemyBattleLifeSetting(const FUIDataObject& InBattleSetting, TArray<FVector2D>& LifeSetting) {
    return false;
}

FUIDataObject ULuxUIDataObjectUtil::MakeDefaultPlayerSetting(const FString& inCharaCode, int32 InCharaColor) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeDefaultBattleSetting(const FString& InLeftCharaCode, const FString& InRightCharaCode, const FString& InStageCode) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeBattleWeaponSetting(const FUIDataObject& InWeaponSetting, int32 InSoulConditionBonus) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeBattleWeaponAppearanceSetting(const FUIDataObject& InWeaponSetting, const FUIDataObject& InAppearanceWeapon) {
    return FUIDataObject{};
}

bool ULuxUIDataObjectUtil::MakeBattleLifeSetting(const FUIDataObject& InPlayerParam, const int32& InLevel, FVector2D& LifeSetting) {
    return false;
}

FUIDataObject ULuxUIDataObjectUtil::MakeArcadeRegulationSetting(ELuxUIArcadeBattleDifficulty inDifficulty, const FString& inCharaCode, int32 InColor, FUIDataObject InWeaponSetting) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::MakeArcadeBattleSetting(const FUIDataObject& InLeftPlayerSetting, const FUIDataObject& InRightPlayerSetting, const FString& InStageCode) {
    return FUIDataObject{};
}

void ULuxUIDataObjectUtil::LoadSEMHudSetting() {
}

bool ULuxUIDataObjectUtil::IsRandomWeapon(const FString& inWeaponID) {
    return false;
}

bool ULuxUIDataObjectUtil::IsRandomMissionID(const FString& inMissionID) {
    return false;
}

bool ULuxUIDataObjectUtil::IsMultipleWeaponSkill(const TArray<FString>& InWeaponParts, const FString& InSkillID) {
    return false;
}

bool ULuxUIDataObjectUtil::IsMissionSkill(const FString& InSkillID) {
    return false;
}

bool ULuxUIDataObjectUtil::IsExistWeaponSkillSlot(const FUIDataObject& inWeapon) {
    return false;
}

bool ULuxUIDataObjectUtil::IsExistWeaponEmptySkill(const FUIDataObject& inWeapon) {
    return false;
}

bool ULuxUIDataObjectUtil::IsEnableSpotID(const FString& InSpotID) {
    return false;
}

bool ULuxUIDataObjectUtil::IsBattleMission(const FString& inMissionID) {
    return false;
}

bool ULuxUIDataObjectUtil::IsAvailableMissionFromSpotID(const FString& InSpotID, FString& OutMissionID) {
    return false;
}

bool ULuxUIDataObjectUtil::IsAvailable(const FUIDataObject& InAvailableData) {
    return false;
}

ELuxWeaponVariation ULuxUIDataObjectUtil::GetWeaponVariation(const FUIDataObject& InWeaponSetting) {
    return ELuxWeaponVariation::EWV_00;
}

ELuxUIPlayerSoulCondition ULuxUIDataObjectUtil::GetWeaponSoulCondition(const FUIDataObject& inWeapon) {
    return ELuxUIPlayerSoulCondition::Balance;
}

int32 ULuxUIDataObjectUtil::GetWeaponMaxNum() {
    return 0;
}

ELuxFightStyle ULuxUIDataObjectUtil::GetWeaponFightStyle(const FUIDataObject& InWeaponSetting) {
    return ELuxFightStyle::EFS_MITSURUGI;
}

int32 ULuxUIDataObjectUtil::GetStrongestStyleMissionClearCount() {
    return 0;
}

FString ULuxUIDataObjectUtil::GetStageCodeFromArcadeRegulationSetting(const FUIDataObject& InArcadeRegulationSetting) {
    return TEXT("");
}

ELuxUIPlayerSoulCondition ULuxUIDataObjectUtil::GetSoulConditionFromWeaponLibra(const int32& InWeaponLibra) {
    return ELuxUIPlayerSoulCondition::Balance;
}

int32 ULuxUIDataObjectUtil::GetSkillPrice(const FString& InSkillID) {
    return 0;
}

void ULuxUIDataObjectUtil::GetSkillIDFromItemID(const FString& inItemId, FString& SkillID, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::GetShopWeaponList(const FString& InShopID, TArray<int32>& Key, TArray<FUIDataObject>& Value) {
}

void ULuxUIDataObjectUtil::GetShopLevelBattleSkill(const int32 InShopLevel, TArray<FString>& OutSkillIDs) {
}

void ULuxUIDataObjectUtil::GetShopItemList(const FString& InShopID, TArray<FString>& KeyList, TArray<int32>& PriceList) {
}

int32 ULuxUIDataObjectUtil::GetSEMWeaponStyle(const FUIDataObject& inWeapon) {
    return 0;
}

int32 ULuxUIDataObjectUtil::GetSEMWeaponSoulConditionBonus(ELuxUIPlayerSoulCondition InCondition, ELuxUIPlayerSoulLevel InLevel) {
    return 0;
}

TArray<FString> ULuxUIDataObjectUtil::GetSEMWeaponParts(const FUIDataObject& inWeapon) {
    return TArray<FString>();
}

FString ULuxUIDataObjectUtil::GetSEMWeaponName(const FUIDataObject& inWeapon) {
    return TEXT("");
}

int32 ULuxUIDataObjectUtil::GetSEMWeaponEquipLevel(const FUIDataObject& inWeapon) {
    return 0;
}

FString ULuxUIDataObjectUtil::GetSEMWeaponAttackText(const FUIDataObject& inWeapon) {
    return TEXT("");
}

FUIDataObject ULuxUIDataObjectUtil::GetSEMMissionCategoryList(const TArray<FString>& InCategories, const FString& InFocusMissionID, int32& ListIndex) {
    return FUIDataObject{};
}

FString ULuxUIDataObjectUtil::GetSEMItemName(const FString& inItemId) {
    return TEXT("");
}

FString ULuxUIDataObjectUtil::GetSEMItemIconPath(const FString& InItemType) {
    return TEXT("");
}

void ULuxUIDataObjectUtil::GetRateSoulPointToSEMMoney(int32& SoulPoint, int32& SemMoney) {
}

void ULuxUIDataObjectUtil::GetRateSEMMoneyToSoulPoint(int32& SemMoney, int32& SoulPoint) {
}

void ULuxUIDataObjectUtil::GetPossessionOfMissionID(const FString& inMissionID, FString& SpotID) {
}

FString ULuxUIDataObjectUtil::GetMultiSlotName(const TArray<int32>& InSlotIDs) {
    return TEXT("");
}

void ULuxUIDataObjectUtil::GetMissionUnknownInfo(const FString& InUnknownInfo, bool& UnknownChara, bool& UnknownParam) {
}

void ULuxUIDataObjectUtil::GetEnableShopItemIDs(const TArray<FString>& InItemIDs, const TArray<FString>& InEnableSkillIDs, TArray<FString>& RefAppendDisableItemIDs) {
}

void ULuxUIDataObjectUtil::GetEnableRandomSubMission(TArray<FString>& MissionIDs) {
}

void ULuxUIDataObjectUtil::GetEnableMissionIDs(TArray<FString>& MissionIDs) {
}

bool ULuxUIDataObjectUtil::GetContentIDToWeapondata(const FString& ContentID, FUIDataObject& WEAPON) {
    return false;
}

bool ULuxUIDataObjectUtil::GetContentIDToItemdata(const FString& ContentID, FUIDataObject& Item) {
    return false;
}

FUIDataObject ULuxUIDataObjectUtil::GetCmdDecideSoundConf(int32 Category, int32 ID) {
    return FUIDataObject{};
}

ELuxUIWeaponSkillType ULuxUIDataObjectUtil::GetBattleSkillType(const FString& InSkillTypeID) {
    return ELuxUIWeaponSkillType::Empty;
}

FUIDataObject ULuxUIDataObjectUtil::GetBattleSkillInfo(const FString& InSkillID) {
    return FUIDataObject{};
}

float ULuxUIDataObjectUtil::GetBattleLife(const int32& InLevel) {
    return 0.0f;
}

void ULuxUIDataObjectUtil::GetAstralHoleMissionID(const TArray<FString>& inMissionID, FString& AstralMissionID) {
}

FUIDataObject ULuxUIDataObjectUtil::GetAssistorWeaponSetting(const FString& InSemAssistID) {
    return FUIDataObject{};
}

UTexture2D* ULuxUIDataObjectUtil::GetAssistorThumbnailByAssistData(const FLuxShinEdgeMasterAssistChara& InAssistData) {
    return NULL;
}

UTexture2D* ULuxUIDataObjectUtil::GetAssistorThumbnail(const FString& InSemAssistID) {
    return NULL;
}

ELuxFightStyle ULuxUIDataObjectUtil::GetAssistorStyle(const FString& InSemAssistID) {
    return ELuxFightStyle::EFS_MITSURUGI;
}

FString ULuxUIDataObjectUtil::GetAssistorNameByAssistData(const FLuxShinEdgeMasterAssistChara& InAssistData) {
    return TEXT("");
}

FString ULuxUIDataObjectUtil::GetAssistorName(const FString& InSemAssistID) {
    return TEXT("");
}

int32 ULuxUIDataObjectUtil::GetAssistorMaxNum() {
    return 0;
}

int32 ULuxUIDataObjectUtil::GetAssistorLevel(const FString& InSemAssistID) {
    return 0;
}

FString ULuxUIDataObjectUtil::GetAssistorAuthorNameByAssistData(const FLuxShinEdgeMasterAssistChara& InAssistData) {
    return TEXT("");
}

FString ULuxUIDataObjectUtil::GetAssistorAuthorName(const FString& InSemAssistID) {
    return TEXT("");
}

int32 ULuxUIDataObjectUtil::GetArcadeBattleStageCount(ELuxUIArcadeBattleDifficulty InDifficult) {
    return 0;
}

FUIDataObject ULuxUIDataObjectUtil::GetArcadeBattleData(ELuxUIArcadeBattleDifficulty InDifficult) {
    return FUIDataObject{};
}

void ULuxUIDataObjectUtil::FUIDataObjectToFLuxUIGameWeaponData(const FUIDataObject& inWeapon, FLuxUIGameWeaponData& WEAPON) {
}

void ULuxUIDataObjectUtil::FLuxUIGameWeaponDataToFUIDataObject(const FLuxUIGameWeaponData& inWeapon, FUIDataObject& WEAPON) {
}

FUIDataObject ULuxUIDataObjectUtil::CreateResultObject(const FString& inName, const FString& inType, const int32 InCount, UTexture2D* InIconPath, const FUIDataObject& InObjData) {
    return FUIDataObject{};
}

FUIDataObject ULuxUIDataObjectUtil::CreateInvalidDecideSEItemData(const FUIDataObject& Data, bool player_menu) {
    return FUIDataObject{};
}

void ULuxUIDataObjectUtil::ConvertPreviewHumanTraceData(const FPreviewHumanTraceData& InData, FUIDataObject& outData) {
}

void ULuxUIDataObjectUtil::BreakStoryReward(const FUIDataObject& InStoryReward, TArray<FString>& RewardIDs, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterWeaponReward(const FUIDataObject& InWeaponReward, TArray<FString>& WeaponIDs, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterWeapon(const FUIDataObject& inWeapon, FString& Name, FString& Description, int32& STYLE, int32& Variation, int32& Power, int32& Soul, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterTutorialReward(const FUIDataObject& InTutorialReward, TArray<FString>& TutorialIDs, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterStoryReward(const FUIDataObject& InStoryReward, TArray<FString>& StoryIDs, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterSoulReward(const FUIDataObject& InSoulReward, int32& SaintPoint, int32& EvilPoint, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterShopAssistor(const FUIDataObject& InShop, FString& AssistorID, int32& Price, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterSEMWildMissionData(const FUIDataObject& InWildMissionData, FString& MissionID, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterSEMWeapon(const FUIDataObject& inWeapon, FString& Name, FString& Description, int32& STYLE, int32& Variation, FLinearColor& Color, int32& minPower, int32& maxPower, int32& critical, int32& libra, int32& equipLevel, int32& damageBonusLimit, TArray<FString>& PARTS, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterReward(const FUIDataObject& InReward, bool& Once, FUIDataObject& MissionReward, FUIDataObject& StoryReward, FUIDataObject& TutorialReward, FUIDataObject& ExpReward, FUIDataObject& SoulReward, int32& Money, FUIDataObject& ItemReward, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterMissionWeaponSetting(const FUIDataObject& InWeaponSetting, FString& WeaponID, int32& minPower, int32& maxPower, int32& critical, int32& libra, TArray<FString>& PARTS, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterMissionReward(const FUIDataObject& InMissionReward, TArray<FString>& MissionIDs, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterMissionData(const FUIDataObject& InMissionData, FUIDataObject& MissionDesc, FUIDataObject& Age, FUIDataObject& BattleSetting, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterLandLv(const FUIDataObject& InLandLv, FString& UnlockableID, FString& ShopID, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterLand(const FUIDataObject& InLand, FString& LandID, FString& LandType, FUIDataObject& LandLv1, FUIDataObject& LandLv2, FUIDataObject& LandLv3, FUIDataObject& LandLv4, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterItemReward(const FUIDataObject& InItemReward, FUIDataObject& FoodReward, FUIDataObject& WeaponReward, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterItemIDsReward(const FUIDataObject& InItemReward, TArray<FString>& Item, TArray<FString>& WEAPON, TArray<FString>& Assistor, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterItem(const FUIDataObject& InItem, FString& Name, FString& Quality, FString& Type, FString& Param, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterFoodReward(const FUIDataObject& InFoodReward, TArray<FString>& FoodIDs, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterExpReward(const FUIDataObject& InExpReward, int32& PlayerPoint, int32& StylePoint, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterEnemySetting(const FUIDataObject& InEnemySetting, FString& CharaCode, int32& CharaColor, int32& CharaLevel, FString& CharaName, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterEncountMission(const FUIDataObject& InMission, FString& MissionID, int32& rate, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterEncount(const FUIDataObject& InArea, FString& AreaID, int32& EncountRate, TArray<FUIDataObject>& missionTable, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterElevation(const FUIDataObject& InElevation, FString& ElevationID, FString& Name, int32& Money, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterBattleSetting(const FUIDataObject& InBattleSetting, TArray<FUIDataObject>& PlayerSetting, TArray<FUIDataObject>& EnemySettings, FUIDataObject& StageSetting, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakShinEdgeMasterAssistor(const FUIDataObject& InSemAssistor, FString& CharaCode, int32& CharaLevel, FString& CharaName, FUIDataObject& WeaponSetting, ELuxUIDataObjectExec& Exec) {
}

void ULuxUIDataObjectUtil::BreakResultObject(const FUIDataObject& InResultData, FString& OutName, FString& OutType, int32& OutCount, UTexture2D*& OutIconPath, FUIDataObject& OutObjData, ELuxUIDataObjectExec& Exec) {
}

ULuxUIDataObjectUtil::ULuxUIDataObjectUtil() {
}

