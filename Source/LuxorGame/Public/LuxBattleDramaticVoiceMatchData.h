#pragma once
#include "CoreMinimal.h"
#include "LuxBattleDramaticVoiceData.h"
#include "LuxBattleDramaticVoiceMatchData.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleDramaticVoiceMatchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattleDramaticVoiceData> dataArray;
    
    FLuxBattleDramaticVoiceMatchData();
};

