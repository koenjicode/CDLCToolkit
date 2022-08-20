#pragma once
#include "CoreMinimal.h"
#include "LuxAnimNode_ModifyBoneArray.h"
#include "Animation/AnimInstance.h"
#include "LuxTraceAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class LUXORGAME_API ULuxTraceAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxAnimNode_ModifyBoneArray BoneArrayNode;
    
public:
    ULuxTraceAnimInstance();
};

