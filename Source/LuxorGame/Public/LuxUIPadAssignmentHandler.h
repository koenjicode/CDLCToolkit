#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxUIPadAssignmentHandler.generated.h"

UCLASS(Blueprintable)
class ULuxUIPadAssignmentHandler : public UObject {
    GENERATED_BODY()
public:
    ULuxUIPadAssignmentHandler();
    UFUNCTION(BlueprintCallable)
    void OnComplete(bool bSuccess, int32 ControllerId);
    
};

