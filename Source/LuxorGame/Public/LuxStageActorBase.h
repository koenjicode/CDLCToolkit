#pragma once
#include "CoreMinimal.h"
#include "LuxStageVisibilitySwitchActor.h"
#include "LuxStageActorBase.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxStageActorBase : public ALuxStageVisibilitySwitchActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PS4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PS4Pro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool XBoxOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool XboxOneX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> WallIdList;
    
    ALuxStageActorBase();
    UFUNCTION(BlueprintCallable)
    void SetTimeDilation(float inTimeDilation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWallHitEvent(int32 WallId);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
};

