#pragma once
#include "CoreMinimal.h"
#include "AppxMeshAnimationParam.h"
#include "AppxMeshAnimationParamStruct.generated.h"

USTRUCT(BlueprintType)
struct FAppxMeshAnimationParamStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAppxMeshAnimationParam> AnimationParams;
    
    LUXORGAME_API FAppxMeshAnimationParamStruct();
};

