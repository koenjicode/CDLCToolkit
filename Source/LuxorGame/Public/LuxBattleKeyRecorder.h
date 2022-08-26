#pragma once
#include "CoreMinimal.h"
#include "LuxBattleCommonActor.h"
#include "ELuxBattleKeyRecordState.h"
#include "LuxBattleKeyRecordSlotInfo.h"
#include "LuxBattleKeyRecorder.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleKeyRecorder : public ALuxBattleCommonActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleKeyRecordState RecordState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecordPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecordSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattleKeyRecordSlotInfo> RecordSlotInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaybackType;
    
public:
    ALuxBattleKeyRecorder();
    UFUNCTION(BlueprintCallable)
    void StopRecordAndPlayback();
    
    UFUNCTION(BlueprintCallable)
    void StopRecord();
    
    UFUNCTION(BlueprintCallable)
    void StopPlayback();
    
    UFUNCTION(BlueprintCallable)
    void StartRecord();
    
    UFUNCTION(BlueprintCallable)
    void StartPlayback();
    
    UFUNCTION(BlueprintCallable)
    void SetSlot(int32 inSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerIndex(int32 inPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackType(int32 inPlaybackType);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackLoopFlag(int32 inSlot, bool bLoop);
    
    UFUNCTION(BlueprintCallable)
    void ResetSlotInfo(int32 inSlot);
    
    UFUNCTION(BlueprintCallable)
    void ReadyToRecord();
    
    UFUNCTION(BlueprintCallable)
    void ReadyToPlayback();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecording() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingback() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLuxBattleKeyRecordSlotInfo GetSlotInfo(int32 inSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlaybackType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlaybackLoopFlag(int32 inSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleKeyRecordState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void ConstructRecordSlotInfos();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

