#pragma once
#include "CoreMinimal.h"
#include "PreviewHumanMotionData.h"
#include "PreviewHumanMotionPak.generated.h"

USTRUCT(BlueprintType)
struct FPreviewHumanMotionPak {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPreviewHumanMotionData> MotionData;
    
    LUXORGAME_API FPreviewHumanMotionPak();
};

