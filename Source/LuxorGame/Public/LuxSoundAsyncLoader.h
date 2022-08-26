#pragma once
#include "CoreMinimal.h"
#include "LuxAsyncLoader.h"
#include "LuxSoundAsyncLoader.generated.h"

UCLASS(Blueprintable, NonTransient)
class LUXORGAME_API ULuxSoundAsyncLoader : public ULuxAsyncLoader {
    GENERATED_BODY()
public:
    ULuxSoundAsyncLoader();
};

