#pragma once
#include "CoreMinimal.h"
#include "LuxPSFadeoutSetting.h"
#include "LuxPSOverrideSetting.h"
#include "LuxPSSetting.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxPSSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> BaseMaterialList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SingleExistence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxPSFadeoutSetting FadeoutSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxPSOverrideSetting OverrideSetting;
    
    FLuxPSSetting();
};

