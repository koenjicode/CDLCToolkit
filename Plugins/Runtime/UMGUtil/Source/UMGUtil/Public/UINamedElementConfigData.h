#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UINamedElementConfigData.generated.h"

USTRUCT(BlueprintType)
struct FUINamedElementConfigData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* elementWidgetClass;
    
    UMGUTIL_API FUINamedElementConfigData();
};

