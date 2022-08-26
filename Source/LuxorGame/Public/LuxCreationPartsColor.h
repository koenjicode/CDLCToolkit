#pragma once
#include "CoreMinimal.h"
#include "ELuxPartCategory.h"
#include "LuxCreationColorSlot.h"
#include "LuxCreationPartsColor.generated.h"

USTRUCT(BlueprintType)
struct FLuxCreationPartsColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxPartCategory Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<bool> EditableFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<bool> PatternFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLuxCreationColorSlot> slots;
    
    LUXORGAME_API FLuxCreationPartsColor();
};

