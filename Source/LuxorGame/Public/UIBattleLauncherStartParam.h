#pragma once
#include "CoreMinimal.h"
#include "OnUIBattleLauncherStartCompletedDelegate.h"
#include "UIBattleLauncherStartParam.generated.h"

USTRUCT(BlueprintType)
struct FUIBattleLauncherStartParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUIBattleLauncherStartCompleted OnUIBattleLauncherStartCompleted;
    
    LUXORGAME_API FUIBattleLauncherStartParam();
};

