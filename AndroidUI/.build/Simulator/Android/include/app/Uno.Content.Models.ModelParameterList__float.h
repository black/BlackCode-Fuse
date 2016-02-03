// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER_LIST__FLOAT_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER_LIST__FLOAT_H__

#include <app/Uno.Content.Models.ModelParameter.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameter__float; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelParameterList__float;

struct ModelParameterList__float__uType : ::app::Uno::Content::Models::ModelParameter__uType
{
};

ModelParameterList__float__uType* ModelParameterList__float__typeof();

void ModelParameterList__float___ObjInit_1(ModelParameterList__float* __this, int itemType, ::uArray* items);
double ModelParameterList__float__get_EndTime(ModelParameterList__float* __this);
bool ModelParameterList__float__get_IsAnimated(ModelParameterList__float* __this);
int ModelParameterList__float__get_ListItemType(ModelParameterList__float* __this);
int ModelParameterList__float__get_ListLength(ModelParameterList__float* __this);
int ModelParameterList__float__get_ParameterType(ModelParameterList__float* __this);
double ModelParameterList__float__get_StartTime(ModelParameterList__float* __this);
int ModelParameterList__float__get_ValueType(ModelParameterList__float* __this);
::app::Uno::Content::Models::ModelParameter* ModelParameterList__float__GetListItem(ModelParameterList__float* __this, int index);
ModelParameterList__float* ModelParameterList__float__New_1(::uStatic* __this, int itemType, ::uArray* items);
void ModelParameterList__float__Update(ModelParameterList__float* __this, double time);
void ModelParameterList__float__UpdateAnimInfo(ModelParameterList__float* __this);

struct ModelParameterList__float : ::app::Uno::Content::Models::ModelParameter
{
    int _itemType;
    ::uStrong< ::uArray*> _items;
    ::uStrong< ::uArray*> _values;
    bool _isAnimated;
    bool _hasAnimInfo;
    double _start;
    double _end;

    void _ObjInit_1(int itemType, ::uArray* items) { ModelParameterList__float___ObjInit_1(this, itemType, items); }
    void UpdateAnimInfo() { ModelParameterList__float__UpdateAnimInfo(this); }
};

}}}}


#endif
