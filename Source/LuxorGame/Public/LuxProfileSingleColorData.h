#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LuxProfileDataSerializable.h"
#include "UObject/NoExportTypes.h"
#include "ELuxCreationColorParamType.h"
#include "LuxProfileSingleColorData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileSingleColorData : public FLuxProfileDataSerializable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxCreationColorParamType paramType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector indices;
    
    LUXORGAME_API FLuxProfileSingleColorData();
};

