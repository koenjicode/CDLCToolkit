#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "LuxUIDirectoryReference.generated.h"

USTRUCT(BlueprintType)
struct FLuxUIDirectoryReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath Reference;
    
    LUXORGAME_API FLuxUIDirectoryReference();
};

