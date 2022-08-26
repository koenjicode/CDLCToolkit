#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAppRegion.h"
#include "LuxRegionUtil.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxRegionUtil : public UObject {
    GENERATED_BODY()
public:
    ULuxRegionUtil();
    UFUNCTION(BlueprintCallable)
    static EAppRegion GetAppRegion();
    
};

