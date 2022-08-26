#pragma once
#include "CoreMinimal.h"
#include "ELuxMenuCategoryType.generated.h"

UENUM(BlueprintType)
enum class ELuxMenuCategoryType : uint8 {
    CATEGORY_DEFAULT,
    CATEGORY_MAIN_MENU,
    CATEGORY_CHARA_SELECT,
    CATEGORY_SHIN_EDGE_MASTER,
    CATEGORY_CREATION,
    CATEGORY_CHRONICLE,
    CATEGORY_MUSEUM,
    ENUM_MAX UMETA(Hidden),
};

