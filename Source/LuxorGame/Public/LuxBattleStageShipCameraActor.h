#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "LuxBattleStageShipScendParam.h"
#include "LuxBattleStageShipScendState.h"
#include "LuxBattleStageShipCameraActor.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleStageShipCameraActor : public ALuxActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleStageShipScendParam ScendParamX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleStageShipScendParam ScendParamZ;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleStageShipScendState ScendStateX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleStageShipScendState ScendStateZ;
    
public:
    ALuxBattleStageShipCameraActor();
};

