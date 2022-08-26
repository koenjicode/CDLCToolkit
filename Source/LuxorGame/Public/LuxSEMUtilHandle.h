#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxSEMUtilHandle.generated.h"

UCLASS(Blueprintable)
class ULuxSEMUtilHandle : public UObject {
    GENERATED_BODY()
public:
    ULuxSEMUtilHandle();
    UFUNCTION(BlueprintCallable)
    void Remove();
    
};

