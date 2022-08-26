#pragma once
#include "CoreMinimal.h"
#include "ELuxPartCategory.h"
#include "LuxPartCategory.generated.h"

class ULuxCreationPartBase;

USTRUCT(BlueprintType)
struct FLuxPartCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxPartCategory Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxCreationPartBase* part;
    
    LUXORGAME_API FLuxPartCategory();
};

