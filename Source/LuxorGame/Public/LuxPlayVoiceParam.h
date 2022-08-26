#pragma once
#include "CoreMinimal.h"
#include "LuxVoiceParamBase.h"
#include "LuxPlayVoiceParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxPlayVoiceParam : public FLuxVoiceParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NoLipSync;
    
    FLuxPlayVoiceParam();
};

