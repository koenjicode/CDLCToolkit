#pragma once
#include "CoreMinimal.h"
#include "UIWidgetImpl.h"
#include "LuxSkitWidgetBranchInfo.h"
#include "LuxSkitWidgetImpl.generated.h"

UCLASS(Blueprintable)
class ULuxSkitWidgetImpl : public UUIWidgetImpl {
    GENERATED_BODY()
public:
    ULuxSkitWidgetImpl();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupBranch(const TArray<FLuxSkitWidgetBranchInfo>& Branches);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBranchCursorPosition(int32 Position);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddToLog(const FText& Speaker, const FText& Message, bool bChangeColor);
    
};

