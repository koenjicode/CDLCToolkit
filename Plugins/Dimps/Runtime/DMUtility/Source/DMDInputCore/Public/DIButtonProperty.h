#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "DIButtonProperty.generated.h"

USTRUCT(BlueprintType)
struct FDIButtonProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey RawButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey MappedButton;
    
    DMDINPUTCORE_API FDIButtonProperty();
};

