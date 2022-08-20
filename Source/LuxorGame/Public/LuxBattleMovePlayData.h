#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxBattleMovePlayList.h"
#include "LuxBattleMovePlayData.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxBattleMovePlayData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RyuuhaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattleMovePlayList> CategoryPlayList;
    
    ULuxBattleMovePlayData();
};

