#pragma once
#include "CoreMinimal.h"
#include "ELuxBodyScale.h"
#include "LuxBodyScale.generated.h"

USTRUCT(BlueprintType)
struct FLuxBodyScale {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBodyScale Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    LUXORGAME_API FLuxBodyScale();
};

