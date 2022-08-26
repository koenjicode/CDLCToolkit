#pragma once
#include "CoreMinimal.h"
#include "LuxBattleVariableAISetting.h"
#include "LuxBattleVariableAITrigger.h"
#include "LuxBattleVariableAIParamItem.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleVariableAIParamItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleVariableAITrigger Trigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleVariableAISetting Setting;
    
    FLuxBattleVariableAIParamItem();
};

