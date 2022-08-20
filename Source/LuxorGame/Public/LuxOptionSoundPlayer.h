#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxOptionSoundPlayer.generated.h"

UCLASS(Blueprintable)
class ULuxOptionSoundPlayer : public UObject {
    GENERATED_BODY()
public:
    ULuxOptionSoundPlayer();
    UFUNCTION(BlueprintCallable)
    void StopVoice();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void PlayVoice(int32 CueSheetHn, int32 CueId, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSEVolumeSetting(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeNarrationVolumeSetting(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeCharacterVolumeSetting(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeBGMVolumeSetting(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingVoice() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
};

