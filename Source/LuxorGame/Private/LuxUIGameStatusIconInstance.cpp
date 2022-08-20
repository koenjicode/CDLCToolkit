#include "LuxUIGameStatusIconInstance.h"

class UWorld;
class UObject;
class UWidgetAnimation;

void ULuxUIGameStatusIconInstance::OnPreLoadMap(const FString& InLoadMapName) {
}

void ULuxUIGameStatusIconInstance::OnPostLoadMap(UWorld* inWorld) {
}

void ULuxUIGameStatusIconInstance::OnAnimationFinished_fadeout(UObject* InObject, UWidgetAnimation* InWidgetAnimation) {
}

void ULuxUIGameStatusIconInstance::OnAnimationFinished_fadein(UObject* InObject, UWidgetAnimation* InWidgetAnimation) {
}

ULuxUIGameStatusIconInstance::ULuxUIGameStatusIconInstance() {
    this->IconWidget = NULL;
}

