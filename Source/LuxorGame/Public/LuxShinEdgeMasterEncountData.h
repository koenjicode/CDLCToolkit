#pragma once
#include "CoreMinimal.h"
#include "LuxGameSaveObjectHelper.h"
#include "UObject/NoExportTypes.h"
#include "LuxShinEdgeMasterEncountData.generated.h"

USTRUCT(BlueprintType)
struct FLuxShinEdgeMasterEncountData : public FLuxGameSaveObjectHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MissionID;
    
    LUXORGAME_API FLuxShinEdgeMasterEncountData();
};

