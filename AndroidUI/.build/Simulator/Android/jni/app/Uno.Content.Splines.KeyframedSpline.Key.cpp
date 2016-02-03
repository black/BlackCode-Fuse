#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float__float.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float2__float2.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float3__float3.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float4__float4.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float4x4__float4x4.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyframedSpline2_Key__float__float__uType* KeyframedSpline2_Key__float__float__typeof()
{
    static ::uStaticStrong<KeyframedSpline2_Key__float__float__uType*> type;
    if (type != NULL) return type;

    type = (KeyframedSpline2_Key__float__float__uType*)::uAllocStructType(sizeof(KeyframedSpline2_Key__float__float__uType), "Uno.Content.Splines.KeyframedSpline<float,float>.Key", sizeof(KeyframedSpline2_Key__float__float), 0, 0, 0);

    type->SetFields(2,
        ::uNewField("Time", NULL, offsetof(KeyframedSpline2_Key__float__float, Time), ::app::Uno::Double__typeof()),
        ::uNewField("Value", NULL, offsetof(KeyframedSpline2_Key__float__float, Value), ::app::Uno::Float__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", KeyframedSpline2_Key__float__float__New_1, 0, true, KeyframedSpline2_Key__float__float__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyframedSpline2_Key__float__float___ObjInit(KeyframedSpline2_Key__float__float* __this, double time, float value)
{
    __this->Time = time;
    __this->Value = value;
}

KeyframedSpline2_Key__float__float KeyframedSpline2_Key__float__float__New_1(::uStatic* __this, double time, float value)
{
    KeyframedSpline2_Key__float__float inst = ::uDefault< KeyframedSpline2_Key__float__float>();
    inst._ObjInit(time, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyframedSpline2_Key__float2__float2__uType* KeyframedSpline2_Key__float2__float2__typeof()
{
    static ::uStaticStrong<KeyframedSpline2_Key__float2__float2__uType*> type;
    if (type != NULL) return type;

    type = (KeyframedSpline2_Key__float2__float2__uType*)::uAllocStructType(sizeof(KeyframedSpline2_Key__float2__float2__uType), "Uno.Content.Splines.KeyframedSpline<float2,float2>.Key", sizeof(KeyframedSpline2_Key__float2__float2), 0, 0, 0);

    type->SetFields(2,
        ::uNewField("Time", NULL, offsetof(KeyframedSpline2_Key__float2__float2, Time), ::app::Uno::Double__typeof()),
        ::uNewField("Value", NULL, offsetof(KeyframedSpline2_Key__float2__float2, Value), ::app::Uno::Float2__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", KeyframedSpline2_Key__float2__float2__New_1, 0, true, KeyframedSpline2_Key__float2__float2__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyframedSpline2_Key__float2__float2___ObjInit(KeyframedSpline2_Key__float2__float2* __this, double time, ::app::Uno::Float2 value)
{
    __this->Time = time;
    __this->Value = value;
}

KeyframedSpline2_Key__float2__float2 KeyframedSpline2_Key__float2__float2__New_1(::uStatic* __this, double time, ::app::Uno::Float2 value)
{
    KeyframedSpline2_Key__float2__float2 inst = ::uDefault< KeyframedSpline2_Key__float2__float2>();
    inst._ObjInit(time, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyframedSpline2_Key__float3__float3__uType* KeyframedSpline2_Key__float3__float3__typeof()
{
    static ::uStaticStrong<KeyframedSpline2_Key__float3__float3__uType*> type;
    if (type != NULL) return type;

    type = (KeyframedSpline2_Key__float3__float3__uType*)::uAllocStructType(sizeof(KeyframedSpline2_Key__float3__float3__uType), "Uno.Content.Splines.KeyframedSpline<float3,float3>.Key", sizeof(KeyframedSpline2_Key__float3__float3), 0, 0, 0);

    type->SetFields(2,
        ::uNewField("Time", NULL, offsetof(KeyframedSpline2_Key__float3__float3, Time), ::app::Uno::Double__typeof()),
        ::uNewField("Value", NULL, offsetof(KeyframedSpline2_Key__float3__float3, Value), ::app::Uno::Float3__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", KeyframedSpline2_Key__float3__float3__New_1, 0, true, KeyframedSpline2_Key__float3__float3__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Float3__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyframedSpline2_Key__float3__float3___ObjInit(KeyframedSpline2_Key__float3__float3* __this, double time, ::app::Uno::Float3 value)
{
    __this->Time = time;
    __this->Value = value;
}

KeyframedSpline2_Key__float3__float3 KeyframedSpline2_Key__float3__float3__New_1(::uStatic* __this, double time, ::app::Uno::Float3 value)
{
    KeyframedSpline2_Key__float3__float3 inst = ::uDefault< KeyframedSpline2_Key__float3__float3>();
    inst._ObjInit(time, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyframedSpline2_Key__float4__float4__uType* KeyframedSpline2_Key__float4__float4__typeof()
{
    static ::uStaticStrong<KeyframedSpline2_Key__float4__float4__uType*> type;
    if (type != NULL) return type;

    type = (KeyframedSpline2_Key__float4__float4__uType*)::uAllocStructType(sizeof(KeyframedSpline2_Key__float4__float4__uType), "Uno.Content.Splines.KeyframedSpline<float4,float4>.Key", sizeof(KeyframedSpline2_Key__float4__float4), 0, 0, 0);

    type->SetFields(2,
        ::uNewField("Time", NULL, offsetof(KeyframedSpline2_Key__float4__float4, Time), ::app::Uno::Double__typeof()),
        ::uNewField("Value", NULL, offsetof(KeyframedSpline2_Key__float4__float4, Value), ::app::Uno::Float4__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", KeyframedSpline2_Key__float4__float4__New_1, 0, true, KeyframedSpline2_Key__float4__float4__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyframedSpline2_Key__float4__float4___ObjInit(KeyframedSpline2_Key__float4__float4* __this, double time, ::app::Uno::Float4 value)
{
    __this->Time = time;
    __this->Value = value;
}

KeyframedSpline2_Key__float4__float4 KeyframedSpline2_Key__float4__float4__New_1(::uStatic* __this, double time, ::app::Uno::Float4 value)
{
    KeyframedSpline2_Key__float4__float4 inst = ::uDefault< KeyframedSpline2_Key__float4__float4>();
    inst._ObjInit(time, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyframedSpline2_Key__float4x4__float4x4__uType* KeyframedSpline2_Key__float4x4__float4x4__typeof()
{
    static ::uStaticStrong<KeyframedSpline2_Key__float4x4__float4x4__uType*> type;
    if (type != NULL) return type;

    type = (KeyframedSpline2_Key__float4x4__float4x4__uType*)::uAllocStructType(sizeof(KeyframedSpline2_Key__float4x4__float4x4__uType), "Uno.Content.Splines.KeyframedSpline<float4x4,float4x4>.Key", sizeof(KeyframedSpline2_Key__float4x4__float4x4), 0, 0, 0);

    type->SetFields(2,
        ::uNewField("Time", NULL, offsetof(KeyframedSpline2_Key__float4x4__float4x4, Time), ::app::Uno::Double__typeof()),
        ::uNewField("Value", NULL, offsetof(KeyframedSpline2_Key__float4x4__float4x4, Value), ::app::Uno::Float4x4__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", KeyframedSpline2_Key__float4x4__float4x4__New_1, 0, true, KeyframedSpline2_Key__float4x4__float4x4__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Float4x4__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyframedSpline2_Key__float4x4__float4x4___ObjInit(KeyframedSpline2_Key__float4x4__float4x4* __this, double time, ::app::Uno::Float4x4 value)
{
    __this->Time = time;
    __this->Value = value;
}

KeyframedSpline2_Key__float4x4__float4x4 KeyframedSpline2_Key__float4x4__float4x4__New_1(::uStatic* __this, double time, ::app::Uno::Float4x4 value)
{
    KeyframedSpline2_Key__float4x4__float4x4 inst = ::uDefault< KeyframedSpline2_Key__float4x4__float4x4>();
    inst._ObjInit(time, value);
    return inst;
}

}}}}
