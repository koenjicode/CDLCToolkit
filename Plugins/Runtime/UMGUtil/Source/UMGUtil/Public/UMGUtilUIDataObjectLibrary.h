#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EUIDataObjectType.h"
#include "UIDataObject.h"
#include "UIDataObjectFieldElement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "UObject/NoExportTypes.h"
#include "UMGUtilUIDataObjectLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UUMGUtilUIDataObjectLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUMGUtilUIDataObjectLibrary();
    UFUNCTION(BlueprintCallable)
    static bool Unshift(const FUIDataObject& InArrayDataObject, FUIDataObject& OutArrayDataObject, const FUIDataObject& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SwapValueAt(const FUIDataObject& InArrayDataObject, int32 index, const FUIDataObject& Value, FUIDataObject& OutArrayDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Stringify(const FUIDataObject& DataObject);
    
    UFUNCTION(BlueprintCallable)
    static bool Shift(const FUIDataObject& InArrayDataObject, FUIDataObject& OutArrayDataObject, FUIDataObject& ShiftedValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetStringValue(const FUIDataObject& InDataObject, const FString& Value, FUIDataObject& OutDataObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetIntValue(const FUIDataObject& InDataObject, int32 Value, FUIDataObject& OutDataObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatValue(const FUIDataObject& InDataObject, float Value, FUIDataObject& OutDataObject);
    
    UFUNCTION(BlueprintCallable)
    static bool SetField(const FUIDataObject& InDataObject, const FString& FieldName, const FUIDataObject& Value, FUIDataObject& OutDataObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetBooleanValue(const FUIDataObject& InDataObject, bool Value, FUIDataObject& OutDataObject);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveValueAt(const FUIDataObject& InArrayDataObject, int32 index, FUIDataObject& OutArrayDataObject);
    
    UFUNCTION(BlueprintCallable)
    static bool Push(const FUIDataObject& InArrayDataObject, FUIDataObject& OutArrayDataObject, const FUIDataObject& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool Pop(const FUIDataObject& InArrayDataObject, FUIDataObject& OutArrayDataObject, FUIDataObject& PoppedValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject Parse(const FString& JsonStringToParse);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqualToString(const FUIDataObject& Lhs, const FString& Rhs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqualToInt(const FUIDataObject& Lhs, int32 Rhs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqualToFloat(const FUIDataObject& Lhs, float Rhs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqualToBoolean(const FUIDataObject& Lhs, bool Rhs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual(const FUIDataObject& Lhs, const FUIDataObject& Rhs);
    
    UFUNCTION(BlueprintCallable)
    static bool Marge(const FUIDataObject& InDataObject, const FUIDataObject& SourceValue, FUIDataObject& OutDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 LengthOfDataObjectArray(const FUIDataObject& InArrayDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 LastIndex(const FUIDataObject& InArrayDataObject);
    
    UFUNCTION(BlueprintCallable)
    static bool InsertValueAt(const FUIDataObject& InArrayDataObject, int32 index, const FUIDataObject& Value, FUIDataObject& OutArrayDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasField(const FUIDataObject& DataObject, const FString& FieldName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetValueAt(const FUIDataObject& InArrayDataObject, int32 index, FUIDataObject& OutDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetUObject(const FUIDataObject& DataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EUIDataObjectType GetType(const FUIDataObject& DataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetStringValue(const FUIDataObject& DataObject, FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetStringFromPath(const FUIDataObject& DataObject, const FString& FieldPath, FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetStringAssetReferenceFromPath(const FUIDataObject& DataObject, const FString& FieldPath, FStringAssetReference& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetObjectFromPath(const FUIDataObject& DataObject, const FString& FieldPath, FUIDataObject& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIntValue(const FUIDataObject& DataObject, int32& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIntFromPath(const FUIDataObject& DataObject, const FString& FieldPath, int32& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFloatValue(const FUIDataObject& DataObject, float& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFloatFromPath(const FUIDataObject& DataObject, const FString& FieldPath, float& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetField(const FUIDataObject& DataObject, const FString& FieldName, FUIDataObject& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBooleanValue(const FUIDataObject& DataObject, bool& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBooleanFromPath(const FUIDataObject& DataObject, const FString& FieldPath, bool& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAssetPtrFromPath(const FUIDataObject& DataObject, const FString& FieldPath, UObject*& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Fields(const FUIDataObject& DataObject, TArray<FString>& FieldNameArray);
    
    UFUNCTION(BlueprintCallable)
    static bool Extend(const FUIDataObject& InDataObject, const FUIDataObject& SourceValue, FUIDataObject& OutDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualToString(const FUIDataObject& Lhs, const FString& Rhs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualToInt(const FUIDataObject& Lhs, int32 Rhs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualToFloat(const FUIDataObject& Lhs, float Rhs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualToBoolean(const FUIDataObject& Lhs, bool Rhs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal(const FUIDataObject& Lhs, const FUIDataObject& Rhs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CreateStringValue(FUIDataObject& DataObject, const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CreateObject(FUIDataObject& DataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CreateNull(FUIDataObject& DataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CreateIntValue(FUIDataObject& DataObject, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CreateFloatValue(FUIDataObject& DataObject, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CreateFieldElements(FUIDataObject& DataObject, const TArray<FUIDataObjectFieldElement>& DataObjectFieldElements);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CreateBooleanValue(FUIDataObject& DataObject, bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CreateArrayFromTArray(const TArray<FUIDataObject>& DataObjects, FUIDataObject& ArrayDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CreateArrayFromStringArray(const TArray<FString>& DataStrings, FUIDataObject& ArrayDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CreateArrayFromIntArray(const TArray<int32>& DataValues, FUIDataObject& ArrayDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CreateArray(FUIDataObject& ArrayDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* Conv_UIDataObjectToTAssetPtr(const FUIDataObject& InDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_UIDataObjectToString(const FUIDataObject& InDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Conv_UIDataObjectToInt(const FUIDataObject& InDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText Conv_UIDataObjectToFText(const FUIDataObject& InDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FStringAssetReference Conv_UIDataObjectToFStringAssetReference(const FUIDataObject& InDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Conv_UIDataObjectToFloat(const FUIDataObject& InDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime Conv_UIDataObjectToDateTime(const FUIDataObject& InDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Conv_UIDataObjectToBoolean(const FUIDataObject& InDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject Conv_TAssetPtrToUIDataObject(const UObject*& InAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject Conv_StringToUIDataObject(const FString& inString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject Conv_IntToUIDataObject(int32 InNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject Conv_FStringAssetReferenceToUIDataObject(const FStringAssetReference& InAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject Conv_FloatToUIDataObject(float InNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject Conv_DateTimeToUIDataObject(FDateTime InDateTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIDataObject Conv_BooleanToUIDataObject(bool InBoolean);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareSmallerThanString(const FUIDataObject& InDataObject, const FString& ToTestIfBigger);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareSmallerThanInt(const FUIDataObject& InDataObject, int32 ToTestIfBigger);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareSmallerThanFloat(const FUIDataObject& InDataObject, float ToTestIfBigger);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareSmallerThan(const FUIDataObject& InDataObject, const FUIDataObject& ToTestIfBigger);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareEqualOrSmallerThanString(const FUIDataObject& InDataObject, const FString& ToTestIfBigger);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareEqualOrSmallerThanInt(const FUIDataObject& InDataObject, int32 ToTestIfBigger);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareEqualOrSmallerThanFloat(const FUIDataObject& InDataObject, float ToTestIfBigger);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareEqualOrSmallerThan(const FUIDataObject& InDataObject, const FUIDataObject& ToTestIfBigger);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareEqualOrBiggerThanString(const FUIDataObject& InDataObject, const FString& ToTestIfSmaller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareEqualOrBiggerThanInt(const FUIDataObject& InDataObject, int32 ToTestIfSmaller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareEqualOrBiggerThanFloat(const FUIDataObject& InDataObject, float ToTestIfSmaller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareEqualOrBiggerThan(const FUIDataObject& InDataObject, const FUIDataObject& ToTestIfSmaller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareBiggerThanString(const FUIDataObject& InDataObject, const FString& ToTestIfSmaller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareBiggerThanInt(const FUIDataObject& InDataObject, int32 ToTestIfSmaller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareBiggerThanFloat(const FUIDataObject& InDataObject, float ToTestIfSmaller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareBiggerThan(const FUIDataObject& InDataObject, const FUIDataObject& ToTestIfSmaller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ClampInt(const FUIDataObject& InDataObject, FUIDataObject& NewDataObject, int32 Max, int32 Min, bool& bMaxOutOfBounds, bool& bMinOutOfBounds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ClampFloat(const FUIDataObject& InDataObject, FUIDataObject& NewDataObject, float Max, float Min, bool& bMaxOutOfBounds, bool& bMinOutOfBounds);
    
    UFUNCTION(BlueprintCallable)
    static void CalcPlusToSelf(FUIDataObject& OutDataObject, const FUIDataObject& InDataObject, const FUIDataObject& ToAdd);
    
    UFUNCTION(BlueprintCallable)
    static void CalcPlusStringToSelf(FUIDataObject& OutDataObject, const FUIDataObject& InDataObject, const FString& ToAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CalcPlusString(FUIDataObject& NewDataObject, const FUIDataObject& InDataObject, const FString& ToAdd);
    
    UFUNCTION(BlueprintCallable)
    static void CalcPlusIntToSelf(FUIDataObject& OutDataObject, const FUIDataObject& InDataObject, int32 ToAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CalcPlusInt(FUIDataObject& NewDataObject, const FUIDataObject& InDataObject, int32 ToAdd);
    
    UFUNCTION(BlueprintCallable)
    static void CalcPlusFloatToSelf(FUIDataObject& OutDataObject, const FUIDataObject& InDataObject, float ToAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CalcPlusFloat(FUIDataObject& NewDataObject, const FUIDataObject& InDataObject, float ToAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CalcPlus(FUIDataObject& NewDataObject, const FUIDataObject& InDataObject, const FUIDataObject& ToAdd);
    
    UFUNCTION(BlueprintCallable)
    static void CalcMinusToSelf(FUIDataObject& OutDataObject, const FUIDataObject& InDataObject, const FUIDataObject& ToSubtract);
    
    UFUNCTION(BlueprintCallable)
    static void CalcMinusIntToSelf(FUIDataObject& OutDataObject, const FUIDataObject& InDataObject, int32 ToSubtract);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CalcMinusInt(FUIDataObject& NewDataObject, const FUIDataObject& InDataObject, int32 ToSubtract);
    
    UFUNCTION(BlueprintCallable)
    static void CalcMinusFloatToSelf(FUIDataObject& OutDataObject, const FUIDataObject& InDataObject, float ToSubtract);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CalcMinusFloat(FUIDataObject& NewDataObject, const FUIDataObject& InDataObject, float ToSubtract);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CalcMinus(FUIDataObject& NewDataObject, const FUIDataObject& InDataObject, const FUIDataObject& ToSubtract);
    
    UFUNCTION(BlueprintCallable)
    static void CalcIncrement(FUIDataObject& OutDataObject, const FUIDataObject& InDataObject);
    
    UFUNCTION(BlueprintCallable)
    static void CalcDecrement(FUIDataObject& OutDataObject, const FUIDataObject& InDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AsStringArray(const FUIDataObject& InArrayDataObject, TArray<FString>& OutStrings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void AssignDataObject(const FUIDataObject& InDataObject, const FUIDataObject& Rhs, FUIDataObject& OutDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AsIntArray(const FUIDataObject& InArrayDataObject, TArray<int32>& OutValues);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AsFloatArray(const FUIDataObject& InArrayDataObject, TArray<float>& OutValues);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AsBooleanArray(const FUIDataObject& InArrayDataObject, TArray<bool>& OutValues);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AsArray(const FUIDataObject& ArrayDataObject, TArray<FUIDataObject>& OutDataObjects);
    
};

