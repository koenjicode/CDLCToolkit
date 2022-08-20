#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxGameTerminator.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxGameTerminator : public UObject {
    GENERATED_BODY()
public:
    ULuxGameTerminator();
    UFUNCTION(BlueprintCallable)
    static void RequestTermination();
    
};

