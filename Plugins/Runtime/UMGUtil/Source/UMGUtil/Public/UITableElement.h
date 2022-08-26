#pragma once
#include "CoreMinimal.h"
#include "Components/ScrollBox.h"
#include "UINode.h"
#include "Layout/Margin.h"
#include "UIEventListenerUnit.h"
#include "UIDataObject.h"
#include "UITableElement.generated.h"

class UHorizontalBox;
class UUINodeStyle;
class UOverlay;
class UUIEventListener;

UCLASS(Blueprintable)
class UMGUTIL_API UUITableElement : public UScrollBox, public IUINode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UINodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool enableLateEnumeration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumColumns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin CellMargin;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<TWeakObjectPtr<UHorizontalBox>> RowWidgets;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<TWeakObjectPtr<UOverlay>> CellWidgets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIEventListenerUnit> EventListenerMap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UUINodeStyle*> StyleMap;
    
    UUITableElement();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUIEventListener* AddEventListener(const FString& EventType);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool setPropertyValue(const FString& Path, const FUIDataObject& Value) override PURE_VIRTUAL(setPropertyValue, return false;);
    
    UFUNCTION(BlueprintCallable)
    FUIDataObject getPropertyValue(const FString& Path) override PURE_VIRTUAL(getPropertyValue, return FUIDataObject{};);
    
};

