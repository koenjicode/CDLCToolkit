#pragma once
#include "CoreMinimal.h"
#include "LuxBattleCommonActor.h"
#include "UObject/NoExportTypes.h"
#include "LuxBattleDramaticVoicePlayInfo.h"
#include "LuxBattleDramaticVoiceTriggerCondition.h"
#include "LuxBattleDramaticVoice.generated.h"

class ULuxDramaticVoiceDataAsset;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleDramaticVoice : public ALuxBattleCommonActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxDramaticVoiceDataAsset* DramaticVoiceDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DramaticVoiceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RequestQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattleDramaticVoicePlayInfo> PlayInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleDramaticVoiceTriggerCondition TriggerCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomValue;
    
public:
    ALuxBattleDramaticVoice();
    UFUNCTION(BlueprintCallable)
    void TriggerSoulCharge(int32 inPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void TriggerReversalEdgeWin(int32 inPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void TriggerReversalEdgeStart(int32 inPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void TriggerReversalEdgeMove(int32 inPlayerIndex, int32 inTimes);
    
    UFUNCTION(BlueprintCallable)
    void TriggerReversalEdge(int32 inPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void TriggerReply(int32 inPrevDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void TriggerPlayerWin(int32 inPlayerIndex, bool IsMatchDecided);
    
    UFUNCTION(BlueprintCallable)
    void TriggerPlayerLife(int32 inPlayerIndex, float inLife);
    
    UFUNCTION(BlueprintCallable)
    void TriggerMissionCriticalEdge(int32 inRightPlayerIndex, int32 inCEPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void TriggerMissionBattleWin(int32 inRightPlayerIndex, int32 inWinPlayerIndex, bool IsMatchDecided);
    
    UFUNCTION(BlueprintCallable)
    void TriggerMissionBattleStart(int32 inRightPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void TriggerCriticalEdgeHit(int32 inPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void TriggerCriticalEdge(int32 inPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void TriggerChangeMotion(int32 inPlayerIndex, int32 inMotionID);
    
    UFUNCTION(BlueprintCallable)
    void TriggerChangeMood(int32 inPlayerIndex, int32 inMood);
    
    UFUNCTION(BlueprintCallable)
    void TriggerBattleTime(int32 InTime);
    
    UFUNCTION(BlueprintCallable)
    void TriggerBattleStart();
    
    UFUNCTION(BlueprintCallable)
    void Stop(bool bForcedlyStop);
    
    UFUNCTION(BlueprintCallable)
    void RequestToPlay(int32 inDataIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerPlaying(int32 inPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDataCount() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelAllRequests();
    
};

