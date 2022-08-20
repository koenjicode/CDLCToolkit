#pragma once
#include "CoreMinimal.h"
#include "CustomAssignableCombo.generated.h"

USTRUCT(BlueprintType)
struct DMUTILITY_API FCustomAssignableCombo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LabelText;
    
    FCustomAssignableCombo();
};

