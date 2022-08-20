#pragma once
#include "CoreMinimal.h"
#include "LuxStickerSlot.h"
#include "ELuxPartCategory.h"
#include "UObject/NoExportTypes.h"
#include "LuxPartsSticker.generated.h"

USTRUCT(BlueprintType)
struct FLuxPartsSticker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxPartCategory Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLuxStickerSlot> Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PartsColorMask;
    
    LUXORGAME_API FLuxPartsSticker();
};

