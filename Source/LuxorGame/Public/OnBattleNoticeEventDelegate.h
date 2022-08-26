#pragma once
#include "CoreMinimal.h"
#include "OnBattleNoticeEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnBattleNoticeEvent, int32, player_num, const FText&, notice_message, const FText&, common1);

