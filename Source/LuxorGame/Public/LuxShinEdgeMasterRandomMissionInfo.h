#pragma once
#include "CoreMinimal.h"
#include "LuxGameSaveObjectHelper.h"
#include "LuxShinEdgeMasterRandomMissionData.h"
#include "LuxShinEdgeMasterRandomMissionInfo.generated.h"

USTRUCT(BlueprintType)
struct FLuxShinEdgeMasterRandomMissionInfo : public FLuxGameSaveObjectHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxShinEdgeMasterRandomMissionData WildAstralMissionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxShinEdgeMasterRandomMissionData> ShinEdgeMasterRandomMissionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WildAstralClearCount;
    
    LUXORGAME_API FLuxShinEdgeMasterRandomMissionInfo();
};

