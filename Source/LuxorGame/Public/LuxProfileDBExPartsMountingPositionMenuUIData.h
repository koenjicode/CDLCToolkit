#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "ELuxOffsetParentBone.h"
#include "LuxProfileDBExPartsMountingPositionMenuUIData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileDBExPartsMountingPositionMenuUIData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxOffsetParentBone Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locLabelTextId;
    
    LUXORGAME_API FLuxProfileDBExPartsMountingPositionMenuUIData();
};

