#pragma once
#include "CoreMinimal.h"
#include "ELuxEBVModeType.h"
#include "LuxEBVModeSetting.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxEBVModeSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxEBVModeType EdgeMaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxEBVModeType ChronicleStory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxEBVModeType Creation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxEBVModeType Versus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxEBVModeType Arcade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxEBVModeType Training;
    
    FLuxEBVModeSetting();
};

