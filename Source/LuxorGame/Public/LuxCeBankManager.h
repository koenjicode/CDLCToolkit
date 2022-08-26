#pragma once
#include "CoreMinimal.h"
#include "ELuxCeBankRequestErrorType.h"
#include "UObject/Object.h"
#include "ELuxCeBankAgreeKpiType.h"
#include "ELuxCeBankPlayModeType.h"
#include "ELuxCeBankMatchingResultType.h"
#include "ELuxUIBattlePlayerSide.h"
#include "LuxorBlueprintFindSessionResult.h"
#include "LuxCeBankManager.generated.h"

class ULuxorMatchData;
class ULuxProfileFactory;

UCLASS(Blueprintable)
class ULuxCeBankManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCeBankLoginWaitComplete, ELuxCeBankRequestErrorType, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCeBankLoginComplete, ELuxCeBankRequestErrorType, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCeBankKpiComplete, ELuxCeBankRequestErrorType, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCeBankEndMode, ELuxCeBankPlayModeType, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCeBankAgreeKpiComplete, ELuxCeBankRequestErrorType, Result);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_pKpiOnLineData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_pKpiOffLineDataOnLineApi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_pKpiOffLineDataOffLineApi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCeBankLoginWaitComplete m_onCeBankLoginWaitComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCeBankLoginComplete m_onCeBankLoginComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCeBankAgreeKpiComplete m_onCeBankAgreeKpiComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCeBankEndMode m_onCeBankEndMode;
    
    ULuxCeBankManager();
    UFUNCTION(BlueprintCallable)
    void TitleToMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void StartModeCnt();
    
    UFUNCTION(BlueprintCallable)
    void StartMatchingTimerIfNotStarted();
    
    UFUNCTION(BlueprintCallable)
    void SetUnfinishedBattleFlag(bool isUnfinished);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchingTimeKPIParams(const FName mode_name, const ELuxCeBankMatchingResultType result_type, const int32 connect_status);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchingParams(FName mode_name, const int32 PlayerIndex, const ULuxorMatchData* matchData);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchingErrorNum(int32 C);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetIsMatchingTimeDirty(bool IsDirty);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMatchingParamsDirty(bool IsDirty);
    
    UFUNCTION(BlueprintCallable)
    void SetInvitedStartFlag(bool F);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetFighterId(ELuxUIBattlePlayerSide side, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetAgreeKpiFlagToOption(const bool agree);
    
    UFUNCTION(BlueprintCallable)
    void ResetMatchingTimer();
    
    UFUNCTION(BlueprintCallable)
    void ResetMatchingErrorNum();
    
    UFUNCTION(BlueprintCallable)
    void RequestReport(const FString& reportId, const FString& reportedId, int32 reportType);
    
    UFUNCTION(BlueprintCallable)
    void RequestOnlineDataKpi();
    
    UFUNCTION(BlueprintCallable)
    void RequestOfflineDataKpi(const bool UseOnlineAPI);
    
    UFUNCTION(BlueprintCallable)
    void RequestLogin();
    
    UFUNCTION(BlueprintCallable)
    void RequestKpiAfterLogin();
    
    UFUNCTION(BlueprintCallable)
    void RequestKpi(const bool UseOnlineAPI);
    
    UFUNCTION(BlueprintCallable)
    void RequestCosmosCountry(const int32 pType, const FString& pUserId);
    
    UFUNCTION(BlueprintCallable)
    void RequestBan();
    
    UFUNCTION(BlueprintCallable)
    void RequestAgreeKpi(ELuxCeBankAgreeKpiType Type);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnKpiOnlineComplete();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnKpiOfflineComplete();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnEndMode();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnCeBankLoginWaitComplete();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnCeBankLoginComplete();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnAgreeKpiComplete();
    
    UFUNCTION(BlueprintCallable)
    void PrintCeBankView(const FString& str);
    
    UFUNCTION(BlueprintCallable)
    void OnSceneStart(const FString& SceneName);
    
    UFUNCTION(BlueprintCallable)
    bool IsCeBankEnable();
    
    UFUNCTION(BlueprintCallable)
    void IncrementMatchingErrorNum(int32 C);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSC6CharaId(int32 tradCharaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatchingTimer() const;
    
    UFUNCTION(BlueprintCallable)
    ELuxCeBankPlayModeType GetCurrentMode();
    
    UFUNCTION(BlueprintCallable)
    void AddRequestKpiSendReport();
    
    UFUNCTION(BlueprintCallable)
    void AddRequestKpiPartsInfo(const ULuxProfileFactory* factory, bool isRemove);
    
    UFUNCTION(BlueprintCallable)
    void AddRequestKpiOnlineGaugeInfo();
    
    UFUNCTION(BlueprintCallable)
    void AddRequestKpiOnlineFightersInfo();
    
    UFUNCTION(BlueprintCallable)
    void AddRequestKpiOnlineBattleInfo();
    
    UFUNCTION(BlueprintCallable)
    void AddRequestKpiMostUsedFightersInfo();
    
    UFUNCTION(BlueprintCallable)
    void AddRequestKpiMatchingTime();
    
    UFUNCTION(BlueprintCallable)
    void AddRequestKpiMatchingRTTAverage();
    
    UFUNCTION(BlueprintCallable)
    void AddRequestKpiMatchingRankDisparity(FName mode_name);
    
    UFUNCTION(BlueprintCallable)
    void AddRequestKpiMatchingCnt(FName mode_name);
    
    UFUNCTION(BlueprintCallable)
    void AddRequestKpiLanInfo();
    
    UFUNCTION(BlueprintCallable)
    void AddRequestKpiIcmpRttFailureRate(const TArray<FLuxorBlueprintFindSessionResult>& Results);
    
    UFUNCTION(BlueprintCallable)
    void AddRequestKpiHWLanguage();
    
    UFUNCTION(BlueprintCallable)
    void AddRequestKpiHWCountry();
    
    UFUNCTION(BlueprintCallable)
    void AddRequestKpiHighestOnlineRank();
    
    UFUNCTION(BlueprintCallable)
    void AddRequestKpiGameLanguage();
    
    UFUNCTION(BlueprintCallable)
    void AddRequestKpiDlc();
    
    UFUNCTION(BlueprintCallable)
    void AddRequestKpiCreationInfo();
    
    UFUNCTION(BlueprintCallable)
    void AddRequestKpiChraRankRatio(const int32 PlayerIndex, const ULuxorMatchData* matchData);
    
    UFUNCTION(BlueprintCallable)
    void AddRequestKpiAllChraRankRatio();
    
    UFUNCTION(BlueprintCallable)
    bool AddRequestAndRestartModeCnt();
    
    UFUNCTION(BlueprintCallable)
    void AddOnKpiOnlineComplete(ULuxCeBankManager::FOnCeBankKpiComplete InOnKpiComplete);
    
    UFUNCTION(BlueprintCallable)
    void AddOnKpiOfflineComplete(ULuxCeBankManager::FOnCeBankKpiComplete InOnKpiComplete);
    
    UFUNCTION(BlueprintCallable)
    void AddOnEndMode(ULuxCeBankManager::FOnCeBankEndMode InOnEndMode);
    
    UFUNCTION(BlueprintCallable)
    void AddOnCeBankLoginWaitComplete(ULuxCeBankManager::FOnCeBankLoginWaitComplete InOnLoginWaitComplete);
    
    UFUNCTION(BlueprintCallable)
    void AddOnCeBankLoginComplete(ULuxCeBankManager::FOnCeBankLoginComplete InOnLoginComplete);
    
    UFUNCTION(BlueprintCallable)
    void AddOnAgreeKpiComplete(ULuxCeBankManager::FOnCeBankAgreeKpiComplete InOnAgreeKpiComplete);
    
};

