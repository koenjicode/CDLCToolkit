#pragma once
#include "CoreMinimal.h"
#include "LuxSkitBranch.generated.h"

USTRUCT(BlueprintType)
struct FLuxSkitBranch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Msg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DetailID;
    
    LUXORGAME_API FLuxSkitBranch();
};

