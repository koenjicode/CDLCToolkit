#pragma once
#include "CoreMinimal.h"
#include "LuxBattleMovePlayCommandSet.h"
#include "LuxBattleMovePlayParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleMovePlayParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattleMovePlayCommandSet> CommandSets;
    
    FLuxBattleMovePlayParam();
};

