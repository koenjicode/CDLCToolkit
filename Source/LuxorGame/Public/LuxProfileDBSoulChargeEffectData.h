#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "ELuxSoulChargeType.h"
#include "LuxProfileDBSoulChargeEffectData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FLuxProfileDBSoulChargeEffectData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxSoulChargeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locNameTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* thumbnail;
    
    LUXORGAME_API FLuxProfileDBSoulChargeEffectData();
};

