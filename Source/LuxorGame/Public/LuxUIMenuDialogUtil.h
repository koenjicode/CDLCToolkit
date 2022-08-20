#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELuxMenuSoundEventType.h"
#include "LuxUIMenuDialogUtil.generated.h"

class UUIWindowElement;
class UUIMenuWidget;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUIMenuDialogUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuxUIMenuDialogUtil();
    UFUNCTION(BlueprintCallable)
    static UUIWindowElement* CreateWaitDialog_DEPRECATED(UUIMenuWidget* UIMenu, UUIWindowElement* ResponsibleWindow, const FString& DialogId);
    
    UFUNCTION(BlueprintCallable)
    static UUIWindowElement* CreateWaitCancelDialog_DEPRECATED(UUIMenuWidget* UIMenu, UUIWindowElement* ResponsibleWindow, const FString& DialogId);
    
    UFUNCTION(BlueprintCallable)
    static UUIWindowElement* CreateQuestionDialog_DEPRECATED(UUIMenuWidget* UIMenu, UUIWindowElement* ResponsibleWindow, const FString& DialogId);
    
    UFUNCTION(BlueprintCallable)
    static UUIWindowElement* CreateInfoDialog_DEPRECATED(UUIMenuWidget* UIMenu, UUIWindowElement* ResponsibleWindow, const FString& DialogId);
    
    UFUNCTION(BlueprintCallable)
    static UUIWindowElement* CreateErrorDialog_DEPRECATED(UUIMenuWidget* UIMenu, UUIWindowElement* ResponsibleWindow, const FString& DialogId);
    
    UFUNCTION(BlueprintCallable)
    static UUIWindowElement* CreateDialogMenu(UUIMenuWidget* UIMenu, UUIWindowElement* ResponsibleWindow, const FString& DialogId, ELuxMenuSoundEventType decisionSeTrigger);
    
};

