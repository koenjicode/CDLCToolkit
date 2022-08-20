#pragma once
#include "CoreMinimal.h"
#include "OnLuxUIPadAssignmentCompletedDelegate.h"
#include "LuxUIPadAssignmentDelegate.generated.h"

USTRUCT(BlueprintType)
struct FLuxUIPadAssignmentDelegate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLuxUIPadAssignmentCompleted OnLuxUIPadAssignmentCompleted;
    
    LUXORGAME_API FLuxUIPadAssignmentDelegate();
};

