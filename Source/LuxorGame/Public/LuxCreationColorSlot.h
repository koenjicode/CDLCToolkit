#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LuxCreationColorSlotTexturePattern.h"
#include "LuxCreationColorSlot.generated.h"

USTRUCT(BlueprintType)
struct FLuxCreationColorSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxCreationColorSlotTexturePattern pattern;
    
    LUXORGAME_API FLuxCreationColorSlot();
};

