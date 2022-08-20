#pragma once
#include "CoreMinimal.h"
#include "EUIAnimationControl.generated.h"

UENUM(BlueprintType)
enum class EUIAnimationControl : uint8 {
    init,
    fadeIn,
    fadeOut,
    focusIn,
    focusOut,
    increment,
    decrement,
    decide,
    rejected,
    disabled,
    invisible,
    anim1,
    anim2,
    anim3,
    anim4,
    anim5,
    anim6,
    anim7,
    anim8,
    maxNum,
};

