#pragma once
#include "CoreMinimal.h"
#include "ELuxSkitSpeakerSide.h"
#include "ELuxSkitCaptureFaceType.h"
#include "LuxSkitMessageEvent.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLuxSkitMessageEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Spk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxSkitSpeakerSide side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Msg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* face;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxSkitCaptureFaceType CaptureFaceType;
    
    LUXORGAME_API FLuxSkitMessageEvent();
};

