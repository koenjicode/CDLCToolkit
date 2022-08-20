#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "LuxGroundDebrisComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LUXORGAME_API ULuxGroundDebrisComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    ULuxGroundDebrisComponent();
};

