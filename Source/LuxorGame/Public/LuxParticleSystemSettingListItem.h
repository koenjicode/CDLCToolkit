#pragma once
#include "CoreMinimal.h"
#include "LuxPSSetting.h"
#include "LuxParticleSystemSettingListItem.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxParticleSystemSettingListItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Template;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxPSSetting Setting;
    
    FLuxParticleSystemSettingListItem();
};

