#pragma once
#include "CoreMinimal.h"
#include "ELuxTracePartsId.h"
#include "ELuxWeaponVariation.h"
#include "ELuxEffectVertexClutId.h"
#include "LuxTraceColorApplySetting.generated.h"

USTRUCT(BlueprintType)
struct FLuxTraceColorApplySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxTracePartsId PartsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxEffectVertexClutId Clut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELuxWeaponVariation> WeaponVariations;
    
    LUXORGAME_API FLuxTraceColorApplySetting();
};

