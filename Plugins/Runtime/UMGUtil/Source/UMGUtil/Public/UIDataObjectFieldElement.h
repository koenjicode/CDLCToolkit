#pragma once
#include "CoreMinimal.h"
#include "UIDataObject.h"
#include "UIDataObjectFieldElement.generated.h"

USTRUCT(BlueprintType)
struct FUIDataObjectFieldElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FieldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDataObject ObjectValue;
    
    UMGUTIL_API FUIDataObjectFieldElement();
};

