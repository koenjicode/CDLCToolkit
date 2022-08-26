#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "DMSettingsBase.generated.h"

UCLASS(Abstract, Blueprintable, DefaultConfig, Config=Game)
class DMUTILITY_API UDMSettingsBase : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UDMSettingsBase();
};

