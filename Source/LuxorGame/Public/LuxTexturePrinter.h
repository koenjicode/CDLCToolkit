#pragma once
#include "CoreMinimal.h"
#include "ELuxTexturePrinter.h"
#include "LuxTexturePrinter.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FLuxTexturePrinter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxTexturePrinter Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    LUXORGAME_API FLuxTexturePrinter();
};

