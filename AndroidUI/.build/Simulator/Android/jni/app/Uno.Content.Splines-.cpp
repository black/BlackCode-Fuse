#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float__float.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float2__float2.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float3__float3.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float4__float4.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float4x4__float4x4.h>
#include <app/Uno.Content.Splines.LinearSplineFloat.h>
#include <app/Uno.Content.Splines.LinearSplineFloat2.h>
#include <app/Uno.Content.Splines.LinearSplineFloat3.h>
#include <app/Uno.Content.Splines.LinearSplineFloat4.h>
#include <app/Uno.Content.Splines.LinearSplineFloat4x4.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Math.h>

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LinearSplineFloat__uType* LinearSplineFloat__typeof()
{
    static ::uStaticStrong<LinearSplineFloat__uType*> type;
    if (type != NULL) return type;

    type = (LinearSplineFloat__uType*)::uAllocClassType(sizeof(LinearSplineFloat__uType), "Uno.Content.Splines.LinearSplineFloat", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Content::Splines::KeyframedSpline__float__float__typeof());
    type->__fp_Sample_1 = (void(*)(::app::Uno::Content::Splines::Spline__float*, double, float*))LinearSplineFloat__Sample_1;

    type->SetFunctions(2,
        ::uNewFunction(".ctor", LinearSplineFloat__New_1, 0, true, LinearSplineFloat__typeof()),
        ::uNewFunction(".ctor", LinearSplineFloat__New_2, 0, true, LinearSplineFloat__typeof(), ::uGetArrayType(::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float__typeof())));

    ::uRegisterType(type);
    return type;
}

void LinearSplineFloat___ObjInit_3(LinearSplineFloat* __this)
{
    ::app::Uno::Content::Splines::KeyframedSpline__float__float___ObjInit_1(__this);
}

void LinearSplineFloat___ObjInit_4(LinearSplineFloat* __this, ::uArray* keys)
{
    ::app::Uno::Content::Splines::KeyframedSpline__float__float___ObjInit_2(__this, keys);
}

LinearSplineFloat* LinearSplineFloat__New_1(::uStatic* __this)
{
    LinearSplineFloat* inst = (LinearSplineFloat*)::uAllocObject(sizeof(LinearSplineFloat), LinearSplineFloat__typeof());
    inst->_ObjInit_3();
    return inst;
}

LinearSplineFloat* LinearSplineFloat__New_2(::uStatic* __this, ::uArray* keys)
{
    LinearSplineFloat* inst = (LinearSplineFloat*)::uAllocObject(sizeof(LinearSplineFloat), LinearSplineFloat__typeof());
    inst->_ObjInit_4(keys);
    return inst;
}

void LinearSplineFloat__Sample_1(LinearSplineFloat* __this, double t, float* result)
{
    float a = float();
    float b = float();
    float p = float();
    __this->FindValues(t, &a, &b, &p);
    *result = a + ((b - a) * ::app::Uno::Math__Saturate_1(NULL, p));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LinearSplineFloat2__uType* LinearSplineFloat2__typeof()
{
    static ::uStaticStrong<LinearSplineFloat2__uType*> type;
    if (type != NULL) return type;

    type = (LinearSplineFloat2__uType*)::uAllocClassType(sizeof(LinearSplineFloat2__uType), "Uno.Content.Splines.LinearSplineFloat2", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Content::Splines::KeyframedSpline__float2__float2__typeof());
    type->__fp_Sample_1 = (void(*)(::app::Uno::Content::Splines::Spline__float2*, double, ::app::Uno::Float2*))LinearSplineFloat2__Sample_1;

    type->SetFunctions(2,
        ::uNewFunction(".ctor", LinearSplineFloat2__New_1, 0, true, LinearSplineFloat2__typeof()),
        ::uNewFunction(".ctor", LinearSplineFloat2__New_2, 0, true, LinearSplineFloat2__typeof(), ::uGetArrayType(::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2__typeof())));

    ::uRegisterType(type);
    return type;
}

void LinearSplineFloat2___ObjInit_3(LinearSplineFloat2* __this)
{
    ::app::Uno::Content::Splines::KeyframedSpline__float2__float2___ObjInit_1(__this);
}

void LinearSplineFloat2___ObjInit_4(LinearSplineFloat2* __this, ::uArray* keys)
{
    ::app::Uno::Content::Splines::KeyframedSpline__float2__float2___ObjInit_2(__this, keys);
}

LinearSplineFloat2* LinearSplineFloat2__New_1(::uStatic* __this)
{
    LinearSplineFloat2* inst = (LinearSplineFloat2*)::uAllocObject(sizeof(LinearSplineFloat2), LinearSplineFloat2__typeof());
    inst->_ObjInit_3();
    return inst;
}

LinearSplineFloat2* LinearSplineFloat2__New_2(::uStatic* __this, ::uArray* keys)
{
    LinearSplineFloat2* inst = (LinearSplineFloat2*)::uAllocObject(sizeof(LinearSplineFloat2), LinearSplineFloat2__typeof());
    inst->_ObjInit_4(keys);
    return inst;
}

void LinearSplineFloat2__Sample_1(LinearSplineFloat2* __this, double t, ::app::Uno::Float2* result)
{
    ::app::Uno::Float2 a = ::app::Uno::Float2();
    ::app::Uno::Float2 b = ::app::Uno::Float2();
    float p = float();
    __this->FindValues(t, &a, &b, &p);
    *result = ::app::Uno::Float2__op_Addition_2(NULL, a, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, b, a), ::app::Uno::Math__Saturate_1(NULL, p)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LinearSplineFloat3__uType* LinearSplineFloat3__typeof()
{
    static ::uStaticStrong<LinearSplineFloat3__uType*> type;
    if (type != NULL) return type;

    type = (LinearSplineFloat3__uType*)::uAllocClassType(sizeof(LinearSplineFloat3__uType), "Uno.Content.Splines.LinearSplineFloat3", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Content::Splines::KeyframedSpline__float3__float3__typeof());
    type->__fp_Sample_1 = (void(*)(::app::Uno::Content::Splines::Spline__float3*, double, ::app::Uno::Float3*))LinearSplineFloat3__Sample_1;

    type->SetFunctions(2,
        ::uNewFunction(".ctor", LinearSplineFloat3__New_1, 0, true, LinearSplineFloat3__typeof()),
        ::uNewFunction(".ctor", LinearSplineFloat3__New_2, 0, true, LinearSplineFloat3__typeof(), ::uGetArrayType(::app::Uno::Content::Splines::KeyframedSpline2_Key__float3__float3__typeof())));

    ::uRegisterType(type);
    return type;
}

void LinearSplineFloat3___ObjInit_3(LinearSplineFloat3* __this)
{
    ::app::Uno::Content::Splines::KeyframedSpline__float3__float3___ObjInit_1(__this);
}

void LinearSplineFloat3___ObjInit_4(LinearSplineFloat3* __this, ::uArray* keys)
{
    ::app::Uno::Content::Splines::KeyframedSpline__float3__float3___ObjInit_2(__this, keys);
}

LinearSplineFloat3* LinearSplineFloat3__New_1(::uStatic* __this)
{
    LinearSplineFloat3* inst = (LinearSplineFloat3*)::uAllocObject(sizeof(LinearSplineFloat3), LinearSplineFloat3__typeof());
    inst->_ObjInit_3();
    return inst;
}

LinearSplineFloat3* LinearSplineFloat3__New_2(::uStatic* __this, ::uArray* keys)
{
    LinearSplineFloat3* inst = (LinearSplineFloat3*)::uAllocObject(sizeof(LinearSplineFloat3), LinearSplineFloat3__typeof());
    inst->_ObjInit_4(keys);
    return inst;
}

void LinearSplineFloat3__Sample_1(LinearSplineFloat3* __this, double t, ::app::Uno::Float3* result)
{
    ::app::Uno::Float3 a = ::app::Uno::Float3();
    ::app::Uno::Float3 b = ::app::Uno::Float3();
    float p = float();
    __this->FindValues(t, &a, &b, &p);
    *result = ::app::Uno::Float3__op_Addition_2(NULL, a, ::app::Uno::Float3__op_Multiply_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, b, a), ::app::Uno::Math__Saturate_1(NULL, p)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LinearSplineFloat4__uType* LinearSplineFloat4__typeof()
{
    static ::uStaticStrong<LinearSplineFloat4__uType*> type;
    if (type != NULL) return type;

    type = (LinearSplineFloat4__uType*)::uAllocClassType(sizeof(LinearSplineFloat4__uType), "Uno.Content.Splines.LinearSplineFloat4", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Content::Splines::KeyframedSpline__float4__float4__typeof());
    type->__fp_Sample_1 = (void(*)(::app::Uno::Content::Splines::Spline__float4*, double, ::app::Uno::Float4*))LinearSplineFloat4__Sample_1;

    type->SetFunctions(2,
        ::uNewFunction(".ctor", LinearSplineFloat4__New_1, 0, true, LinearSplineFloat4__typeof()),
        ::uNewFunction(".ctor", LinearSplineFloat4__New_2, 0, true, LinearSplineFloat4__typeof(), ::uGetArrayType(::app::Uno::Content::Splines::KeyframedSpline2_Key__float4__float4__typeof())));

    ::uRegisterType(type);
    return type;
}

void LinearSplineFloat4___ObjInit_3(LinearSplineFloat4* __this)
{
    ::app::Uno::Content::Splines::KeyframedSpline__float4__float4___ObjInit_1(__this);
}

void LinearSplineFloat4___ObjInit_4(LinearSplineFloat4* __this, ::uArray* keys)
{
    ::app::Uno::Content::Splines::KeyframedSpline__float4__float4___ObjInit_2(__this, keys);
}

LinearSplineFloat4* LinearSplineFloat4__New_1(::uStatic* __this)
{
    LinearSplineFloat4* inst = (LinearSplineFloat4*)::uAllocObject(sizeof(LinearSplineFloat4), LinearSplineFloat4__typeof());
    inst->_ObjInit_3();
    return inst;
}

LinearSplineFloat4* LinearSplineFloat4__New_2(::uStatic* __this, ::uArray* keys)
{
    LinearSplineFloat4* inst = (LinearSplineFloat4*)::uAllocObject(sizeof(LinearSplineFloat4), LinearSplineFloat4__typeof());
    inst->_ObjInit_4(keys);
    return inst;
}

void LinearSplineFloat4__Sample_1(LinearSplineFloat4* __this, double t, ::app::Uno::Float4* result)
{
    ::app::Uno::Float4 a = ::app::Uno::Float4();
    ::app::Uno::Float4 b = ::app::Uno::Float4();
    float p = float();
    __this->FindValues(t, &a, &b, &p);
    *result = ::app::Uno::Float4__op_Addition_2(NULL, a, ::app::Uno::Float4__op_Multiply_1(NULL, ::app::Uno::Float4__op_Subtraction_2(NULL, b, a), ::app::Uno::Math__Saturate_1(NULL, p)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LinearSplineFloat4x4__uType* LinearSplineFloat4x4__typeof()
{
    static ::uStaticStrong<LinearSplineFloat4x4__uType*> type;
    if (type != NULL) return type;

    type = (LinearSplineFloat4x4__uType*)::uAllocClassType(sizeof(LinearSplineFloat4x4__uType), "Uno.Content.Splines.LinearSplineFloat4x4", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Content::Splines::KeyframedSpline__float4x4__float4x4__typeof());
    type->__fp_Sample_1 = (void(*)(::app::Uno::Content::Splines::Spline__float4x4*, double, ::app::Uno::Float4x4*))LinearSplineFloat4x4__Sample_1;

    type->SetFunctions(2,
        ::uNewFunction(".ctor", LinearSplineFloat4x4__New_1, 0, true, LinearSplineFloat4x4__typeof()),
        ::uNewFunction(".ctor", LinearSplineFloat4x4__New_2, 0, true, LinearSplineFloat4x4__typeof(), ::uGetArrayType(::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4__typeof())));

    ::uRegisterType(type);
    return type;
}

void LinearSplineFloat4x4___ObjInit_3(LinearSplineFloat4x4* __this)
{
    ::app::Uno::Content::Splines::KeyframedSpline__float4x4__float4x4___ObjInit_1(__this);
}

void LinearSplineFloat4x4___ObjInit_4(LinearSplineFloat4x4* __this, ::uArray* keys)
{
    ::app::Uno::Content::Splines::KeyframedSpline__float4x4__float4x4___ObjInit_2(__this, keys);
}

LinearSplineFloat4x4* LinearSplineFloat4x4__New_1(::uStatic* __this)
{
    LinearSplineFloat4x4* inst = (LinearSplineFloat4x4*)::uAllocObject(sizeof(LinearSplineFloat4x4), LinearSplineFloat4x4__typeof());
    inst->_ObjInit_3();
    return inst;
}

LinearSplineFloat4x4* LinearSplineFloat4x4__New_2(::uStatic* __this, ::uArray* keys)
{
    LinearSplineFloat4x4* inst = (LinearSplineFloat4x4*)::uAllocObject(sizeof(LinearSplineFloat4x4), LinearSplineFloat4x4__typeof());
    inst->_ObjInit_4(keys);
    return inst;
}

void LinearSplineFloat4x4__Sample_1(LinearSplineFloat4x4* __this, double t, ::app::Uno::Float4x4* result)
{
    ::app::Uno::Float4x4 a = ::app::Uno::Float4x4();
    ::app::Uno::Float4x4 b = ::app::Uno::Float4x4();
    float p = float();
    __this->FindValues(t, &a, &b, &p);
    *result = ::app::Uno::Float4x4__op_Addition(NULL, a, ::app::Uno::Float4x4__op_Multiply(NULL, ::app::Uno::Float4x4__op_Subtraction(NULL, b, a), ::app::Uno::Math__Saturate_1(NULL, p)));
}

}}}}
