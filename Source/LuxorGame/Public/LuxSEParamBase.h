#pragma once
#include "CoreMinimal.h"
#include "ELuxSEBankType.h"
#include "LuxSEParamBase.generated.h"

USTRUCT(BlueprintType)
struct FLuxSEParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxSEBankType BankType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    LUXORGAME_API FLuxSEParamBase();
};

