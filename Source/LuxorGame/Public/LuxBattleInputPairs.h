#pragma once
#include "CoreMinimal.h"
#include "LuxBattleInput.h"
#include "LuxBattleInputPairs.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleInputPairs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattleInput> Bindings;
    
    FLuxBattleInputPairs();
};

