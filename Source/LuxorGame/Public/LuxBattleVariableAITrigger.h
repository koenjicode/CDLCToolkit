#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleVariableAITriggerType.h"
#include "LuxBattleVariableAITrigger.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleVariableAITrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleVariableAITriggerType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Param1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Param2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Param3;
    
    FLuxBattleVariableAITrigger();
};

