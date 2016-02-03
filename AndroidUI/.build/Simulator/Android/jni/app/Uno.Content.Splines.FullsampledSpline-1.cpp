#include <app/Uno.Content.Splines.FullsampledSpline__float.h>
#include <app/Uno.Content.Splines.FullsampledSpline__float2.h>
#include <app/Uno.Content.Splines.FullsampledSpline__float3.h>
#include <app/Uno.Content.Splines.FullsampledSpline__float4.h>
#include <app/Uno.Content.Splines.FullsampledSpline__float4x4.h>
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

FullsampledSpline__float__uType* FullsampledSpline__float__typeof()
{
    static ::uStaticStrong<FullsampledSpline__float__uType*> type;
    if (type != NULL) return type;

    type = (FullsampledSpline__float__uType*)::uAllocClassType(sizeof(FullsampledSpline__float__uType), "Uno.Content.Splines.FullsampledSpline<float>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Content::Splines::Spline__float__typeof());
    type->__fp_get_End = (double(*)(::app::Uno::Content::Splines::Spline__float*))FullsampledSpline__float__get_End;
    type->__fp_get_Start = (double(*)(::app::Uno::Content::Splines::Spline__float*))FullsampledSpline__float__get_Start;
    type->__fp_Sample_1 = (void(*)(::app::Uno::Content::Splines::Spline__float*, double, float*))FullsampledSpline__float__Sample_1;

    type->SetStrongRefs(
        "_frames", offsetof(FullsampledSpline__float, _frames));

    type->SetFields(3,
        ::uNewField("_fps", NULL, offsetof(FullsampledSpline__float, _fps), ::app::Uno::Double__typeof()),
        ::uNewField("_frames", NULL, offsetof(FullsampledSpline__float, _frames), ::uGetArrayType(::app::Uno::Float__typeof())),
        ::uNewField("_start", NULL, offsetof(FullsampledSpline__float, _start), ::app::Uno::Double__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", FullsampledSpline__float__New_1, 0, true, FullsampledSpline__float__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::uGetArrayType(::app::Uno::Float__typeof())));

    ::uRegisterType(type);
    return type;
}

void FullsampledSpline__float___ObjInit_1(FullsampledSpline__float* __this, double start, double fps, ::uArray* frames)
{
    ::app::Uno::Content::Splines::Spline__float___ObjInit(__this);
    __this->_start = start;
    __this->_fps = fps;
    __this->_frames = frames;
}

double FullsampledSpline__float__get_End(FullsampledSpline__float* __this)
{
    return __this->_start + ((double)(::uPtr< ::uArray*>(__this->_frames)->Length() - 1) / __this->_fps);
}

double FullsampledSpline__float__get_Start(FullsampledSpline__float* __this)
{
    return __this->_start;
}

FullsampledSpline__float* FullsampledSpline__float__New_1(::uStatic* __this, double start, double fps, ::uArray* frames)
{
    FullsampledSpline__float* inst = (FullsampledSpline__float*)::uAllocObject(sizeof(FullsampledSpline__float), FullsampledSpline__float__typeof());
    inst->_ObjInit_1(start, fps, frames);
    return inst;
}

void FullsampledSpline__float__Sample_1(FullsampledSpline__float* __this, double time, float* result)
{
    int index = ::app::Uno::Math__Clamp_8(NULL, (int)((time - __this->_start) * __this->_fps), 0, ::uPtr< ::uArray*>(__this->_frames)->Length() - 1);
    *result = ::uPtr< ::uArray*>(__this->_frames)->Item< float>(index);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FullsampledSpline__float2__uType* FullsampledSpline__float2__typeof()
{
    static ::uStaticStrong<FullsampledSpline__float2__uType*> type;
    if (type != NULL) return type;

    type = (FullsampledSpline__float2__uType*)::uAllocClassType(sizeof(FullsampledSpline__float2__uType), "Uno.Content.Splines.FullsampledSpline<float2>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Content::Splines::Spline__float2__typeof());
    type->__fp_get_End = (double(*)(::app::Uno::Content::Splines::Spline__float2*))FullsampledSpline__float2__get_End;
    type->__fp_get_Start = (double(*)(::app::Uno::Content::Splines::Spline__float2*))FullsampledSpline__float2__get_Start;
    type->__fp_Sample_1 = (void(*)(::app::Uno::Content::Splines::Spline__float2*, double, ::app::Uno::Float2*))FullsampledSpline__float2__Sample_1;

    type->SetStrongRefs(
        "_frames", offsetof(FullsampledSpline__float2, _frames));

    type->SetFields(3,
        ::uNewField("_fps", NULL, offsetof(FullsampledSpline__float2, _fps), ::app::Uno::Double__typeof()),
        ::uNewField("_frames", NULL, offsetof(FullsampledSpline__float2, _frames), ::uGetArrayType(::app::Uno::Float2__typeof())),
        ::uNewField("_start", NULL, offsetof(FullsampledSpline__float2, _start), ::app::Uno::Double__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", FullsampledSpline__float2__New_1, 0, true, FullsampledSpline__float2__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::uGetArrayType(::app::Uno::Float2__typeof())));

    ::uRegisterType(type);
    return type;
}

void FullsampledSpline__float2___ObjInit_1(FullsampledSpline__float2* __this, double start, double fps, ::uArray* frames)
{
    ::app::Uno::Content::Splines::Spline__float2___ObjInit(__this);
    __this->_start = start;
    __this->_fps = fps;
    __this->_frames = frames;
}

double FullsampledSpline__float2__get_End(FullsampledSpline__float2* __this)
{
    return __this->_start + ((double)(::uPtr< ::uArray*>(__this->_frames)->Length() - 1) / __this->_fps);
}

double FullsampledSpline__float2__get_Start(FullsampledSpline__float2* __this)
{
    return __this->_start;
}

FullsampledSpline__float2* FullsampledSpline__float2__New_1(::uStatic* __this, double start, double fps, ::uArray* frames)
{
    FullsampledSpline__float2* inst = (FullsampledSpline__float2*)::uAllocObject(sizeof(FullsampledSpline__float2), FullsampledSpline__float2__typeof());
    inst->_ObjInit_1(start, fps, frames);
    return inst;
}

void FullsampledSpline__float2__Sample_1(FullsampledSpline__float2* __this, double time, ::app::Uno::Float2* result)
{
    int index = ::app::Uno::Math__Clamp_8(NULL, (int)((time - __this->_start) * __this->_fps), 0, ::uPtr< ::uArray*>(__this->_frames)->Length() - 1);
    *result = ::uPtr< ::uArray*>(__this->_frames)->Item< ::app::Uno::Float2>(index);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FullsampledSpline__float3__uType* FullsampledSpline__float3__typeof()
{
    static ::uStaticStrong<FullsampledSpline__float3__uType*> type;
    if (type != NULL) return type;

    type = (FullsampledSpline__float3__uType*)::uAllocClassType(sizeof(FullsampledSpline__float3__uType), "Uno.Content.Splines.FullsampledSpline<float3>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Content::Splines::Spline__float3__typeof());
    type->__fp_get_End = (double(*)(::app::Uno::Content::Splines::Spline__float3*))FullsampledSpline__float3__get_End;
    type->__fp_get_Start = (double(*)(::app::Uno::Content::Splines::Spline__float3*))FullsampledSpline__float3__get_Start;
    type->__fp_Sample_1 = (void(*)(::app::Uno::Content::Splines::Spline__float3*, double, ::app::Uno::Float3*))FullsampledSpline__float3__Sample_1;

    type->SetStrongRefs(
        "_frames", offsetof(FullsampledSpline__float3, _frames));

    type->SetFields(3,
        ::uNewField("_fps", NULL, offsetof(FullsampledSpline__float3, _fps), ::app::Uno::Double__typeof()),
        ::uNewField("_frames", NULL, offsetof(FullsampledSpline__float3, _frames), ::uGetArrayType(::app::Uno::Float3__typeof())),
        ::uNewField("_start", NULL, offsetof(FullsampledSpline__float3, _start), ::app::Uno::Double__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", FullsampledSpline__float3__New_1, 0, true, FullsampledSpline__float3__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::uGetArrayType(::app::Uno::Float3__typeof())));

    ::uRegisterType(type);
    return type;
}

void FullsampledSpline__float3___ObjInit_1(FullsampledSpline__float3* __this, double start, double fps, ::uArray* frames)
{
    ::app::Uno::Content::Splines::Spline__float3___ObjInit(__this);
    __this->_start = start;
    __this->_fps = fps;
    __this->_frames = frames;
}

double FullsampledSpline__float3__get_End(FullsampledSpline__float3* __this)
{
    return __this->_start + ((double)(::uPtr< ::uArray*>(__this->_frames)->Length() - 1) / __this->_fps);
}

double FullsampledSpline__float3__get_Start(FullsampledSpline__float3* __this)
{
    return __this->_start;
}

FullsampledSpline__float3* FullsampledSpline__float3__New_1(::uStatic* __this, double start, double fps, ::uArray* frames)
{
    FullsampledSpline__float3* inst = (FullsampledSpline__float3*)::uAllocObject(sizeof(FullsampledSpline__float3), FullsampledSpline__float3__typeof());
    inst->_ObjInit_1(start, fps, frames);
    return inst;
}

void FullsampledSpline__float3__Sample_1(FullsampledSpline__float3* __this, double time, ::app::Uno::Float3* result)
{
    int index = ::app::Uno::Math__Clamp_8(NULL, (int)((time - __this->_start) * __this->_fps), 0, ::uPtr< ::uArray*>(__this->_frames)->Length() - 1);
    *result = ::uPtr< ::uArray*>(__this->_frames)->Item< ::app::Uno::Float3>(index);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FullsampledSpline__float4__uType* FullsampledSpline__float4__typeof()
{
    static ::uStaticStrong<FullsampledSpline__float4__uType*> type;
    if (type != NULL) return type;

    type = (FullsampledSpline__float4__uType*)::uAllocClassType(sizeof(FullsampledSpline__float4__uType), "Uno.Content.Splines.FullsampledSpline<float4>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Content::Splines::Spline__float4__typeof());
    type->__fp_get_End = (double(*)(::app::Uno::Content::Splines::Spline__float4*))FullsampledSpline__float4__get_End;
    type->__fp_get_Start = (double(*)(::app::Uno::Content::Splines::Spline__float4*))FullsampledSpline__float4__get_Start;
    type->__fp_Sample_1 = (void(*)(::app::Uno::Content::Splines::Spline__float4*, double, ::app::Uno::Float4*))FullsampledSpline__float4__Sample_1;

    type->SetStrongRefs(
        "_frames", offsetof(FullsampledSpline__float4, _frames));

    type->SetFields(3,
        ::uNewField("_fps", NULL, offsetof(FullsampledSpline__float4, _fps), ::app::Uno::Double__typeof()),
        ::uNewField("_frames", NULL, offsetof(FullsampledSpline__float4, _frames), ::uGetArrayType(::app::Uno::Float4__typeof())),
        ::uNewField("_start", NULL, offsetof(FullsampledSpline__float4, _start), ::app::Uno::Double__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", FullsampledSpline__float4__New_1, 0, true, FullsampledSpline__float4__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::uGetArrayType(::app::Uno::Float4__typeof())));

    ::uRegisterType(type);
    return type;
}

void FullsampledSpline__float4___ObjInit_1(FullsampledSpline__float4* __this, double start, double fps, ::uArray* frames)
{
    ::app::Uno::Content::Splines::Spline__float4___ObjInit(__this);
    __this->_start = start;
    __this->_fps = fps;
    __this->_frames = frames;
}

double FullsampledSpline__float4__get_End(FullsampledSpline__float4* __this)
{
    return __this->_start + ((double)(::uPtr< ::uArray*>(__this->_frames)->Length() - 1) / __this->_fps);
}

double FullsampledSpline__float4__get_Start(FullsampledSpline__float4* __this)
{
    return __this->_start;
}

FullsampledSpline__float4* FullsampledSpline__float4__New_1(::uStatic* __this, double start, double fps, ::uArray* frames)
{
    FullsampledSpline__float4* inst = (FullsampledSpline__float4*)::uAllocObject(sizeof(FullsampledSpline__float4), FullsampledSpline__float4__typeof());
    inst->_ObjInit_1(start, fps, frames);
    return inst;
}

void FullsampledSpline__float4__Sample_1(FullsampledSpline__float4* __this, double time, ::app::Uno::Float4* result)
{
    int index = ::app::Uno::Math__Clamp_8(NULL, (int)((time - __this->_start) * __this->_fps), 0, ::uPtr< ::uArray*>(__this->_frames)->Length() - 1);
    *result = ::uPtr< ::uArray*>(__this->_frames)->Item< ::app::Uno::Float4>(index);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FullsampledSpline__float4x4__uType* FullsampledSpline__float4x4__typeof()
{
    static ::uStaticStrong<FullsampledSpline__float4x4__uType*> type;
    if (type != NULL) return type;

    type = (FullsampledSpline__float4x4__uType*)::uAllocClassType(sizeof(FullsampledSpline__float4x4__uType), "Uno.Content.Splines.FullsampledSpline<float4x4>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Content::Splines::Spline__float4x4__typeof());
    type->__fp_get_End = (double(*)(::app::Uno::Content::Splines::Spline__float4x4*))FullsampledSpline__float4x4__get_End;
    type->__fp_get_Start = (double(*)(::app::Uno::Content::Splines::Spline__float4x4*))FullsampledSpline__float4x4__get_Start;
    type->__fp_Sample_1 = (void(*)(::app::Uno::Content::Splines::Spline__float4x4*, double, ::app::Uno::Float4x4*))FullsampledSpline__float4x4__Sample_1;

    type->SetStrongRefs(
        "_frames", offsetof(FullsampledSpline__float4x4, _frames));

    type->SetFields(3,
        ::uNewField("_fps", NULL, offsetof(FullsampledSpline__float4x4, _fps), ::app::Uno::Double__typeof()),
        ::uNewField("_frames", NULL, offsetof(FullsampledSpline__float4x4, _frames), ::uGetArrayType(::app::Uno::Float4x4__typeof())),
        ::uNewField("_start", NULL, offsetof(FullsampledSpline__float4x4, _start), ::app::Uno::Double__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", FullsampledSpline__float4x4__New_1, 0, true, FullsampledSpline__float4x4__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::uGetArrayType(::app::Uno::Float4x4__typeof())));

    ::uRegisterType(type);
    return type;
}

void FullsampledSpline__float4x4___ObjInit_1(FullsampledSpline__float4x4* __this, double start, double fps, ::uArray* frames)
{
    ::app::Uno::Content::Splines::Spline__float4x4___ObjInit(__this);
    __this->_start = start;
    __this->_fps = fps;
    __this->_frames = frames;
}

double FullsampledSpline__float4x4__get_End(FullsampledSpline__float4x4* __this)
{
    return __this->_start + ((double)(::uPtr< ::uArray*>(__this->_frames)->Length() - 1) / __this->_fps);
}

double FullsampledSpline__float4x4__get_Start(FullsampledSpline__float4x4* __this)
{
    return __this->_start;
}

FullsampledSpline__float4x4* FullsampledSpline__float4x4__New_1(::uStatic* __this, double start, double fps, ::uArray* frames)
{
    FullsampledSpline__float4x4* inst = (FullsampledSpline__float4x4*)::uAllocObject(sizeof(FullsampledSpline__float4x4), FullsampledSpline__float4x4__typeof());
    inst->_ObjInit_1(start, fps, frames);
    return inst;
}

void FullsampledSpline__float4x4__Sample_1(FullsampledSpline__float4x4* __this, double time, ::app::Uno::Float4x4* result)
{
    int index = ::app::Uno::Math__Clamp_8(NULL, (int)((time - __this->_start) * __this->_fps), 0, ::uPtr< ::uArray*>(__this->_frames)->Length() - 1);
    *result = ::uPtr< ::uArray*>(__this->_frames)->Item< ::app::Uno::Float4x4>(index);
}

}}}}
