#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "UObject/NoExportTypes.h"
#include "LuxBattleStageInfinityManager.generated.h"

class UUIFadeManager;
class ATargetPoint;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleStageInfinityManager : public ALuxActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentFramePlayersCenterPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentStageTilecenterPosition;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapChipSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapChiptilingCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDistanecFromOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInfinityStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNowOnPositionReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaitOneFrameForFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIFadeManager* FadeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StageTileUpdateIntervalCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATargetPoint* PlayerOrginActor;
    
public:
    ALuxBattleStageInfinityManager();
    UFUNCTION(BlueprintCallable)
    void OnFadeOutAnimFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeInAnimFinished();
    
};

