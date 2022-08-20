#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "DMGameViewportClientEx.generated.h"

class UObject;

UCLASS(Blueprintable, NonTransient)
class UDMGameViewportClientEx : public UGameViewportClient {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> DbgCdr;
    
public:
    UDMGameViewportClientEx();
};

