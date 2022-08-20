#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "ESCMatrixType.h"
#include "LuxCharaAnimNode_SCBattle.generated.h"

class ALuxBattleChara;

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxCharaAnimNode_SCBattle : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCMatrixType MatrixType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALuxBattleChara* battleChara;
    
public:
    FLuxCharaAnimNode_SCBattle();
};

