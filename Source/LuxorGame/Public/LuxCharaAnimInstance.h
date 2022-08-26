#pragma once
#include "CoreMinimal.h"
#include "LuxCharaAnimNode_CreationScale.h"
#include "Animation/AnimInstance.h"
#include "LuxCharaAnimNode_SCBattle.h"
#include "LuxCharaAnimInstance.generated.h"

class ALuxBattleChara;

UCLASS(Blueprintable, NonTransient)
class LUXORGAME_API ULuxCharaAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxCharaAnimNode_SCBattle BattleNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxCharaAnimNode_CreationScale ScaleNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALuxBattleChara* battleChara;
    
public:
    ULuxCharaAnimInstance();
};

