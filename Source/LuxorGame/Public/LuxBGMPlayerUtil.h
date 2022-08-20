#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELuxBGMParamID.h"
#include "LuxBGMPlayerUtil.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxBGMPlayerUtil : public UObject {
    GENERATED_BODY()
public:
    ULuxBGMPlayerUtil();
    UFUNCTION(BlueprintCallable)
    static bool StopJingleByPlaybackId(int32 playbackId);
    
    UFUNCTION(BlueprintCallable)
    static bool StopJingle();
    
    UFUNCTION(BlueprintCallable)
    static bool StopBGM();
    
    UFUNCTION(BlueprintCallable)
    static void SetKeepBGM(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetBGMVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void SetAisacValue(ELuxBGMParamID param_id, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void Reset();
    
    UFUNCTION(BlueprintCallable)
    static void RequestPlayBattleBGM(int32 bgm_id, int32 start_time_ms, int32 fade_in_frame);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlayJingle(int32 cue_id);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlayBGM(int32 cue_id, int32 start_time_ms, int32 fade_in_frame);
    
    UFUNCTION(BlueprintCallable)
    static void PauseBGM(bool is_pause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayingBGM();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBGMPaused();
    
    UFUNCTION(BlueprintCallable)
    static FString GetStageBGMName(int32 stage_index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBGMVolume();
    
};

