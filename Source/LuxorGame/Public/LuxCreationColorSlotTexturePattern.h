#pragma once
#include "CoreMinimal.h"
#include "LuxCreationSingleColor.h"
#include "LuxCreationColorSlotTexturePattern.generated.h"

class ULuxCreationTextureAsset;

USTRUCT(BlueprintType)
struct FLuxCreationColorSlotTexturePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxCreationTextureAsset* pattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlip_H;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlip_V;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLuxCreationSingleColor> Color;
    
    LUXORGAME_API FLuxCreationColorSlotTexturePattern();
};

