#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LuxUIShopFlowParam.h"
#include "LuxUIShopFlowUtil.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUIShopFlowUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuxUIShopFlowUtil();
    UFUNCTION(BlueprintCallable)
    static void Purchase(FLuxUIShopFlowParam InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShopItem(const FString& InContentId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetShopContentIDs();
    
};

