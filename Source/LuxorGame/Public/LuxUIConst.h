#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LuxUIConstData.h"
#include "LuxUIConst.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUIConst : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuxUIConst();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLuxUIConstData Get();
    
};

