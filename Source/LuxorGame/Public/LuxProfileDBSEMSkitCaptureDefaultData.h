#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "ELuxFacePattern.h"
#include "LuxSkitCaptureData.h"
#include "LuxProfileDBSEMSkitCaptureDefaultData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileDBSEMSkitCaptureDefaultData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxFacePattern faceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxSkitCaptureData skitData;
    
    LUXORGAME_API FLuxProfileDBSEMSkitCaptureDefaultData();
};

