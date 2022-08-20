#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LuxUIStoreUtilCallback.h"
#include "LuxUIStoreConfig.h"
#include "LuxUIStoreUtil.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUIStoreUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuxUIStoreUtil();
    UFUNCTION(BlueprintCallable)
    static bool Purchase(const FString& DLC_ID, const FLuxUIStoreUtilCallback& InCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetStoreConfig(FLuxUIStoreConfig& Out);
    
};

