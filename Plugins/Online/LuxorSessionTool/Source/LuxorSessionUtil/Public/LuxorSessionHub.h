#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxorBlueprintTournamentInviteData.h"
#include "LuxorBlueprintFindSessionResult.h"
#include "LuxorBlueprintPeerInfo.h"
#include "LuxorPlayerMatchSessionSetting.h"
#include "LuxorRankMatchSessionSetting.h"
#include "LuxorSessionHub.generated.h"

class ULuxDevSessionChannelSetting;
class ULuxorMatchData;

UCLASS(Blueprintable)
class LUXORSESSIONUTIL_API ULuxorSessionHub : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnHubTournamentJoinEvent, FLuxorBlueprintTournamentInviteData, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnHubPlayTogetherEvent, int32, ControllerId);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnHubInviteReceived, FLuxorBlueprintFindSessionResult, Result, int32, ControllerId);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCreateSession, bool, bResult);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxorMatchData* matchData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxDevSessionChannelSetting* DevSessionChannelSetting;
    
public:
    ULuxorSessionHub();
    UFUNCTION(BlueprintCallable)
    void RequestWatchEnd();
    
    UFUNCTION(BlueprintCallable)
    void RequestWatchCancel();
    
    UFUNCTION(BlueprintCallable)
    void RequestSitInChair();
    
    UFUNCTION(BlueprintCallable)
    void RequestSetWonRound(int32 WonRound);
    
    UFUNCTION(BlueprintCallable)
    void RequestSetUsingMultiplayerFeatures(int32 MainUserId, bool UsingMP);
    
    UFUNCTION(BlueprintCallable)
    void RequestSendPacketMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void RequestSendChatMessageId(int32 MessageId);
    
    UFUNCTION(BlueprintCallable)
    void RequestSendChatMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    bool RequestReady(int32 RequestType);
    
    UFUNCTION(BlueprintCallable)
    void RequestLockHostInfo();
    
    UFUNCTION(BlueprintCallable)
    void RequestLineUpBehined();
    
    UFUNCTION(BlueprintCallable)
    void RequestLeaveChair();
    
    UFUNCTION(BlueprintCallable)
    void RequestKick(const FLuxorBlueprintPeerInfo& PeerInfo);
    
    UFUNCTION(BlueprintCallable)
    void RequestInvitePartyMember(int32 MainUserId);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangePlaySide(uint8 side);
    
    UFUNCTION(BlueprintCallable)
    bool RequestCancelReady();
    
    UFUNCTION(BlueprintCallable)
    void RequestBattleEndToLobby(int32 inResult);
    
    UFUNCTION(BlueprintCallable)
    void RequestBattleEnd(int32 inResult);
    
    UFUNCTION(BlueprintCallable)
    void RequestBackLobby();
    
    UFUNCTION(BlueprintCallable)
    void RequestAFK();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSessionHubReceiver(UObject* InSessionHubReceiver);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnHubTournamentJoinEvent();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnHubPlayTogetherEvent();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnHubInviteAccepted();
    
    UFUNCTION(BlueprintCallable)
    bool RankMatchMaking(int32 inMainUserId, const FName inSessionName, const FLuxorRankMatchSessionSetting& inRMSessionSetting);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerMatchMaking(int32 inMainUserId, const FName inSessionName, const FLuxorPlayerMatchSessionSetting& inPMSessionSetting);
    
    UFUNCTION(BlueprintCallable)
    bool JoinSession(int32 inMainUserId, const FName inSessionName, const FLuxorBlueprintFindSessionResult& SearchResult);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULuxorMatchData* GetMatchData();
    
    UFUNCTION(BlueprintCallable)
    bool FindRankSession(int32 inMainUserId, const FName inSessionName, int32 MaxResults, bool bUseLAN, const FLuxorRankMatchSessionSetting& inRMSessionSetting);
    
    UFUNCTION(BlueprintCallable)
    bool FindPlayerSession(int32 inMainUserId, const FName inSessionName, int32 MaxResults, bool bUseLAN, const FLuxorPlayerMatchSessionSetting& inPMSessionSetting);
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
    UFUNCTION(BlueprintCallable)
    bool DestroySession(int32 inMainUserId, const FName inSessionName);
    
    UFUNCTION(BlueprintCallable)
    bool CreateRankSession(int32 inMainUserId, const FName inSessionName, const FLuxorRankMatchSessionSetting& inRMSessionSetting);
    
    UFUNCTION(BlueprintCallable)
    bool CreatePlayerSession(int32 inMainUserId, const FName inSessionName, const FLuxorPlayerMatchSessionSetting& inPMSessionSetting);
    
    UFUNCTION(BlueprintCallable)
    void AddSessionHubReceiver(UObject* InSessionHubReceiver);
    
    UFUNCTION(BlueprintCallable)
    void AddOnHubTournamentJoinEvent(ULuxorSessionHub::FOnHubTournamentJoinEvent InOnHubTournamentJoinEvent);
    
    UFUNCTION(BlueprintCallable)
    void AddOnHubPlayTogetherEvent(ULuxorSessionHub::FOnHubPlayTogetherEvent InOnHubPlayTogetherEvent);
    
    UFUNCTION(BlueprintCallable)
    void AddOnHubInviteAccepted(ULuxorSessionHub::FOnHubInviteReceived InOnHubInviteAccepted);
    
};

