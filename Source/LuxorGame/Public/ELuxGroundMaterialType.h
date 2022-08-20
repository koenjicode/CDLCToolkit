#pragma once
#include "CoreMinimal.h"
#include "ELuxGroundMaterialType.generated.h"

UENUM(BlueprintType)
enum class ELuxGroundMaterialType : uint8 {
    EGM_STONE,
    EGM_PEBBLE,
    EGM_WOOD,
    EGM_SOIL,
    EGM_WATER,
    EGM_GRASS,
    EGM_NET,
    EGM_METAL,
    EGM_CARPET,
    EGM_ICE,
    EGM_LAVA,
    EGM_SAND,
    EGM_WET,
    EGM_EARTHENWARE,
    EGM_ARMOR,
    EGM_MEAT,
    EGM_MIZUTAMARI,
    EGM_DEFAULT,
    EGM_TOKAGE,
    EGM_DORA,
    EGM_WOODDOLL,
    EGM_LAZER,
    EGM_OUTSIDE,
    EGM_NONE,
    EGM_SPECIAL,
    ENUM_MAX UMETA(Hidden),
};

