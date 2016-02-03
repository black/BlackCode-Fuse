#include <app/Uno.Content.Splines.Spline__float.h>
#include <app/Uno.Content.Splines.Spline__float2.h>
#include <app/Uno.Content.Splines.Spline__float3.h>
#include <app/Uno.Content.Splines.Spline__float4.h>
#include <app/Uno.Content.Splines.Spline__float4x4.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Spline__float__uType* Spline__float__typeof()
{
    static ::uStaticStrong<Spline__float__uType*> type;
    if (type != NULL) return type;

    type = (Spline__float__uType*)::uAllocClassType(sizeof(Spline__float__uType), "Uno.Content.Splines.Spline<float>", false, 0, 0, 0);

    type->SetFunctions(6,
        ::uNewFunction("get_End", type->__fp_get_End, offsetof(Spline__float__uType, __fp_get_End), false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_First", Spline__float__get_First, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Last", Spline__float__get_Last, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Start", type->__fp_get_Start, offsetof(Spline__float__uType, __fp_get_Start), false, ::app::Uno::Double__typeof()),
        ::uNewFunction("Sample", Spline__float__Sample, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("Sample", type->__fp_Sample_1, offsetof(Spline__float__uType, __fp_Sample_1), false, ::app::Uno::Double__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Spline__float___ObjInit(Spline__float* __this)
{
}

float Spline__float__get_First(Spline__float* __this)
{
    return __this->Sample(__this->Start());
}

float Spline__float__get_Last(Spline__float* __this)
{
    return __this->Sample(__this->End());
}

float Spline__float__Sample(Spline__float* __this, double time)
{
    float result = float();
    __this->Sample_1(time, &result);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Spline__float2__uType* Spline__float2__typeof()
{
    static ::uStaticStrong<Spline__float2__uType*> type;
    if (type != NULL) return type;

    type = (Spline__float2__uType*)::uAllocClassType(sizeof(Spline__float2__uType), "Uno.Content.Splines.Spline<float2>", false, 0, 0, 0);

    type->SetFunctions(6,
        ::uNewFunction("get_End", type->__fp_get_End, offsetof(Spline__float2__uType, __fp_get_End), false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_First", Spline__float2__get_First, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Last", Spline__float2__get_Last, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Start", type->__fp_get_Start, offsetof(Spline__float2__uType, __fp_get_Start), false, ::app::Uno::Double__typeof()),
        ::uNewFunction("Sample", Spline__float2__Sample, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("Sample", type->__fp_Sample_1, offsetof(Spline__float2__uType, __fp_Sample_1), false, ::app::Uno::Double__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void Spline__float2___ObjInit(Spline__float2* __this)
{
}

::app::Uno::Float2 Spline__float2__get_First(Spline__float2* __this)
{
    return __this->Sample(__this->Start());
}

::app::Uno::Float2 Spline__float2__get_Last(Spline__float2* __this)
{
    return __this->Sample(__this->End());
}

::app::Uno::Float2 Spline__float2__Sample(Spline__float2* __this, double time)
{
    ::app::Uno::Float2 result = ::app::Uno::Float2();
    __this->Sample_1(time, &result);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Spline__float3__uType* Spline__float3__typeof()
{
    static ::uStaticStrong<Spline__float3__uType*> type;
    if (type != NULL) return type;

    type = (Spline__float3__uType*)::uAllocClassType(sizeof(Spline__float3__uType), "Uno.Content.Splines.Spline<float3>", false, 0, 0, 0);

    type->SetFunctions(6,
        ::uNewFunction("get_End", type->__fp_get_End, offsetof(Spline__float3__uType, __fp_get_End), false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_First", Spline__float3__get_First, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_Last", Spline__float3__get_Last, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_Start", type->__fp_get_Start, offsetof(Spline__float3__uType, __fp_get_Start), false, ::app::Uno::Double__typeof()),
        ::uNewFunction("Sample", Spline__float3__Sample, 0, false, ::app::Uno::Float3__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("Sample", type->__fp_Sample_1, offsetof(Spline__float3__uType, __fp_Sample_1), false, ::app::Uno::Double__typeof(), ::app::Uno::Float3__typeof()));

    ::uRegisterType(type);
    return type;
}

void Spline__float3___ObjInit(Spline__float3* __this)
{
}

::app::Uno::Float3 Spline__float3__get_First(Spline__float3* __this)
{
    return __this->Sample(__this->Start());
}

::app::Uno::Float3 Spline__float3__get_Last(Spline__float3* __this)
{
    return __this->Sample(__this->End());
}

::app::Uno::Float3 Spline__float3__Sample(Spline__float3* __this, double time)
{
    ::app::Uno::Float3 result = ::app::Uno::Float3();
    __this->Sample_1(time, &result);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Spline__float4__uType* Spline__float4__typeof()
{
    static ::uStaticStrong<Spline__float4__uType*> type;
    if (type != NULL) return type;

    type = (Spline__float4__uType*)::uAllocClassType(sizeof(Spline__float4__uType), "Uno.Content.Splines.Spline<float4>", false, 0, 0, 0);

    type->SetFunctions(6,
        ::uNewFunction("get_End", type->__fp_get_End, offsetof(Spline__float4__uType, __fp_get_End), false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_First", Spline__float4__get_First, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_Last", Spline__float4__get_Last, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_Start", type->__fp_get_Start, offsetof(Spline__float4__uType, __fp_get_Start), false, ::app::Uno::Double__typeof()),
        ::uNewFunction("Sample", Spline__float4__Sample, 0, false, ::app::Uno::Float4__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("Sample", type->__fp_Sample_1, offsetof(Spline__float4__uType, __fp_Sample_1), false, ::app::Uno::Double__typeof(), ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void Spline__float4___ObjInit(Spline__float4* __this)
{
}

::app::Uno::Float4 Spline__float4__get_First(Spline__float4* __this)
{
    return __this->Sample(__this->Start());
}

::app::Uno::Float4 Spline__float4__get_Last(Spline__float4* __this)
{
    return __this->Sample(__this->End());
}

::app::Uno::Float4 Spline__float4__Sample(Spline__float4* __this, double time)
{
    ::app::Uno::Float4 result = ::app::Uno::Float4();
    __this->Sample_1(time, &result);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Spline__float4x4__uType* Spline__float4x4__typeof()
{
    static ::uStaticStrong<Spline__float4x4__uType*> type;
    if (type != NULL) return type;

    type = (Spline__float4x4__uType*)::uAllocClassType(sizeof(Spline__float4x4__uType), "Uno.Content.Splines.Spline<float4x4>", false, 0, 0, 0);

    type->SetFunctions(6,
        ::uNewFunction("get_End", type->__fp_get_End, offsetof(Spline__float4x4__uType, __fp_get_End), false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_First", Spline__float4x4__get_First, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_Last", Spline__float4x4__get_Last, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_Start", type->__fp_get_Start, offsetof(Spline__float4x4__uType, __fp_get_Start), false, ::app::Uno::Double__typeof()),
        ::uNewFunction("Sample", Spline__float4x4__Sample, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("Sample", type->__fp_Sample_1, offsetof(Spline__float4x4__uType, __fp_Sample_1), false, ::app::Uno::Double__typeof(), ::app::Uno::Float4x4__typeof()));

    ::uRegisterType(type);
    return type;
}

void Spline__float4x4___ObjInit(Spline__float4x4* __this)
{
}

::app::Uno::Float4x4 Spline__float4x4__get_First(Spline__float4x4* __this)
{
    return __this->Sample(__this->Start());
}

::app::Uno::Float4x4 Spline__float4x4__get_Last(Spline__float4x4* __this)
{
    return __this->Sample(__this->End());
}

::app::Uno::Float4x4 Spline__float4x4__Sample(Spline__float4x4* __this, double time)
{
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4();
    __this->Sample_1(time, &result);
    return result;
}

}}}}
