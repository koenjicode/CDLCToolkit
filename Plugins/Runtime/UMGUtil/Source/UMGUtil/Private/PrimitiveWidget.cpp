#include "PrimitiveWidget.h"

class UTexture2D;
class UMaterialInterface;
class USlateBrushAsset;
class UMaterialInstanceDynamic;

void UPrimitiveWidget::SetScale(float InScale) {
}

void UPrimitiveWidget::SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize) {
}

void UPrimitiveWidget::SetBrushFromMaterial(UMaterialInterface* Material) {
}

void UPrimitiveWidget::SetBrushFromAsset(USlateBrushAsset* Asset) {
}

void UPrimitiveWidget::SetBrush(const FSlateBrush& InBrush) {
}

UMaterialInstanceDynamic* UPrimitiveWidget::GetDynamicMaterial() {
    return NULL;
}

UPrimitiveWidget::UPrimitiveWidget() {
    this->Scale = 0.00f;
}

