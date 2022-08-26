#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleMessage.h"
#include "LuxBattleMessageParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleMessageParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleMessage Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FLuxBattleMessageParam();
};

