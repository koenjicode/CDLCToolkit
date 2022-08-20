#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "LuxCharaAnimNode_CreationScale.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxCharaAnimNode_CreationScale : public FAnimNode_Base {
    GENERATED_BODY()
public:
    FLuxCharaAnimNode_CreationScale();
};

