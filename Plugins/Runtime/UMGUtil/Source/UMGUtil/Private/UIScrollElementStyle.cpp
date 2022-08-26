#include "UIScrollElementStyle.h"

UUIScrollElementStyle::UUIScrollElementStyle() {
    this->Orientation = Orient_Horizontal;
    this->ScrollBarVisibility = ESlateVisibility::Visible;
    this->ConsumeMouseWheel = EConsumeMouseWheel::WhenScrollingPossible;
    this->AlwaysShowScrollbar = false;
    this->AllowOverscroll = false;
    this->NavigationDestination = EDescendantScrollDestination::IntoView;
    this->NavigationScrollPadding = 0.00f;
}

