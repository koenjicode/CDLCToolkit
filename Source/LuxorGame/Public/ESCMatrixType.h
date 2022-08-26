#pragma once
#include "CoreMinimal.h"
#include "ESCMatrixType.generated.h"

UENUM(BlueprintType)
enum class ESCMatrixType : uint8 {
    SCMATRIX_Character,
    SCMATRIX_Weapon,
    SCMATRIX_MAX UMETA(Hidden),
};

