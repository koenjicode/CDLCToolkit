#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LuxTraceAttachComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LUXORGAME_API ULuxTraceAttachComponent : public USceneComponent {
    GENERATED_BODY()
public:
    ULuxTraceAttachComponent();
};

