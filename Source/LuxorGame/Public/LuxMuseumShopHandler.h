#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxMuseumShopHandler.generated.h"

UCLASS(Blueprintable)
class ULuxMuseumShopHandler : public UObject {
    GENERATED_BODY()
public:
    ULuxMuseumShopHandler();
    UFUNCTION(BlueprintCallable)
    void OnPurchase(bool bSuccess);
    
};

