#include <app/Uno.Bool.h>
#include <app/Uno.Content.Models.ModelParameterAnimation__float.h>
#include <app/Uno.Content.Models.ModelParameterAnimation__float2.h>
#include <app/Uno.Content.Models.ModelParameterAnimation__float3.h>
#include <app/Uno.Content.Models.ModelParameterAnimation__float4.h>
#include <app/Uno.Content.Models.ModelParameterAnimation__float4x4.h>
#include <app/Uno.Content.Models.ModelParameterType.h>
#include <app/Uno.Content.Models.ModelParameterValueType.h>
#include <app/Uno.Content.Splines.Spline__float.h>
#include <app/Uno.Content.Splines.Spline__float2.h>
#include <app/Uno.Content.Splines.Spline__float3.h>
#include <app/Uno.Content.Splines.Spline__float4.h>
#include <app/Uno.Content.Splines.Spline__float4x4.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>

namespace app {
namespace Uno {
namespace Content {
namespace Models {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelParameterAnimation__float__uType* ModelParameterAnimation__float__typeof()
{
    static ::uStaticStrong<ModelParameterAnimation__float__uType*> type;
    if (type != NULL) return type;

    type = (ModelParameterAnimation__float__uType*)::uAllocClassType(sizeof(ModelParameterAnimation__float__uType), "Uno.Content.Models.ModelParameterAnimation<float>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Content::Models::ModelParameter__float__typeof());
    type->__fp_get_EndTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterAnimation__float__get_EndTime;
    type->__fp_get_IsAnimated = (bool(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterAnimation__float__get_IsAnimated;
    type->__fp_get_ParameterType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterAnimation__float__get_ParameterType;
    type->__fp_get_StartTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterAnimation__float__get_StartTime;
    type->__fp_Update = (void(*)(::app::Uno::Content::Models::ModelParameter*, double))ModelParameterAnimation__float__Update;

    type->SetStrongRefs(
        "_spline", offsetof(ModelParameterAnimation__float, _spline));

    type->SetFields(1,
        ::uNewField("_spline", NULL, offsetof(ModelParameterAnimation__float, _spline), ::app::Uno::Content::Splines::Spline__float__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ModelParameterAnimation__float__New_2, 0, true, ModelParameterAnimation__float__typeof(), ::app::Uno::Content::Models::ModelParameterValueType__typeof(), ::app::Uno::Content::Splines::Spline__float__typeof()));

    ::uRegisterType(type);
    return type;
}

void ModelParameterAnimation__float___ObjInit_2(ModelParameterAnimation__float* __this, int valueType, ::app::Uno::Content::Splines::Spline__float* spline)
{
    ::app::Uno::Content::Models::ModelParameter__float___ObjInit_1(__this, valueType, ::uPtr< ::app::Uno::Content::Splines::Spline__float*>(spline)->First());
    __this->_spline = spline;
}

double ModelParameterAnimation__float__get_EndTime(ModelParameterAnimation__float* __this)
{
    return ::uPtr< ::app::Uno::Content::Splines::Spline__float*>(__this->_spline)->End();
}

bool ModelParameterAnimation__float__get_IsAnimated(ModelParameterAnimation__float* __this)
{
    return true;
}

int ModelParameterAnimation__float__get_ParameterType(ModelParameterAnimation__float* __this)
{
    return 1;
}

double ModelParameterAnimation__float__get_StartTime(ModelParameterAnimation__float* __this)
{
    return ::uPtr< ::app::Uno::Content::Splines::Spline__float*>(__this->_spline)->Start();
}

ModelParameterAnimation__float* ModelParameterAnimation__float__New_2(::uStatic* __this, int valueType, ::app::Uno::Content::Splines::Spline__float* spline)
{
    ModelParameterAnimation__float* inst = (ModelParameterAnimation__float*)::uAllocObject(sizeof(ModelParameterAnimation__float), ModelParameterAnimation__float__typeof());
    inst->_ObjInit_2(valueType, spline);
    return inst;
}

void ModelParameterAnimation__float__Update(ModelParameterAnimation__float* __this, double time)
{
    ::uPtr< ::app::Uno::Content::Splines::Spline__float*>(__this->_spline)->Sample_1(time, &__this->_value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelParameterAnimation__float2__uType* ModelParameterAnimation__float2__typeof()
{
    static ::uStaticStrong<ModelParameterAnimation__float2__uType*> type;
    if (type != NULL) return type;

    type = (ModelParameterAnimation__float2__uType*)::uAllocClassType(sizeof(ModelParameterAnimation__float2__uType), "Uno.Content.Models.ModelParameterAnimation<float2>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Content::Models::ModelParameter__float2__typeof());
    type->__fp_get_EndTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterAnimation__float2__get_EndTime;
    type->__fp_get_IsAnimated = (bool(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterAnimation__float2__get_IsAnimated;
    type->__fp_get_ParameterType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterAnimation__float2__get_ParameterType;
    type->__fp_get_StartTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterAnimation__float2__get_StartTime;
    type->__fp_Update = (void(*)(::app::Uno::Content::Models::ModelParameter*, double))ModelParameterAnimation__float2__Update;

    type->SetStrongRefs(
        "_spline", offsetof(ModelParameterAnimation__float2, _spline));

    type->SetFields(1,
        ::uNewField("_spline", NULL, offsetof(ModelParameterAnimation__float2, _spline), ::app::Uno::Content::Splines::Spline__float2__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ModelParameterAnimation__float2__New_2, 0, true, ModelParameterAnimation__float2__typeof(), ::app::Uno::Content::Models::ModelParameterValueType__typeof(), ::app::Uno::Content::Splines::Spline__float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void ModelParameterAnimation__float2___ObjInit_2(ModelParameterAnimation__float2* __this, int valueType, ::app::Uno::Content::Splines::Spline__float2* spline)
{
    ::app::Uno::Content::Models::ModelParameter__float2___ObjInit_1(__this, valueType, ::uPtr< ::app::Uno::Content::Splines::Spline__float2*>(spline)->First());
    __this->_spline = spline;
}

double ModelParameterAnimation__float2__get_EndTime(ModelParameterAnimation__float2* __this)
{
    return ::uPtr< ::app::Uno::Content::Splines::Spline__float2*>(__this->_spline)->End();
}

bool ModelParameterAnimation__float2__get_IsAnimated(ModelParameterAnimation__float2* __this)
{
    return true;
}

int ModelParameterAnimation__float2__get_ParameterType(ModelParameterAnimation__float2* __this)
{
    return 1;
}

double ModelParameterAnimation__float2__get_StartTime(ModelParameterAnimation__float2* __this)
{
    return ::uPtr< ::app::Uno::Content::Splines::Spline__float2*>(__this->_spline)->Start();
}

ModelParameterAnimation__float2* ModelParameterAnimation__float2__New_2(::uStatic* __this, int valueType, ::app::Uno::Content::Splines::Spline__float2* spline)
{
    ModelParameterAnimation__float2* inst = (ModelParameterAnimation__float2*)::uAllocObject(sizeof(ModelParameterAnimation__float2), ModelParameterAnimation__float2__typeof());
    inst->_ObjInit_2(valueType, spline);
    return inst;
}

void ModelParameterAnimation__float2__Update(ModelParameterAnimation__float2* __this, double time)
{
    ::uPtr< ::app::Uno::Content::Splines::Spline__float2*>(__this->_spline)->Sample_1(time, &__this->_value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelParameterAnimation__float3__uType* ModelParameterAnimation__float3__typeof()
{
    static ::uStaticStrong<ModelParameterAnimation__float3__uType*> type;
    if (type != NULL) return type;

    type = (ModelParameterAnimation__float3__uType*)::uAllocClassType(sizeof(ModelParameterAnimation__float3__uType), "Uno.Content.Models.ModelParameterAnimation<float3>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Content::Models::ModelParameter__float3__typeof());
    type->__fp_get_EndTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterAnimation__float3__get_EndTime;
    type->__fp_get_IsAnimated = (bool(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterAnimation__float3__get_IsAnimated;
    type->__fp_get_ParameterType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterAnimation__float3__get_ParameterType;
    type->__fp_get_StartTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterAnimation__float3__get_StartTime;
    type->__fp_Update = (void(*)(::app::Uno::Content::Models::ModelParameter*, double))ModelParameterAnimation__float3__Update;

    type->SetStrongRefs(
        "_spline", offsetof(ModelParameterAnimation__float3, _spline));

    type->SetFields(1,
        ::uNewField("_spline", NULL, offsetof(ModelParameterAnimation__float3, _spline), ::app::Uno::Content::Splines::Spline__float3__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ModelParameterAnimation__float3__New_2, 0, true, ModelParameterAnimation__float3__typeof(), ::app::Uno::Content::Models::ModelParameterValueType__typeof(), ::app::Uno::Content::Splines::Spline__float3__typeof()));

    ::uRegisterType(type);
    return type;
}

void ModelParameterAnimation__float3___ObjInit_2(ModelParameterAnimation__float3* __this, int valueType, ::app::Uno::Content::Splines::Spline__float3* spline)
{
    ::app::Uno::Content::Models::ModelParameter__float3___ObjInit_1(__this, valueType, ::uPtr< ::app::Uno::Content::Splines::Spline__float3*>(spline)->First());
    __this->_spline = spline;
}

double ModelParameterAnimation__float3__get_EndTime(ModelParameterAnimation__float3* __this)
{
    return ::uPtr< ::app::Uno::Content::Splines::Spline__float3*>(__this->_spline)->End();
}

bool ModelParameterAnimation__float3__get_IsAnimated(ModelParameterAnimation__float3* __this)
{
    return true;
}

int ModelParameterAnimation__float3__get_ParameterType(ModelParameterAnimation__float3* __this)
{
    return 1;
}

double ModelParameterAnimation__float3__get_StartTime(ModelParameterAnimation__float3* __this)
{
    return ::uPtr< ::app::Uno::Content::Splines::Spline__float3*>(__this->_spline)->Start();
}

ModelParameterAnimation__float3* ModelParameterAnimation__float3__New_2(::uStatic* __this, int valueType, ::app::Uno::Content::Splines::Spline__float3* spline)
{
    ModelParameterAnimation__float3* inst = (ModelParameterAnimation__float3*)::uAllocObject(sizeof(ModelParameterAnimation__float3), ModelParameterAnimation__float3__typeof());
    inst->_ObjInit_2(valueType, spline);
    return inst;
}

void ModelParameterAnimation__float3__Update(ModelParameterAnimation__float3* __this, double time)
{
    ::uPtr< ::app::Uno::Content::Splines::Spline__float3*>(__this->_spline)->Sample_1(time, &__this->_value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelParameterAnimation__float4__uType* ModelParameterAnimation__float4__typeof()
{
    static ::uStaticStrong<ModelParameterAnimation__float4__uType*> type;
    if (type != NULL) return type;

    type = (ModelParameterAnimation__float4__uType*)::uAllocClassType(sizeof(ModelParameterAnimation__float4__uType), "Uno.Content.Models.ModelParameterAnimation<float4>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Content::Models::ModelParameter__float4__typeof());
    type->__fp_get_EndTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterAnimation__float4__get_EndTime;
    type->__fp_get_IsAnimated = (bool(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterAnimation__float4__get_IsAnimated;
    type->__fp_get_ParameterType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterAnimation__float4__get_ParameterType;
    type->__fp_get_StartTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterAnimation__float4__get_StartTime;
    type->__fp_Update = (void(*)(::app::Uno::Content::Models::ModelParameter*, double))ModelParameterAnimation__float4__Update;

    type->SetStrongRefs(
        "_spline", offsetof(ModelParameterAnimation__float4, _spline));

    type->SetFields(1,
        ::uNewField("_spline", NULL, offsetof(ModelParameterAnimation__float4, _spline), ::app::Uno::Content::Splines::Spline__float4__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ModelParameterAnimation__float4__New_2, 0, true, ModelParameterAnimation__float4__typeof(), ::app::Uno::Content::Models::ModelParameterValueType__typeof(), ::app::Uno::Content::Splines::Spline__float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void ModelParameterAnimation__float4___ObjInit_2(ModelParameterAnimation__float4* __this, int valueType, ::app::Uno::Content::Splines::Spline__float4* spline)
{
    ::app::Uno::Content::Models::ModelParameter__float4___ObjInit_1(__this, valueType, ::uPtr< ::app::Uno::Content::Splines::Spline__float4*>(spline)->First());
    __this->_spline = spline;
}

double ModelParameterAnimation__float4__get_EndTime(ModelParameterAnimation__float4* __this)
{
    return ::uPtr< ::app::Uno::Content::Splines::Spline__float4*>(__this->_spline)->End();
}

bool ModelParameterAnimation__float4__get_IsAnimated(ModelParameterAnimation__float4* __this)
{
    return true;
}

int ModelParameterAnimation__float4__get_ParameterType(ModelParameterAnimation__float4* __this)
{
    return 1;
}

double ModelParameterAnimation__float4__get_StartTime(ModelParameterAnimation__float4* __this)
{
    return ::uPtr< ::app::Uno::Content::Splines::Spline__float4*>(__this->_spline)->Start();
}

ModelParameterAnimation__float4* ModelParameterAnimation__float4__New_2(::uStatic* __this, int valueType, ::app::Uno::Content::Splines::Spline__float4* spline)
{
    ModelParameterAnimation__float4* inst = (ModelParameterAnimation__float4*)::uAllocObject(sizeof(ModelParameterAnimation__float4), ModelParameterAnimation__float4__typeof());
    inst->_ObjInit_2(valueType, spline);
    return inst;
}

void ModelParameterAnimation__float4__Update(ModelParameterAnimation__float4* __this, double time)
{
    ::uPtr< ::app::Uno::Content::Splines::Spline__float4*>(__this->_spline)->Sample_1(time, &__this->_value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelParameterAnimation__float4x4__uType* ModelParameterAnimation__float4x4__typeof()
{
    static ::uStaticStrong<ModelParameterAnimation__float4x4__uType*> type;
    if (type != NULL) return type;

    type = (ModelParameterAnimation__float4x4__uType*)::uAllocClassType(sizeof(ModelParameterAnimation__float4x4__uType), "Uno.Content.Models.ModelParameterAnimation<float4x4>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Content::Models::ModelParameter__float4x4__typeof());
    type->__fp_get_EndTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterAnimation__float4x4__get_EndTime;
    type->__fp_get_IsAnimated = (bool(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterAnimation__float4x4__get_IsAnimated;
    type->__fp_get_ParameterType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterAnimation__float4x4__get_ParameterType;
    type->__fp_get_StartTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterAnimation__float4x4__get_StartTime;
    type->__fp_Update = (void(*)(::app::Uno::Content::Models::ModelParameter*, double))ModelParameterAnimation__float4x4__Update;

    type->SetStrongRefs(
        "_spline", offsetof(ModelParameterAnimation__float4x4, _spline));

    type->SetFields(1,
        ::uNewField("_spline", NULL, offsetof(ModelParameterAnimation__float4x4, _spline), ::app::Uno::Content::Splines::Spline__float4x4__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ModelParameterAnimation__float4x4__New_2, 0, true, ModelParameterAnimation__float4x4__typeof(), ::app::Uno::Content::Models::ModelParameterValueType__typeof(), ::app::Uno::Content::Splines::Spline__float4x4__typeof()));

    ::uRegisterType(type);
    return type;
}

void ModelParameterAnimation__float4x4___ObjInit_2(ModelParameterAnimation__float4x4* __this, int valueType, ::app::Uno::Content::Splines::Spline__float4x4* spline)
{
    ::app::Uno::Content::Models::ModelParameter__float4x4___ObjInit_1(__this, valueType, ::uPtr< ::app::Uno::Content::Splines::Spline__float4x4*>(spline)->First());
    __this->_spline = spline;
}

double ModelParameterAnimation__float4x4__get_EndTime(ModelParameterAnimation__float4x4* __this)
{
    return ::uPtr< ::app::Uno::Content::Splines::Spline__float4x4*>(__this->_spline)->End();
}

bool ModelParameterAnimation__float4x4__get_IsAnimated(ModelParameterAnimation__float4x4* __this)
{
    return true;
}

int ModelParameterAnimation__float4x4__get_ParameterType(ModelParameterAnimation__float4x4* __this)
{
    return 1;
}

double ModelParameterAnimation__float4x4__get_StartTime(ModelParameterAnimation__float4x4* __this)
{
    return ::uPtr< ::app::Uno::Content::Splines::Spline__float4x4*>(__this->_spline)->Start();
}

ModelParameterAnimation__float4x4* ModelParameterAnimation__float4x4__New_2(::uStatic* __this, int valueType, ::app::Uno::Content::Splines::Spline__float4x4* spline)
{
    ModelParameterAnimation__float4x4* inst = (ModelParameterAnimation__float4x4*)::uAllocObject(sizeof(ModelParameterAnimation__float4x4), ModelParameterAnimation__float4x4__typeof());
    inst->_ObjInit_2(valueType, spline);
    return inst;
}

void ModelParameterAnimation__float4x4__Update(ModelParameterAnimation__float4x4* __this, double time)
{
    ::uPtr< ::app::Uno::Content::Splines::Spline__float4x4*>(__this->_spline)->Sample_1(time, &__this->_value);
}

}}}}
