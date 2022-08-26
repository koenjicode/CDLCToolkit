#pragma once
#include "CoreMinimal.h"
#include "ELuxProfileFactoryProjectSearchMenu.generated.h"

UENUM(BlueprintType)
enum class ELuxProfileFactoryProjectSearchMenu : uint8 {
    All,
    Modified,
    Unmodified,
    Favorite,
    Shared,
    Num,
};

