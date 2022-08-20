#pragma once
#include "CoreMinimal.h"
#include "LuxorBlueprintFindSessionResult.h"
#include "UObject/Interface.h"
#include "LuxorBlueprintPeerInfo.h"
#include "ELuxOnJoinSessionCompleteResult.h"
#include "SessionHubReceiver.generated.h"

UINTERFACE(Blueprintable)
class USessionHubReceiver : public UInterface {
    GENERATED_BODY()
};

class ISessionHubReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWatchResponse();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWatchRequest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWatchEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWatchCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateInfo(int32 eventId, const FLuxorBlueprintPeerInfo& PeerInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnlockSessionInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSessionMemberJoin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSessionDisconnect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSessionConnectComplete(bool bResult, bool bFullMenberError);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSessionConnect(bool bResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResponseJoinGuest(bool bResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRecvPacketMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRecvMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadyTimeCount(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPingSearchResults(bool bResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpponentDisconnect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchmaking(bool bResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockSessionInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeaveGuest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJoinSession(bool bResult, ELuxOnJoinSessionCompleteResult ResultType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHostMigration();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFindSession(bool bResult, const TArray<FLuxorBlueprintFindSessionResult>& Results);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFatalError(int32 Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestroySession(bool bResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateSession(bool bResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleUnready(bool bResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleReady(bool bResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleEnd(bool bResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleComp();
    
};

