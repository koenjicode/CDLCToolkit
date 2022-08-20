#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UIConfigMetaData.generated.h"

USTRUCT(BlueprintType)
struct FUIConfigMetaData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString objectStoreName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> relatedGameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* menuWidgetClass;
    
    UMGUTIL_API FUIConfigMetaData();
};

