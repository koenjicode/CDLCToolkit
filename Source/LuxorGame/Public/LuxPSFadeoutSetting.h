#pragma once
#include "CoreMinimal.h"
#include "LuxPSFadeoutSetting.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FLuxPSFadeoutSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeoutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> TranslucentMaterialList;
    
    LUXORGAME_API FLuxPSFadeoutSetting();
};

