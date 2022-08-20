#include "UIEventTargetUnitInterfaceUtil.h"

class UObject;
class UUIEventListener;

UUIEventListener* UUIEventTargetUnitInterfaceUtil::ListenEvent(UObject* Target, const FString& Type) {
    return NULL;
}

bool UUIEventTargetUnitInterfaceUtil::HasEventTargetUintInterface(UObject* Target) {
    return false;
}

void UUIEventTargetUnitInterfaceUtil::DispatchEvent(UObject* Target, const FString& Type, FUIDataObject Param) {
}

UUIEventTargetUnitInterfaceUtil::UUIEventTargetUnitInterfaceUtil() {
}

