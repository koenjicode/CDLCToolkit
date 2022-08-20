#pragma once
#include "CoreMinimal.h"
#include "LuxBattleCommonActor.h"
#include "ELuxBattleMissionResultDemoPhase.h"
#include "ELuxBattleMissionResultDemoType.h"
#include "LuxBattleMissionResultDemo.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleMissionResultDemo : public ALuxBattleCommonActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleMissionResultDemoPhase DemoPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DPFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DPParamL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DPParamG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleMissionResultDemoType DemoType;
    
public:
    ALuxBattleMissionResultDemo();
};

