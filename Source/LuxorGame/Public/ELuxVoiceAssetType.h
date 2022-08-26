#pragma once
#include "CoreMinimal.h"
#include "ELuxVoiceAssetType.generated.h"

UENUM(BlueprintType)
enum class ELuxVoiceAssetType : uint8 {
    EVA_J_VOICE,
    EVA_J_LIPSYNC,
    EVA_E_VOICE,
    EVA_E_LIPSYNC,
    EVA_J_OPTION_VOICE,
    EVA_E_OPTION_VOICE,
    ENUM_MAX UMETA(Hidden),
};

