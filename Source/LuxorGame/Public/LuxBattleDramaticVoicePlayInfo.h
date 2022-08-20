#pragma once
#include "CoreMinimal.h"
#include "LuxBattleDramaticVoicePlayInfo.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleDramaticVoicePlayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerCheckCount;
    
    FLuxBattleDramaticVoicePlayInfo();
};

