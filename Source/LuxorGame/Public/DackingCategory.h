#pragma once
#include "CoreMinimal.h"
#include "DackingCategory.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FDackingCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Volume;
    
    FDackingCategory();
};

