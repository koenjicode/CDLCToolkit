#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "LuxNamedAssetReference.generated.h"

USTRUCT(BlueprintType)
struct FLuxNamedAssetReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference Reference;
    
    LUXORGAME_API FLuxNamedAssetReference();
};

