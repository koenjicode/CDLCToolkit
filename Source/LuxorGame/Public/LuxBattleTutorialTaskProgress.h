#pragma once
#include "CoreMinimal.h"
#include "LuxBattleTutorialTaskProgress.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleTutorialTaskProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PracticeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComplete;
    
    FLuxBattleTutorialTaskProgress();
};

