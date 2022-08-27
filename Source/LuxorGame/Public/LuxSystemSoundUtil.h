#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELuxSystemVoiceID.h"
#include "ELuxSystemSEID.h"
#include "LuxSystemSoundUtil.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxSystemSoundUtil : public UObject {
    GENERATED_BODY()
public:
    ULuxSystemSoundUtil();
    UFUNCTION(BlueprintCallable, Exec)
    static void ToggleSoundVolume();
    
    UFUNCTION(BlueprintCallable)
    static void StopVoiceByPlaybackId(int32 playback_id);
    
    UFUNCTION(BlueprintCallable)
    static void StopVoice();
    
    UFUNCTION(BlueprintCallable)
    static void StopSEByPlaybackId(int32 playback_id);
    
    UFUNCTION(BlueprintCallable)
    static void StopSE();
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "Lux|Battle")
    static int32 PlayVoiceWorld(UObject* WorldContextObject, ELuxSystemVoiceID voice_id);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlayVoice(ELuxSystemVoiceID voice_id);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlayStageNarrationVoice(const FString& stage_code);
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "Lux|Battle")
    static int32 PlaySEWorld(UObject* WorldContextObject, int32 cue_id, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlaySE(int32 cue_id, float StartTime);
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "Lux|Battle")
    static int32 PlayNumberNarrationVoiceWorld(UObject* WorldContextObject, int32 Number);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlayNumberNarrationVoice(int32 Number);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlayCreationCharacterNarrationVoice(const FString& chara_code);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlayCharacterNarrationVoice(const FString& chara_code);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayingVoiceByPlaybackId(int32 playback_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayingVoice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSystemCueId(ELuxSystemSEID se_id);
    
};

