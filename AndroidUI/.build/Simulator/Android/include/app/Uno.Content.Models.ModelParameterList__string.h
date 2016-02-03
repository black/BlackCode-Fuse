// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER_LIST__STRING_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER_LIST__STRING_H__

#include <app/Uno.Content.Models.ModelParameter.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameter__string; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelParameterList__string;

struct ModelParameterList__string__uType : ::app::Uno::Content::Models::ModelParameter__uType
{
};

ModelParameterList__string__uType* ModelParameterList__string__typeof();

void ModelParameterList__string___ObjInit_1(ModelParameterList__string* __this, int itemType, ::uArray* items);
double ModelParameterList__string__get_EndTime(ModelParameterList__string* __this);
bool ModelParameterList__string__get_IsAnimated(ModelParameterList__string* __this);
int ModelParameterList__string__get_ListItemType(ModelParameterList__string* __this);
int ModelParameterList__string__get_ListLength(ModelParameterList__string* __this);
int ModelParameterList__string__get_ParameterType(ModelParameterList__string* __this);
double ModelParameterList__string__get_StartTime(ModelParameterList__string* __this);
int ModelParameterList__string__get_ValueType(ModelParameterList__string* __this);
::app::Uno::Content::Models::ModelParameter* ModelParameterList__string__GetListItem(ModelParameterList__string* __this, int index);
ModelParameterList__string* ModelParameterList__string__New_1(::uStatic* __this, int itemType, ::uArray* items);
void ModelParameterList__string__Update(ModelParameterList__string* __this, double time);
void ModelParameterList__string__UpdateAnimInfo(ModelParameterList__string* __this);

struct ModelParameterList__string : ::app::Uno::Content::Models::ModelParameter
{
    int _itemType;
    ::uStrong< ::uArray*> _items;
    ::uStrong< ::uArray*> _values;
    bool _isAnimated;
    bool _hasAnimInfo;
    double _start;
    double _end;

    void _ObjInit_1(int itemType, ::uArray* items) { ModelParameterList__string___ObjInit_1(this, itemType, items); }
    void UpdateAnimInfo() { ModelParameterList__string__UpdateAnimInfo(this); }
};

}}}}


#endif
