#pragma once
#include "CoreMinimal.h"
#include "LuxVFxParamBase.h"
#include "LuxDisableVFxParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxDisableVFxParam : public FLuxVFxParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 keepFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FadeoutFrame;
    
    FLuxDisableVFxParam();
};

