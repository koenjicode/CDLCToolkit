#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "DIControllerConfiguration.h"
#include "DMDInputMapping.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Input)
class DMDINPUTCORE_API UDMDInputMapping : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDIControllerConfiguration> ControllerConfigurations;
    
public:
    UDMDInputMapping();
};

