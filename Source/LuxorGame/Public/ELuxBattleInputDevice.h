#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleInputDevice.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleInputDevice : uint8 {
    EBID_Pad1P,
    EBID_Pad2P,
    EBID_Keyboard1P,
    EBID_Keyboard2P,
    EBID_AnalogPad1P,
    EBID_AnalogPad2P,
    ENUM_MAX UMETA(Hidden),
};

