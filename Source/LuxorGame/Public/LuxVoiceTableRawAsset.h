#pragma once
#include "CoreMinimal.h"
#include "ELuxVoiceLanguage.h"
#include "LuxVoiceTableRawAsset.generated.h"

USTRUCT(BlueprintType)
struct FLuxVoiceTableRawAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxVoiceLanguage Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    LUXORGAME_API FLuxVoiceTableRawAsset();
};

