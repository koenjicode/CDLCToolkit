#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIWindowElementConfigData.generated.h"

class UUINodeConfigurationScript;
class UUIWindowElement;
class UUIJsonDataAsset;

USTRUCT(BlueprintType)
struct UMGUTIL_API FUIWindowElementConfigData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString windowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIWindowElement> elementClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUINodeConfigurationScript> configScriptClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIJsonDataAsset* configData;
    
    FUIWindowElementConfigData();
};

