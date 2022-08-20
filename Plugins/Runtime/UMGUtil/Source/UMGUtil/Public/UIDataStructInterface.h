#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UIDataStructInterface.generated.h"

USTRUCT(BlueprintType)
struct UMGUTIL_API FUIDataStructInterface : public FTableRowBase {
    GENERATED_BODY()
public:
    FUIDataStructInterface();
};

