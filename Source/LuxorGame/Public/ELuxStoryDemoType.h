#pragma once
#include "CoreMinimal.h"
#include "ELuxStoryDemoType.generated.h"

UENUM(BlueprintType)
enum class ELuxStoryDemoType : uint8 {
    IllustDemo,
    Skit,
    Demo3D,
    Movie,
    ENUM_MAX UMETA(Hidden),
};

