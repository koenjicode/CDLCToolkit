#pragma once
#include "CoreMinimal.h"
#include "ELuxCreationMenuHomeItem.generated.h"

UENUM(BlueprintType)
enum class ELuxCreationMenuHomeItem : uint8 {
    Style,
    Body,
    Parts,
    Color,
    Personality,
    Photo,
    Naming,
    TestPlay,
    Exit,
    Num,
};

