#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDMTickType.h"
#include "DMTickableAction.generated.h"

UCLASS(Abstract, Blueprintable)
class DMUTILITY_API UDMTickableAction : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDMTickType TickType;
    
    UDMTickableAction();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceiveTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInit();
    
};

