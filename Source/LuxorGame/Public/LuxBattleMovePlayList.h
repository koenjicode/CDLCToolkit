#pragma once
#include "CoreMinimal.h"
#include "LuxBattleMovePlayListItem.h"
#include "LuxBattleMovePlayList.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleMovePlayList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattleMovePlayListItem> Items;
    
    FLuxBattleMovePlayList();
};

