#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "LuxBattleRuleParam.h"
#include "ELuxUIBattleTime.h"
#include "ELuxUIBattleVersusType.h"
#include "UIBattleLauncherStartParam.h"
#include "ELuxUIBattlePlayerSide.h"
#include "UIDataObject.h"
#include "UObject/NoExportTypes.h"
#include "ELuxUIBattleCameraType.h"
#include "LuxUIBattleLauncher.generated.h"

class ULuxUIBattleLauncher;
class ULuxBattlePlayerSetup;

UCLASS(Blueprintable)
class ULuxUIBattleLauncher : public UUIObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleRuleParam BattleRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxBattlePlayerSetup* PlayerLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxBattlePlayerSetup* PlayerRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIBattleLauncherStartParam StartParam;
    
public:
    ULuxUIBattleLauncher();
    UFUNCTION(BlueprintCallable)
    void Start(FUIBattleLauncherStartParam InStartParam);
    
    UFUNCTION(BlueprintCallable)
    void Setup(const FUIDataObject& InBattleSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetSlipOutMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetReplayMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetRecordMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomSeed(int32 InRandomSeed);
    
    UFUNCTION(BlueprintCallable)
    void SetNoRingOutMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEndlessMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageUpMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentBattlePlayerIndex(ELuxUIBattlePlayerSide InPlayerSide, int32 inPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetConsecutiveBattleSetting(const FUIDataObject& InConsecutiveBattleSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetBlowUpMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetBGM(int32 InBgmID);
    
    UFUNCTION(BlueprintCallable)
    void ResetAccumulatedRoundNum();
    
    UFUNCTION(BlueprintCallable)
    void OverrideBattleSetting(const FUIDataObject& InOverrideBattleSetting);
    
    UFUNCTION(BlueprintCallable)
    void OverrideBattlePlayerSetting(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, const FUIDataObject& InBattlePlayerSetting);
    
    UFUNCTION(BlueprintCallable)
    void MissionSkillSettingIntervalBattle(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, const TArray<FString>& InMissionSkillIDs, const FUIDataObject& InBattleSettingInfo);
    
    UFUNCTION(BlueprintCallable)
    void MissionSkillSettingBeforeBattle(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, const TArray<FString>& InMissionSkillIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistNextBattlePlayer(ELuxUIBattlePlayerSide InPlayerSide) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleControllByCpu(ELuxUIBattlePlayerSide InPlayerSide) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerNum(ELuxUIBattlePlayerSide InPlayerSide) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULuxUIBattleLauncher* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentBattlePlayerIndex(ELuxUIBattlePlayerSide InPlayerSide) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBattleStageCode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIDataObject GetBattlePlayerSetting(ELuxUIBattlePlayerSide InPlayerSide, int32 inPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIDataObject GetBattleCharaWeaponSetting(ELuxUIBattlePlayerSide InPlayerSide, int32 inPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBattleCharaName(ELuxUIBattlePlayerSide InPlayerSide, int32 inPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleCharaColor(ELuxUIBattlePlayerSide InPlayerSide, int32 inPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBattleCharaCode(ELuxUIBattlePlayerSide InPlayerSide, int32 inPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBattleCharaAuthorName(ELuxUIBattlePlayerSide InPlayerSide, int32 inPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAccumulatedRoundNum() const;
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattleWeaponGauge(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, int32 InWeaponGauge);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattleVersusType(ELuxUIBattleVersusType InVersusType);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattleTime(ELuxUIBattleTime InBattleTime);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattleStageSetting(const FUIDataObject& InBattleStageSetting);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattleRounds(int32 InBattleRounds);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattlePlayerWeaponSetting(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, const FUIDataObject& InBattlePlayerWeaponSetting);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattlePlayerSetting(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, const FUIDataObject& InBattlePlayerSetting);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattlePlayerItemSetting(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, const FUIDataObject& InBattlePlayerItemSetting);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattleLifeInit(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, float InLifeInit);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattleLife(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, const FVector2D& inLife);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattleCpuWazaLevel(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, int32 InWazaLevel);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattleCpuType(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, const FString& InCpuType);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattleCpuRankLevel(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, int32 InRankLevel);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattleCpuPersonality(ELuxUIBattlePlayerSide InPlayerSide, int32 InPlayerSettingIndex, int32 InPersonality);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattleCameraType(ELuxUIBattleCameraType InBattleCameraType);
    
    UFUNCTION(BlueprintCallable)
    void AddToAccumulatedRoundNum(int32 RoundNum);
    
};

