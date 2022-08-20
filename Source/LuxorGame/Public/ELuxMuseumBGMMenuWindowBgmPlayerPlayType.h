#pragma once
#include "CoreMinimal.h"
#include "ELuxMuseumBGMMenuWindowBgmPlayerPlayType.generated.h"

UENUM(BlueprintType)
enum class ELuxMuseumBGMMenuWindowBgmPlayerPlayType : uint8 {
    serial,
    repeatAll,
    repeatOne,
    random,
    maxNum,
};

