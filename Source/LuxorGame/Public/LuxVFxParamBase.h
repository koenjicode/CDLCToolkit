#pragma once
#include "CoreMinimal.h"
#include "LuxVFxParamBase.generated.h"

USTRUCT(BlueprintType)
struct FLuxVFxParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Group;
    
    LUXORGAME_API FLuxVFxParamBase();
};

