#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleTutorialTaskType.h"
#include "LuxBattleTutorialTask.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleTutorialTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleTutorialTaskType TaskType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredPracticeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TaskText;
    
    FLuxBattleTutorialTask();
};

