#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "ELuxFightStyle.h"
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
    UTexture* xyChart;
    
    LUXORGAME_API FLuxProfileDBRadarChartData();
};

