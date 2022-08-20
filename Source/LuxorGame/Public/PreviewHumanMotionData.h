#pragma once
#include "CoreMinimal.h"
#include "ELuxFacePattern.h"
#include "ELuxMotionPriorityType.h"
#include "PreviewHumanMotionData.generated.h"

USTRUCT(BlueprintType)
struct FPreviewHumanMotionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MM_MotionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MS_MotionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 R_Finger_ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 L_Finger_ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxFacePattern facePattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxMotionPriorityType motionPriorityType;
    
    LUXORGAME_API FPreviewHumanMotionData();
};

