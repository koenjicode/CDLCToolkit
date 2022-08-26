#pragma once
#include "CoreMinimal.h"
#include "ELuxCommonAssetType.generated.h"

UENUM(BlueprintType)
enum class ELuxCommonAssetType : uint8 {
    ECM_CommonMotion,
    ECM_FingerMotion,
    ECM_DefaultConectionMotion,
    ECM_Command,
    ECM_Yarare,
    ECM_RelationTable,
    ECM_EnshutsuHeaderTable,
    ECM_DebugCommonMotion,
    ECM_DebugFingerMotion,
    ECM_DebugCommandName,
    ECM_DebugYarareName,
    ECM_DebugCommandNameKanji,
    ECM_DebugYarareNameKanji,
    ECM_SELabel,
    ENUM_MAX UMETA(Hidden),
};

