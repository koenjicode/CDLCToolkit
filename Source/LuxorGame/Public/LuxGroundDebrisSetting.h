#pragma once
#include "CoreMinimal.h"
#include "LuxAnimationDebrisSetting.h"
#include "LuxPhysicsDebrisSetting.h"
#include "LuxGroundDebrisSetting.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxGroundDebrisSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxPhysicsDebrisSetting PhysicsDebrisSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxAnimationDebrisSetting AnimationDebrisSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeoutTime;
    
    FLuxGroundDebrisSetting();
};

