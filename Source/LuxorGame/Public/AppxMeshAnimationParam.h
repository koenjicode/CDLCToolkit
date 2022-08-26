#pragma once
#include "CoreMinimal.h"
#include "AppxMeshAnimationParam.generated.h"

USTRUCT(BlueprintType)
struct FAppxMeshAnimationParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 frame;
    
    UPROPERTY(EditAnywhere)
    uint8 Parameter1;
    
    UPROPERTY(EditAnywhere)
    uint8 Parameter2;
    
    UPROPERTY(EditAnywhere)
    uint8 Parameter3;
    
    UPROPERTY(EditAnywhere)
    uint8 Parameter4;
    
    UPROPERTY(EditAnywhere)
    uint8 Parameter5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUsed;
    
    LUXORGAME_API FAppxMeshAnimationParam();
};

