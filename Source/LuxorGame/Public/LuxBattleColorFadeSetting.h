#pragma once
#include "CoreMinimal.h"
#include "LuxBattleColorFadeParameter.h"
#include "LuxBattleColorFadeSetting.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleColorFadeSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FadeoutFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleColorFadeParameter Parameter;
    
    FLuxBattleColorFadeSetting();
};

