#include <app/Uno.Content.Models.ModelParameter__float.h>
#include <app/Uno.Content.Models.ModelParameter__float2.h>
#include <app/Uno.Content.Models.ModelParameter__float3.h>
#include <app/Uno.Content.Models.ModelParameter__float4.h>
#include <app/Uno.Content.Models.ModelParameter__float4x4.h>
#include <app/Uno.Content.Models.ModelParameter__string.h>
#include <app/Uno.Content.Models.ModelParameterType.h>
#include <app/Uno.Content.Models.ModelParameterValueType.h>
#include <app/Uno.Float.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Content {
namespace Models {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelParameter__float__uType* ModelParameter__float__typeof()
{
    static ::uStaticStrong<ModelParameter__float__uType*> type;
    if (type != NULL) return type;

    type = (ModelParameter__float__uType*)::uAllocClassType(sizeof(ModelParameter__float__uType), "Uno.Content.Models.ModelParameter<float>", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Content::Models::ModelParameter__typeof());
    type->__fp_get_ParameterType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameter__float__get_ParameterType;
    type->__fp_get_ValueType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameter__float__get_ValueType;

    type->SetFields(2,
        ::uNewField("_value", NULL, offsetof(ModelParameter__float, _value), ::app::Uno::Float__typeof()),
        ::uNewField("_valueType", NULL, offsetof(ModelParameter__float, _valueType), ::app::Uno::Content::Models::ModelParameterValueType__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Value", ModelParameter__float__get_Value, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", ModelParameter__float__New_1, 0, true, ModelParameter__float__typeof(), ::app::Uno::Content::Models::ModelParameterValueType__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void ModelParameter__float___ObjInit_1(ModelParameter__float* __this, int valueType, float value)
{
    ::app::Uno::Content::Models::ModelParameter___ObjInit(__this);
    __this->_valueType = valueType;
    __this->_value = value;
}

int ModelParameter__float__get_ParameterType(ModelParameter__float* __this)
{
    return 0;
}

float ModelParameter__float__get_Value(ModelParameter__float* __this)
{
    return __this->_value;
}

int ModelParameter__float__get_ValueType(ModelParameter__float* __this)
{
    return __this->_valueType;
}

ModelParameter__float* ModelParameter__float__New_1(::uStatic* __this, int valueType, float value)
{
    ModelParameter__float* inst = (ModelParameter__float*)::uAllocObject(sizeof(ModelParameter__float), ModelParameter__float__typeof());
    inst->_ObjInit_1(valueType, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelParameter__float2__uType* ModelParameter__float2__typeof()
{
    static ::uStaticStrong<ModelParameter__float2__uType*> type;
    if (type != NULL) return type;

    type = (ModelParameter__float2__uType*)::uAllocClassType(sizeof(ModelParameter__float2__uType), "Uno.Content.Models.ModelParameter<float2>", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Content::Models::ModelParameter__typeof());
    type->__fp_get_ParameterType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameter__float2__get_ParameterType;
    type->__fp_get_ValueType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameter__float2__get_ValueType;

    type->SetFields(2,
        ::uNewField("_value", NULL, offsetof(ModelParameter__float2, _value), ::app::Uno::Float2__typeof()),
        ::uNewField("_valueType", NULL, offsetof(ModelParameter__float2, _valueType), ::app::Uno::Content::Models::ModelParameterValueType__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Value", ModelParameter__float2__get_Value, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", ModelParameter__float2__New_1, 0, true, ModelParameter__float2__typeof(), ::app::Uno::Content::Models::ModelParameterValueType__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void ModelParameter__float2___ObjInit_1(ModelParameter__float2* __this, int valueType, ::app::Uno::Float2 value)
{
    ::app::Uno::Content::Models::ModelParameter___ObjInit(__this);
    __this->_valueType = valueType;
    __this->_value = value;
}

int ModelParameter__float2__get_ParameterType(ModelParameter__float2* __this)
{
    return 0;
}

::app::Uno::Float2 ModelParameter__float2__get_Value(ModelParameter__float2* __this)
{
    return __this->_value;
}

int ModelParameter__float2__get_ValueType(ModelParameter__float2* __this)
{
    return __this->_valueType;
}

ModelParameter__float2* ModelParameter__float2__New_1(::uStatic* __this, int valueType, ::app::Uno::Float2 value)
{
    ModelParameter__float2* inst = (ModelParameter__float2*)::uAllocObject(sizeof(ModelParameter__float2), ModelParameter__float2__typeof());
    inst->_ObjInit_1(valueType, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelParameter__float3__uType* ModelParameter__float3__typeof()
{
    static ::uStaticStrong<ModelParameter__float3__uType*> type;
    if (type != NULL) return type;

    type = (ModelParameter__float3__uType*)::uAllocClassType(sizeof(ModelParameter__float3__uType), "Uno.Content.Models.ModelParameter<float3>", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Content::Models::ModelParameter__typeof());
    type->__fp_get_ParameterType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameter__float3__get_ParameterType;
    type->__fp_get_ValueType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameter__float3__get_ValueType;

    type->SetFields(2,
        ::uNewField("_value", NULL, offsetof(ModelParameter__float3, _value), ::app::Uno::Float3__typeof()),
        ::uNewField("_valueType", NULL, offsetof(ModelParameter__float3, _valueType), ::app::Uno::Content::Models::ModelParameterValueType__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Value", ModelParameter__float3__get_Value, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction(".ctor", ModelParameter__float3__New_1, 0, true, ModelParameter__float3__typeof(), ::app::Uno::Content::Models::ModelParameterValueType__typeof(), ::app::Uno::Float3__typeof()));

    ::uRegisterType(type);
    return type;
}

void ModelParameter__float3___ObjInit_1(ModelParameter__float3* __this, int valueType, ::app::Uno::Float3 value)
{
    ::app::Uno::Content::Models::ModelParameter___ObjInit(__this);
    __this->_valueType = valueType;
    __this->_value = value;
}

int ModelParameter__float3__get_ParameterType(ModelParameter__float3* __this)
{
    return 0;
}

::app::Uno::Float3 ModelParameter__float3__get_Value(ModelParameter__float3* __this)
{
    return __this->_value;
}

int ModelParameter__float3__get_ValueType(ModelParameter__float3* __this)
{
    return __this->_valueType;
}

ModelParameter__float3* ModelParameter__float3__New_1(::uStatic* __this, int valueType, ::app::Uno::Float3 value)
{
    ModelParameter__float3* inst = (ModelParameter__float3*)::uAllocObject(sizeof(ModelParameter__float3), ModelParameter__float3__typeof());
    inst->_ObjInit_1(valueType, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelParameter__float4__uType* ModelParameter__float4__typeof()
{
    static ::uStaticStrong<ModelParameter__float4__uType*> type;
    if (type != NULL) return type;

    type = (ModelParameter__float4__uType*)::uAllocClassType(sizeof(ModelParameter__float4__uType), "Uno.Content.Models.ModelParameter<float4>", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Content::Models::ModelParameter__typeof());
    type->__fp_get_ParameterType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameter__float4__get_ParameterType;
    type->__fp_get_ValueType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameter__float4__get_ValueType;

    type->SetFields(2,
        ::uNewField("_value", NULL, offsetof(ModelParameter__float4, _value), ::app::Uno::Float4__typeof()),
        ::uNewField("_valueType", NULL, offsetof(ModelParameter__float4, _valueType), ::app::Uno::Content::Models::ModelParameterValueType__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Value", ModelParameter__float4__get_Value, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction(".ctor", ModelParameter__float4__New_1, 0, true, ModelParameter__float4__typeof(), ::app::Uno::Content::Models::ModelParameterValueType__typeof(), ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void ModelParameter__float4___ObjInit_1(ModelParameter__float4* __this, int valueType, ::app::Uno::Float4 value)
{
    ::app::Uno::Content::Models::ModelParameter___ObjInit(__this);
    __this->_valueType = valueType;
    __this->_value = value;
}

int ModelParameter__float4__get_ParameterType(ModelParameter__float4* __this)
{
    return 0;
}

::app::Uno::Float4 ModelParameter__float4__get_Value(ModelParameter__float4* __this)
{
    return __this->_value;
}

int ModelParameter__float4__get_ValueType(ModelParameter__float4* __this)
{
    return __this->_valueType;
}

ModelParameter__float4* ModelParameter__float4__New_1(::uStatic* __this, int valueType, ::app::Uno::Float4 value)
{
    ModelParameter__float4* inst = (ModelParameter__float4*)::uAllocObject(sizeof(ModelParameter__float4), ModelParameter__float4__typeof());
    inst->_ObjInit_1(valueType, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelParameter__float4x4__uType* ModelParameter__float4x4__typeof()
{
    static ::uStaticStrong<ModelParameter__float4x4__uType*> type;
    if (type != NULL) return type;

    type = (ModelParameter__float4x4__uType*)::uAllocClassType(sizeof(ModelParameter__float4x4__uType), "Uno.Content.Models.ModelParameter<float4x4>", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Content::Models::ModelParameter__typeof());
    type->__fp_get_ParameterType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameter__float4x4__get_ParameterType;
    type->__fp_get_ValueType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameter__float4x4__get_ValueType;

    type->SetFields(2,
        ::uNewField("_value", NULL, offsetof(ModelParameter__float4x4, _value), ::app::Uno::Float4x4__typeof()),
        ::uNewField("_valueType", NULL, offsetof(ModelParameter__float4x4, _valueType), ::app::Uno::Content::Models::ModelParameterValueType__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Value", ModelParameter__float4x4__get_Value, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction(".ctor", ModelParameter__float4x4__New_1, 0, true, ModelParameter__float4x4__typeof(), ::app::Uno::Content::Models::ModelParameterValueType__typeof(), ::app::Uno::Float4x4__typeof()));

    ::uRegisterType(type);
    return type;
}

void ModelParameter__float4x4___ObjInit_1(ModelParameter__float4x4* __this, int valueType, ::app::Uno::Float4x4 value)
{
    ::app::Uno::Content::Models::ModelParameter___ObjInit(__this);
    __this->_valueType = valueType;
    __this->_value = value;
}

int ModelParameter__float4x4__get_ParameterType(ModelParameter__float4x4* __this)
{
    return 0;
}

::app::Uno::Float4x4 ModelParameter__float4x4__get_Value(ModelParameter__float4x4* __this)
{
    return __this->_value;
}

int ModelParameter__float4x4__get_ValueType(ModelParameter__float4x4* __this)
{
    return __this->_valueType;
}

ModelParameter__float4x4* ModelParameter__float4x4__New_1(::uStatic* __this, int valueType, ::app::Uno::Float4x4 value)
{
    ModelParameter__float4x4* inst = (ModelParameter__float4x4*)::uAllocObject(sizeof(ModelParameter__float4x4), ModelParameter__float4x4__typeof());
    inst->_ObjInit_1(valueType, value);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelParameter__string__uType* ModelParameter__string__typeof()
{
    static ::uStaticStrong<ModelParameter__string__uType*> type;
    if (type != NULL) return type;

    type = (ModelParameter__string__uType*)::uAllocClassType(sizeof(ModelParameter__string__uType), "Uno.Content.Models.ModelParameter<string>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Content::Models::ModelParameter__typeof());
    type->__fp_get_ParameterType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameter__string__get_ParameterType;
    type->__fp_get_ValueType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameter__string__get_ValueType;

    type->SetStrongRefs(
        "_value", offsetof(ModelParameter__string, _value));

    type->SetFields(2,
        ::uNewField("_value", NULL, offsetof(ModelParameter__string, _value), ::app::Uno::String__typeof()),
        ::uNewField("_valueType", NULL, offsetof(ModelParameter__string, _valueType), ::app::Uno::Content::Models::ModelParameterValueType__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Value", ModelParameter__string__get_Value, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", ModelParameter__string__New_1, 0, true, ModelParameter__string__typeof(), ::app::Uno::Content::Models::ModelParameterValueType__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void ModelParameter__string___ObjInit_1(ModelParameter__string* __this, int valueType, ::uString* value)
{
    ::app::Uno::Content::Models::ModelParameter___ObjInit(__this);
    __this->_valueType = valueType;
    __this->_value = value;
}

int ModelParameter__string__get_ParameterType(ModelParameter__string* __this)
{
    return 0;
}

::uString* ModelParameter__string__get_Value(ModelParameter__string* __this)
{
    return __this->_value;
}

int ModelParameter__string__get_ValueType(ModelParameter__string* __this)
{
    return __this->_valueType;
}

ModelParameter__string* ModelParameter__string__New_1(::uStatic* __this, int valueType, ::uString* value)
{
    ModelParameter__string* inst = (ModelParameter__string*)::uAllocObject(sizeof(ModelParameter__string), ModelParameter__string__typeof());
    inst->_ObjInit_1(valueType, value);
    return inst;
}

}}}}
