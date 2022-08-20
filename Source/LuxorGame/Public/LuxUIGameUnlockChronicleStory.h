#pragma once
#include "CoreMinimal.h"
#include "LuxUIGameUnlock.h"
#include "LuxUIGameUnlockChronicleStory.generated.h"

class ULuxUIGameUnlockChronicleStory;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUIGameUnlockChronicleStory : public ULuxUIGameUnlock {
    GENERATED_BODY()
public:
    ULuxUIGameUnlockChronicleStory();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULuxUIGameUnlockChronicleStory* GetChronicleStoryUnlockProxy();
    
};

