#pragma once
#include "CoreMinimal.h"
#include "LuxCreationSingleColor.h"
#include "LuxCreationSkinColor.generated.h"

USTRUCT(BlueprintType)
struct FLuxCreationSkinColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLuxCreationSingleColor> Slot;
    
    LUXORGAME_API FLuxCreationSkinColor();
};

