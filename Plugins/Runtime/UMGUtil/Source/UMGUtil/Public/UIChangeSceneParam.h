#pragma once
#include "CoreMinimal.h"
#include "OnPreUIChangeSceneDelegate.h"
#include "UIChangeSceneParam.generated.h"

USTRUCT(BlueprintType)
struct UMGUTIL_API FUIChangeSceneParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreUIChangeScene OnPreUIChangeScene;
    
    FUIChangeSceneParam();
};

