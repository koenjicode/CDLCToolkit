#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "LuxCreationColorPaletteHelper.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxCreationColorPaletteHelper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector IndexMaxs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D rangeH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D rangeS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D rangeV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float deltaS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float deltaV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float minV;
    
    ULuxCreationColorPaletteHelper();
    UFUNCTION(BlueprintCallable)
    void Setup(FIntVector inIndexMaxs, FVector2D inRangeH, FVector2D inRangeS, FVector2D inRangeV, float inDeltaS, float inDeltaV, float inMinV, TArray<float> inHList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetRGB(int32 X, int32 Y, int32 Z);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntVector GetIndices(const FLinearColor& Color);
    
};

