#pragma once
#include "CoreMinimal.h"
#include "ELuxCreationMenuDataSelectEditItem.generated.h"

UENUM(BlueprintType)
enum class ELuxCreationMenuDataSelectEditItem : uint8 {
    Edit,
    Copy,
    Delete,
    Favorite,
    Num,
};

