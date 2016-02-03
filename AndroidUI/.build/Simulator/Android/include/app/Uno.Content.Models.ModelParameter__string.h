// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER__STRING_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER__STRING_H__

#include <app/Uno.Content.Models.ModelParameter.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelParameter__string;

struct ModelParameter__string__uType : ::app::Uno::Content::Models::ModelParameter__uType
{
};

ModelParameter__string__uType* ModelParameter__string__typeof();

void ModelParameter__string___ObjInit_1(ModelParameter__string* __this, int valueType, ::uString* value);
int ModelParameter__string__get_ParameterType(ModelParameter__string* __this);
::uString* ModelParameter__string__get_Value(ModelParameter__string* __this);
int ModelParameter__string__get_ValueType(ModelParameter__string* __this);
ModelParameter__string* ModelParameter__string__New_1(::uStatic* __this, int valueType, ::uString* value);

struct ModelParameter__string : ::app::Uno::Content::Models::ModelParameter
{
    ::uStrong< ::uString*> _value;
    int _valueType;

    void _ObjInit_1(int valueType, ::uString* value) { ModelParameter__string___ObjInit_1(this, valueType, value); }
    ::uString* Value() { return ModelParameter__string__get_Value(this); }
};

}}}}


#endif
