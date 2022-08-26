#pragma once
#include "CoreMinimal.h"
#include "LuxBattleCommonActor.h"
#include "UObject/NoExportTypes.h"
#include "LuxPersonalityCommentEventListener.generated.h"

UCLASS(Blueprintable)
class ALuxPersonalityCommentEventListener : public ALuxBattleCommonActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPersonalityCommentEvent, int32, PlayerIndex, const FString&, Comment, const FLinearColor&, Color);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPersonalityCommentEvent OnPersonalityCommentEvent;
    
    ALuxPersonalityCommentEventListener();
};

