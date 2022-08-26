#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "LuxUIGameStatusIconHandle.generated.h"

UCLASS(Blueprintable)
class ULuxUIGameStatusIconHandle : public UUIObject {
    GENERATED_BODY()
public:
    ULuxUIGameStatusIconHandle();
    UFUNCTION(BlueprintCallable)
    void Remove();
    
};

