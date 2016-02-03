// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER__FLOAT3_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER__FLOAT3_H__

#include <app/Uno.Content.Models.ModelParameter.h>
#include <app/Uno.Float3.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelParameter__float3;

struct ModelParameter__float3__uType : ::app::Uno::Content::Models::ModelParameter__uType
{
};

ModelParameter__float3__uType* ModelParameter__float3__typeof();

void ModelParameter__float3___ObjInit_1(ModelParameter__float3* __this, int valueType, ::app::Uno::Float3 value);
int ModelParameter__float3__get_ParameterType(ModelParameter__float3* __this);
::app::Uno::Float3 ModelParameter__float3__get_Value(ModelParameter__float3* __this);
int ModelParameter__float3__get_ValueType(ModelParameter__float3* __this);
ModelParameter__float3* ModelParameter__float3__New_1(::uStatic* __this, int valueType, ::app::Uno::Float3 value);

struct ModelParameter__float3 : ::app::Uno::Content::Models::ModelParameter
{
    ::app::Uno::Float3 _value;
    int _valueType;

    void _ObjInit_1(int valueType, ::app::Uno::Float3 value) { ModelParameter__float3___ObjInit_1(this, valueType, value); }
    ::app::Uno::Float3 Value() { return ModelParameter__float3__get_Value(this); }
};

}}}}


#endif
