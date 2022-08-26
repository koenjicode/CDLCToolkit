#include "LuxCreationColorPaletteHelper.h"

void ULuxCreationColorPaletteHelper::Setup(FIntVector inIndexMaxs, FVector2D inRangeH, FVector2D inRangeS, FVector2D inRangeV, float inDeltaS, float inDeltaV, float inMinV, TArray<float> inHList) {
}

FLinearColor ULuxCreationColorPaletteHelper::GetRGB(int32 X, int32 Y, int32 Z) {
    return FLinearColor{};
}

FIntVector ULuxCreationColorPaletteHelper::GetIndices(const FLinearColor& Color) {
    return FIntVector{};
}

ULuxCreationColorPaletteHelper::ULuxCreationColorPaletteHelper() {
    this->deltaS = 0.05f;
    this->deltaV = 0.05f;
    this->minV = 0.00f;
}

