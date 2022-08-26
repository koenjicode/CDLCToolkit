#pragma once
#include "CoreMinimal.h"
#include "ELuxRace.generated.h"

UENUM(BlueprintType)
enum class ELuxRace : uint8 {
    ELR_Human,
    ELR_Elf,
    ELR_Angel,
    ELR_Therianthrope,
    ELR_Orc,
    ELR_Devil,
    ELR_Skeleton,
    ELR_Lizardman,
    ELR_Mummy,
    ELR_LightEvil,
    ELR_HeavyEvil,
    ELR_HyperEvil,
    ELR_Shapeshifter,
    ELR_Colossus,
    ELR_Automata,
    ELR_Undead,
    ELR_Unknown,
    ENUM_MAX UMETA(Hidden),
};

