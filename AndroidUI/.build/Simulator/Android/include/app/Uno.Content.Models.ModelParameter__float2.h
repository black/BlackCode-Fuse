// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER__FLOAT2_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER__FLOAT2_H__

#include <app/Uno.Content.Models.ModelParameter.h>
#include <app/Uno.Float2.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelParameter__float2;

struct ModelParameter__float2__uType : ::app::Uno::Content::Models::ModelParameter__uType
{
};

ModelParameter__float2__uType* ModelParameter__float2__typeof();

void ModelParameter__float2___ObjInit_1(ModelParameter__float2* __this, int valueType, ::app::Uno::Float2 value);
int ModelParameter__float2__get_ParameterType(ModelParameter__float2* __this);
::app::Uno::Float2 ModelParameter__float2__get_Value(ModelParameter__float2* __this);
int ModelParameter__float2__get_ValueType(ModelParameter__float2* __this);
ModelParameter__float2* ModelParameter__float2__New_1(::uStatic* __this, int valueType, ::app::Uno::Float2 value);

struct ModelParameter__float2 : ::app::Uno::Content::Models::ModelParameter
{
    ::app::Uno::Float2 _value;
    int _valueType;

    void _ObjInit_1(int valueType, ::app::Uno::Float2 value) { ModelParameter__float2___ObjInit_1(this, valueType, value); }
    ::app::Uno::Float2 Value() { return ModelParameter__float2__get_Value(this); }
};

}}}}


#endif
