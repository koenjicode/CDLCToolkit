#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LuxUIMenuTutorialUtil.generated.h"

class UUIWindowElement;
class UUIMenuWidget;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUIMenuTutorialUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuxUIMenuTutorialUtil();
    UFUNCTION(BlueprintCallable)
    static void SetTutorialWatched(const FString& TutorialID);
    
    UFUNCTION(BlueprintCallable)
    static UUIWindowElement* CreateTutorialWithAutoCheckWatched(UUIMenuWidget* UIMenu, UUIWindowElement* ResponsibleWindow, const FString& TutorialID);
    
    UFUNCTION(BlueprintCallable)
    static UUIWindowElement* CreateTutorialInvariablyOpenHideNavi(UUIMenuWidget* UIMenu, UUIWindowElement* ResponsibleWindow, const FString& TutorialID);
    
    UFUNCTION(BlueprintCallable)
    static UUIWindowElement* CreateTutorialInvariablyOpen(UUIMenuWidget* UIMenu, UUIWindowElement* ResponsibleWindow, const FString& TutorialID);
    
    UFUNCTION(BlueprintCallable)
    static UUIWindowElement* CreateDoubleTutorialWithAutoCheckWatched(UUIMenuWidget* UIMenu, UUIWindowElement* ResponsibleWindow, const FString& TutorialId1, const FString& TutorialId2);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckWatchedTutorial(const FString& TutorialID);
    
};

