#pragma once
#include "CoreMinimal.h"
#include "LuxBattleVariableAIParamItem.h"
#include "LuxBattleVariableAIParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleVariableAIParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattleVariableAIParamItem> Items;
    
    FLuxBattleVariableAIParam();
};

