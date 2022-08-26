#include "UMGUtilUIDataObjectLibrary.h"

class UObject;

bool UUMGUtilUIDataObjectLibrary::Unshift(const FUIDataObject& InArrayDataObject, FUIDataObject& OutArrayDataObject, const FUIDataObject& Value) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::SwapValueAt(const FUIDataObject& InArrayDataObject, int32 index, const FUIDataObject& Value, FUIDataObject& OutArrayDataObject) {
    return false;
}

FString UUMGUtilUIDataObjectLibrary::Stringify(const FUIDataObject& DataObject) {
    return TEXT("");
}

bool UUMGUtilUIDataObjectLibrary::Shift(const FUIDataObject& InArrayDataObject, FUIDataObject& OutArrayDataObject, FUIDataObject& ShiftedValue) {
    return false;
}

void UUMGUtilUIDataObjectLibrary::SetStringValue(const FUIDataObject& InDataObject, const FString& Value, FUIDataObject& OutDataObject) {
}

void UUMGUtilUIDataObjectLibrary::SetIntValue(const FUIDataObject& InDataObject, int32 Value, FUIDataObject& OutDataObject) {
}

void UUMGUtilUIDataObjectLibrary::SetFloatValue(const FUIDataObject& InDataObject, float Value, FUIDataObject& OutDataObject) {
}

bool UUMGUtilUIDataObjectLibrary::SetField(const FUIDataObject& InDataObject, const FString& FieldName, const FUIDataObject& Value, FUIDataObject& OutDataObject) {
    return false;
}

void UUMGUtilUIDataObjectLibrary::SetBooleanValue(const FUIDataObject& InDataObject, bool Value, FUIDataObject& OutDataObject) {
}

bool UUMGUtilUIDataObjectLibrary::RemoveValueAt(const FUIDataObject& InArrayDataObject, int32 index, FUIDataObject& OutArrayDataObject) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::Push(const FUIDataObject& InArrayDataObject, FUIDataObject& OutArrayDataObject, const FUIDataObject& Value) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::Pop(const FUIDataObject& InArrayDataObject, FUIDataObject& OutArrayDataObject, FUIDataObject& PoppedValue) {
    return false;
}

FUIDataObject UUMGUtilUIDataObjectLibrary::Parse(const FString& JsonStringToParse) {
    return FUIDataObject{};
}

bool UUMGUtilUIDataObjectLibrary::NotEqualToString(const FUIDataObject& Lhs, const FString& Rhs) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::NotEqualToInt(const FUIDataObject& Lhs, int32 Rhs) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::NotEqualToFloat(const FUIDataObject& Lhs, float Rhs) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::NotEqualToBoolean(const FUIDataObject& Lhs, bool Rhs) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::NotEqual(const FUIDataObject& Lhs, const FUIDataObject& Rhs) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::Marge(const FUIDataObject& InDataObject, const FUIDataObject& SourceValue, FUIDataObject& OutDataObject) {
    return false;
}

int32 UUMGUtilUIDataObjectLibrary::LengthOfDataObjectArray(const FUIDataObject& InArrayDataObject) {
    return 0;
}

int32 UUMGUtilUIDataObjectLibrary::LastIndex(const FUIDataObject& InArrayDataObject) {
    return 0;
}

bool UUMGUtilUIDataObjectLibrary::InsertValueAt(const FUIDataObject& InArrayDataObject, int32 index, const FUIDataObject& Value, FUIDataObject& OutArrayDataObject) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::HasField(const FUIDataObject& DataObject, const FString& FieldName) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::GetValueAt(const FUIDataObject& InArrayDataObject, int32 index, FUIDataObject& OutDataObject) {
    return false;
}

UObject* UUMGUtilUIDataObjectLibrary::GetUObject(const FUIDataObject& DataObject) {
    return NULL;
}

EUIDataObjectType UUMGUtilUIDataObjectLibrary::GetType(const FUIDataObject& DataObject) {
    return EUIDataObjectType::None;
}

bool UUMGUtilUIDataObjectLibrary::GetStringValue(const FUIDataObject& DataObject, FString& Value) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::GetStringFromPath(const FUIDataObject& DataObject, const FString& FieldPath, FString& Value) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::GetStringAssetReferenceFromPath(const FUIDataObject& DataObject, const FString& FieldPath, FStringAssetReference& Value) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::GetObjectFromPath(const FUIDataObject& DataObject, const FString& FieldPath, FUIDataObject& Value) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::GetIntValue(const FUIDataObject& DataObject, int32& Value) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::GetIntFromPath(const FUIDataObject& DataObject, const FString& FieldPath, int32& Value) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::GetFloatValue(const FUIDataObject& DataObject, float& Value) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::GetFloatFromPath(const FUIDataObject& DataObject, const FString& FieldPath, float& Value) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::GetField(const FUIDataObject& DataObject, const FString& FieldName, FUIDataObject& Value) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::GetBooleanValue(const FUIDataObject& DataObject, bool& Value) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::GetBooleanFromPath(const FUIDataObject& DataObject, const FString& FieldPath, bool& Value) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::GetAssetPtrFromPath(const FUIDataObject& DataObject, const FString& FieldPath, UObject*& Value) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::Fields(const FUIDataObject& DataObject, TArray<FString>& FieldNameArray) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::Extend(const FUIDataObject& InDataObject, const FUIDataObject& SourceValue, FUIDataObject& OutDataObject) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::EqualToString(const FUIDataObject& Lhs, const FString& Rhs) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::EqualToInt(const FUIDataObject& Lhs, int32 Rhs) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::EqualToFloat(const FUIDataObject& Lhs, float Rhs) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::EqualToBoolean(const FUIDataObject& Lhs, bool Rhs) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::Equal(const FUIDataObject& Lhs, const FUIDataObject& Rhs) {
    return false;
}

void UUMGUtilUIDataObjectLibrary::CreateStringValue(FUIDataObject& DataObject, const FString& Value) {
}

void UUMGUtilUIDataObjectLibrary::CreateObject(FUIDataObject& DataObject) {
}

void UUMGUtilUIDataObjectLibrary::CreateNull(FUIDataObject& DataObject) {
}

void UUMGUtilUIDataObjectLibrary::CreateIntValue(FUIDataObject& DataObject, int32 Value) {
}

void UUMGUtilUIDataObjectLibrary::CreateFloatValue(FUIDataObject& DataObject, float Value) {
}

void UUMGUtilUIDataObjectLibrary::CreateFieldElements(FUIDataObject& DataObject, const TArray<FUIDataObjectFieldElement>& DataObjectFieldElements) {
}

void UUMGUtilUIDataObjectLibrary::CreateBooleanValue(FUIDataObject& DataObject, bool Value) {
}

void UUMGUtilUIDataObjectLibrary::CreateArrayFromTArray(const TArray<FUIDataObject>& DataObjects, FUIDataObject& ArrayDataObject) {
}

void UUMGUtilUIDataObjectLibrary::CreateArrayFromStringArray(const TArray<FString>& DataStrings, FUIDataObject& ArrayDataObject) {
}

void UUMGUtilUIDataObjectLibrary::CreateArrayFromIntArray(const TArray<int32>& DataValues, FUIDataObject& ArrayDataObject) {
}

void UUMGUtilUIDataObjectLibrary::CreateArray(FUIDataObject& ArrayDataObject) {
}

UObject* UUMGUtilUIDataObjectLibrary::Conv_UIDataObjectToTAssetPtr(const FUIDataObject& InDataObject) {
    return NULL;
}

FString UUMGUtilUIDataObjectLibrary::Conv_UIDataObjectToString(const FUIDataObject& InDataObject) {
    return TEXT("");
}

int32 UUMGUtilUIDataObjectLibrary::Conv_UIDataObjectToInt(const FUIDataObject& InDataObject) {
    return 0;
}

FText UUMGUtilUIDataObjectLibrary::Conv_UIDataObjectToFText(const FUIDataObject& InDataObject) {
    return FText::GetEmpty();
}

FStringAssetReference UUMGUtilUIDataObjectLibrary::Conv_UIDataObjectToFStringAssetReference(const FUIDataObject& InDataObject) {
    return FStringAssetReference{};
}

float UUMGUtilUIDataObjectLibrary::Conv_UIDataObjectToFloat(const FUIDataObject& InDataObject) {
    return 0.0f;
}

FDateTime UUMGUtilUIDataObjectLibrary::Conv_UIDataObjectToDateTime(const FUIDataObject& InDataObject) {
    return FDateTime{};
}

bool UUMGUtilUIDataObjectLibrary::Conv_UIDataObjectToBoolean(const FUIDataObject& InDataObject) {
    return false;
}

FUIDataObject UUMGUtilUIDataObjectLibrary::Conv_TAssetPtrToUIDataObject(const TAssetPtr<UObject>& InAsset) {
    return FUIDataObject{};
}

FUIDataObject UUMGUtilUIDataObjectLibrary::Conv_StringToUIDataObject(const FString& inString) {
    return FUIDataObject{};
}

FUIDataObject UUMGUtilUIDataObjectLibrary::Conv_IntToUIDataObject(int32 InNumber) {
    return FUIDataObject{};
}

FUIDataObject UUMGUtilUIDataObjectLibrary::Conv_FStringAssetReferenceToUIDataObject(const FStringAssetReference& InAsset) {
    return FUIDataObject{};
}

FUIDataObject UUMGUtilUIDataObjectLibrary::Conv_FloatToUIDataObject(float InNumber) {
    return FUIDataObject{};
}

FUIDataObject UUMGUtilUIDataObjectLibrary::Conv_DateTimeToUIDataObject(FDateTime InDateTime) {
    return FUIDataObject{};
}

FUIDataObject UUMGUtilUIDataObjectLibrary::Conv_BooleanToUIDataObject(bool InBoolean) {
    return FUIDataObject{};
}

bool UUMGUtilUIDataObjectLibrary::CompareSmallerThanString(const FUIDataObject& InDataObject, const FString& ToTestIfBigger) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::CompareSmallerThanInt(const FUIDataObject& InDataObject, int32 ToTestIfBigger) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::CompareSmallerThanFloat(const FUIDataObject& InDataObject, float ToTestIfBigger) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::CompareSmallerThan(const FUIDataObject& InDataObject, const FUIDataObject& ToTestIfBigger) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::CompareEqualOrSmallerThanString(const FUIDataObject& InDataObject, const FString& ToTestIfBigger) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::CompareEqualOrSmallerThanInt(const FUIDataObject& InDataObject, int32 ToTestIfBigger) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::CompareEqualOrSmallerThanFloat(const FUIDataObject& InDataObject, float ToTestIfBigger) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::CompareEqualOrSmallerThan(const FUIDataObject& InDataObject, const FUIDataObject& ToTestIfBigger) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::CompareEqualOrBiggerThanString(const FUIDataObject& InDataObject, const FString& ToTestIfSmaller) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::CompareEqualOrBiggerThanInt(const FUIDataObject& InDataObject, int32 ToTestIfSmaller) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::CompareEqualOrBiggerThanFloat(const FUIDataObject& InDataObject, float ToTestIfSmaller) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::CompareEqualOrBiggerThan(const FUIDataObject& InDataObject, const FUIDataObject& ToTestIfSmaller) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::CompareBiggerThanString(const FUIDataObject& InDataObject, const FString& ToTestIfSmaller) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::CompareBiggerThanInt(const FUIDataObject& InDataObject, int32 ToTestIfSmaller) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::CompareBiggerThanFloat(const FUIDataObject& InDataObject, float ToTestIfSmaller) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::CompareBiggerThan(const FUIDataObject& InDataObject, const FUIDataObject& ToTestIfSmaller) {
    return false;
}

void UUMGUtilUIDataObjectLibrary::ClampInt(const FUIDataObject& InDataObject, FUIDataObject& NewDataObject, int32 Max, int32 Min, bool& bMaxOutOfBounds, bool& bMinOutOfBounds) {
}

void UUMGUtilUIDataObjectLibrary::ClampFloat(const FUIDataObject& InDataObject, FUIDataObject& NewDataObject, float Max, float Min, bool& bMaxOutOfBounds, bool& bMinOutOfBounds) {
}

void UUMGUtilUIDataObjectLibrary::CalcPlusToSelf(FUIDataObject& OutDataObject, const FUIDataObject& InDataObject, const FUIDataObject& ToAdd) {
}

void UUMGUtilUIDataObjectLibrary::CalcPlusStringToSelf(FUIDataObject& OutDataObject, const FUIDataObject& InDataObject, const FString& ToAdd) {
}

void UUMGUtilUIDataObjectLibrary::CalcPlusString(FUIDataObject& NewDataObject, const FUIDataObject& InDataObject, const FString& ToAdd) {
}

void UUMGUtilUIDataObjectLibrary::CalcPlusIntToSelf(FUIDataObject& OutDataObject, const FUIDataObject& InDataObject, int32 ToAdd) {
}

void UUMGUtilUIDataObjectLibrary::CalcPlusInt(FUIDataObject& NewDataObject, const FUIDataObject& InDataObject, int32 ToAdd) {
}

void UUMGUtilUIDataObjectLibrary::CalcPlusFloatToSelf(FUIDataObject& OutDataObject, const FUIDataObject& InDataObject, float ToAdd) {
}

void UUMGUtilUIDataObjectLibrary::CalcPlusFloat(FUIDataObject& NewDataObject, const FUIDataObject& InDataObject, float ToAdd) {
}

void UUMGUtilUIDataObjectLibrary::CalcPlus(FUIDataObject& NewDataObject, const FUIDataObject& InDataObject, const FUIDataObject& ToAdd) {
}

void UUMGUtilUIDataObjectLibrary::CalcMinusToSelf(FUIDataObject& OutDataObject, const FUIDataObject& InDataObject, const FUIDataObject& ToSubtract) {
}

void UUMGUtilUIDataObjectLibrary::CalcMinusIntToSelf(FUIDataObject& OutDataObject, const FUIDataObject& InDataObject, int32 ToSubtract) {
}

void UUMGUtilUIDataObjectLibrary::CalcMinusInt(FUIDataObject& NewDataObject, const FUIDataObject& InDataObject, int32 ToSubtract) {
}

void UUMGUtilUIDataObjectLibrary::CalcMinusFloatToSelf(FUIDataObject& OutDataObject, const FUIDataObject& InDataObject, float ToSubtract) {
}

void UUMGUtilUIDataObjectLibrary::CalcMinusFloat(FUIDataObject& NewDataObject, const FUIDataObject& InDataObject, float ToSubtract) {
}

void UUMGUtilUIDataObjectLibrary::CalcMinus(FUIDataObject& NewDataObject, const FUIDataObject& InDataObject, const FUIDataObject& ToSubtract) {
}

void UUMGUtilUIDataObjectLibrary::CalcIncrement(FUIDataObject& OutDataObject, const FUIDataObject& InDataObject) {
}

void UUMGUtilUIDataObjectLibrary::CalcDecrement(FUIDataObject& OutDataObject, const FUIDataObject& InDataObject) {
}

bool UUMGUtilUIDataObjectLibrary::AsStringArray(const FUIDataObject& InArrayDataObject, TArray<FString>& OutStrings) {
    return false;
}

void UUMGUtilUIDataObjectLibrary::AssignDataObject(const FUIDataObject& InDataObject, const FUIDataObject& Rhs, FUIDataObject& OutDataObject) {
}

bool UUMGUtilUIDataObjectLibrary::AsIntArray(const FUIDataObject& InArrayDataObject, TArray<int32>& OutValues) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::AsFloatArray(const FUIDataObject& InArrayDataObject, TArray<float>& OutValues) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::AsBooleanArray(const FUIDataObject& InArrayDataObject, TArray<bool>& OutValues) {
    return false;
}

bool UUMGUtilUIDataObjectLibrary::AsArray(const FUIDataObject& ArrayDataObject, TArray<FUIDataObject>& OutDataObjects) {
    return false;
}

UUMGUtilUIDataObjectLibrary::UUMGUtilUIDataObjectLibrary() {
}

