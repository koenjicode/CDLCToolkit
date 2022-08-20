#pragma once
#include "CoreMinimal.h"
#include "ELuxProfileDataContainerType.generated.h"

UENUM(BlueprintType)
enum class ELuxProfileDataContainerType : uint8 {
    Unique,
    Arrange,
    SEM,
    SEM_NET,
    Temporary,
};

