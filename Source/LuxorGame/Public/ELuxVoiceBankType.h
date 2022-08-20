#pragma once
#include "CoreMinimal.h"
#include "ELuxVoiceBankType.generated.h"

UENUM(BlueprintType)
enum class ELuxVoiceBankType : uint8 {
    EVB_Common,
    EVB_Character1P,
    EVB_Character2P,
    EVB_CharacterOption1P,
    EVB_CharacterOption2P,
    ENUM_MAX UMETA(Hidden),
};

