#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "LuxLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    ALuxLevelScriptActor();
    UFUNCTION(BlueprintCallable)
    void SendMessageToOtherLevel(const FString& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceiveMessage(const FString& Message);
    
};

