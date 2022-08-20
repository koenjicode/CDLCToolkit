#pragma once
#include "CoreMinimal.h"
#include "UITextField.h"
#include "UINode.h"
#include "UIDataObject.h"
#include "UIEventListenerUnit.h"
#include "UITextElement.generated.h"

class UUINodeStyle;
class UUIEventListener;

UCLASS(Blueprintable)
class UMGUTIL_API UUITextElement : public UUITextField, public IUINode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UINodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRawText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RawText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEditedRawText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIEventListenerUnit> EventListenerMap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UUINodeStyle*> StyleMap;
    
    UUITextElement();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUIEventListener* AddEventListener(const FString& EventType);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool setPropertyValue(const FString& Path, const FUIDataObject& Value) override PURE_VIRTUAL(setPropertyValue, return false;);
    
    UFUNCTION(BlueprintCallable)
    FUIDataObject getPropertyValue(const FString& Path) override PURE_VIRTUAL(getPropertyValue, return FUIDataObject{};);
    
};

