#pragma once
#include "CoreMinimal.h"
#include "LuxGameSaveObjectHelper.h"
#include "LuxUIGameItemData.generated.h"

USTRUCT(BlueprintType)
struct FLuxUIGameItemData : public FLuxGameSaveObjectHelper {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Values;
    
    LUXORGAME_API FLuxUIGameItemData();
};

