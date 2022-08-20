#pragma once
#include "CoreMinimal.h"
#include "LuxLoadableBase.h"
#include "LuxBattleStageSetup.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxBattleStageSetup : public ULuxLoadableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAstral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WithHole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExtraStageParam;
    
    ULuxBattleStageSetup();
};

