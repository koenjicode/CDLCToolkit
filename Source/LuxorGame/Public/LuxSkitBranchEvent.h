#pragma once
#include "CoreMinimal.h"
#include "LuxSkitBranch.h"
#include "LuxSkitBranchEvent.generated.h"

USTRUCT(BlueprintType)
struct FLuxSkitBranchEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxSkitBranch> Branches;
    
    LUXORGAME_API FLuxSkitBranchEvent();
};

