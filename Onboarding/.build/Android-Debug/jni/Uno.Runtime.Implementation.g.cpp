// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <OpenGL.GLFramebufferHandle.h>
#include <time.h>
#include <Uno.ArgumentException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
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
#include <Uno.Platform.SystemUI.h>
#include <Uno.Platform.SystemUIResizeReason.h>
#include <Uno.Platform.SystemUIWillResizeEventArgs.h>
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
#include <Uno.String.h>
#include <Uno.UShort.h>
#include <Uno/Support.h>
#include <Uno/XliInterop.h>
#include <Xli/Console.h>
#include <Xli/DateTime.h>
#include <Xli/Time.h>
#include <XliPlatform/Display.h>
extern ::Xli::Window* uXliWindowPtr;
static uString* STRINGS[14];
static uType* TYPES[13];

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

// public static extern int GetInt(byte[] buffer, int offset, bool littleEndian) :176
void BufferImpl__GetInt_fn(uArray* buffer_, int* offset_, bool* littleEndian_, int* __retval)
{
    *__retval = BufferImpl::GetInt(buffer_, *offset_, *littleEndian_);
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

// public static extern void SetUShort(byte[] buffer, int offset, ushort value, bool littleEndian) :173
void BufferImpl__SetUShort_fn(uArray* buffer_, int* offset_, uint16_t* value_, bool* littleEndian_)
{
    BufferImpl::SetUShort(buffer_, *offset_, *value_, *littleEndian_);
}

// public static extern int GetInt(byte[] buffer, int offset, bool littleEndian) [static] :176
int BufferImpl::GetInt(uArray* buffer_, int offset_, bool littleEndian_)
{
    return uLoadBytes<int>((uint8_t*)buffer_->_ptr + offset_, littleEndian_);
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
    return type;
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

::g::Uno::Rect PlatformWindowImpl::keyboardFrame_;
bool PlatformWindowImpl::keyboardVisible_;

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
    return type;
}

// public static extern string DecodeUtf8(byte[] value) :708
void TextEncodingImpl__DecodeUtf8_fn(uArray* value_, uString** __retval)
{
    *__retval = TextEncodingImpl::DecodeUtf8(value_);
}

// public static extern byte[] EncodeUtf8(string value) :710
void TextEncodingImpl__EncodeUtf8_fn(uString* value_, uArray** __retval)
{
    *__retval = TextEncodingImpl::EncodeUtf8(value_);
}

// public static extern string DecodeUtf8(byte[] value) [static] :708
uString* TextEncodingImpl::DecodeUtf8(uArray* value_)
{
    return uString::Utf8((const char*)uPtr(value_)->Ptr(), uPtr(value_)->Length());
}

// public static extern byte[] EncodeUtf8(string value) [static] :710
uArray* TextEncodingImpl::EncodeUtf8(uString* value_)
{
    Xli::String str(uStringToXliString(value_));
    return uArray::New(::g::Uno::Byte_typeof()->Array(), str.Length(), str.Ptr());
}
// }

}}}} // ::g::Uno::Runtime::Implementation
