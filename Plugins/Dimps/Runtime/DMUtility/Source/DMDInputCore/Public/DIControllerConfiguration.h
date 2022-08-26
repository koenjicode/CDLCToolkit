#pragma once
#include "CoreMinimal.h"
#include "DIButtonProperty.h"
#include "DIAxisProperty.h"
#include "DIControllerConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FDIControllerConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeviceGUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeviceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDIButtonProperty> ButtonProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDIAxisProperty> AxisProperties;
    
    DMDINPUTCORE_API FDIControllerConfiguration();
};

