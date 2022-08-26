#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELuxGamePresence.h"
#include "LuxUIGamePresenceUtil.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUIGamePresenceUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuxUIGamePresenceUtil();
    UFUNCTION(BlueprintCallable)
    static ELuxGamePresence ToEnum(const FString& InEnumString);
    
    UFUNCTION(BlueprintCallable)
    static void SetPresence(ELuxGamePresence InPresence);
    
};

