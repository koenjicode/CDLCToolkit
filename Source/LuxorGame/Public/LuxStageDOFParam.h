#pragma once
#include "CoreMinimal.h"
#include "LuxDOFParam.h"
#include "LuxStageDOFParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxStageDOFParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxDOFParam Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxDOFParam Middle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxDOFParam Distant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxDOFParam StageIntro;
    
    FLuxStageDOFParam();
};

