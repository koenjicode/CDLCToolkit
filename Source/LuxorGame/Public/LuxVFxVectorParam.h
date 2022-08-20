#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LuxVFxVectorParam.generated.h"

USTRUCT(BlueprintType)
struct FLuxVFxVectorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Vector;
    
    LUXORGAME_API FLuxVFxVectorParam();
};

