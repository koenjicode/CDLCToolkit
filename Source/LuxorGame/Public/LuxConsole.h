#pragma once
#include "CoreMinimal.h"
#include "Engine/Console.h"
#include "LuxConsole.generated.h"

UCLASS(Blueprintable, NonTransient)
class LUXORGAME_API ULuxConsole : public UConsole {
    GENERATED_BODY()
public:
    ULuxConsole();
};

