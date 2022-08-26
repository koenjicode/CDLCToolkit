#pragma once
#include "CoreMinimal.h"
#include "LuxBattleOptionParam.h"
#include "LuxLoadableBase.h"
#include "LuxBattleRuleParam.h"
#include "LuxBattleReplayParam.h"
#include "LuxStageDOFParam.h"
#include "LuxBattleSetup.generated.h"

class ULuxBattleStageSetup;
class ULuxBattlePlayerSetup;
class ULuxBattleSoundSetup;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxBattleSetup : public ULuxLoadableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleRuleParam BattleRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULuxBattlePlayerSetup* PlayerLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULuxBattlePlayerSetup* PlayerRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULuxBattlePlayerSetup* PlayerDummy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULuxBattleSoundSetup* SoundSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULuxBattleStageSetup* StageSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleReplayParam BattleReplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleOptionParam BattleOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxStageDOFParam DOFParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndless;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalBattleProvider;
    
    ULuxBattleSetup();
    UFUNCTION(BlueprintCallable)
    static void EditorSetStageIndex(int32 inIndex);
    
};

