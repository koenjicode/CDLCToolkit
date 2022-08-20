#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "ELuxProfileExPartPositionFactorDataKey.h"
#include "LuxProfileDBExPartsPositioningMenuUIData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileDBExPartsPositioningMenuUIData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxProfileExPartPositionFactorDataKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locLabelTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locDescriptionTextId;
    
    LUXORGAME_API FLuxProfileDBExPartsPositioningMenuUIData();
};

