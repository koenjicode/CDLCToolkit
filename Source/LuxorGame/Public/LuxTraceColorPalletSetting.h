#pragma once
#include "CoreMinimal.h"
#include "ELuxTracePartsId.h"
#include "ELuxWeaponVariation.h"
#include "ELuxEffectVertexClutId.h"
#include "UObject/NoExportTypes.h"
#include "LuxTraceColorPalletSetting.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxTraceColorPalletSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxTracePartsId TracePartsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxEffectVertexClutId ClutId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELuxWeaponVariation> EnableWeaponVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BaseColor;
    
    FLuxTraceColorPalletSetting();
};

