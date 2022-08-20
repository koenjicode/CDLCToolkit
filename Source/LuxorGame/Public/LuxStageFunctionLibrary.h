#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LuxStageFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxStageFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuxStageFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void BroadcastMessageToLevelScript(UObject* WorldContext, const FString& Message);
    
};

