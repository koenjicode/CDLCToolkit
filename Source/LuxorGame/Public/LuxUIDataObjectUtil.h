#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMGUtil -ObjectName=UIDataObject -FallbackName=UIDataObject
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ELuxWeaponVariation.h"
#include "LuxUIGameItemData.h"
#include "PreviewHumanTraceData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ELuxShinEdgeMasterMissionSkillType.h"
#include "LuxShinEdgeMasterAssistChara.h"
#include "ELuxUIArcadeBattleDifficulty.h"
#include "ELuxUIPlayerSoulCondition.h"
#include "ELuxFightStyle.h"
#include "ELuxUIDataObjectExec.h"
#include "ELuxUIPlayerSoulLevel.h"
#include "ELuxUIWeaponSkillType.h"
#include "LuxUIGameWeaponData.h"
#include "UIDataObject.h"
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "LuxUIDataObjectUtil.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUIDataObjectUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuxUIDataObjectUtil();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToStr(ELuxWeaponVariation InWeaponVariation);
    
    UFUNCTION(BlueprintCallable)
    static void SaveSEMHudSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void RevertPreviewHumanTraceData(const FUIDataObject& InData, FPreviewHumanTraceData& outData);
    
    UFUNCTION(BlueprintCallable)
    static void ResetKeyObjectStore(const FString& InObjectStoreName, const FString& InKeyName);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAllObjectStore(const FString& InObjectStoreName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void RandomWeaponIDFromWeaponTable(const FString& InSemWeaponTableID, FString& OutSemWeaponID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void RandomItemIDFromItemTable(const FString& InSemItemTableID, FString& OutSemItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void RandomAssistorIDFromAssistorTable(const FString& InSemAssistorTableID, FString& OutSemAssistorID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MissionSkillInfo(const FString& InSkillID, ELuxShinEdgeMasterMissionSkillType& MissionSkill, TArray<float>& Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MenuTopDataTitleChange(const FUIDataObject& InDataObject, const FString& InTextId, FUIDataObject& OutDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakeWeaponSortPower(bool asc_type, const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, TArray<int32>& SortKey, TArray<FUIDataObject>& SortSEMWeaponList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakeWeaponSortKind(bool asc_type, const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, TArray<int32>& SortKey, TArray<FUIDataObject>& SortSEMWeaponList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakeWeaponSortGetTime(bool asc_type, const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, TArray<int32>& SortKey, TArray<FUIDataObject>& SortSEMWeaponList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakeWeaponSortEmptySlot(bool asc_type, const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, TArray<int32>& SortKey, TArray<FUIDataObject>& SortSEMWeaponList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakeWeaponSortCritical(bool asc_type, const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, TArray<int32>& SortKey, TArray<FUIDataObject>& SortSEMWeaponList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeWeaponSettingFromWeaponID(const FString& inWeaponID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeWeaponSettingFromSemWeaponIDCore(const FString& InSemWeaponID, const TArray<int32>& InPickupStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeWeaponSettingFromSemWeaponID(const FString& InSemWeaponID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeWeaponSettingFromSemShopWeaponID(const FString& InSemShopWeaponID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeWeaponSettingFromCharaCodeVariation(const FString& inCharaCode, int32 InVariation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeVersusBattleSetting(const FString& InLeftCharaCode, int32 InLeftCharaColor, const FString& InRightCharaCode, int32 InRightCharaColor, const FString& InStageCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeTrainingBattleSetting(const FString& InLeftCharaCode, int32 InLeftCharaColor, const FString& InRightCharaCode, int32 InRightCharaColor, const FString& InStageCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeStoryReward(TArray<FString> InRewardIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakeSpotSortFromSpotViewList(const TArray<FUIDataObject>& InSEMSpotList, TArray<FUIDataObject>& SortSEMSpotList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakeSkillSettingFromSemRandomSkillID(const FString& InSemRandomSkillID, TArray<FString>& SkilIDs, TArray<FString>& UniqueSkilIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakeShopItemSortItemNum(bool asc_type, const TArray<FString>& InKey, const TArray<int32>& InPriceList, TArray<FString>& SortKey, TArray<int32>& SortPriceList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakeShopItemSortID(bool asc_type, const TArray<FString>& InKey, const TArray<int32>& InPriceList, TArray<FString>& SortKey, TArray<int32>& SortPriceList);
    
    UFUNCTION(BlueprintCallable)
    static FUIDataObject MakeShinEdgeMasterReward(const FString& InRewardID, bool InClearedMission, float InTimeBonus, float InLifeBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeSEMWeaponSortData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeSEMWeaponShopSortData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeSEMWeaponListTopData(const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, const FString& InTilteText, const int32 InEquipIndex, const TArray<int32>& InDisabledindex, int32 InPlayerLv, const bool InDefaultWeapon, const bool InUseDeleteCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MakeSEMWeaponListStyleFilter(const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, const int32 InStyle, bool bIgnoreEquipWeapon, TArray<int32>& OutKey, TArray<FUIDataObject>& OutSEMWeaponList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeSEMWeaponListMenu(const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, const int32 InEquipIndex, const TArray<int32>& InDisabledindex, int32 InPlayerLv, const bool InDefaultWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeSEMStyleFilterData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeSEMShopWeaponListTopData(const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, const FString& InTilteText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeSEMShopWeaponListMenu(const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeSEMShopWeaponCustomSkillSelect(const TArray<FString>& InBaseWeaponParts, const TArray<FString>& InMaterialWeaponParts, const TArray<FString>& InEnableSkillIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeSEMShopItemListMenu(const TArray<FString>& InCategorise, const TArray<FString>& InKey, const TArray<int32>& InPrice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeSEMShopItemListCategoriseMenuTopData(const TArray<FString>& Categorise, const TArray<FString>& InKey, const TArray<int32>& InPrice, const FString& InTilteText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeSEMPlayerMenuTopData(int32 InListIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeSEMMissionListMenuTopData(const FString& InFocusMissionID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeSEMItemSortData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeSEMItemListPageData(bool InUseFoodPage, bool InUsePartsPage, bool InUseOtherPage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeSEMItemListMenu(const TArray<FString>& InCategorise, const TArray<FString>& InKey, const TArray<FLuxUIGameItemData>& inValue, const TArray<FString>& InDisabledID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeSEMItemListCategoriseMenuTopData(const TArray<FString>& Categorise, const TArray<FString>& InKey, const TArray<FLuxUIGameItemData>& inValue, const FString& InTilteText, const TArray<FString>& InDisabledID, const FUIDataObject InPageData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeSEMAssistWeaponListTopData(const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, const FString& InTilteText, const FString& InSemAssistID, const int32 InEquipIndex, const TArray<int32>& InDisabledindex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeSEMAssistWeaponListMenu(const TArray<int32>& InKey, const TArray<FUIDataObject>& InSEMWeaponList, const FString& InSemAssistID, const int32 InEquipIndex, const TArray<int32>& InDisabledindex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeSEMAssistorListTopData(const FString& InTilteText, const FUIDataObject& InListData, bool InUseDeleteCommand, bool InIsShop);
    
    UFUNCTION(BlueprintCallable)
    static void MakeRandomMission(const FString& InRandomMissionID, int32 Seed, FUIDataObject& MissionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float MakePlayerVitalitySetting(float InVitality);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakePlayerSettingFromSemAssistor(const FLuxShinEdgeMasterAssistChara& InSemAssistor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakePlayerSettingFromArcadeRegulationSetting(const FUIDataObject& InArcadeRegulationSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeOverrideBattleSettingFromSemAssistor(const FUIDataObject& InBattleSetting, const FLuxShinEdgeMasterAssistChara& InSemAssistor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakeMissionSortFromSpotMissionList(const TArray<FUIDataObject>& InSEMMissionList, TArray<FUIDataObject>& SortSEMMissionList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakeMissionSort(const TArray<FUIDataObject>& InSEMMissionList, TArray<FUIDataObject>& SortSEMMissionList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeMissionBattleSettingFromBattleSetting(const FUIDataObject& InBattleSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakeItemSortItemNum(bool asc_type, const TArray<FString>& InKey, const TArray<FLuxUIGameItemData>& InSEMItemList, TArray<FString>& SortKey, TArray<FLuxUIGameItemData>& SortSEMItemList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakeItemSortID(bool asc_type, const TArray<FString>& InKey, const TArray<FLuxUIGameItemData>& InSEMItemList, TArray<FString>& SortKey, TArray<FLuxUIGameItemData>& SortSEMItemList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeEnemySettingFromArcadeRegulationSetting(const FUIDataObject& InArcadeRegulationSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MakeEnemyBattleLifeSetting(const FUIDataObject& InBattleSetting, TArray<FVector2D>& LifeSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeDefaultPlayerSetting(const FString& inCharaCode, int32 InCharaColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeDefaultBattleSetting(const FString& InLeftCharaCode, const FString& InRightCharaCode, const FString& InStageCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeBattleWeaponSetting(const FUIDataObject& InWeaponSetting, int32 InSoulConditionBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeBattleWeaponAppearanceSetting(const FUIDataObject& InWeaponSetting, const FUIDataObject& InAppearanceWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MakeBattleLifeSetting(const FUIDataObject& InPlayerParam, const int32& InLevel, FVector2D& LifeSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeArcadeRegulationSetting(ELuxUIArcadeBattleDifficulty inDifficulty, const FString& inCharaCode, int32 InColor, FUIDataObject InWeaponSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject MakeArcadeBattleSetting(const FUIDataObject& InLeftPlayerSetting, const FUIDataObject& InRightPlayerSetting, const FString& InStageCode);
    
    UFUNCTION(BlueprintCallable)
    static void LoadSEMHudSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRandomWeapon(const FString& inWeaponID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRandomMissionID(const FString& inMissionID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMultipleWeaponSkill(const TArray<FString>& InWeaponParts, const FString& InSkillID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMissionSkill(const FString& InSkillID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExistWeaponSkillSlot(const FUIDataObject& inWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExistWeaponEmptySkill(const FUIDataObject& inWeapon);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableSpotID(const FString& InSpotID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBattleMission(const FString& inMissionID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAvailableMissionFromSpotID(const FString& InSpotID, FString& OutMissionID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAvailable(const FUIDataObject& InAvailableData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxWeaponVariation GetWeaponVariation(const FUIDataObject& InWeaponSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxUIPlayerSoulCondition GetWeaponSoulCondition(const FUIDataObject& inWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWeaponMaxNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxFightStyle GetWeaponFightStyle(const FUIDataObject& InWeaponSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetStrongestStyleMissionClearCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStageCodeFromArcadeRegulationSetting(const FUIDataObject& InArcadeRegulationSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxUIPlayerSoulCondition GetSoulConditionFromWeaponLibra(const int32& InWeaponLibra);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSkillPrice(const FString& InSkillID);
    
    UFUNCTION(BlueprintCallable)
    static void GetSkillIDFromItemID(const FString& inItemId, FString& SkillID, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetShopWeaponList(const FString& InShopID, TArray<int32>& Key, TArray<FUIDataObject>& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetShopLevelBattleSkill(const int32 InShopLevel, TArray<FString>& OutSkillIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetShopItemList(const FString& InShopID, TArray<FString>& KeyList, TArray<int32>& PriceList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSEMWeaponStyle(const FUIDataObject& inWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSEMWeaponSoulConditionBonus(ELuxUIPlayerSoulCondition InCondition, ELuxUIPlayerSoulLevel InLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetSEMWeaponParts(const FUIDataObject& inWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSEMWeaponName(const FUIDataObject& inWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSEMWeaponEquipLevel(const FUIDataObject& inWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSEMWeaponAttackText(const FUIDataObject& inWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject GetSEMMissionCategoryList(const TArray<FString>& InCategories, const FString& InFocusMissionID, int32& ListIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSEMItemName(const FString& inItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSEMItemIconPath(const FString& InItemType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRateSoulPointToSEMMoney(int32& SoulPoint, int32& SemMoney);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRateSEMMoneyToSoulPoint(int32& SemMoney, int32& SoulPoint);
    
    UFUNCTION(BlueprintCallable)
    static void GetPossessionOfMissionID(const FString& inMissionID, FString& SpotID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMultiSlotName(const TArray<int32>& InSlotIDs);
    
    UFUNCTION(BlueprintCallable)
    static void GetMissionUnknownInfo(const FString& InUnknownInfo, bool& UnknownChara, bool& UnknownParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetEnableShopItemIDs(const TArray<FString>& InItemIDs, const TArray<FString>& InEnableSkillIDs, UPARAM(Ref) TArray<FString>& RefAppendDisableItemIDs);
    
    UFUNCTION(BlueprintCallable)
    static void GetEnableRandomSubMission(TArray<FString>& MissionIDs);
    
    UFUNCTION(BlueprintCallable)
    static void GetEnableMissionIDs(TArray<FString>& MissionIDs);
    
    UFUNCTION(BlueprintCallable)
    static bool GetContentIDToWeapondata(const FString& ContentID, FUIDataObject& WEAPON);
    
    UFUNCTION(BlueprintCallable)
    static bool GetContentIDToItemdata(const FString& ContentID, FUIDataObject& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject GetCmdDecideSoundConf(int32 Category, int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxUIWeaponSkillType GetBattleSkillType(const FString& InSkillTypeID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject GetBattleSkillInfo(const FString& InSkillID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBattleLife(const int32& InLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAstralHoleMissionID(const TArray<FString>& inMissionID, FString& AstralMissionID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject GetAssistorWeaponSetting(const FString& InSemAssistID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetAssistorThumbnailByAssistData(const FLuxShinEdgeMasterAssistChara& InAssistData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetAssistorThumbnail(const FString& InSemAssistID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxFightStyle GetAssistorStyle(const FString& InSemAssistID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAssistorNameByAssistData(const FLuxShinEdgeMasterAssistChara& InAssistData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAssistorName(const FString& InSemAssistID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAssistorMaxNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAssistorLevel(const FString& InSemAssistID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAssistorAuthorNameByAssistData(const FLuxShinEdgeMasterAssistChara& InAssistData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAssistorAuthorName(const FString& InSemAssistID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetArcadeBattleStageCount(ELuxUIArcadeBattleDifficulty InDifficult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject GetArcadeBattleData(ELuxUIArcadeBattleDifficulty InDifficult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FUIDataObjectToFLuxUIGameWeaponData(const FUIDataObject& inWeapon, FLuxUIGameWeaponData& WEAPON);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FLuxUIGameWeaponDataToFUIDataObject(const FLuxUIGameWeaponData& inWeapon, FUIDataObject& WEAPON);
    
    UFUNCTION(BlueprintCallable)
    static FUIDataObject CreateResultObject(const FString& inName, const FString& inType, const int32 InCount, TAssetPtr<UTexture2D> InIconPath, const FUIDataObject& InObjData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject CreateInvalidDecideSEItemData(const FUIDataObject& Data, bool player_menu);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertPreviewHumanTraceData(const FPreviewHumanTraceData& InData, FUIDataObject& outData);
    
    UFUNCTION(BlueprintCallable)
    static void BreakStoryReward(const FUIDataObject& InStoryReward, TArray<FString>& RewardIDs, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterWeaponReward(const FUIDataObject& InWeaponReward, TArray<FString>& WeaponIDs, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterWeapon(const FUIDataObject& inWeapon, FString& Name, FString& Description, int32& STYLE, int32& Variation, int32& Power, int32& Soul, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterTutorialReward(const FUIDataObject& InTutorialReward, TArray<FString>& TutorialIDs, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterStoryReward(const FUIDataObject& InStoryReward, TArray<FString>& StoryIDs, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterSoulReward(const FUIDataObject& InSoulReward, int32& SaintPoint, int32& EvilPoint, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterShopAssistor(const FUIDataObject& InShop, FString& AssistorID, int32& Price, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterSEMWildMissionData(const FUIDataObject& InWildMissionData, FString& MissionID, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterSEMWeapon(const FUIDataObject& inWeapon, FString& Name, FString& Description, int32& STYLE, int32& Variation, FLinearColor& Color, int32& minPower, int32& maxPower, int32& critical, int32& libra, int32& equipLevel, int32& damageBonusLimit, TArray<FString>& PARTS, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterReward(const FUIDataObject& InReward, bool& Once, FUIDataObject& MissionReward, FUIDataObject& StoryReward, FUIDataObject& TutorialReward, FUIDataObject& ExpReward, FUIDataObject& SoulReward, int32& Money, FUIDataObject& ItemReward, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterMissionWeaponSetting(const FUIDataObject& InWeaponSetting, FString& WeaponID, int32& minPower, int32& maxPower, int32& critical, int32& libra, TArray<FString>& PARTS, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterMissionReward(const FUIDataObject& InMissionReward, TArray<FString>& MissionIDs, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterMissionData(const FUIDataObject& InMissionData, FUIDataObject& MissionDesc, FUIDataObject& Age, FUIDataObject& BattleSetting, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterLandLv(const FUIDataObject& InLandLv, FString& UnlockableID, FString& ShopID, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterLand(const FUIDataObject& InLand, FString& LandID, FString& LandType, FUIDataObject& LandLv1, FUIDataObject& LandLv2, FUIDataObject& LandLv3, FUIDataObject& LandLv4, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterItemReward(const FUIDataObject& InItemReward, FUIDataObject& FoodReward, FUIDataObject& WeaponReward, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterItemIDsReward(const FUIDataObject& InItemReward, TArray<FString>& Item, TArray<FString>& WEAPON, TArray<FString>& Assistor, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterItem(const FUIDataObject& InItem, FString& Name, FString& Quality, FString& Type, FString& Param, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterFoodReward(const FUIDataObject& InFoodReward, TArray<FString>& FoodIDs, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterExpReward(const FUIDataObject& InExpReward, int32& PlayerPoint, int32& StylePoint, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterEnemySetting(const FUIDataObject& InEnemySetting, FString& CharaCode, int32& CharaColor, int32& CharaLevel, FString& CharaName, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterEncountMission(const FUIDataObject& InMission, FString& MissionID, int32& rate, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterEncount(const FUIDataObject& InArea, FString& AreaID, int32& EncountRate, TArray<FUIDataObject>& missionTable, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterElevation(const FUIDataObject& InElevation, FString& ElevationID, FString& Name, int32& Money, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterBattleSetting(const FUIDataObject& InBattleSetting, TArray<FUIDataObject>& PlayerSetting, TArray<FUIDataObject>& EnemySettings, FUIDataObject& StageSetting, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakShinEdgeMasterAssistor(const FUIDataObject& InSemAssistor, FString& CharaCode, int32& CharaLevel, FString& CharaName, FUIDataObject& WeaponSetting, ELuxUIDataObjectExec& Exec);
    
    UFUNCTION(BlueprintCallable)
    static void BreakResultObject(const FUIDataObject& InResultData, FString& OutName, FString& OutType, int32& OutCount, TAssetPtr<UTexture2D>& OutIconPath, FUIDataObject& OutObjData, ELuxUIDataObjectExec& Exec);
    
};

