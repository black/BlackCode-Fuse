// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER__FLOAT4_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER__FLOAT4_H__

#include <app/Uno.Content.Models.ModelParameter.h>
#include <app/Uno.Float4.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelParameter__float4;

struct ModelParameter__float4__uType : ::app::Uno::Content::Models::ModelParameter__uType
{
};

ModelParameter__float4__uType* ModelParameter__float4__typeof();

void ModelParameter__float4___ObjInit_1(ModelParameter__float4* __this, int valueType, ::app::Uno::Float4 value);
int ModelParameter__float4__get_ParameterType(ModelParameter__float4* __this);
::app::Uno::Float4 ModelParameter__float4__get_Value(ModelParameter__float4* __this);
int ModelParameter__float4__get_ValueType(ModelParameter__float4* __this);
ModelParameter__float4* ModelParameter__float4__New_1(::uStatic* __this, int valueType, ::app::Uno::Float4 value);

struct ModelParameter__float4 : ::app::Uno::Content::Models::ModelParameter
{
    ::app::Uno::Float4 _value;
    int _valueType;

    void _ObjInit_1(int valueType, ::app::Uno::Float4 value) { ModelParameter__float4___ObjInit_1(this, valueType, value); }
    ::app::Uno::Float4 Value() { return ModelParameter__float4__get_Value(this); }
};

}}}}


#endif
