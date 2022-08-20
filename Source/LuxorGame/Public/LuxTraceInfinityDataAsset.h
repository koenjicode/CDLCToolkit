#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LuxTraceInfinitySetting.h"
#include "LuxTraceInfinityDataAsset.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxTraceInfinityDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxTraceInfinitySetting> InfinitySettingTable;
    
    ULuxTraceInfinityDataAsset();
};

