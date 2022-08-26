#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LuxUIAssetHubReceiver.generated.h"

class ULuxUIAssetLoader;

UINTERFACE(Blueprintable)
class ULuxUIAssetHubReceiver : public UInterface {
    GENERATED_BODY()
};

class ILuxUIAssetHubReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUIAssetLoadCompleted(ULuxUIAssetLoader* UIAssetLoader);
    
};

