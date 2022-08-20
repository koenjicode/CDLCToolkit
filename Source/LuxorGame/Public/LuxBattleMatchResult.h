#pragma once
#include "CoreMinimal.h"
#include "LuxBattleMatchResult.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleMatchResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WinnerIndex;
    
    FLuxBattleMatchResult();
};

