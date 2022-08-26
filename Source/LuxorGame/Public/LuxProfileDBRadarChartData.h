#pragma once
#include "CoreMinimal.h"
#include "ELuxFightStyle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMGUtil -ObjectName=UIDataStructInterface -FallbackName=UIDataStructInterface
#include "LuxProfileDBRadarChartData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FLuxProfileDBRadarChartData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxFightStyle STYLE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString difficultTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString typeTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTexture> xyChart;
    
    LUXORGAME_API FLuxProfileDBRadarChartData();
};

