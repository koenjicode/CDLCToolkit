#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "LuxSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LUXORGAME_API ULuxSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    ULuxSkeletalMeshComponent();
};

