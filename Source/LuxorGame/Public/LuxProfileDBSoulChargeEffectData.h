#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMGUtil -ObjectName=UIDataStructInterface -FallbackName=UIDataStructInterface
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
    TAssetPtr<UTexture> thumbnail;
    
    LUXORGAME_API FLuxProfileDBSoulChargeEffectData();
};

