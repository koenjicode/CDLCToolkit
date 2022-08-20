#pragma once
#include "CoreMinimal.h"
#include "LuxBattlePlayerResetParam.h"
#include "LuxBattleInfoResetParam.h"
#include "LuxStartPositionParam.h"
#include "LuxBattleCameraResetParam.h"
#include "LuxBattleStageResetParam.h"
#include "LuxBattleResetParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleResetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleInfoResetParam Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleCameraResetParam Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleStageResetParam stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxStartPositionParam Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattlePlayerResetParam> Players;
    
    FLuxBattleResetParam();
};

