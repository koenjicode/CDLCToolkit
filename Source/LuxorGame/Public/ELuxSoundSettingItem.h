#pragma once
#include "CoreMinimal.h"
#include "ELuxSoundSettingItem.generated.h"

UENUM(BlueprintType)
enum class ELuxSoundSettingItem : uint8 {
    SOUND_BGM_VOLUME,
    SOUND_SE_VOLUME,
    SOUND_CHARACTER_VOICE_VOLUME,
    SOUND_NARRATION_VOICE_VOLUME,
    SOUND_TONE_QUALITY,
    SOUND_VOICE_LANGUAGE,
    SOUND_SETTING_RESET,
    ENUM_MAX UMETA(Hidden),
};

