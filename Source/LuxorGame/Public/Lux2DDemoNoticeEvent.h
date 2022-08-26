#pragma once
#include "CoreMinimal.h"
#include "Lux2DDemoNoticeEvent.generated.h"

USTRUCT(BlueprintType)
struct FLux2DDemoNoticeEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MsgList;
    
    LUXORGAME_API FLux2DDemoNoticeEvent();
};

