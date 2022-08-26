#pragma once
#include "CoreMinimal.h"
#include "ELuxVoiceType.h"
#include "LuxProfileDataSerializable.h"
#include "LuxProfileBodyVoiceSettingData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileBodyVoiceSettingData : public FLuxProfileDataSerializable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxVoiceType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 formant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 evil_level;
    
    LUXORGAME_API FLuxProfileBodyVoiceSettingData();
};

