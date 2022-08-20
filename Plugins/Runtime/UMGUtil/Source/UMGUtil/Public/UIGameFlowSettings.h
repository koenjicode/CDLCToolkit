#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIGameFlowSettings.generated.h"

class UBaseGameFlowScene;

USTRUCT(BlueprintType)
struct FUIGameFlowSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateGameFlowWithPIE;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceEnableShinEdgeMasterMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InitialSceneNameOverrideWithPIE;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBaseGameFlowScene> DefaultGameFlowSceneClassAssetWithDevelopment;
    
    UMGUTIL_API FUIGameFlowSettings();
};

