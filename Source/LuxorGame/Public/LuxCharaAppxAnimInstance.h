#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AppxMeshAnimationParam.h"
#include "LuxCharaAppxAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class LUXORGAME_API ULuxCharaAppxAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    ULuxCharaAppxAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAnimationPosition(float pos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeAnimationState(FAppxMeshAnimationParam Param);
    
};

