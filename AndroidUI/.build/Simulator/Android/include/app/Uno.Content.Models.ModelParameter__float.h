// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER__FLOAT_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER__FLOAT_H__

#include <app/Uno.Content.Models.ModelParameter.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelParameter__float;

struct ModelParameter__float__uType : ::app::Uno::Content::Models::ModelParameter__uType
{
};

ModelParameter__float__uType* ModelParameter__float__typeof();

void ModelParameter__float___ObjInit_1(ModelParameter__float* __this, int valueType, float value);
int ModelParameter__float__get_ParameterType(ModelParameter__float* __this);
float ModelParameter__float__get_Value(ModelParameter__float* __this);
int ModelParameter__float__get_ValueType(ModelParameter__float* __this);
ModelParameter__float* ModelParameter__float__New_1(::uStatic* __this, int valueType, float value);

struct ModelParameter__float : ::app::Uno::Content::Models::ModelParameter
{
    float _value;
    int _valueType;

    void _ObjInit_1(int valueType, float value) { ModelParameter__float___ObjInit_1(this, valueType, value); }
    float Value() { return ModelParameter__float__get_Value(this); }
};

}}}}


#endif
