#pragma once
#include "CoreMinimal.h"
#include "LuxProfileDataSerializable.h"
#include "LuxProfileSingleColorData.h"
#include "LuxProfileSinglePatternData.h"
#include "LuxProfileColorSlotData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileColorSlotData : public FLuxProfileDataSerializable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool override;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileSingleColorData Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileSinglePatternData pattern;
    
    LUXORGAME_API FLuxProfileColorSlotData();
};

