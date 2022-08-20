#pragma once
#include "CoreMinimal.h"
#include "LuxGameSaveObjectHelper.h"
#include "UObject/NoExportTypes.h"
#include "LuxReplayMetaData.h"
#include "LuxBattleReplayData.h"
#include "LuxReplayListItemData.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxReplayListItemData : public FLuxGameSaveObjectHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ItemDataID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FormatVer;
    
    UPROPERTY(EditAnywhere)
    int64 ReplayDataSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxReplayMetaData ReplayMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleReplayData BattleReplayData;
    
    FLuxReplayListItemData();
};

