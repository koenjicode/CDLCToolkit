#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "ELuxStageVisibilityCheckType.h"
#include "UObject/NoExportTypes.h"
#include "LuxStageVisibilitySwitcher.generated.h"

class ALuxStageVisibilitySwitchActor;
class UArrowComponent;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxStageVisibilitySwitcher : public ALuxActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxStageVisibilityCheckType VisibilityCheckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CenterPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleThresholdOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackAngleThresholdOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnablePositionCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALuxStageVisibilitySwitchActor*> ActorList;
    
    ALuxStageVisibilitySwitcher();
    UFUNCTION(BlueprintCallable)
    void SetEnableVisibilityCheck(bool Enabled);
    
};

