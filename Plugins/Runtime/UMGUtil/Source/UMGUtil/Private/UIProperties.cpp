#include "UIProperties.h"

class UUIProperties;

UUIProperties* UUIProperties::SetProperty(const FString& PropertyName, const FUIDataObject& Property) {
    return NULL;
}

void UUIProperties::ReferProperty(const FString& PropertyName, FUIDataObject& Property) const {
}




void UUIProperties::OnCreated_Implementation() {
}

void UUIProperties::NotifyPropertiesCreationComplete() {
}

UUIProperties* UUIProperties::Merge(const FUIDataObject& MergeProperties) {
    return NULL;
}

bool UUIProperties::IsNotifiedPropertiesCreationComplete() const {
    return false;
}

bool UUIProperties::HasProperty(const FString& PropertyName) const {
    return false;
}

UUIProperties* UUIProperties::GetProperty(const FString& PropertyName, FUIDataObject& Property) {
    return NULL;
}

UUIProperties* UUIProperties::Extends(const FUIDataObject& ExtendsProperties) {
    return NULL;
}

UUIProperties* UUIProperties::EnumeratePropertyNames(TArray<FString>& PropertyNames, int32& Count) {
    return NULL;
}

UUIProperties* UUIProperties::DefinePropertyString(const FString& PropertyName, const FString& Property) {
    return NULL;
}

UUIProperties* UUIProperties::DefinePropertyInt(const FString& PropertyName, int32 Property) {
    return NULL;
}

UUIProperties* UUIProperties::DefinePropertyFromDataObject(const FString& PropertyName, const FUIDataObject& Property) {
    return NULL;
}

UUIProperties* UUIProperties::DefinePropertyFloat(const FString& PropertyName, float Property) {
    return NULL;
}

UUIProperties* UUIProperties::DefinePropertyBoolean(const FString& PropertyName, bool Property) {
    return NULL;
}

UUIProperties* UUIProperties::Assign(const FUIDataObject& AssignsProperties) {
    return NULL;
}

UUIProperties::UUIProperties() {
}

