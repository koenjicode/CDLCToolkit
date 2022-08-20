#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxorBlueprintFindSessionResult.h"
#include "LuxorChatMessageItem.h"
#include "LuxorBlueprintPeerInfo.h"
#include "LuxorSessionData.generated.h"

UCLASS(Blueprintable)
class LUXORSESSIONUTIL_API ULuxorSessionData : public UObject {
    GENERATED_BODY()
public:
    ULuxorSessionData();
    UFUNCTION(BlueprintCallable)
    static void SetSessionRttValue(const FLuxorBlueprintFindSessionResult& inSessionData);
    
    UFUNCTION(BlueprintCallable)
    static void ResetSessionRttValue();
    
    UFUNCTION(BlueprintCallable)
    static void ResetPeerRttValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName RankMatchName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName PlayerMatchName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FLuxorBlueprintPeerInfo& inInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSpectator(const FLuxorBlueprintPeerInfo& inInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSignInUser(int32 InUserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSessionConnecting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRest(const FLuxorBlueprintPeerInfo& inInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsReadyBattle(const FLuxorBlueprintPeerInfo& inInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsReady(const FLuxorBlueprintPeerInfo& inInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPassiveUser();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMatchConnecting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLoggedInUser(int32 InUserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLocal(const FLuxorBlueprintPeerInfo& inInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHost(const FLuxorBlueprintPeerInfo& inInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExistSession(const FName& inSessionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnableReady(const FLuxorBlueprintPeerInfo& inInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActiveUser();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWonCount(const FLuxorBlueprintPeerInfo& inInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWinningCount(const FLuxorBlueprintPeerInfo& inInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSessionResultRoomName(const FLuxorBlueprintFindSessionResult& inSessionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSessionResultQosSetting(const FLuxorBlueprintFindSessionResult& inSessionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSessionResultPlayStyle(const FLuxorBlueprintFindSessionResult& inSessionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSessionResultPlayerNum(const FLuxorBlueprintFindSessionResult& inSessionData, int32& outPublicNum, int32& outPrivateNum, int32& outOpenPublicNum, int32& outOpenPrivateNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSessionResultOwnerNetId(const FLuxorBlueprintFindSessionResult& inSessionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSessionResultName(const FLuxorBlueprintFindSessionResult& inSessionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSessionResultMostRankId(const FLuxorBlueprintFindSessionResult& inSessionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSessionResultLangId(const FLuxorBlueprintFindSessionResult& inSessionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSessionResultBattleType(const FLuxorBlueprintFindSessionResult& inSessionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSessionResultBattleTime(const FLuxorBlueprintFindSessionResult& inSessionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSessionResultBattleFormat(const FLuxorBlueprintFindSessionResult& inSessionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSessionResultBattleCount(const FLuxorBlueprintFindSessionResult& inSessionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSessionResultAreaSetting(const FLuxorBlueprintFindSessionResult& inSessionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSessionResultAreaId(const FLuxorBlueprintFindSessionResult& inSessionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSessionResultAntenna(const FLuxorBlueprintFindSessionResult& inSessionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSessionPlayStyle(const FName& inSessionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSessionPlayerNum(const FName& inSessionName, int32& outPublicNum, int32& outPrivateNum, int32& outOpenPublicNum, int32& outOpenPrivateNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FLuxorBlueprintPeerInfo> GetSessionPeerList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSessionLanguageSetting(const FName& inSessionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSessionBattleType(const FName& inSessionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSessionBattleTime(const FName& inSessionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSessionBattleFormat(const FName& inSessionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSessionBattleCount(const FName& inSessionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSessionAreaSetting(const FName& inSessionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSessionAccessType(const FName& inSessionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRttMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRttAverage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRoundWinMarker(const FLuxorBlueprintPeerInfo& inInfo);
    
    UFUNCTION(BlueprintPure)
    static uint8 GetRequestPlaySide(const FLuxorBlueprintPeerInfo& inInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRegion(const FLuxorBlueprintPeerInfo& inInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPeerRttValue(const FLuxorBlueprintPeerInfo& inInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLuxorBlueprintPeerInfo GetOpponentPeerInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMostValuableCharacterClass(const FLuxorBlueprintPeerInfo& inInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLossCount(const FLuxorBlueprintPeerInfo& inInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLuxorBlueprintPeerInfo GetLocalPeerInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLanguageCode(const FLuxorBlueprintPeerInfo& inInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetIcmpRtt();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDisplayName(const FLuxorBlueprintPeerInfo& inInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FLuxorChatMessageItem> GetChatMessageIdArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAntennaValue(const FLuxorBlueprintPeerInfo& inInfo);
    
    UFUNCTION(BlueprintCallable)
    static void CalcPeerRttValue(const FLuxorBlueprintPeerInfo& inInfo);
    
};

