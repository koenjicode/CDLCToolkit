#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxCreationSupplement.generated.h"

UCLASS(Abstract, Blueprintable)
class LUXORGAME_API ULuxCreationSupplement : public UObject {
    GENERATED_BODY()
public:
    ULuxCreationSupplement();
};

