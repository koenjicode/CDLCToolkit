#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ManaEventPointInfo.h"
#include "EManaComponentStatus.h"
#include "EManaSubtitlesEncoding.h"
#include "ManaComponent.generated.h"

class UManaTexture;
class UTexture;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UManaComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSubtitleChanged, FText, Subtitle);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnEventPoint, FManaEventPointInfo, EventPointInfo);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaTexture* Movie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventPoint OnEventPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtitlesEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubtitlesChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManaSubtitlesEncoding SubtitlesEncoding;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubtitleChanged OnSubtitleChanged;
    
    UManaComponent();
    UFUNCTION(BlueprintCallable)
    void StopAndWaitCompletion();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetTexture(UManaTexture* Texture);
    
    UFUNCTION(BlueprintCallable)
    void SetCachedData(const TArray<uint8>& dataArray);
    
    UFUNCTION(BlueprintCallable)
    void SeekToPosition(int32 FrameNumber);
    
    UFUNCTION(BlueprintCallable)
    void ResetCachedData();
    
    UFUNCTION(BlueprintCallable)
    void Prepare();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    bool IsPaused();
    
    UFUNCTION(BlueprintCallable)
    float GetVolume();
    
    UFUNCTION(BlueprintCallable)
    float GetTime();
    
    UFUNCTION(BlueprintCallable)
    UTexture* GetTexture();
    
    UFUNCTION(BlueprintCallable)
    EManaComponentStatus GetStatus();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFrameNumber();
    
    UFUNCTION(BlueprintCallable)
    void EnableSubtitles(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSubtitlesChannel(int32 Channel);
    
};

