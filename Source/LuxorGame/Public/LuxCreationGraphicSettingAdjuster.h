#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "LuxCreationGraphicSettingAdjuster.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxCreationGraphicSettingAdjuster : public ALuxActor {
    GENERATED_BODY()
public:
    ALuxCreationGraphicSettingAdjuster();
    UFUNCTION(BlueprintCallable)
    void ResetSSAOComputeMode();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSSAOSyncComputerMode();
    
};

