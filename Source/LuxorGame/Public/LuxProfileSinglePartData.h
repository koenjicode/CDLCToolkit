#pragma once
#include "CoreMinimal.h"
#include "LuxProfileDataSerializable.h"
#include "LuxProfileSinglePartData.generated.h"

class ULuxCreationPartBase;

USTRUCT(BlueprintType)
struct FLuxProfileSinglePartData : public FLuxProfileDataSerializable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxCreationPartBase* part;
    
    LUXORGAME_API FLuxProfileSinglePartData();
};

