#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxGameSingleton.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxGameSingleton : public UObject {
    GENERATED_BODY()
public:
    ULuxGameSingleton();
};

