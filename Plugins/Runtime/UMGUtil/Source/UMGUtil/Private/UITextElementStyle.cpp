#include "UITextElementStyle.h"

UUITextElementStyle::UUITextElementStyle() {
    this->FontSize = 24.00f;
    this->Justification = ETextJustify::Left;
    this->VAlign = VAlign_Top;
    this->MinDesiredWidth = 0.00f;
    this->LineHeightPercentage = 1.00f;
    this->AutoWrapText = false;
    this->bWrapWithInvalidationPanel = false;
}

