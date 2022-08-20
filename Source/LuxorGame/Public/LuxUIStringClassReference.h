#pragma once
#include "CoreMinimal.h"
#include "LuxUIStringClassReference.generated.h"

USTRUCT(BlueprintType)
struct FLuxUIStringClassReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* Reference;
    
    LUXORGAME_API FLuxUIStringClassReference();
};

