#pragma once
#include "CoreMinimal.h"
#include "ELuxCharacterAssetType.generated.h"

UENUM(BlueprintType)
enum class ELuxCharacterAssetType : uint8 {
    ECA_Motion,
    ECA_AttackHitData,
    ECA_YarareHitData,
    ECA_BodyHitData,
    ECA_Header,
    ECA_MotionDebugInfo,
    ECA_HeaderDebugInfo,
    ECA_ThrowCameraData,
    ECA_CriticalCameraData,
    ECA_AppearCameraData,
    ECA_WinCameraData,
    ECA_VoiceSequenceTableData,
    ECA_CPUAIData,
    ECA_CPUAIDebugInfo,
    ENUM_MAX UMETA(Hidden),
};

