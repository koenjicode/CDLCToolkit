#pragma once
#include "CoreMinimal.h"
#include "CustomAssignableButton.generated.h"

USTRUCT(BlueprintType)
struct DMUTILITY_API FCustomAssignableButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LabelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ToolTipText;
    
    FCustomAssignableButton();
};

