// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER_LIST__FLOAT2_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER_LIST__FLOAT2_H__

#include <app/Uno.Content.Models.ModelParameter.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameter__float2; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelParameterList__float2;

struct ModelParameterList__float2__uType : ::app::Uno::Content::Models::ModelParameter__uType
{
};

ModelParameterList__float2__uType* ModelParameterList__float2__typeof();

void ModelParameterList__float2___ObjInit_1(ModelParameterList__float2* __this, int itemType, ::uArray* items);
double ModelParameterList__float2__get_EndTime(ModelParameterList__float2* __this);
bool ModelParameterList__float2__get_IsAnimated(ModelParameterList__float2* __this);
int ModelParameterList__float2__get_ListItemType(ModelParameterList__float2* __this);
int ModelParameterList__float2__get_ListLength(ModelParameterList__float2* __this);
int ModelParameterList__float2__get_ParameterType(ModelParameterList__float2* __this);
double ModelParameterList__float2__get_StartTime(ModelParameterList__float2* __this);
int ModelParameterList__float2__get_ValueType(ModelParameterList__float2* __this);
::app::Uno::Content::Models::ModelParameter* ModelParameterList__float2__GetListItem(ModelParameterList__float2* __this, int index);
ModelParameterList__float2* ModelParameterList__float2__New_1(::uStatic* __this, int itemType, ::uArray* items);
void ModelParameterList__float2__Update(ModelParameterList__float2* __this, double time);
void ModelParameterList__float2__UpdateAnimInfo(ModelParameterList__float2* __this);

struct ModelParameterList__float2 : ::app::Uno::Content::Models::ModelParameter
{
    int _itemType;
    ::uStrong< ::uArray*> _items;
    ::uStrong< ::uArray*> _values;
    bool _isAnimated;
    bool _hasAnimInfo;
    double _start;
    double _end;

    void _ObjInit_1(int itemType, ::uArray* items) { ModelParameterList__float2___ObjInit_1(this, itemType, items); }
    void UpdateAnimInfo() { ModelParameterList__float2__UpdateAnimInfo(this); }
};

}}}}


#endif
