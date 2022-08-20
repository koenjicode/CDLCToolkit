#pragma once
#include "CoreMinimal.h"
#include "ELipPattern.h"
#include "ELipSoundType.h"
#include "DMLipsFrame.generated.h"

USTRUCT(BlueprintType)
struct DMUTILITY_API FDMLipsFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELipPattern LipPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Decibel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrimaryFormant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELipSoundType LipType;
    
    FDMLipsFrame();
};

