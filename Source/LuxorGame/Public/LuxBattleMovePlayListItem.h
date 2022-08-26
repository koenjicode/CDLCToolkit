#pragma once
#include "CoreMinimal.h"
#include "LuxBattleMovePlayParam.h"
#include "LuxBattleMovePlayListItem.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleMovePlayListItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveListID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleMovePlayParam Param;
    
    FLuxBattleMovePlayListItem();
};

