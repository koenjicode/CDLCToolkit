#include "LuxDisplaySetting.h"

FLuxDisplaySetting::FLuxDisplaySetting() {
    this->Brightness = 0;
    this->UpperHUD = 0;
    this->DownerHUD = 0;
    this->BattleSubtitle = ELuxSubtitleVisibilityType::SUBTITLE_ON;
    this->DemoSubtitle = ELuxSubtitleVisibilityType::SUBTITLE_ON;
    this->PersonalComment = ELuxPersonalCommentVisibilityType::PERSONAL_COMMENT_ON;
    this->CustomEffect = ELuxCustomEffectVisibilityType::CUSTOM_EFFECT_ON;
}

