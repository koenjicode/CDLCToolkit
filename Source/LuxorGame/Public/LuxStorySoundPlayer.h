#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxStorySoundPlayer.generated.h"

class USoundAtomCueSheet;

UCLASS(Blueprintable)
class ULuxStorySoundPlayer : public UObject {
    GENERATED_BODY()
public:
    ULuxStorySoundPlayer();
    UFUNCTION(BlueprintCallable)
    void StopVoice();
    
    UFUNCTION(BlueprintCallable)
    void StopSE();
    
    UFUNCTION(BlueprintCallable)
    void StopBGM();
    
    UFUNCTION(BlueprintCallable)
    void StopAll();
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceAisacValue(const FString& Name, float Value);
    
    UFUNCTION(BlueprintCallable)
    void Setup(USoundAtomCueSheet* BGMCueSheet, USoundAtomCueSheet* SECueSheet, USoundAtomCueSheet* VoiceCueSheet);
    
    UFUNCTION(BlueprintCallable)
    void SetSEAisacValue(const FString& Name, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPause(bool Pause, bool All);
    
    UFUNCTION(BlueprintCallable)
    void SetBGMAisacValue(const FString& Name, float Value);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void PlayVoice(int32 CueId, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void PlaySE(int32 CueId, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayBGM(int32 CueId, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayAll(int32 CueId, float StartTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingVoice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingSE() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingBGM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVoiceAisacValue(const FString& Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSEAisacValue(const FString& Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayPositionVoice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayPositionSE() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayPositionBGM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBGMAisacValue(const FString& Name) const;
    
};

