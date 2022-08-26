#include "UIMenuWidget.h"
#include "Templates/SubclassOf.h"

class UUINodeConfigurationScript;
class UUIWindowElement;

UUIWindowElement* UUIMenuWidget::GetWindowByName(const FString& windowNodeName) {
    return NULL;
}

void UUIMenuWidget::GetAllWindows(TArray<UUIWindowElement*>& outWindows) {
}

UUIWindowElement* UUIMenuWidget::ConstructWindowWithConfigScript(const FString& NodeName, TSubclassOf<UUIWindowElement> windowClass, TSubclassOf<UUINodeConfigurationScript> configScriptClass) {
    return NULL;
}

UUIWindowElement* UUIMenuWidget::ConstructWindowByConfigMapKey(const FString& configMapKey, TSubclassOf<UUINodeConfigurationScript> configScriptClass) {
    return NULL;
}

UUIWindowElement* UUIMenuWidget::ConstructWindow(const FString& NodeName, TSubclassOf<UUIWindowElement> windowClass) {
    return NULL;
}

UUIMenuWidget::UUIMenuWidget() {
}

