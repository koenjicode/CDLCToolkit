#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "LuxSEMUtilCallback.h"
#include "UIDataObject.h"
#include "ELuxMissionSkillType.h"
#include "LuxSEMElevationData.h"
#include "LuxProfileData.h"
#include "ELuxShinEdgeMasterMissionSkillType.h"
#include "LuxShinEdgeMasterUtil.generated.h"

class ULuxSEMUtilHandle;
class UImage;
class UWidget;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxShinEdgeMasterUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuxShinEdgeMasterUtil();
    UFUNCTION(BlueprintCallable)
    static void UpdateCloudOpacity(const TArray<UImage*>& InClouds, const TArray<UWidget*>& InTargets);
    
    UFUNCTION(BlueprintCallable)
    static void SpotsNearlySort(const FVector2D& InPosition, const TArray<UWidget*>& InTargets, TArray<UWidget*>& Spots);
    
    UFUNCTION(BlueprintCallable)
    static void SetMissionListNavi();
    
    UFUNCTION(BlueprintCallable)
    static void SetMissionDetailNavi(bool InHaveItem, bool InExistAssistor, bool InUseAssistor, bool InEncount, bool InExistUGC, bool InIgnoreReset);
    
    UFUNCTION(BlueprintCallable)
    static ULuxSEMUtilHandle* RequestToGetOnlineProfileData(const FLuxSEMUtilCallback& InCallback);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUniqueDataAvailable(const FUIDataObject& InSemUniqueData, const FString& InUniqueId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMissionSkill(const ELuxMissionSkillType& inType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableWildSpot(const FString& InSpotID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableUniqueSpot(const FUIDataObject& InSemUniqueData, const FString& InSpotID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBattleSkill(const ELuxMissionSkillType& inType);
    
    UFUNCTION(BlueprintCallable)
    static void getWeaponData(const FUIDataObject& InSemWeaponData, const FString& inWeaponID, bool& success, FUIDataObject& WeaponObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetUniqueData(const FUIDataObject& InSemUniqueData, const FString& InUniqueId, TArray<FString>& EnableIds, TArray<FString>& DisableIds);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetStyleLevelBorder(const FUIDataObject& InSemGameData, int32 InLevel, bool& MaxLevel);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetStringCountFromStringList(const TArray<FString>& InStringList, const FString& inString);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSoulLevelBorder(const FUIDataObject& InSemGameData, int32 InLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSkillName(const ELuxMissionSkillType& inType, TArray<float> InParams);
    
    UFUNCTION(BlueprintCallable)
    static void GetShopData(const FUIDataObject& InSemShopObject, const FString& InShopID, bool& success, FUIDataObject& ShopObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSEMWildMissionDataObject(FUIDataObject& UIObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSEMWeaponObject(FUIDataObject& UIObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSEMUniqueObject(FUIDataObject& UIObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSEMShopObject(FUIDataObject& UIObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSEMRewardObject(FUIDataObject& UIObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSEMRandomSubMissionTableObject(FUIDataObject& UIObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSEMLandObject(FUIDataObject& UIObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSEMItemObject(FUIDataObject& UIObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSEMElevationObject(FUIDataObject& UIObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSEMDataObject(FUIDataObject& UIObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSEMAreaObject(FUIDataObject& UIObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetSearchMoneyRate(const FUIDataObject& InSemGameData, int32& km, int32& rate);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSearchEncountDistance(const FUIDataObject& InSemGameData);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSearchAbsolutelyEncountDistance(const FUIDataObject& InSemGameData);
    
    UFUNCTION(BlueprintCallable)
    static void GetRewardData(const FUIDataObject& InSemRewardData, const FString& InRewardID, int32& Money, FUIDataObject& FoodObject, FUIDataObject& WeaponObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetLandData(const FUIDataObject& InSemLandData, const FString& InLandID, FString& OutLandType, TArray<FString>& EnableIds, TArray<FString>& DisableIds);
    
    UFUNCTION(BlueprintCallable)
    static void GetItemData(const FUIDataObject& InSemItemData, const FString& inItemId, bool& success, FUIDataObject& ItemObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetElevationsByLineHitTest(const FVector2D& InStartLinePosition, const FVector2D& InEndLinePosition, const TArray<FLuxSEMElevationData>& InTargets, TArray<FLuxSEMElevationData>& Elevations);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetElevationIDs(const TArray<FLuxSEMElevationData>& Elevations);
    
    UFUNCTION(BlueprintCallable)
    static float GetDistanceTwoPoint(const FVector2D& InStartPoint, const FVector2D& InEndPoint, const FVector2D& InMapOriginPoint, float InCircleLength);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCharaLevelBorder(const FUIDataObject& InSemGameData, int32 InLevel, bool& MaxLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAssistorProfileDataNum(int32 InSEMSlotID);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteOnlineProfileData(int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool CopyOnlineProfileData(const FLuxProfileData& InProfileData, int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuxShinEdgeMasterMissionSkillType ConvToMissionSkill(const ELuxMissionSkillType& inType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ConvToBattleSkill(const ELuxMissionSkillType& inType);
    
    UFUNCTION(BlueprintCallable)
    static int32 ApplyStrangerProfileDataToAstralProfileData(int32 InSEMSlotID);
    
    UFUNCTION(BlueprintCallable)
    static int32 ApplyStrangerProfileDataToAssistorProfileData(int32 InSEMSlotID, int32 InStrangerIndex);
    
};

