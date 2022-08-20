#pragma once
#include "CoreMinimal.h"
#include "ELuxProfileVoiceEditFactorDataKey.generated.h"

UENUM(BlueprintType)
enum class ELuxProfileVoiceEditFactorDataKey : uint8 {
    Type,
    Speed,
    Pitch,
    Formant,
    ProgressOfEvil,
    Reset,
    Num,
};

