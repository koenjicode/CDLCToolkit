#pragma once
#include "CoreMinimal.h"
#include "LuxUINaviTextParam.generated.h"

USTRUCT(BlueprintType)
struct FLuxUINaviTextParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString iconText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString explainText;
    
    LUXORGAME_API FLuxUINaviTextParam();
};

