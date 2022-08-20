#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LuxBattleStageBasePositionParam.h"
#include "LuxStageDOFParam.h"
#include "LuxBattleStageInfoTableRow.generated.h"

USTRUCT(BlueprintType)
struct FLuxBattleStageInfoTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleStageBasePositionParam Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattleStageBasePositionParam> OptionalCenters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRingEdgeAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleStageBasePositionParam RingEdge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWallAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleStageBasePositionParam Wall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxStageDOFParam DOF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RoundNumberForGeneratePositionParam;
    
    LUXORGAME_API FLuxBattleStageInfoTableRow();
};

