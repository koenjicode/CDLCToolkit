#pragma once
#include "CoreMinimal.h"
#include "ELuxFacePattern.generated.h"

UENUM(BlueprintType)
enum class ELuxFacePattern : uint8 {
    EFP_AUTO,
    EFP_NORMAL,
    EFP_SMILE,
    EFP_ANGRY,
    EFP_SAD,
    EFP_PAIN,
    EFP_KURUSHII,
    EFP_NIYARI,
    EFP_ODOROKI,
    EFP_OBIE,
    EFP_KUYASHII,
    EFP_KUYASHII_METOJI,
    EFP_YAREYARE,
    EFP_OOWARAI,
    EFP_KOMARU,
    EFP_KARAKAI,
    EFP_SHINPAI,
    EFP_HAKANAGE,
    EFP_SOU,
    EFP_UTU,
    EFP_NIRAMU,
    EFP_INORI,
    ENUM_MAX UMETA(Hidden),
};

