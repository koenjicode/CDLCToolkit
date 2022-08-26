#pragma once
#include "CoreMinimal.h"
#include "LuxProfileDataSerializable.h"
#include "ELuxBodyHeightType.h"
#include "ELuxMuscleType.h"
#include "ELuxBodyFrameType.h"
#include "LuxUIBodySetting.h"
#include "LuxProfileBodyPhysicalData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileBodyPhysicalData : public FLuxProfileDataSerializable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBodyHeightType bodyHeightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBodyFrameType bodyFrameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxMuscleType scaleTypeMuscleMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxUIBodySetting bodySetting;
    
    LUXORGAME_API FLuxProfileBodyPhysicalData();
};

