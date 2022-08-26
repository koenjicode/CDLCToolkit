#pragma once
#include "CoreMinimal.h"
#include "ELuxPartsSEType.h"
#include "ELuxPartsSEAcsType.h"
#include "LuxPartsSEPlayParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxPartsSEPlayParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxPartsSEType SEType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxPartsSEAcsType ACSType;
    
    FLuxPartsSEPlayParam();
};

