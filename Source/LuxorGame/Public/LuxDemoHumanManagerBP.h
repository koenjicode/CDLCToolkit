#pragma once
#include "CoreMinimal.h"
#include "LuxDemoHumanManager.h"
#include "LuxDemoHumanManagerBP.generated.h"

class ULuxBattleSetup;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxDemoHumanManagerBP : public ALuxDemoHumanManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, Transient, meta=(AllowPrivateAccess=true))
    float DemoPlaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseStageCollision;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxBattleSetup* BattleSetup;
    
public:
    ALuxDemoHumanManagerBP();
    UFUNCTION(BlueprintCallable)
    void Prepare();
    
};

