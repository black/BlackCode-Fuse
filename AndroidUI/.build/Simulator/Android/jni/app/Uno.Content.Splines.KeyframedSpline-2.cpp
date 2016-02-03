#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Uno_Content_Splines_KeyframedSpline2_Key_-3f269586.h>
#include <app/Uno.Collections.List__Uno_Content_Splines_KeyframedSpline2_Key_-b3c190c7.h>
#include <app/Uno.Collections.List__Uno_Content_Splines_KeyframedSpline2_Key_-ca8b9945.h>
#include <app/Uno.Collections.List__Uno_Content_Splines_KeyframedSpline2_Key_-d4cf8748.h>
#include <app/Uno.Collections.List__Uno_Content_Splines_KeyframedSpline2_Key_-eede57a1.h>
#include <app/Uno.Content.Splines.KeyframedSpline__float__float.h>
#include <app/Uno.Content.Splines.KeyframedSpline__float2__float2.h>
#include <app/Uno.Content.Splines.KeyframedSpline__float3__float3.h>
#include <app/Uno.Content.Splines.KeyframedSpline__float4__float4.h>
#include <app/Uno.Content.Splines.KeyframedSpline__float4x4__float4x4.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float__float.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float2__float2.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float3__float3.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float4__float4.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float4x4__float4x4.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyframedSpline__float__float__uType* KeyframedSpline__float__float__typeof()
{
    static ::uStaticStrong<KeyframedSpline__float__float__uType*> type;
    if (type != NULL) return type;

    type = (KeyframedSpline__float__float__uType*)::uAllocClassType(sizeof(KeyframedSpline__float__float__uType), "Uno.Content.Splines.KeyframedSpline<float,float>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Content::Splines::Spline__float__typeof());
    type->__fp_get_End = (double(*)(::app::Uno::Content::Splines::Spline__float*))KeyframedSpline__float__float__get_End;
    type->__fp_get_Start = (double(*)(::app::Uno::Content::Splines::Spline__float*))KeyframedSpline__float__float__get_Start;

    type->SetStrongRefs(
        "keys", offsetof(KeyframedSpline__float__float, keys));

    type->SetFields(2,
        ::uNewField("cache", NULL, offsetof(KeyframedSpline__float__float, cache), ::app::Uno::Int__typeof()),
        ::uNewField("keys", NULL, offsetof(KeyframedSpline__float__float, keys), ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___typeof()));

    type->SetFunctions(14,
        ::uNewFunction("AddKey", KeyframedSpline__float__float__AddKey, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("ClearKeys", KeyframedSpline__float__float__ClearKeys, 0, false),
        ::uNewFunction("FindLeftIndex", KeyframedSpline__float__float__FindLeftIndex, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("FindNearestIndex", KeyframedSpline__float__float__FindNearestIndex, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("FindValue", KeyframedSpline__float__float__FindValue, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("FindValues", KeyframedSpline__float__float__FindValues, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("FindValues", KeyframedSpline__float__float__FindValues_1, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("get_KeyCount", KeyframedSpline__float__float__get_KeyCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetTime", KeyframedSpline__float__float__GetTime, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetValue", KeyframedSpline__float__float__GetValue, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Map", KeyframedSpline__float__float__Map, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("RemoveKey", KeyframedSpline__float__float__RemoveKey, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("SetTime", KeyframedSpline__float__float__SetTime, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("SetValue", KeyframedSpline__float__float__SetValue, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyframedSpline__float__float___ObjInit_1(KeyframedSpline__float__float* __this)
{
    __this->keys = ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___New_1(NULL);
    ::app::Uno::Content::Splines::Spline__float___ObjInit(__this);
}

void KeyframedSpline__float__float___ObjInit_2(KeyframedSpline__float__float* __this, ::uArray* keys)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    __this->keys = ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___New_1(NULL);
    ::app::Uno::Content::Splines::Spline__float___ObjInit(__this);

    for (array_123 = keys, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float k = ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float>(index_124);
        __this->AddKey(k.Time, k.Value);
    }
}

int KeyframedSpline__float__float__AddKey(KeyframedSpline__float__float* __this, double time, float value)
{
    int i = __this->FindLeftIndex(time) + 1;
    ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Insert(i, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float__New_1(NULL, time, value));
    return i;
}

void KeyframedSpline__float__float__ClearKeys(KeyframedSpline__float__float* __this)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Clear();
    __this->cache = 0;
}

int KeyframedSpline__float__float__FindLeftIndex(KeyframedSpline__float__float* __this, double time)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Count() > 0)
    {
        while (time >= ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(__this->cache).Time)
        {
            if (__this->cache == (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Count() - 1))
            {
                return __this->cache;
            }

            if (time < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(__this->cache + 1).Time)
            {
                return __this->cache;
            }

            __this->cache++;
        }

        while (time < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(__this->cache).Time)
        {
            if (__this->cache == 0)
            {
                return -1;
            }

            __this->cache--;

            if (time >= ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(__this->cache).Time)
            {
                return __this->cache;
            }
        }
    }

    return -1;
}

int KeyframedSpline__float__float__FindNearestIndex(KeyframedSpline__float__float* __this, double time)
{
    int l = __this->FindLeftIndex(time);
    int r = l + 1;

    if (l < 0)
    {
        return r;
    }

    if (r < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Count())
    {
        double ldif = time - ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(l).Time;
        double rdif = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(r).Time - time;

        if (rdif < ldif)
        {
            return r;
        }
    }

    return l;
}

float KeyframedSpline__float__float__FindValue(KeyframedSpline__float__float* __this, double time)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(::app::Uno::Math__Max_8(NULL, 0, __this->FindLeftIndex(time))).Value;
}

void KeyframedSpline__float__float__FindValues(KeyframedSpline__float__float* __this, double time, float* a, float* b, float* p)
{
    int i = __this->FindLeftIndex(time);
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float ka = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(::app::Uno::Math__Max_8(NULL, i, 0));
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float kb = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(::app::Uno::Math__Min_8(NULL, i + 1, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Count() - 1));
    *a = ka.Value;
    *b = kb.Value;

    if (ka.Time == kb.Time)
    {
        *p = 0.0f;
    }
    else
    {
        *p = KeyframedSpline__float__float__Map(NULL, ka.Time, kb.Time, time);
    }
}

void KeyframedSpline__float__float__FindValues_1(KeyframedSpline__float__float* __this, double time, float* a, float* b, float* c, float* d, float* p)
{
    int i = __this->FindLeftIndex(time);
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float ka = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(::app::Uno::Math__Max_8(NULL, i - 1, 0));
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float kb = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(::app::Uno::Math__Max_8(NULL, i, 0));
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float kc = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(::app::Uno::Math__Min_8(NULL, i + 1, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Count() - 1));
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float kd = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(::app::Uno::Math__Min_8(NULL, i + 2, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Count() - 1));
    *a = ka.Value;
    *b = kb.Value;
    *c = kc.Value;
    *d = kd.Value;

    if (kb.Time == kc.Time)
    {
        *p = 0.0f;
    }
    else
    {
        *p = KeyframedSpline__float__float__Map(NULL, kb.Time, kc.Time, time);
    }
}

double KeyframedSpline__float__float__get_End(KeyframedSpline__float__float* __this)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Count() - 1).Time;
}

int KeyframedSpline__float__float__get_KeyCount(KeyframedSpline__float__float* __this)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Count();
}

double KeyframedSpline__float__float__get_Start(KeyframedSpline__float__float* __this)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(0).Time;
}

double KeyframedSpline__float__float__GetTime(KeyframedSpline__float__float* __this, int index)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(index).Time;
}

float KeyframedSpline__float__float__GetValue(KeyframedSpline__float__float* __this, int index)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(index).Value;
}

float KeyframedSpline__float__float__Map(::uStatic* __this, double a, double b, double t)
{
    return (float)((t - a) / (b - a));
}

void KeyframedSpline__float__float__RemoveKey(KeyframedSpline__float__float* __this, int index)
{
    if ((__this->cache == (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Count() - 1)) && (__this->cache > 0))
    {
        __this->cache--;
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->RemoveAt(index);
}

int KeyframedSpline__float__float__SetTime(KeyframedSpline__float__float* __this, int index, double time)
{
    if (((index > 0) && (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(index - 1).Time > time)) || ((index < (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Count() - 1)) && (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(index + 1).Time < time)))
    {
        float v = __this->GetValue(index);
        __this->RemoveKey(index);
        return __this->AddKey(time, v);
    }
    else
    {
        ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(index, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float__New_1(NULL, time, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(index).Value));
        return index;
    }
}

void KeyframedSpline__float__float__SetValue(KeyframedSpline__float__float* __this, int index, float value)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(index, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float__New_1(NULL, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*>(__this->keys)->Item(index).Time, value));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyframedSpline__float2__float2__uType* KeyframedSpline__float2__float2__typeof()
{
    static ::uStaticStrong<KeyframedSpline__float2__float2__uType*> type;
    if (type != NULL) return type;

    type = (KeyframedSpline__float2__float2__uType*)::uAllocClassType(sizeof(KeyframedSpline__float2__float2__uType), "Uno.Content.Splines.KeyframedSpline<float2,float2>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Content::Splines::Spline__float2__typeof());
    type->__fp_get_End = (double(*)(::app::Uno::Content::Splines::Spline__float2*))KeyframedSpline__float2__float2__get_End;
    type->__fp_get_Start = (double(*)(::app::Uno::Content::Splines::Spline__float2*))KeyframedSpline__float2__float2__get_Start;

    type->SetStrongRefs(
        "keys", offsetof(KeyframedSpline__float2__float2, keys));

    type->SetFields(2,
        ::uNewField("cache", NULL, offsetof(KeyframedSpline__float2__float2, cache), ::app::Uno::Int__typeof()),
        ::uNewField("keys", NULL, offsetof(KeyframedSpline__float2__float2, keys), ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2___typeof()));

    type->SetFunctions(14,
        ::uNewFunction("AddKey", KeyframedSpline__float2__float2__AddKey, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("ClearKeys", KeyframedSpline__float2__float2__ClearKeys, 0, false),
        ::uNewFunction("FindLeftIndex", KeyframedSpline__float2__float2__FindLeftIndex, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("FindNearestIndex", KeyframedSpline__float2__float2__FindNearestIndex, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("FindValue", KeyframedSpline__float2__float2__FindValue, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("FindValues", KeyframedSpline__float2__float2__FindValues, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("FindValues", KeyframedSpline__float2__float2__FindValues_1, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("get_KeyCount", KeyframedSpline__float2__float2__get_KeyCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetTime", KeyframedSpline__float2__float2__GetTime, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetValue", KeyframedSpline__float2__float2__GetValue, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Map", KeyframedSpline__float2__float2__Map, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("RemoveKey", KeyframedSpline__float2__float2__RemoveKey, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("SetTime", KeyframedSpline__float2__float2__SetTime, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("SetValue", KeyframedSpline__float2__float2__SetValue, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyframedSpline__float2__float2___ObjInit_1(KeyframedSpline__float2__float2* __this)
{
    __this->keys = ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2___New_1(NULL);
    ::app::Uno::Content::Splines::Spline__float2___ObjInit(__this);
}

void KeyframedSpline__float2__float2___ObjInit_2(KeyframedSpline__float2__float2* __this, ::uArray* keys)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    __this->keys = ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2___New_1(NULL);
    ::app::Uno::Content::Splines::Spline__float2___ObjInit(__this);

    for (array_123 = keys, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2 k = ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2>(index_124);
        __this->AddKey(k.Time, k.Value);
    }
}

int KeyframedSpline__float2__float2__AddKey(KeyframedSpline__float2__float2* __this, double time, ::app::Uno::Float2 value)
{
    int i = __this->FindLeftIndex(time) + 1;
    ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Insert(i, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2__New_1(NULL, time, value));
    return i;
}

void KeyframedSpline__float2__float2__ClearKeys(KeyframedSpline__float2__float2* __this)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Clear();
    __this->cache = 0;
}

int KeyframedSpline__float2__float2__FindLeftIndex(KeyframedSpline__float2__float2* __this, double time)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Count() > 0)
    {
        while (time >= ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(__this->cache).Time)
        {
            if (__this->cache == (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Count() - 1))
            {
                return __this->cache;
            }

            if (time < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(__this->cache + 1).Time)
            {
                return __this->cache;
            }

            __this->cache++;
        }

        while (time < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(__this->cache).Time)
        {
            if (__this->cache == 0)
            {
                return -1;
            }

            __this->cache--;

            if (time >= ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(__this->cache).Time)
            {
                return __this->cache;
            }
        }
    }

    return -1;
}

int KeyframedSpline__float2__float2__FindNearestIndex(KeyframedSpline__float2__float2* __this, double time)
{
    int l = __this->FindLeftIndex(time);
    int r = l + 1;

    if (l < 0)
    {
        return r;
    }

    if (r < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Count())
    {
        double ldif = time - ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(l).Time;
        double rdif = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(r).Time - time;

        if (rdif < ldif)
        {
            return r;
        }
    }

    return l;
}

::app::Uno::Float2 KeyframedSpline__float2__float2__FindValue(KeyframedSpline__float2__float2* __this, double time)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(::app::Uno::Math__Max_8(NULL, 0, __this->FindLeftIndex(time))).Value;
}

void KeyframedSpline__float2__float2__FindValues(KeyframedSpline__float2__float2* __this, double time, ::app::Uno::Float2* a, ::app::Uno::Float2* b, float* p)
{
    int i = __this->FindLeftIndex(time);
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2 ka = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(::app::Uno::Math__Max_8(NULL, i, 0));
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2 kb = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(::app::Uno::Math__Min_8(NULL, i + 1, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Count() - 1));
    *a = ka.Value;
    *b = kb.Value;

    if (ka.Time == kb.Time)
    {
        *p = 0.0f;
    }
    else
    {
        *p = KeyframedSpline__float2__float2__Map(NULL, ka.Time, kb.Time, time);
    }
}

void KeyframedSpline__float2__float2__FindValues_1(KeyframedSpline__float2__float2* __this, double time, ::app::Uno::Float2* a, ::app::Uno::Float2* b, ::app::Uno::Float2* c, ::app::Uno::Float2* d, float* p)
{
    int i = __this->FindLeftIndex(time);
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2 ka = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(::app::Uno::Math__Max_8(NULL, i - 1, 0));
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2 kb = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(::app::Uno::Math__Max_8(NULL, i, 0));
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2 kc = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(::app::Uno::Math__Min_8(NULL, i + 1, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Count() - 1));
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2 kd = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(::app::Uno::Math__Min_8(NULL, i + 2, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Count() - 1));
    *a = ka.Value;
    *b = kb.Value;
    *c = kc.Value;
    *d = kd.Value;

    if (kb.Time == kc.Time)
    {
        *p = 0.0f;
    }
    else
    {
        *p = KeyframedSpline__float2__float2__Map(NULL, kb.Time, kc.Time, time);
    }
}

double KeyframedSpline__float2__float2__get_End(KeyframedSpline__float2__float2* __this)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Count() - 1).Time;
}

int KeyframedSpline__float2__float2__get_KeyCount(KeyframedSpline__float2__float2* __this)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Count();
}

double KeyframedSpline__float2__float2__get_Start(KeyframedSpline__float2__float2* __this)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(0).Time;
}

double KeyframedSpline__float2__float2__GetTime(KeyframedSpline__float2__float2* __this, int index)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(index).Time;
}

::app::Uno::Float2 KeyframedSpline__float2__float2__GetValue(KeyframedSpline__float2__float2* __this, int index)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(index).Value;
}

float KeyframedSpline__float2__float2__Map(::uStatic* __this, double a, double b, double t)
{
    return (float)((t - a) / (b - a));
}

void KeyframedSpline__float2__float2__RemoveKey(KeyframedSpline__float2__float2* __this, int index)
{
    if ((__this->cache == (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Count() - 1)) && (__this->cache > 0))
    {
        __this->cache--;
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->RemoveAt(index);
}

int KeyframedSpline__float2__float2__SetTime(KeyframedSpline__float2__float2* __this, int index, double time)
{
    if (((index > 0) && (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(index - 1).Time > time)) || ((index < (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Count() - 1)) && (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(index + 1).Time < time)))
    {
        ::app::Uno::Float2 v = __this->GetValue(index);
        __this->RemoveKey(index);
        return __this->AddKey(time, v);
    }
    else
    {
        ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(index, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2__New_1(NULL, time, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(index).Value));
        return index;
    }
}

void KeyframedSpline__float2__float2__SetValue(KeyframedSpline__float2__float2* __this, int index, ::app::Uno::Float2 value)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(index, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2__New_1(NULL, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*>(__this->keys)->Item(index).Time, value));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyframedSpline__float3__float3__uType* KeyframedSpline__float3__float3__typeof()
{
    static ::uStaticStrong<KeyframedSpline__float3__float3__uType*> type;
    if (type != NULL) return type;

    type = (KeyframedSpline__float3__float3__uType*)::uAllocClassType(sizeof(KeyframedSpline__float3__float3__uType), "Uno.Content.Splines.KeyframedSpline<float3,float3>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Content::Splines::Spline__float3__typeof());
    type->__fp_get_End = (double(*)(::app::Uno::Content::Splines::Spline__float3*))KeyframedSpline__float3__float3__get_End;
    type->__fp_get_Start = (double(*)(::app::Uno::Content::Splines::Spline__float3*))KeyframedSpline__float3__float3__get_Start;

    type->SetStrongRefs(
        "keys", offsetof(KeyframedSpline__float3__float3, keys));

    type->SetFields(2,
        ::uNewField("cache", NULL, offsetof(KeyframedSpline__float3__float3, cache), ::app::Uno::Int__typeof()),
        ::uNewField("keys", NULL, offsetof(KeyframedSpline__float3__float3, keys), ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3___typeof()));

    type->SetFunctions(14,
        ::uNewFunction("AddKey", KeyframedSpline__float3__float3__AddKey, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("ClearKeys", KeyframedSpline__float3__float3__ClearKeys, 0, false),
        ::uNewFunction("FindLeftIndex", KeyframedSpline__float3__float3__FindLeftIndex, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("FindNearestIndex", KeyframedSpline__float3__float3__FindNearestIndex, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("FindValue", KeyframedSpline__float3__float3__FindValue, 0, false, ::app::Uno::Float3__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("FindValues", KeyframedSpline__float3__float3__FindValues, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("FindValues", KeyframedSpline__float3__float3__FindValues_1, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("get_KeyCount", KeyframedSpline__float3__float3__get_KeyCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetTime", KeyframedSpline__float3__float3__GetTime, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetValue", KeyframedSpline__float3__float3__GetValue, 0, false, ::app::Uno::Float3__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Map", KeyframedSpline__float3__float3__Map, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("RemoveKey", KeyframedSpline__float3__float3__RemoveKey, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("SetTime", KeyframedSpline__float3__float3__SetTime, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("SetValue", KeyframedSpline__float3__float3__SetValue, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Float3__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyframedSpline__float3__float3___ObjInit_1(KeyframedSpline__float3__float3* __this)
{
    __this->keys = ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3___New_1(NULL);
    ::app::Uno::Content::Splines::Spline__float3___ObjInit(__this);
}

void KeyframedSpline__float3__float3___ObjInit_2(KeyframedSpline__float3__float3* __this, ::uArray* keys)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    __this->keys = ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3___New_1(NULL);
    ::app::Uno::Content::Splines::Spline__float3___ObjInit(__this);

    for (array_123 = keys, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Uno::Content::Splines::KeyframedSpline2_Key__float3__float3 k = ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Content::Splines::KeyframedSpline2_Key__float3__float3>(index_124);
        __this->AddKey(k.Time, k.Value);
    }
}

int KeyframedSpline__float3__float3__AddKey(KeyframedSpline__float3__float3* __this, double time, ::app::Uno::Float3 value)
{
    int i = __this->FindLeftIndex(time) + 1;
    ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Insert(i, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float3__float3__New_1(NULL, time, value));
    return i;
}

void KeyframedSpline__float3__float3__ClearKeys(KeyframedSpline__float3__float3* __this)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Clear();
    __this->cache = 0;
}

int KeyframedSpline__float3__float3__FindLeftIndex(KeyframedSpline__float3__float3* __this, double time)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Count() > 0)
    {
        while (time >= ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(__this->cache).Time)
        {
            if (__this->cache == (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Count() - 1))
            {
                return __this->cache;
            }

            if (time < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(__this->cache + 1).Time)
            {
                return __this->cache;
            }

            __this->cache++;
        }

        while (time < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(__this->cache).Time)
        {
            if (__this->cache == 0)
            {
                return -1;
            }

            __this->cache--;

            if (time >= ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(__this->cache).Time)
            {
                return __this->cache;
            }
        }
    }

    return -1;
}

int KeyframedSpline__float3__float3__FindNearestIndex(KeyframedSpline__float3__float3* __this, double time)
{
    int l = __this->FindLeftIndex(time);
    int r = l + 1;

    if (l < 0)
    {
        return r;
    }

    if (r < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Count())
    {
        double ldif = time - ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(l).Time;
        double rdif = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(r).Time - time;

        if (rdif < ldif)
        {
            return r;
        }
    }

    return l;
}

::app::Uno::Float3 KeyframedSpline__float3__float3__FindValue(KeyframedSpline__float3__float3* __this, double time)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(::app::Uno::Math__Max_8(NULL, 0, __this->FindLeftIndex(time))).Value;
}

void KeyframedSpline__float3__float3__FindValues(KeyframedSpline__float3__float3* __this, double time, ::app::Uno::Float3* a, ::app::Uno::Float3* b, float* p)
{
    int i = __this->FindLeftIndex(time);
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float3__float3 ka = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(::app::Uno::Math__Max_8(NULL, i, 0));
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float3__float3 kb = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(::app::Uno::Math__Min_8(NULL, i + 1, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Count() - 1));
    *a = ka.Value;
    *b = kb.Value;

    if (ka.Time == kb.Time)
    {
        *p = 0.0f;
    }
    else
    {
        *p = KeyframedSpline__float3__float3__Map(NULL, ka.Time, kb.Time, time);
    }
}

void KeyframedSpline__float3__float3__FindValues_1(KeyframedSpline__float3__float3* __this, double time, ::app::Uno::Float3* a, ::app::Uno::Float3* b, ::app::Uno::Float3* c, ::app::Uno::Float3* d, float* p)
{
    int i = __this->FindLeftIndex(time);
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float3__float3 ka = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(::app::Uno::Math__Max_8(NULL, i - 1, 0));
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float3__float3 kb = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(::app::Uno::Math__Max_8(NULL, i, 0));
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float3__float3 kc = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(::app::Uno::Math__Min_8(NULL, i + 1, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Count() - 1));
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float3__float3 kd = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(::app::Uno::Math__Min_8(NULL, i + 2, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Count() - 1));
    *a = ka.Value;
    *b = kb.Value;
    *c = kc.Value;
    *d = kd.Value;

    if (kb.Time == kc.Time)
    {
        *p = 0.0f;
    }
    else
    {
        *p = KeyframedSpline__float3__float3__Map(NULL, kb.Time, kc.Time, time);
    }
}

double KeyframedSpline__float3__float3__get_End(KeyframedSpline__float3__float3* __this)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Count() - 1).Time;
}

int KeyframedSpline__float3__float3__get_KeyCount(KeyframedSpline__float3__float3* __this)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Count();
}

double KeyframedSpline__float3__float3__get_Start(KeyframedSpline__float3__float3* __this)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(0).Time;
}

double KeyframedSpline__float3__float3__GetTime(KeyframedSpline__float3__float3* __this, int index)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(index).Time;
}

::app::Uno::Float3 KeyframedSpline__float3__float3__GetValue(KeyframedSpline__float3__float3* __this, int index)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(index).Value;
}

float KeyframedSpline__float3__float3__Map(::uStatic* __this, double a, double b, double t)
{
    return (float)((t - a) / (b - a));
}

void KeyframedSpline__float3__float3__RemoveKey(KeyframedSpline__float3__float3* __this, int index)
{
    if ((__this->cache == (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Count() - 1)) && (__this->cache > 0))
    {
        __this->cache--;
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->RemoveAt(index);
}

int KeyframedSpline__float3__float3__SetTime(KeyframedSpline__float3__float3* __this, int index, double time)
{
    if (((index > 0) && (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(index - 1).Time > time)) || ((index < (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Count() - 1)) && (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(index + 1).Time < time)))
    {
        ::app::Uno::Float3 v = __this->GetValue(index);
        __this->RemoveKey(index);
        return __this->AddKey(time, v);
    }
    else
    {
        ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(index, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float3__float3__New_1(NULL, time, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(index).Value));
        return index;
    }
}

void KeyframedSpline__float3__float3__SetValue(KeyframedSpline__float3__float3* __this, int index, ::app::Uno::Float3 value)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(index, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float3__float3__New_1(NULL, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*>(__this->keys)->Item(index).Time, value));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyframedSpline__float4__float4__uType* KeyframedSpline__float4__float4__typeof()
{
    static ::uStaticStrong<KeyframedSpline__float4__float4__uType*> type;
    if (type != NULL) return type;

    type = (KeyframedSpline__float4__float4__uType*)::uAllocClassType(sizeof(KeyframedSpline__float4__float4__uType), "Uno.Content.Splines.KeyframedSpline<float4,float4>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Content::Splines::Spline__float4__typeof());
    type->__fp_get_End = (double(*)(::app::Uno::Content::Splines::Spline__float4*))KeyframedSpline__float4__float4__get_End;
    type->__fp_get_Start = (double(*)(::app::Uno::Content::Splines::Spline__float4*))KeyframedSpline__float4__float4__get_Start;

    type->SetStrongRefs(
        "keys", offsetof(KeyframedSpline__float4__float4, keys));

    type->SetFields(2,
        ::uNewField("cache", NULL, offsetof(KeyframedSpline__float4__float4, cache), ::app::Uno::Int__typeof()),
        ::uNewField("keys", NULL, offsetof(KeyframedSpline__float4__float4, keys), ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4___typeof()));

    type->SetFunctions(14,
        ::uNewFunction("AddKey", KeyframedSpline__float4__float4__AddKey, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("ClearKeys", KeyframedSpline__float4__float4__ClearKeys, 0, false),
        ::uNewFunction("FindLeftIndex", KeyframedSpline__float4__float4__FindLeftIndex, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("FindNearestIndex", KeyframedSpline__float4__float4__FindNearestIndex, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("FindValue", KeyframedSpline__float4__float4__FindValue, 0, false, ::app::Uno::Float4__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("FindValues", KeyframedSpline__float4__float4__FindValues, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("FindValues", KeyframedSpline__float4__float4__FindValues_1, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("get_KeyCount", KeyframedSpline__float4__float4__get_KeyCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetTime", KeyframedSpline__float4__float4__GetTime, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetValue", KeyframedSpline__float4__float4__GetValue, 0, false, ::app::Uno::Float4__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Map", KeyframedSpline__float4__float4__Map, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("RemoveKey", KeyframedSpline__float4__float4__RemoveKey, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("SetTime", KeyframedSpline__float4__float4__SetTime, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("SetValue", KeyframedSpline__float4__float4__SetValue, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyframedSpline__float4__float4___ObjInit_1(KeyframedSpline__float4__float4* __this)
{
    __this->keys = ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4___New_1(NULL);
    ::app::Uno::Content::Splines::Spline__float4___ObjInit(__this);
}

void KeyframedSpline__float4__float4___ObjInit_2(KeyframedSpline__float4__float4* __this, ::uArray* keys)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    __this->keys = ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4___New_1(NULL);
    ::app::Uno::Content::Splines::Spline__float4___ObjInit(__this);

    for (array_123 = keys, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4__float4 k = ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4__float4>(index_124);
        __this->AddKey(k.Time, k.Value);
    }
}

int KeyframedSpline__float4__float4__AddKey(KeyframedSpline__float4__float4* __this, double time, ::app::Uno::Float4 value)
{
    int i = __this->FindLeftIndex(time) + 1;
    ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Insert(i, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4__float4__New_1(NULL, time, value));
    return i;
}

void KeyframedSpline__float4__float4__ClearKeys(KeyframedSpline__float4__float4* __this)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Clear();
    __this->cache = 0;
}

int KeyframedSpline__float4__float4__FindLeftIndex(KeyframedSpline__float4__float4* __this, double time)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Count() > 0)
    {
        while (time >= ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(__this->cache).Time)
        {
            if (__this->cache == (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Count() - 1))
            {
                return __this->cache;
            }

            if (time < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(__this->cache + 1).Time)
            {
                return __this->cache;
            }

            __this->cache++;
        }

        while (time < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(__this->cache).Time)
        {
            if (__this->cache == 0)
            {
                return -1;
            }

            __this->cache--;

            if (time >= ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(__this->cache).Time)
            {
                return __this->cache;
            }
        }
    }

    return -1;
}

int KeyframedSpline__float4__float4__FindNearestIndex(KeyframedSpline__float4__float4* __this, double time)
{
    int l = __this->FindLeftIndex(time);
    int r = l + 1;

    if (l < 0)
    {
        return r;
    }

    if (r < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Count())
    {
        double ldif = time - ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(l).Time;
        double rdif = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(r).Time - time;

        if (rdif < ldif)
        {
            return r;
        }
    }

    return l;
}

::app::Uno::Float4 KeyframedSpline__float4__float4__FindValue(KeyframedSpline__float4__float4* __this, double time)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(::app::Uno::Math__Max_8(NULL, 0, __this->FindLeftIndex(time))).Value;
}

void KeyframedSpline__float4__float4__FindValues(KeyframedSpline__float4__float4* __this, double time, ::app::Uno::Float4* a, ::app::Uno::Float4* b, float* p)
{
    int i = __this->FindLeftIndex(time);
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4__float4 ka = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(::app::Uno::Math__Max_8(NULL, i, 0));
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4__float4 kb = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(::app::Uno::Math__Min_8(NULL, i + 1, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Count() - 1));
    *a = ka.Value;
    *b = kb.Value;

    if (ka.Time == kb.Time)
    {
        *p = 0.0f;
    }
    else
    {
        *p = KeyframedSpline__float4__float4__Map(NULL, ka.Time, kb.Time, time);
    }
}

void KeyframedSpline__float4__float4__FindValues_1(KeyframedSpline__float4__float4* __this, double time, ::app::Uno::Float4* a, ::app::Uno::Float4* b, ::app::Uno::Float4* c, ::app::Uno::Float4* d, float* p)
{
    int i = __this->FindLeftIndex(time);
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4__float4 ka = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(::app::Uno::Math__Max_8(NULL, i - 1, 0));
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4__float4 kb = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(::app::Uno::Math__Max_8(NULL, i, 0));
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4__float4 kc = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(::app::Uno::Math__Min_8(NULL, i + 1, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Count() - 1));
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4__float4 kd = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(::app::Uno::Math__Min_8(NULL, i + 2, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Count() - 1));
    *a = ka.Value;
    *b = kb.Value;
    *c = kc.Value;
    *d = kd.Value;

    if (kb.Time == kc.Time)
    {
        *p = 0.0f;
    }
    else
    {
        *p = KeyframedSpline__float4__float4__Map(NULL, kb.Time, kc.Time, time);
    }
}

double KeyframedSpline__float4__float4__get_End(KeyframedSpline__float4__float4* __this)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Count() - 1).Time;
}

int KeyframedSpline__float4__float4__get_KeyCount(KeyframedSpline__float4__float4* __this)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Count();
}

double KeyframedSpline__float4__float4__get_Start(KeyframedSpline__float4__float4* __this)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(0).Time;
}

double KeyframedSpline__float4__float4__GetTime(KeyframedSpline__float4__float4* __this, int index)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(index).Time;
}

::app::Uno::Float4 KeyframedSpline__float4__float4__GetValue(KeyframedSpline__float4__float4* __this, int index)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(index).Value;
}

float KeyframedSpline__float4__float4__Map(::uStatic* __this, double a, double b, double t)
{
    return (float)((t - a) / (b - a));
}

void KeyframedSpline__float4__float4__RemoveKey(KeyframedSpline__float4__float4* __this, int index)
{
    if ((__this->cache == (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Count() - 1)) && (__this->cache > 0))
    {
        __this->cache--;
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->RemoveAt(index);
}

int KeyframedSpline__float4__float4__SetTime(KeyframedSpline__float4__float4* __this, int index, double time)
{
    if (((index > 0) && (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(index - 1).Time > time)) || ((index < (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Count() - 1)) && (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(index + 1).Time < time)))
    {
        ::app::Uno::Float4 v = __this->GetValue(index);
        __this->RemoveKey(index);
        return __this->AddKey(time, v);
    }
    else
    {
        ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(index, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4__float4__New_1(NULL, time, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(index).Value));
        return index;
    }
}

void KeyframedSpline__float4__float4__SetValue(KeyframedSpline__float4__float4* __this, int index, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(index, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4__float4__New_1(NULL, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*>(__this->keys)->Item(index).Time, value));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyframedSpline__float4x4__float4x4__uType* KeyframedSpline__float4x4__float4x4__typeof()
{
    static ::uStaticStrong<KeyframedSpline__float4x4__float4x4__uType*> type;
    if (type != NULL) return type;

    type = (KeyframedSpline__float4x4__float4x4__uType*)::uAllocClassType(sizeof(KeyframedSpline__float4x4__float4x4__uType), "Uno.Content.Splines.KeyframedSpline<float4x4,float4x4>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Content::Splines::Spline__float4x4__typeof());
    type->__fp_get_End = (double(*)(::app::Uno::Content::Splines::Spline__float4x4*))KeyframedSpline__float4x4__float4x4__get_End;
    type->__fp_get_Start = (double(*)(::app::Uno::Content::Splines::Spline__float4x4*))KeyframedSpline__float4x4__float4x4__get_Start;

    type->SetStrongRefs(
        "keys", offsetof(KeyframedSpline__float4x4__float4x4, keys));

    type->SetFields(2,
        ::uNewField("cache", NULL, offsetof(KeyframedSpline__float4x4__float4x4, cache), ::app::Uno::Int__typeof()),
        ::uNewField("keys", NULL, offsetof(KeyframedSpline__float4x4__float4x4, keys), ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4___typeof()));

    type->SetFunctions(14,
        ::uNewFunction("AddKey", KeyframedSpline__float4x4__float4x4__AddKey, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Float4x4__typeof()),
        ::uNewFunctionVoid("ClearKeys", KeyframedSpline__float4x4__float4x4__ClearKeys, 0, false),
        ::uNewFunction("FindLeftIndex", KeyframedSpline__float4x4__float4x4__FindLeftIndex, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("FindNearestIndex", KeyframedSpline__float4x4__float4x4__FindNearestIndex, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("FindValue", KeyframedSpline__float4x4__float4x4__FindValue, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("FindValues", KeyframedSpline__float4x4__float4x4__FindValues, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Float4x4__typeof(), ::app::Uno::Float4x4__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("FindValues", KeyframedSpline__float4x4__float4x4__FindValues_1, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Float4x4__typeof(), ::app::Uno::Float4x4__typeof(), ::app::Uno::Float4x4__typeof(), ::app::Uno::Float4x4__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("get_KeyCount", KeyframedSpline__float4x4__float4x4__get_KeyCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetTime", KeyframedSpline__float4x4__float4x4__GetTime, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetValue", KeyframedSpline__float4x4__float4x4__GetValue, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Map", KeyframedSpline__float4x4__float4x4__Map, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("RemoveKey", KeyframedSpline__float4x4__float4x4__RemoveKey, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("SetTime", KeyframedSpline__float4x4__float4x4__SetTime, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("SetValue", KeyframedSpline__float4x4__float4x4__SetValue, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Float4x4__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyframedSpline__float4x4__float4x4___ObjInit_1(KeyframedSpline__float4x4__float4x4* __this)
{
    __this->keys = ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4___New_1(NULL);
    ::app::Uno::Content::Splines::Spline__float4x4___ObjInit(__this);
}

void KeyframedSpline__float4x4__float4x4___ObjInit_2(KeyframedSpline__float4x4__float4x4* __this, ::uArray* keys)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    __this->keys = ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4___New_1(NULL);
    ::app::Uno::Content::Splines::Spline__float4x4___ObjInit(__this);

    for (array_123 = keys, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4 k = ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4>(index_124);
        __this->AddKey(k.Time, k.Value);
    }
}

int KeyframedSpline__float4x4__float4x4__AddKey(KeyframedSpline__float4x4__float4x4* __this, double time, ::app::Uno::Float4x4 value)
{
    int i = __this->FindLeftIndex(time) + 1;
    ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Insert(i, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4__New_1(NULL, time, value));
    return i;
}

void KeyframedSpline__float4x4__float4x4__ClearKeys(KeyframedSpline__float4x4__float4x4* __this)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Clear();
    __this->cache = 0;
}

int KeyframedSpline__float4x4__float4x4__FindLeftIndex(KeyframedSpline__float4x4__float4x4* __this, double time)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Count() > 0)
    {
        while (time >= ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(__this->cache).Time)
        {
            if (__this->cache == (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Count() - 1))
            {
                return __this->cache;
            }

            if (time < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(__this->cache + 1).Time)
            {
                return __this->cache;
            }

            __this->cache++;
        }

        while (time < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(__this->cache).Time)
        {
            if (__this->cache == 0)
            {
                return -1;
            }

            __this->cache--;

            if (time >= ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(__this->cache).Time)
            {
                return __this->cache;
            }
        }
    }

    return -1;
}

int KeyframedSpline__float4x4__float4x4__FindNearestIndex(KeyframedSpline__float4x4__float4x4* __this, double time)
{
    int l = __this->FindLeftIndex(time);
    int r = l + 1;

    if (l < 0)
    {
        return r;
    }

    if (r < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Count())
    {
        double ldif = time - ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(l).Time;
        double rdif = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(r).Time - time;

        if (rdif < ldif)
        {
            return r;
        }
    }

    return l;
}

::app::Uno::Float4x4 KeyframedSpline__float4x4__float4x4__FindValue(KeyframedSpline__float4x4__float4x4* __this, double time)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(::app::Uno::Math__Max_8(NULL, 0, __this->FindLeftIndex(time))).Value;
}

void KeyframedSpline__float4x4__float4x4__FindValues(KeyframedSpline__float4x4__float4x4* __this, double time, ::app::Uno::Float4x4* a, ::app::Uno::Float4x4* b, float* p)
{
    int i = __this->FindLeftIndex(time);
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4 ka = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(::app::Uno::Math__Max_8(NULL, i, 0));
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4 kb = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(::app::Uno::Math__Min_8(NULL, i + 1, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Count() - 1));
    *a = ka.Value;
    *b = kb.Value;

    if (ka.Time == kb.Time)
    {
        *p = 0.0f;
    }
    else
    {
        *p = KeyframedSpline__float4x4__float4x4__Map(NULL, ka.Time, kb.Time, time);
    }
}

void KeyframedSpline__float4x4__float4x4__FindValues_1(KeyframedSpline__float4x4__float4x4* __this, double time, ::app::Uno::Float4x4* a, ::app::Uno::Float4x4* b, ::app::Uno::Float4x4* c, ::app::Uno::Float4x4* d, float* p)
{
    int i = __this->FindLeftIndex(time);
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4 ka = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(::app::Uno::Math__Max_8(NULL, i - 1, 0));
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4 kb = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(::app::Uno::Math__Max_8(NULL, i, 0));
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4 kc = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(::app::Uno::Math__Min_8(NULL, i + 1, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Count() - 1));
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4 kd = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(::app::Uno::Math__Min_8(NULL, i + 2, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Count() - 1));
    *a = ka.Value;
    *b = kb.Value;
    *c = kc.Value;
    *d = kd.Value;

    if (kb.Time == kc.Time)
    {
        *p = 0.0f;
    }
    else
    {
        *p = KeyframedSpline__float4x4__float4x4__Map(NULL, kb.Time, kc.Time, time);
    }
}

double KeyframedSpline__float4x4__float4x4__get_End(KeyframedSpline__float4x4__float4x4* __this)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Count() - 1).Time;
}

int KeyframedSpline__float4x4__float4x4__get_KeyCount(KeyframedSpline__float4x4__float4x4* __this)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Count();
}

double KeyframedSpline__float4x4__float4x4__get_Start(KeyframedSpline__float4x4__float4x4* __this)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(0).Time;
}

double KeyframedSpline__float4x4__float4x4__GetTime(KeyframedSpline__float4x4__float4x4* __this, int index)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(index).Time;
}

::app::Uno::Float4x4 KeyframedSpline__float4x4__float4x4__GetValue(KeyframedSpline__float4x4__float4x4* __this, int index)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(index).Value;
}

float KeyframedSpline__float4x4__float4x4__Map(::uStatic* __this, double a, double b, double t)
{
    return (float)((t - a) / (b - a));
}

void KeyframedSpline__float4x4__float4x4__RemoveKey(KeyframedSpline__float4x4__float4x4* __this, int index)
{
    if ((__this->cache == (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Count() - 1)) && (__this->cache > 0))
    {
        __this->cache--;
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->RemoveAt(index);
}

int KeyframedSpline__float4x4__float4x4__SetTime(KeyframedSpline__float4x4__float4x4* __this, int index, double time)
{
    if (((index > 0) && (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(index - 1).Time > time)) || ((index < (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Count() - 1)) && (::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(index + 1).Time < time)))
    {
        ::app::Uno::Float4x4 v = __this->GetValue(index);
        __this->RemoveKey(index);
        return __this->AddKey(time, v);
    }
    else
    {
        ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(index, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4__New_1(NULL, time, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(index).Value));
        return index;
    }
}

void KeyframedSpline__float4x4__float4x4__SetValue(KeyframedSpline__float4x4__float4x4* __this, int index, ::app::Uno::Float4x4 value)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(index, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4__New_1(NULL, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*>(__this->keys)->Item(index).Time, value));
}

}}}}
