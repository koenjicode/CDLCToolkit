#pragma once
#include "CoreMinimal.h"
#include "LuxProfileDataSerializable.h"
#include "LuxProfileSingleColorData.h"
#include "LuxProfileSingleColorSlotData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileSingleColorSlotData : public FLuxProfileDataSerializable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool override;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileSingleColorData Color;
    
    LUXORGAME_API FLuxProfileSingleColorSlotData();
};

