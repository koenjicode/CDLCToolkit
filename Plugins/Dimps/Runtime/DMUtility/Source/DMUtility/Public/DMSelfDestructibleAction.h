#pragma once
#include "CoreMinimal.h"
#include "DMTickableAction.h"
#include "DMSelfDestructibleAction.generated.h"

UCLASS(Abstract, Blueprintable)
class DMUTILITY_API UDMSelfDestructibleAction : public UDMTickableAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Progress;
    
    UDMSelfDestructibleAction();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExpiration();
    
};

