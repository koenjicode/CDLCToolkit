#pragma once
#include "CoreMinimal.h"
#include "LuxFacialPaths.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxFacialPaths {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FacialMotionPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FacialTablePath;
    
    FLuxFacialPaths();
};

