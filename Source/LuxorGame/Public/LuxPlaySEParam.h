#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LuxSEParamBase.h"
#include "ELuxGroundMaterialType.h"
#include "LuxPlaySEParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxPlaySEParam : public FLuxSEParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxGroundMaterialType Material;
    
    FLuxPlaySEParam();
};

