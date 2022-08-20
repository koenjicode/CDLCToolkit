#pragma once
#include "CoreMinimal.h"
#include "HUDDataEntry.generated.h"

USTRUCT(BlueprintType)
struct FHUDDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StoreName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> KeyList;
    
    LUXORGAME_API FHUDDataEntry();
};

