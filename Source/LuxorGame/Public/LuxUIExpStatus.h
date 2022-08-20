#pragma once
#include "CoreMinimal.h"
#include "LuxGameSaveObjectHelper.h"
#include "LuxUIExpStatus.generated.h"

USTRUCT(BlueprintType)
struct FLuxUIExpStatus : public FLuxGameSaveObjectHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StyleLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StyleExp;
    
    LUXORGAME_API FLuxUIExpStatus();
};

