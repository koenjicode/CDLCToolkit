#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleDummyMoveType.h"
#include "ELuxBattleMoveCategory.h"
#include "LuxBattleDummyMoveSetting.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleDummyMoveSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleDummyMoveType MoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleMoveCategory MoveCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveCategoryItemIndex;
    
    FLuxBattleDummyMoveSetting();
};

