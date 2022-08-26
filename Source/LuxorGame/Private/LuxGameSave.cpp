#include "LuxGameSave.h"
#include "Templates/SubclassOf.h"

class ULuxGameSaveObject;
class ULuxGameSave;

ULuxGameSaveObject* ULuxGameSave::WriteSaveObject(TSubclassOf<ULuxGameSaveObject> InClass) {
    return NULL;
}

bool ULuxGameSave::Save() {
    return false;
}

ULuxGameSaveObject* ULuxGameSave::ReadSaveObject(TSubclassOf<ULuxGameSaveObject> InClass) {
    return NULL;
}

bool ULuxGameSave::Load() {
    return false;
}

bool ULuxGameSave::Initialize() {
    return false;
}

ULuxGameSaveObject* ULuxGameSave::GetSaveObject(TSubclassOf<ULuxGameSaveObject> InClass) {
    return NULL;
}

ULuxGameSave* ULuxGameSave::GetInstance() {
    return NULL;
}

bool ULuxGameSave::Finalize() {
    return false;
}

bool ULuxGameSave::Exists() {
    return false;
}

bool ULuxGameSave::CreateSaveObject(ULuxGameSaveObject* InSaveObject) {
    return false;
}

bool ULuxGameSave::Clear() {
    return false;
}

int32 ULuxGameSave::CheckInvalidDLC() const {
    return 0;
}

void ULuxGameSave::AsyncSave(FLuxGameSaveAsyncParam InParam) {
}

void ULuxGameSave::AsyncLoad(FLuxGameSaveAsyncParam InParam) {
}

ULuxGameSave::ULuxGameSave() {
}

