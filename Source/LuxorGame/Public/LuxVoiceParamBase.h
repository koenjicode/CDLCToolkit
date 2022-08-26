#pragma once
#include "CoreMinimal.h"
#include "ELuxSoundStopReason.h"
#include "ELuxVoiceBankType.h"
#include "LuxVoiceParamBase.generated.h"

USTRUCT(BlueprintType)
struct FLuxVoiceParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxVoiceBankType BankType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxSoundStopReason Reason;
    
    LUXORGAME_API FLuxVoiceParamBase();
};

