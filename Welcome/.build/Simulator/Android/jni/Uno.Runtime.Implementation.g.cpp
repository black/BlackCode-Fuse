// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <OpenGL.GLFramebufferHandle.h>
#include <time.h>
#include <Uno.ArgumentException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Comparison-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.MouseButton.h>
#include <Uno.Platform.PointerCursor.h>
#include <Uno.Platform.SystemUI.h>
#include <Uno.Platform.SystemUIResizeReason.h>
#include <Uno.Platform.SystemUIWillResizeEventArgs.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.ArrayCopyImpl.h>
#include <Uno.Runtime.Implementation.ArraySortImpl.h>
#include <Uno.Runtime.Implementation.BufferImpl.h>
#include <Uno.Runtime.Implementation.ClockImpl.h>
#include <Uno.Runtime.Implementation.DebugImpl.h>
#include <Uno.Runtime.Implementation.GenericEqualsImpl.h>
#include <Uno.Runtime.Implementation.GraphicsContextHandle.h>
#include <Uno.Runtime.Implementation.GraphicsContextImpl.h>
#include <Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <Uno.Runtime.Implementation.TextEncodingImpl.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
#include <Uno.UShort.h>
#include <Uno/Base64.h>
#include <Uno/Support.h>
#include <Uno/XliInterop.h>
#include <Xli/Console.h>
#include <Xli/DateTime.h>
#include <Xli/Time.h>
#include <XliPlatform/Display.h>
extern ::Xli::Window* uXliWindowPtr;
static uString* STRINGS[14];
static uType* TYPES[19];

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Runtime\Implementation\$.uno(9)
// -------------------------------------------------------------------------------------

// internal static class ArrayCopyImpl :9
// {
uClassType* ArrayCopyImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.ArrayCopyImpl", options);
    ::STRINGS[0] = uString::Const("sourceArray");
    ::STRINGS[1] = uString::Const("destinationArray");
    ::STRINGS[2] = uString::Const("Non-negative number required.");
    ::STRINGS[3] = uString::Const("sourceIndex");
    ::STRINGS[4] = uString::Const("destinationIndex");
    ::STRINGS[5] = uString::Const("length");
    ::STRINGS[6] = uString::Const("Destination array was not long enough. Check destinationIndex and length, and the array's lower bounds.");
    ::STRINGS[7] = uString::Const(", ");
    ::STRINGS[8] = uString::Const("Source array was not long enough. Check sourceIndex and length, and the array's lower bounds.");
    ::TYPES[0] = uObject_typeof()->Array();
    ::TYPES[1] = uObject_typeof();
    return type;
}

// public static void Copy<T>(T[] sourceArray, int sourceIndex, T[] destinationArray, int destinationIndex, int length) :40
void ArrayCopyImpl__Copy_fn(uType* __type, uArray* sourceArray, int* sourceIndex, uArray* destinationArray, int* destinationIndex, int* length)
{
    ArrayCopyImpl::Copy(__type, sourceArray, *sourceIndex, destinationArray, *destinationIndex, *length);
}

// public static void ValidateArguments<T>(T[] sourceArray, int sourceIndex, T[] destinationArray, int destinationIndex, int length) :11
void ArrayCopyImpl__ValidateArguments_fn(uType* __type, uArray* sourceArray, int* sourceIndex, uArray* destinationArray, int* destinationIndex, int* length)
{
    ArrayCopyImpl::ValidateArguments(__type, sourceArray, *sourceIndex, destinationArray, *destinationIndex, *length);
}

// public static void Copy<T>(T[] sourceArray, int sourceIndex, T[] destinationArray, int destinationIndex, int length) [static] :40
void ArrayCopyImpl::Copy(uType* __type, uArray* sourceArray, int sourceIndex, uArray* destinationArray, int destinationIndex, int length)
{
    uType* __types[] = {
        ArrayCopyImpl_typeof()->MakeMethod(1, __type->U(0)),
        __type->U(0),
    };
    ArrayCopyImpl::ValidateArguments(__types[0], sourceArray, sourceIndex, destinationArray, destinationIndex, length);

    for (int i = 0; i < length; i++)
        uPtr(destinationArray)->TItem(destinationIndex + i) = uPtr(sourceArray)->TItem(sourceIndex + i);
}

// public static void ValidateArguments<T>(T[] sourceArray, int sourceIndex, T[] destinationArray, int destinationIndex, int length) [static] :11
void ArrayCopyImpl::ValidateArguments(uType* __type, uArray* sourceArray, int sourceIndex, uArray* destinationArray, int destinationIndex, int length)
{
    uType* __types[] = {
        __type->U(0)->Array(),
    };

    if (sourceArray == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"sourceArray"*/]));

    if (destinationArray == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[1/*"destination...*/]));

    if (sourceIndex < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[2/*"Non-negativ...*/], ::STRINGS[3/*"sourceIndex"*/]));

    if (destinationIndex < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[2/*"Non-negativ...*/], ::STRINGS[4/*"destination...*/]));

    if (length < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[2/*"Non-negativ...*/], ::STRINGS[5/*"length"*/]));

    if (uPtr(sourceArray)->Length() < (sourceIndex + length))
        U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[6/*"Destination...*/], uBox<int>(::TYPES[4/*int*/], uPtr(sourceArray)->Length())), ::STRINGS[7/*", "*/]), uBox<int>(::TYPES[4/*int*/], destinationIndex)), ::STRINGS[7/*", "*/]), uBox<int>(::TYPES[4/*int*/], length))));

    if (uPtr(destinationArray)->Length() < (destinationIndex + length))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[8/*"Source arra...*/]));
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Runtime\Implementation\$.uno(61)
// --------------------------------------------------------------------------------------

// internal static class ArraySortImpl :61
// {
uClassType* ArraySortImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.ArraySortImpl", options);
    ::STRINGS[9] = uString::Const("elements");
    ::STRINGS[2] = uString::Const("Non-negative number required.");
    ::STRINGS[10] = uString::Const("index");
    ::STRINGS[5] = uString::Const("length");
    ::STRINGS[11] = uString::Const("Index and length do not specify a valid range in elements.");
    ::STRINGS[12] = uString::Const("Comparer is null.");
    ::TYPES[2] = ::g::Uno::Comparison_typeof();
    ::TYPES[3] = ::g::Uno::Float_typeof();
    ::TYPES[4] = ::g::Uno::Int_typeof();
    ::TYPES[0] = uObject_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Delegate_typeof();
    return type;
}

// private static void QuickSortInternal<T>(T[] data, Uno.Comparison<T> comparison, int left, int right) :128
void ArraySortImpl__QuickSortInternal_fn(uType* __type, uArray* data, uDelegate* comparison, int* left, int* right)
{
    ArraySortImpl::QuickSortInternal(__type, data, comparison, *left, *right);
}

// private static void ShellSortInternal<T>(T[] data, Uno.Comparison<T> comparison, int left, int right) :98
void ArraySortImpl__ShellSortInternal_fn(uType* __type, uArray* data, uDelegate* comparison, int* left, int* right)
{
    ArraySortImpl::ShellSortInternal(__type, data, comparison, *left, *right);
}

// public static void Sort<T>(T[] elements, int index, int length, Uno.Comparison<T> comparison) :82
void ArraySortImpl__Sort_fn(uType* __type, uArray* elements, int* index, int* length, uDelegate* comparison)
{
    ArraySortImpl::Sort(__type, elements, *index, *length, comparison);
}

// private static void SwapInternal<T>(T[] data, int a, int b) :91
void ArraySortImpl__SwapInternal_fn(uType* __type, uArray* data, int* a, int* b)
{
    ArraySortImpl::SwapInternal(__type, data, *a, *b);
}

// private static void ValidateArguments<T>(T[] elements, int index, int length, Uno.Comparison<T> comparison) :63
void ArraySortImpl__ValidateArguments_fn(uType* __type, uArray* elements, int* index, int* length, uDelegate* comparison)
{
    ArraySortImpl::ValidateArguments(__type, elements, *index, *length, comparison);
}

// private static void QuickSortInternal<T>(T[] data, Uno.Comparison<T> comparison, int left, int right) [static] :128
void ArraySortImpl::QuickSortInternal(uType* __type, uArray* data, uDelegate* comparison, int left, int right)
{
    uType* __types[] = {
        __type->U(0),
        ArraySortImpl_typeof()->MakeMethod(1, __type->U(0)),
        ::TYPES[2/*Uno.Comparison`1*/]->MakeType(__type->U(0)),
        ArraySortImpl_typeof()->MakeMethod(1, __type->U(0)),
    };
    uT pivotValue(__types[0], U_ALLOCA(__types[0]->ValueSize));
    int ret1;

    if (left < right)
    {
        int rightIndex = right - 1;
        int pivotIndex = left;
        pivotValue = uPtr(data)->TItem(pivotIndex);
        ArraySortImpl::SwapInternal(__types[1], data, pivotIndex, rightIndex);

        for (int i = left; i < rightIndex; i++)
            if ((uPtr(comparison)->Invoke(&ret1, 2, (void*)uPtr(data)->TItem(i), (void*)pivotValue), ret1) < 0)
            {
                ArraySortImpl::SwapInternal(__types[1], data, i, pivotIndex);
                pivotIndex++;
            }

        ArraySortImpl::SwapInternal(__types[1], data, pivotIndex, rightIndex);
        ArraySortImpl::QuickSortInternal(__types[3], data, comparison, left, pivotIndex);
        ArraySortImpl::QuickSortInternal(__types[3], data, comparison, pivotIndex + 1, right);
    }
}

// private static void ShellSortInternal<T>(T[] data, Uno.Comparison<T> comparison, int left, int right) [static] :98
void ArraySortImpl::ShellSortInternal(uType* __type, uArray* data, uDelegate* comparison, int left, int right)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[2/*Uno.Comparison`1*/]->MakeType(__type->U(0)),
        ArraySortImpl_typeof()->MakeMethod(1, __type->U(0)),
    };
    uT temp(__types[0], U_ALLOCA(__types[0]->ValueSize));
    int ret2;
    float s = 2.8f;
    int size = right - left;
    int increment = size / 2;

    while (increment > 0)
    {
        for (int i = left + increment; i < size; i++)
        {
            int j = i;
            temp = uPtr(data)->TItem(i);

            while ((j >= increment) && ((uPtr(comparison)->Invoke(&ret2, 2, (void*)temp, (void*)data->TItem(j - increment)), ret2) < 0))
            {
                ArraySortImpl::SwapInternal(__types[2], data, j, j - increment);
                j = j - increment;
            }

            data->TItem(j) = temp;
        }

        if (((float)increment < 2.8f) && (increment > 1))
            increment = 1;
        else
            increment = (int)((float)increment / 2.8f);
    }
}

// public static void Sort<T>(T[] elements, int index, int length, Uno.Comparison<T> comparison) [static] :82
void ArraySortImpl::Sort(uType* __type, uArray* elements, int index, int length, uDelegate* comparison)
{
    uType* __types[] = {
        ArraySortImpl_typeof()->MakeMethod(1, __type->U(0)),
        __type->U(0),
        ArraySortImpl_typeof()->MakeMethod(1, __type->U(0)),
        ArraySortImpl_typeof()->MakeMethod(1, __type->U(0)),
    };
    ArraySortImpl::ValidateArguments(__types[0], elements, index, length, comparison);

    if (length > 280)
        ArraySortImpl::QuickSortInternal(__types[2], elements, comparison, index, index + length);
    else
        ArraySortImpl::ShellSortInternal(__types[3], elements, comparison, index, index + length);
}

// private static void SwapInternal<T>(T[] data, int a, int b) [static] :91
void ArraySortImpl::SwapInternal(uType* __type, uArray* data, int a, int b)
{
    uType* __types[] = {
        __type->U(0),
    };
    uT temp(__types[0], U_ALLOCA(__types[0]->ValueSize));
    temp = uPtr(data)->TItem(a);
    data->TItem(a) = data->TItem(b);
    data->TItem(b) = temp;
}

// private static void ValidateArguments<T>(T[] elements, int index, int length, Uno.Comparison<T> comparison) [static] :63
void ArraySortImpl::ValidateArguments(uType* __type, uArray* elements, int index, int length, uDelegate* comparison)
{
    uType* __types[] = {
        __type->U(0)->Array(),
    };

    if (elements == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[9/*"elements"*/]));

    if (index < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[2/*"Non-negativ...*/], ::STRINGS[10/*"index"*/]));

    if (length < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[2/*"Non-negativ...*/], ::STRINGS[5/*"length"*/]));

    if (uPtr(elements)->Length() < (index + length))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[11/*"Index and l...*/]));

    if (::g::Uno::Delegate::op_Equality(comparison, NULL))
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[12/*"Comparer is...*/]));
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Runtime\Implementation\$.uno(163)
// ---------------------------------------------------------------------------------------

// internal static class BufferImpl :163
// {
uClassType* BufferImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.BufferImpl", options);
    return type;
}

// public static extern double GetDouble(byte[] buffer, int offset, bool littleEndian) :201
void BufferImpl__GetDouble_fn(uArray* buffer_, int* offset_, bool* littleEndian_, double* __retval)
{
    *__retval = BufferImpl::GetDouble(buffer_, *offset_, *littleEndian_);
}

// public static extern float GetFloat(byte[] buffer, int offset, bool littleEndian) :196
void BufferImpl__GetFloat_fn(uArray* buffer_, int* offset_, bool* littleEndian_, float* __retval)
{
    *__retval = BufferImpl::GetFloat(buffer_, *offset_, *littleEndian_);
}

// public static extern int GetInt(byte[] buffer, int offset, bool littleEndian) :176
void BufferImpl__GetInt_fn(uArray* buffer_, int* offset_, bool* littleEndian_, int* __retval)
{
    *__retval = BufferImpl::GetInt(buffer_, *offset_, *littleEndian_);
}

// public static extern short GetShort(byte[] buffer, int offset, bool littleEndian) :166
void BufferImpl__GetShort_fn(uArray* buffer_, int* offset_, bool* littleEndian_, int16_t* __retval)
{
    *__retval = BufferImpl::GetShort(buffer_, *offset_, *littleEndian_);
}

// public static extern uint GetUInt(byte[] buffer, int offset, bool littleEndian) :181
void BufferImpl__GetUInt_fn(uArray* buffer_, int* offset_, bool* littleEndian_, uint32_t* __retval)
{
    *__retval = BufferImpl::GetUInt(buffer_, *offset_, *littleEndian_);
}

// public static extern ushort GetUShort(byte[] buffer, int offset, bool littleEndian) :171
void BufferImpl__GetUShort_fn(uArray* buffer_, int* offset_, bool* littleEndian_, uint16_t* __retval)
{
    *__retval = BufferImpl::GetUShort(buffer_, *offset_, *littleEndian_);
}

// public static extern void SetDouble(byte[] buffer, int offset, double value, bool littleEndian) :203
void BufferImpl__SetDouble_fn(uArray* buffer_, int* offset_, double* value_, bool* littleEndian_)
{
    BufferImpl::SetDouble(buffer_, *offset_, *value_, *littleEndian_);
}

// public static extern void SetFloat(byte[] buffer, int offset, float value, bool littleEndian) :198
void BufferImpl__SetFloat_fn(uArray* buffer_, int* offset_, float* value_, bool* littleEndian_)
{
    BufferImpl::SetFloat(buffer_, *offset_, *value_, *littleEndian_);
}

// public static extern void SetInt(byte[] buffer, int offset, int value, bool littleEndian) :178
void BufferImpl__SetInt_fn(uArray* buffer_, int* offset_, int* value_, bool* littleEndian_)
{
    BufferImpl::SetInt(buffer_, *offset_, *value_, *littleEndian_);
}

// public static extern void SetShort(byte[] buffer, int offset, short value, bool littleEndian) :168
void BufferImpl__SetShort_fn(uArray* buffer_, int* offset_, int16_t* value_, bool* littleEndian_)
{
    BufferImpl::SetShort(buffer_, *offset_, *value_, *littleEndian_);
}

// public static extern void SetUInt(byte[] buffer, int offset, uint value, bool littleEndian) :183
void BufferImpl__SetUInt_fn(uArray* buffer_, int* offset_, uint32_t* value_, bool* littleEndian_)
{
    BufferImpl::SetUInt(buffer_, *offset_, *value_, *littleEndian_);
}

// public static extern void SetUShort(byte[] buffer, int offset, ushort value, bool littleEndian) :173
void BufferImpl__SetUShort_fn(uArray* buffer_, int* offset_, uint16_t* value_, bool* littleEndian_)
{
    BufferImpl::SetUShort(buffer_, *offset_, *value_, *littleEndian_);
}

// public static extern double GetDouble(byte[] buffer, int offset, bool littleEndian) [static] :201
double BufferImpl::GetDouble(uArray* buffer_, int offset_, bool littleEndian_)
{
    return uLoadBytes<double>((uint8_t*)buffer_->_ptr + offset_, littleEndian_);
}

// public static extern float GetFloat(byte[] buffer, int offset, bool littleEndian) [static] :196
float BufferImpl::GetFloat(uArray* buffer_, int offset_, bool littleEndian_)
{
    return uLoadBytes<float>((uint8_t*)buffer_->_ptr + offset_, littleEndian_);
}

// public static extern int GetInt(byte[] buffer, int offset, bool littleEndian) [static] :176
int BufferImpl::GetInt(uArray* buffer_, int offset_, bool littleEndian_)
{
    return uLoadBytes<int>((uint8_t*)buffer_->_ptr + offset_, littleEndian_);
}

// public static extern short GetShort(byte[] buffer, int offset, bool littleEndian) [static] :166
int16_t BufferImpl::GetShort(uArray* buffer_, int offset_, bool littleEndian_)
{
    return uLoadBytes<int16_t>((uint8_t*)buffer_->_ptr + offset_, littleEndian_);
}

// public static extern uint GetUInt(byte[] buffer, int offset, bool littleEndian) [static] :181
uint32_t BufferImpl::GetUInt(uArray* buffer_, int offset_, bool littleEndian_)
{
    return uLoadBytes<uint32_t>((uint8_t*)buffer_->_ptr + offset_, littleEndian_);
}

// public static extern ushort GetUShort(byte[] buffer, int offset, bool littleEndian) [static] :171
uint16_t BufferImpl::GetUShort(uArray* buffer_, int offset_, bool littleEndian_)
{
    return uLoadBytes<uint16_t>((uint8_t*)buffer_->_ptr + offset_, littleEndian_);
}

// public static extern void SetDouble(byte[] buffer, int offset, double value, bool littleEndian) [static] :203
void BufferImpl::SetDouble(uArray* buffer_, int offset_, double value_, bool littleEndian_)
{
    uStoreBytes((uint8_t*)buffer_->_ptr + offset_, value_, littleEndian_);
}

// public static extern void SetFloat(byte[] buffer, int offset, float value, bool littleEndian) [static] :198
void BufferImpl::SetFloat(uArray* buffer_, int offset_, float value_, bool littleEndian_)
{
    uStoreBytes((uint8_t*)buffer_->_ptr + offset_, value_, littleEndian_);
}

// public static extern void SetInt(byte[] buffer, int offset, int value, bool littleEndian) [static] :178
void BufferImpl::SetInt(uArray* buffer_, int offset_, int value_, bool littleEndian_)
{
    uStoreBytes((uint8_t*)buffer_->_ptr + offset_, value_, littleEndian_);
}

// public static extern void SetShort(byte[] buffer, int offset, short value, bool littleEndian) [static] :168
void BufferImpl::SetShort(uArray* buffer_, int offset_, int16_t value_, bool littleEndian_)
{
    uStoreBytes((uint8_t*)buffer_->_ptr + offset_, value_, littleEndian_);
}

// public static extern void SetUInt(byte[] buffer, int offset, uint value, bool littleEndian) [static] :183
void BufferImpl::SetUInt(uArray* buffer_, int offset_, uint32_t value_, bool littleEndian_)
{
    uStoreBytes((uint8_t*)buffer_->_ptr + offset_, value_, littleEndian_);
}

// public static extern void SetUShort(byte[] buffer, int offset, ushort value, bool littleEndian) [static] :173
void BufferImpl::SetUShort(uArray* buffer_, int offset_, uint16_t value_, bool littleEndian_)
{
    uStoreBytes((uint8_t*)buffer_->_ptr + offset_, value_, littleEndian_);
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Runtime\Implementation\$.uno(214)
// ---------------------------------------------------------------------------------------

// internal static class ClockImpl :214
// {
uClassType* ClockImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.ClockImpl", options);
    return type;
}

// public static extern double GetSeconds() :220
void ClockImpl__GetSeconds_fn(double* __retval)
{
    *__retval = ClockImpl::GetSeconds();
}

// public static extern long GetTicks() :217
void ClockImpl__GetTicks_fn(int64_t* __retval)
{
    *__retval = ClockImpl::GetTicks();
}

// public static extern int GetTimezoneOffset(int year, int month, int day) :223
void ClockImpl__GetTimezoneOffset_fn(int* year_, int* month_, int* day_, int* __retval)
{
    *__retval = ClockImpl::GetTimezoneOffset(*year_, *month_, *day_);
}

// public static extern double GetSeconds() [static] :220
double ClockImpl::GetSeconds()
{
    return Xli::GetSeconds();
}

// public static extern long GetTicks() [static] :217
int64_t ClockImpl::GetTicks()
{
    return Xli::GetTicks();
}

// public static extern int GetTimezoneOffset(int year, int month, int day) [static] :223
int ClockImpl::GetTimezoneOffset(int year_, int month_, int day_)
{
    struct tm stm;
    stm.tm_year = year_ - 1900;
    stm.tm_mon = month_ - 1;
    stm.tm_mday = day_;
    stm.tm_hour = 0;
    stm.tm_min = 0;
    stm.tm_sec = 0;
    stm.tm_wday = 0;
    stm.tm_yday = 0;
    stm.tm_isdst = 0;
    time_t current_time = mktime(&stm);
    
    #ifdef XLI_PLATFORM_WIN32
    gmtime_s(&stm, &current_time);
    time_t utc = mktime(&stm);
    
    localtime_s(&stm, &current_time);
    time_t local = mktime(&stm);
    return (local - utc) / 60 + stm.tm_isdst * 60;
    #else
    struct tm *info;
    info = gmtime(&current_time);
    time_t utc = mktime(info);
    
    info = localtime(&current_time);
    time_t local = mktime(info);
    return (local - utc) / 60 + stm.tm_isdst * 60;
    #endif
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Runtime\Implementation\$.uno(235)
// ---------------------------------------------------------------------------------------

// internal static class DebugImpl :235
// {
uClassType* DebugImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.DebugImpl", options);
    return type;
}

// public static extern void Log(string message, Uno.Diagnostics.DebugMessageType type) :238
void DebugImpl__Log_fn(uString* message_, int* type_)
{
    DebugImpl::Log(message_, *type_);
}

// public static extern void Log(string message, Uno.Diagnostics.DebugMessageType type) [static] :238
void DebugImpl::Log(uString* message_, int type_)
{
    Xli::PrintLine(uStringToXliString(message_));
    Xli::Out->GetStream()->Flush();
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Runtime\Implementation\$.uno(310)
// ---------------------------------------------------------------------------------------

// internal static class GenericEqualsImpl :310
// {
uClassType* GenericEqualsImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.GenericEqualsImpl", options);
    return type;
}

// public static extern bool Equals<T>(T left, T right) :313
void GenericEqualsImpl__Equals_fn(uType* __type, void* left_, void* right_, bool* __retval)
{
    uType* __types[] = {
        __type->U(0),
    };
    uType* type = __type->U(0);
    return *__retval = U_IS_OBJECT(type)
            ? (uObject*)left_ == (uObject*)right_ || (
                    (uObject*)left_ &&
                    (uObject*)right_ &&
                    ((uObject*)left_)->Equals((uObject*)right_)
                )
            : memcmp(left_, right_, type->ValueSize) == 0, void();
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Runtime\Implementation\$.uno(326)
// ---------------------------------------------------------------------------------------

// internal struct GraphicsContextHandle :326
// {
uStructType* GraphicsContextHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uGraphicsContext);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Runtime.Implementation.GraphicsContextHandle", options);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Runtime\Implementation\$.uno(331)
// ---------------------------------------------------------------------------------------

// internal static class GraphicsContextImpl :331
// {
uClassType* GraphicsContextImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.GraphicsContextImpl", options);
    ::TYPES[6] = ::g::Uno::Rect_typeof();
    ::TYPES[7] = ::g::Uno::Platform2::Display_typeof();
    ::TYPES[4] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Uno::Float2_typeof();
    ::TYPES[9] = ::g::Uno::Int2_typeof();
    return type;
}

// public static extern OpenGL.GLFramebufferHandle GetBackbufferGLHandle(Uno.Runtime.Implementation.GraphicsContextHandle handle) :337
void GraphicsContextImpl__GetBackbufferGLHandle_fn(uGraphicsContext* handle_, uint32_t* __retval)
{
    *__retval = GraphicsContextImpl::GetBackbufferGLHandle(*handle_);
}

// public static int2 GetBackbufferOffset(Uno.Runtime.Implementation.GraphicsContextHandle handle) :354
void GraphicsContextImpl__GetBackbufferOffset_fn(uGraphicsContext* handle, ::g::Uno::Int2* __retval)
{
    *__retval = GraphicsContextImpl::GetBackbufferOffset(*handle);
}

// public static Uno.Recti GetBackbufferScissor(Uno.Runtime.Implementation.GraphicsContextHandle handle) :360
void GraphicsContextImpl__GetBackbufferScissor_fn(uGraphicsContext* handle, ::g::Uno::Recti* __retval)
{
    *__retval = GraphicsContextImpl::GetBackbufferScissor(*handle);
}

// public static int2 GetBackbufferSize(Uno.Runtime.Implementation.GraphicsContextHandle handle) :340
void GraphicsContextImpl__GetBackbufferSize_fn(uGraphicsContext* handle, ::g::Uno::Int2* __retval)
{
    *__retval = GraphicsContextImpl::GetBackbufferSize(*handle);
}

// public static extern Uno.Runtime.Implementation.GraphicsContextHandle GetInstance() :334
void GraphicsContextImpl__GetInstance_fn(uGraphicsContext* __retval)
{
    *__retval = GraphicsContextImpl::GetInstance();
}

// public static int GetRealBackbufferHeight(Uno.Runtime.Implementation.GraphicsContextHandle handle) :366
void GraphicsContextImpl__GetRealBackbufferHeight_fn(uGraphicsContext* handle, int* __retval)
{
    *__retval = GraphicsContextImpl::GetRealBackbufferHeight(*handle);
}

// public static extern OpenGL.GLFramebufferHandle GetBackbufferGLHandle(Uno.Runtime.Implementation.GraphicsContextHandle handle) [static] :337
uint32_t GraphicsContextImpl::GetBackbufferGLHandle(uGraphicsContext handle_)
{
    return handle_.GetBackbufferGLHandle();
}

// public static int2 GetBackbufferOffset(Uno.Runtime.Implementation.GraphicsContextHandle handle) [static] :354
::g::Uno::Int2 GraphicsContextImpl::GetBackbufferOffset(uGraphicsContext handle)
{
    return ::g::Uno::Int2__New2(0, 0);
}

// public static Uno.Recti GetBackbufferScissor(Uno.Runtime.Implementation.GraphicsContextHandle handle) [static] :360
::g::Uno::Recti GraphicsContextImpl::GetBackbufferScissor(uGraphicsContext handle)
{
    return ::g::Uno::Recti__New2(GraphicsContextImpl::GetBackbufferOffset(handle), GraphicsContextImpl::GetBackbufferSize(handle));
}

// public static int2 GetBackbufferSize(Uno.Runtime.Implementation.GraphicsContextHandle handle) [static] :340
::g::Uno::Int2 GraphicsContextImpl::GetBackbufferSize(uGraphicsContext handle)
{
    ::g::Uno::Float2 size = uPtr(::g::Uno::Platform2::Display::MainDisplay())->Frame().Size();
    return ::g::Uno::Int2__New2((int)size.X, (int)size.Y);
}

// public static extern Uno.Runtime.Implementation.GraphicsContextHandle GetInstance() [static] :334
uGraphicsContext GraphicsContextImpl::GetInstance()
{
    return uGraphicsContext::GetInstance();
}

// public static int GetRealBackbufferHeight(Uno.Runtime.Implementation.GraphicsContextHandle handle) [static] :366
int GraphicsContextImpl::GetRealBackbufferHeight(uGraphicsContext handle)
{
    return GraphicsContextImpl::GetBackbufferSize(handle).Y;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Runtime\Implementation\$.uno(380)
// ---------------------------------------------------------------------------------------

// public struct PlatformWindowHandle :380
// {
uStructType* PlatformWindowHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::Xli::Window*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Runtime.Implementation.PlatformWindowHandle", options);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Runtime\Implementation\$.uno(385)
// ---------------------------------------------------------------------------------------

// public static class PlatformWindowImpl :385
// {
// static PlatformWindowImpl() :390
static void PlatformWindowImpl__cctor__fn(uType* __type)
{
    ::g::Uno::Platform::SystemUI::add_BottomFrameWillResize(uDelegate::New(::TYPES[11/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/], (void*)PlatformWindowImpl__OnSoftKeyboardWillResize_fn));
}

uClassType* PlatformWindowImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.PlatformWindowImpl", options);
    type->fp_cctor_ = PlatformWindowImpl__cctor__fn;
    ::TYPES[10] = ::g::Uno::Platform::SystemUI_typeof();
    ::TYPES[11] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof());
    ::TYPES[6] = ::g::Uno::Rect_typeof();
    ::TYPES[7] = ::g::Uno::Platform2::Display_typeof();
    ::TYPES[4] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Uno::Float2_typeof();
    ::TYPES[12] = ::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof();
    type->SetFields(0,
        ::g::Uno::Rect_typeof(), (uintptr_t)&::g::Uno::Runtime::Implementation::PlatformWindowImpl::keyboardFrame_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Uno::Runtime::Implementation::PlatformWindowImpl::keyboardVisible_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(14,
        new uFunction("Close", NULL, (void*)PlatformWindowImpl__Close_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof()),
        new uFunction("GetClientSize", NULL, (void*)PlatformWindowImpl__GetClientSize_fn, 0, true, ::g::Uno::Int2_typeof(), 1, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof()),
        new uFunction("GetDensity", NULL, (void*)PlatformWindowImpl__GetDensity_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof()),
        new uFunction("GetFullscreen", NULL, (void*)PlatformWindowImpl__GetFullscreen_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof()),
        new uFunction("GetInstance", NULL, (void*)PlatformWindowImpl__GetInstance_fn, 0, true, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), 0),
        new uFunction("GetKeyState", NULL, (void*)PlatformWindowImpl__GetKeyState_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), ::g::Uno::Platform::Key_typeof()),
        new uFunction("GetMouseButtonState", NULL, (void*)PlatformWindowImpl__GetMouseButtonState_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), ::g::Uno::Platform::MouseButton_typeof()),
        new uFunction("GetPointerCursor", NULL, (void*)PlatformWindowImpl__GetPointerCursor_fn, 0, true, ::g::Uno::Platform::PointerCursor_typeof(), 1, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof()),
        new uFunction("GetTitle", NULL, (void*)PlatformWindowImpl__GetTitle_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof()),
        new uFunction("IsTextInputActive", NULL, (void*)PlatformWindowImpl__IsTextInputActive_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof()),
        new uFunction("SetClientSize", NULL, (void*)PlatformWindowImpl__SetClientSize_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), ::g::Uno::Int2_typeof()),
        new uFunction("SetFullscreen", NULL, (void*)PlatformWindowImpl__SetFullscreen_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("SetPointerCursor", NULL, (void*)PlatformWindowImpl__SetPointerCursor_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), ::g::Uno::Platform::PointerCursor_typeof()),
        new uFunction("SetTitle", NULL, (void*)PlatformWindowImpl__SetTitle_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), ::g::Uno::String_typeof()));
    return type;
}

// public static extern void Close(Uno.Runtime.Implementation.PlatformWindowHandle handle) :400
void PlatformWindowImpl__Close_fn(::Xli::Window** handle)
{
    PlatformWindowImpl::Close(*handle);
}

// public static int2 GetClientSize(Uno.Runtime.Implementation.PlatformWindowHandle handle) :415
void PlatformWindowImpl__GetClientSize_fn(::Xli::Window** handle, ::g::Uno::Int2* __retval)
{
    *__retval = PlatformWindowImpl::GetClientSize(*handle);
}

// public static float GetDensity(Uno.Runtime.Implementation.PlatformWindowHandle handle) :552
void PlatformWindowImpl__GetDensity_fn(::Xli::Window** handle, float* __retval)
{
    *__retval = PlatformWindowImpl::GetDensity(*handle);
}

// public static extern bool GetFullscreen(Uno.Runtime.Implementation.PlatformWindowHandle handle) :432
void PlatformWindowImpl__GetFullscreen_fn(::Xli::Window** handle_, bool* __retval)
{
    *__retval = PlatformWindowImpl::GetFullscreen(*handle_);
}

// public static extern Uno.Runtime.Implementation.PlatformWindowHandle GetInstance() :397
void PlatformWindowImpl__GetInstance_fn(::Xli::Window** __retval)
{
    *__retval = PlatformWindowImpl::GetInstance();
}

// public static extern bool GetKeyState(Uno.Runtime.Implementation.PlatformWindowHandle handle, Uno.Platform.Key key) :453
void PlatformWindowImpl__GetKeyState_fn(::Xli::Window** handle_, int* key_, bool* __retval)
{
    *__retval = PlatformWindowImpl::GetKeyState(*handle_, *key_);
}

// public static extern bool GetMouseButtonState(Uno.Runtime.Implementation.PlatformWindowHandle handle, Uno.Platform.MouseButton button) :450
void PlatformWindowImpl__GetMouseButtonState_fn(::Xli::Window** handle_, int* button_, bool* __retval)
{
    *__retval = PlatformWindowImpl::GetMouseButtonState(*handle_, *button_);
}

// public static extern Uno.Platform.PointerCursor GetPointerCursor(Uno.Runtime.Implementation.PlatformWindowHandle handle) :438
void PlatformWindowImpl__GetPointerCursor_fn(::Xli::Window** handle_, int* __retval)
{
    *__retval = PlatformWindowImpl::GetPointerCursor(*handle_);
}

// public static extern string GetTitle(Uno.Runtime.Implementation.PlatformWindowHandle handle) :409
void PlatformWindowImpl__GetTitle_fn(::Xli::Window** handle_, uString** __retval)
{
    *__retval = PlatformWindowImpl::GetTitle(*handle_);
}

// public static bool IsTextInputActive(Uno.Runtime.Implementation.PlatformWindowHandle handle) :462
void PlatformWindowImpl__IsTextInputActive_fn(::Xli::Window** handle, bool* __retval)
{
    *__retval = PlatformWindowImpl::IsTextInputActive(*handle);
}

// private static extern void OnSoftKeyboardWillResize(object sender, Uno.Platform.SystemUIWillResizeEventArgs args) :464
void PlatformWindowImpl__OnSoftKeyboardWillResize_fn(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    PlatformWindowImpl::OnSoftKeyboardWillResize(sender, args);
}

// public static extern void SetClientSize(Uno.Runtime.Implementation.PlatformWindowHandle handle, int2 clientSize) :429
void PlatformWindowImpl__SetClientSize_fn(::Xli::Window** handle_, ::g::Uno::Int2* clientSize_)
{
    PlatformWindowImpl::SetClientSize(*handle_, *clientSize_);
}

// public static extern void SetFullscreen(Uno.Runtime.Implementation.PlatformWindowHandle handle, bool fullscreen) :435
void PlatformWindowImpl__SetFullscreen_fn(::Xli::Window** handle_, bool* fullscreen_)
{
    PlatformWindowImpl::SetFullscreen(*handle_, *fullscreen_);
}

// public static extern void SetPointerCursor(Uno.Runtime.Implementation.PlatformWindowHandle handle, Uno.Platform.PointerCursor cursor) :441
void PlatformWindowImpl__SetPointerCursor_fn(::Xli::Window** handle_, int* cursor_)
{
    PlatformWindowImpl::SetPointerCursor(*handle_, *cursor_);
}

// public static extern void SetTitle(Uno.Runtime.Implementation.PlatformWindowHandle handle, string title) :412
void PlatformWindowImpl__SetTitle_fn(::Xli::Window** handle_, uString* title_)
{
    PlatformWindowImpl::SetTitle(*handle_, title_);
}

::g::Uno::Rect PlatformWindowImpl::keyboardFrame_;
bool PlatformWindowImpl::keyboardVisible_;

// public static extern void Close(Uno.Runtime.Implementation.PlatformWindowHandle handle) [static] :400
void PlatformWindowImpl::Close(::Xli::Window* handle)
{
    PlatformWindowImpl_typeof()->Init();
    ::g::Uno::Platform2::Application::Quit();
}

// public static int2 GetClientSize(Uno.Runtime.Implementation.PlatformWindowHandle handle) [static] :415
::g::Uno::Int2 PlatformWindowImpl::GetClientSize(::Xli::Window* handle)
{
    PlatformWindowImpl_typeof()->Init();
    ::g::Uno::Float2 size = uPtr(::g::Uno::Platform2::Display::MainDisplay())->Frame().Size();
    return ::g::Uno::Int2__New2((int)size.X, (int)size.Y);
}

// public static float GetDensity(Uno.Runtime.Implementation.PlatformWindowHandle handle) [static] :552
float PlatformWindowImpl::GetDensity(::Xli::Window* handle)
{
    PlatformWindowImpl_typeof()->Init();
    return uPtr(::g::Uno::Platform2::Display::MainDisplay())->Density();
}

// public static extern bool GetFullscreen(Uno.Runtime.Implementation.PlatformWindowHandle handle) [static] :432
bool PlatformWindowImpl::GetFullscreen(::Xli::Window* handle_)
{
    PlatformWindowImpl_typeof()->Init();
    return handle_->IsFullscreen();
}

// public static extern Uno.Runtime.Implementation.PlatformWindowHandle GetInstance() [static] :397
::Xli::Window* PlatformWindowImpl::GetInstance()
{
    PlatformWindowImpl_typeof()->Init();
    return uXliWindowPtr;
}

// public static extern bool GetKeyState(Uno.Runtime.Implementation.PlatformWindowHandle handle, Uno.Platform.Key key) [static] :453
bool PlatformWindowImpl::GetKeyState(::Xli::Window* handle_, int key_)
{
    PlatformWindowImpl_typeof()->Init();
    return handle_->GetKeyState((Xli::Key)key_);
}

// public static extern bool GetMouseButtonState(Uno.Runtime.Implementation.PlatformWindowHandle handle, Uno.Platform.MouseButton button) [static] :450
bool PlatformWindowImpl::GetMouseButtonState(::Xli::Window* handle_, int button_)
{
    PlatformWindowImpl_typeof()->Init();
    return handle_->GetMouseButtonState((Xli::MouseButton)button_);
}

// public static extern Uno.Platform.PointerCursor GetPointerCursor(Uno.Runtime.Implementation.PlatformWindowHandle handle) [static] :438
int PlatformWindowImpl::GetPointerCursor(::Xli::Window* handle_)
{
    PlatformWindowImpl_typeof()->Init();
    return handle_->GetSystemCursor();
}

// public static extern string GetTitle(Uno.Runtime.Implementation.PlatformWindowHandle handle) [static] :409
uString* PlatformWindowImpl::GetTitle(::Xli::Window* handle_)
{
    PlatformWindowImpl_typeof()->Init();
    return uStringFromXliString(handle_->GetTitle());
}

// public static bool IsTextInputActive(Uno.Runtime.Implementation.PlatformWindowHandle handle) [static] :462
bool PlatformWindowImpl::IsTextInputActive(::Xli::Window* handle)
{
    PlatformWindowImpl_typeof()->Init();
    return false;
}

// private static extern void OnSoftKeyboardWillResize(object sender, Uno.Platform.SystemUIWillResizeEventArgs args) [static] :464
void PlatformWindowImpl::OnSoftKeyboardWillResize(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    PlatformWindowImpl_typeof()->Init();
    PlatformWindowImpl::keyboardVisible() = (uPtr(args)->ResizeReason() != 2);
    PlatformWindowImpl::keyboardFrame() = args->EndFrame();
}

// public static extern void SetClientSize(Uno.Runtime.Implementation.PlatformWindowHandle handle, int2 clientSize) [static] :429
void PlatformWindowImpl::SetClientSize(::Xli::Window* handle_, ::g::Uno::Int2 clientSize_)
{
    PlatformWindowImpl_typeof()->Init();
    handle_->SetClientSize(uInt2ToXliVector2i(clientSize_));
}

// public static extern void SetFullscreen(Uno.Runtime.Implementation.PlatformWindowHandle handle, bool fullscreen) [static] :435
void PlatformWindowImpl::SetFullscreen(::Xli::Window* handle_, bool fullscreen_)
{
    PlatformWindowImpl_typeof()->Init();
    handle_->SetFullscreen(fullscreen_);
}

// public static extern void SetPointerCursor(Uno.Runtime.Implementation.PlatformWindowHandle handle, Uno.Platform.PointerCursor cursor) [static] :441
void PlatformWindowImpl::SetPointerCursor(::Xli::Window* handle_, int cursor_)
{
    PlatformWindowImpl_typeof()->Init();
    handle_->SetSystemCursor((Xli::SystemCursor)cursor_);
}

// public static extern void SetTitle(Uno.Runtime.Implementation.PlatformWindowHandle handle, string title) [static] :412
void PlatformWindowImpl::SetTitle(::Xli::Window* handle_, uString* title_)
{
    PlatformWindowImpl_typeof()->Init();
    handle_->SetTitle(uStringToXliString(title_));
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Runtime\Implementation\$.uno(583)
// ---------------------------------------------------------------------------------------

// internal static class TextEncodingImpl :583
// {
uClassType* TextEncodingImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.TextEncodingImpl", options);
    ::STRINGS[13] = uString::Const("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
    ::TYPES[13] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[14] = ::g::Uno::String_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[15] = ::g::Uno::Char_typeof();
    ::TYPES[16] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Byte_typeof());
    ::TYPES[17] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[4] = ::g::Uno::Int_typeof();
    ::TYPES[18] = ::g::Uno::Byte_typeof();
    return type;
}

// public static string DecodeAscii(byte[] value) :713
void TextEncodingImpl__DecodeAscii_fn(uArray* value, uString** __retval)
{
    *__retval = TextEncodingImpl::DecodeAscii(value);
}

// public static byte[] DecodeBase64(string value) :642
void TextEncodingImpl__DecodeBase64_fn(uString* value, uArray** __retval)
{
    *__retval = TextEncodingImpl::DecodeBase64(value);
}

// public static extern string DecodeUtf8(byte[] value) :708
void TextEncodingImpl__DecodeUtf8_fn(uArray* value_, uString** __retval)
{
    *__retval = TextEncodingImpl::DecodeUtf8(value_);
}

// public static byte[] EncodeAscii(string value) :727
void TextEncodingImpl__EncodeAscii_fn(uString* value, uArray** __retval)
{
    *__retval = TextEncodingImpl::EncodeAscii(value);
}

// public static string EncodeBase64(byte[] value) :588
void TextEncodingImpl__EncodeBase64_fn(uArray* value_, uString** __retval)
{
    *__retval = TextEncodingImpl::EncodeBase64(value_);
}

// public static extern byte[] EncodeUtf8(string value) :710
void TextEncodingImpl__EncodeUtf8_fn(uString* value_, uArray** __retval)
{
    *__retval = TextEncodingImpl::EncodeUtf8(value_);
}

// public static string DecodeAscii(byte[] value) [static] :713
uString* TextEncodingImpl::DecodeAscii(uArray* value)
{
    if ((value == NULL) || (uPtr(value)->Length() == 0))
        return NULL;

    uString* res = ::g::Uno::String::Empty();

    for (int i = 0; i < uPtr(value)->Length(); i++)
        res = ::g::Uno::String::op_Addition1(res, uBox<uChar>(::TYPES[15/*char*/], (uPtr(value)->Item<uint8_t>(i) < 128) ? (uChar)uPtr(value)->Item<uint8_t>(i) : '?'));

    return res;
}

// public static byte[] DecodeBase64(string value) [static] :642
uArray* TextEncodingImpl::DecodeBase64(uString* value)
{
    int addidionalSymbols = 0;
    ::g::Uno::Collections::List* ret = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[16/*Uno.Collections.List<byte>*/]);
    uArray* charArray3 = uArray::New(::TYPES[17/*int[]*/], 3);
    uArray* charArray4 = uArray::New(::TYPES[17/*int[]*/], 4);

    for (int position = 0; position < uPtr(value)->Length(); position++)
    {
        if ((uPtr(value)->Item(position) == '=') || (::g::Uno::String::IndexOf(uPtr<uString*>(::STRINGS[13/*"ABCDEFGHIJK...*/]), uPtr(value)->Item(position), 0) < 0))
            break;

        uPtr(charArray4)->Item<int>(addidionalSymbols) = (int)uPtr(value)->Item(position);
        addidionalSymbols++;

        if (addidionalSymbols == 4)
        {
            for (int j = 0; j < 4; j++)
                uPtr(charArray4)->Item<int>(j) = ::g::Uno::String::IndexOf(uPtr<uString*>(::STRINGS[13/*"ABCDEFGHIJK...*/]), (uChar)uPtr(charArray4)->Item<int>(j), 0);

            uPtr(charArray3)->Item<int>(0) = (uPtr(charArray4)->Item<int>(0) << 2) + ((uPtr(charArray4)->Item<int>(1) & 48) >> 4);
            charArray3->Item<int>(1) = ((charArray4->Item<int>(1) & 15) << 4) + ((charArray4->Item<int>(2) & 60) >> 2);
            charArray3->Item<int>(2) = ((charArray4->Item<int>(2) & 3) << 6) + charArray4->Item<int>(3);

            for (int j1 = 0; j1 < 3; j1++)
                ::g::Uno::Collections::List__Add_fn(uPtr(ret), uCRef<uint8_t>((uint8_t)uPtr(charArray3)->Item<int>(j1)));

            addidionalSymbols = 0;
        }
    }

    if (addidionalSymbols > 0)
    {
        for (int j2 = addidionalSymbols; j2 < 4; j2++)
            uPtr(charArray4)->Item<int>(j2) = 0;

        for (int j3 = 0; j3 < 4; j3++)
            uPtr(charArray4)->Item<int>(j3) = ::g::Uno::String::IndexOf(uPtr<uString*>(::STRINGS[13/*"ABCDEFGHIJK...*/]), (uChar)uPtr(charArray4)->Item<int>(j3), 0);

        uPtr(charArray3)->Item<int>(0) = (uPtr(charArray4)->Item<int>(0) << 2) + ((uPtr(charArray4)->Item<int>(1) & 48) >> 4);
        charArray3->Item<int>(1) = ((charArray4->Item<int>(1) & 15) << 4) + ((charArray4->Item<int>(2) & 60) >> 2);
        charArray3->Item<int>(2) = ((charArray4->Item<int>(2) & 3) << 6) + charArray4->Item<int>(3);

        for (int j4 = 0; j4 < (addidionalSymbols - 1); j4++)
            ::g::Uno::Collections::List__Add_fn(uPtr(ret), uCRef<uint8_t>((uint8_t)uPtr(charArray3)->Item<int>(j4)));
    }

    return (uArray*)ret->ToArray();
}

// public static extern string DecodeUtf8(byte[] value) [static] :708
uString* TextEncodingImpl::DecodeUtf8(uArray* value_)
{
    return uString::Utf8((const char*)uPtr(value_)->Ptr(), uPtr(value_)->Length());
}

// public static byte[] EncodeAscii(string value) [static] :727
uArray* TextEncodingImpl::EncodeAscii(uString* value)
{
    if (::g::Uno::String::IsNullOrEmpty(value))
        return NULL;

    uArray* res = uArray::New(::TYPES[13/*byte[]*/], uPtr(value)->Length());

    for (int i = 0; i < value->Length(); i++)
        uPtr(res)->Item<uint8_t>(i) = (uint8_t)(((int)uPtr(value)->Item(i) < 128) ? uPtr(value)->Item(i) : '?');

    return res;
}

// public static string EncodeBase64(byte[] value) [static] :588
uString* TextEncodingImpl::EncodeBase64(uArray* value_)
{
    return uBase64Encode(value_);
}

// public static extern byte[] EncodeUtf8(string value) [static] :710
uArray* TextEncodingImpl::EncodeUtf8(uString* value_)
{
    Xli::String str(uStringToXliString(value_));
    return uArray::New(::g::Uno::Byte_typeof()->Array(), str.Length(), str.Ptr());
}
// }

}}}} // ::g::Uno::Runtime::Implementation
