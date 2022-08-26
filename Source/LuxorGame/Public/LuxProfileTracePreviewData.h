#pragma once
#include "CoreMinimal.h"
#include "ELuxMotionPriorityType.h"
#include "PreviewHumanTraceData.h"
#include "LuxProfileTracePreviewData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileTracePreviewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MotionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 leftFingerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rightFingerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxMotionPriorityType Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreviewHumanTraceData traceData;
    
    LUXORGAME_API FLuxProfileTracePreviewData();
};

