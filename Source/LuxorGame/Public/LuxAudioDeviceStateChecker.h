#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxAudioDeviceStateChecker.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxAudioDeviceStateChecker : public UObject {
    GENERATED_BODY()
public:
    ULuxAudioDeviceStateChecker();
    UFUNCTION(BlueprintCallable)
    static bool HasValidAudioDevice();
    
};

