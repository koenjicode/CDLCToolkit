#pragma once
#include "CoreMinimal.h"
#include "LuxChangeShaderParameter.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxChangeShaderParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    FLuxChangeShaderParameter();
};

