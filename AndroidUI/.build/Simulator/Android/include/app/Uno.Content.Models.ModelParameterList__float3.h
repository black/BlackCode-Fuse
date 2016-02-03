// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER_LIST__FLOAT3_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER_LIST__FLOAT3_H__

#include <app/Uno.Content.Models.ModelParameter.h>
#include <app/Uno.Float3.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameter__float3; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelParameterList__float3;

struct ModelParameterList__float3__uType : ::app::Uno::Content::Models::ModelParameter__uType
{
};

ModelParameterList__float3__uType* ModelParameterList__float3__typeof();

void ModelParameterList__float3___ObjInit_1(ModelParameterList__float3* __this, int itemType, ::uArray* items);
double ModelParameterList__float3__get_EndTime(ModelParameterList__float3* __this);
bool ModelParameterList__float3__get_IsAnimated(ModelParameterList__float3* __this);
int ModelParameterList__float3__get_ListItemType(ModelParameterList__float3* __this);
int ModelParameterList__float3__get_ListLength(ModelParameterList__float3* __this);
int ModelParameterList__float3__get_ParameterType(ModelParameterList__float3* __this);
double ModelParameterList__float3__get_StartTime(ModelParameterList__float3* __this);
int ModelParameterList__float3__get_ValueType(ModelParameterList__float3* __this);
::app::Uno::Content::Models::ModelParameter* ModelParameterList__float3__GetListItem(ModelParameterList__float3* __this, int index);
ModelParameterList__float3* ModelParameterList__float3__New_1(::uStatic* __this, int itemType, ::uArray* items);
void ModelParameterList__float3__Update(ModelParameterList__float3* __this, double time);
void ModelParameterList__float3__UpdateAnimInfo(ModelParameterList__float3* __this);

struct ModelParameterList__float3 : ::app::Uno::Content::Models::ModelParameter
{
    int _itemType;
    ::uStrong< ::uArray*> _items;
    ::uStrong< ::uArray*> _values;
    bool _isAnimated;
    bool _hasAnimInfo;
    double _start;
    double _end;

    void _ObjInit_1(int itemType, ::uArray* items) { ModelParameterList__float3___ObjInit_1(this, itemType, items); }
    void UpdateAnimInfo() { ModelParameterList__float3__UpdateAnimInfo(this); }
};

}}}}


#endif
