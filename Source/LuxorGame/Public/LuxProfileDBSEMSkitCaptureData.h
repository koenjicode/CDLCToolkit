#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "ELuxRace.h"
#include "LuxSkitCaptureData.h"
#include "ELuxGender.h"
#include "ELuxFacePattern.h"
#include "LuxProfileDBSEMSkitCaptureData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileDBSEMSkitCaptureData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxRace racialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxGender genderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxFacePattern faceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxSkitCaptureData skitData;
    
    LUXORGAME_API FLuxProfileDBSEMSkitCaptureData();
};

