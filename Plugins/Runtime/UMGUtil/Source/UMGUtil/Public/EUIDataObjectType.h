#pragma once
#include "CoreMinimal.h"
#include "EUIDataObjectType.generated.h"

UENUM(BlueprintType)
enum class EUIDataObjectType : uint8 {
    None,
    Null,
    String,
    Number,
    Boolean,
    Array,
    Object,
};

