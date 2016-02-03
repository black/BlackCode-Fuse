#include <app/Uno.Bool.h>
#include <app/Uno.Content.Models.ModelParameter__float.h>
#include <app/Uno.Content.Models.ModelParameter__float2.h>
#include <app/Uno.Content.Models.ModelParameter__float3.h>
#include <app/Uno.Content.Models.ModelParameter__float4.h>
#include <app/Uno.Content.Models.ModelParameter__float4x4.h>
#include <app/Uno.Content.Models.ModelParameter__string.h>
#include <app/Uno.Content.Models.ModelParameterList__float.h>
#include <app/Uno.Content.Models.ModelParameterList__float2.h>
#include <app/Uno.Content.Models.ModelParameterList__float3.h>
#include <app/Uno.Content.Models.ModelParameterList__float4.h>
#include <app/Uno.Content.Models.ModelParameterList__float4x4.h>
#include <app/Uno.Content.Models.ModelParameterList__string.h>
#include <app/Uno.Content.Models.ModelParameterType.h>
#include <app/Uno.Content.Models.ModelParameterValueType.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Content {
namespace Models {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelParameterList__float__uType* ModelParameterList__float__typeof()
{
    static ::uStaticStrong<ModelParameterList__float__uType*> type;
    if (type != NULL) return type;

    type = (ModelParameterList__float__uType*)::uAllocClassType(sizeof(ModelParameterList__float__uType), "Uno.Content.Models.ModelParameterList<float>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::Content::Models::ModelParameter__typeof());
    type->__fp_get_EndTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float__get_EndTime;
    type->__fp_get_IsAnimated = (bool(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float__get_IsAnimated;
    type->__fp_get_ListItemType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float__get_ListItemType;
    type->__fp_get_ListLength = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float__get_ListLength;
    type->__fp_get_ParameterType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float__get_ParameterType;
    type->__fp_get_StartTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float__get_StartTime;
    type->__fp_get_ValueType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float__get_ValueType;
    type->__fp_GetListItem = (::app::Uno::Content::Models::ModelParameter*(*)(::app::Uno::Content::Models::ModelParameter*, int))ModelParameterList__float__GetListItem;
    type->__fp_Update = (void(*)(::app::Uno::Content::Models::ModelParameter*, double))ModelParameterList__float__Update;

    type->SetStrongRefs(
        "_items", offsetof(ModelParameterList__float, _items),
        "_values", offsetof(ModelParameterList__float, _values));

    type->SetFields(7,
        ::uNewField("_end", NULL, offsetof(ModelParameterList__float, _end), ::app::Uno::Double__typeof()),
        ::uNewField("_hasAnimInfo", NULL, offsetof(ModelParameterList__float, _hasAnimInfo), ::app::Uno::Bool__typeof()),
        ::uNewField("_isAnimated", NULL, offsetof(ModelParameterList__float, _isAnimated), ::app::Uno::Bool__typeof()),
        ::uNewField("_items", NULL, offsetof(ModelParameterList__float, _items), ::uGetArrayType(::app::Uno::Content::Models::ModelParameter__float__typeof())),
        ::uNewField("_itemType", NULL, offsetof(ModelParameterList__float, _itemType), ::app::Uno::Content::Models::ModelParameterValueType__typeof()),
        ::uNewField("_start", NULL, offsetof(ModelParameterList__float, _start), ::app::Uno::Double__typeof()),
        ::uNewField("_values", NULL, offsetof(ModelParameterList__float, _values), ::uGetArrayType(::app::Uno::Float__typeof())));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ModelParameterList__float__New_1, 0, true, ModelParameterList__float__typeof(), ::app::Uno::Content::Models::ModelParameterValueType__typeof(), ::uGetArrayType(::app::Uno::Content::Models::ModelParameter__float__typeof())));

    ::uRegisterType(type);
    return type;
}

void ModelParameterList__float___ObjInit_1(ModelParameterList__float* __this, int itemType, ::uArray* items)
{
    ::app::Uno::Content::Models::ModelParameter___ObjInit(__this);
    __this->_itemType = itemType;
    __this->_items = items;
    __this->_values = ::uNewArray(::app::Uno::Float__typeof(), ::uPtr< ::uArray*>(items)->Length());
    __this->Update(__this->StartTime());
}

double ModelParameterList__float__get_EndTime(ModelParameterList__float* __this)
{
    __this->UpdateAnimInfo();
    return __this->_end;
}

bool ModelParameterList__float__get_IsAnimated(ModelParameterList__float* __this)
{
    __this->UpdateAnimInfo();
    return __this->_isAnimated;
}

int ModelParameterList__float__get_ListItemType(ModelParameterList__float* __this)
{
    return __this->_itemType;
}

int ModelParameterList__float__get_ListLength(ModelParameterList__float* __this)
{
    return ::uPtr< ::uArray*>(__this->_items)->Length();
}

int ModelParameterList__float__get_ParameterType(ModelParameterList__float* __this)
{
    return 2;
}

double ModelParameterList__float__get_StartTime(ModelParameterList__float* __this)
{
    __this->UpdateAnimInfo();
    return __this->_start;
}

int ModelParameterList__float__get_ValueType(ModelParameterList__float* __this)
{
    return 7;
}

::app::Uno::Content::Models::ModelParameter* ModelParameterList__float__GetListItem(ModelParameterList__float* __this, int index)
{
    return (::app::Uno::Content::Models::ModelParameter*)::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float*>(index);
}

ModelParameterList__float* ModelParameterList__float__New_1(::uStatic* __this, int itemType, ::uArray* items)
{
    ModelParameterList__float* inst = (ModelParameterList__float*)::uAllocObject(sizeof(ModelParameterList__float), ModelParameterList__float__typeof());
    inst->_ObjInit_1(itemType, items);
    return inst;
}

void ModelParameterList__float__Update(ModelParameterList__float* __this, double time)
{
    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_items)->Length(); i++)
    {
        if (::uPtr< ::app::Uno::Content::Models::ModelParameter__float*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float*>(i))->IsAnimated())
        {
            ::uPtr< ::app::Uno::Content::Models::ModelParameter__float*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float*>(i))->Update(time);
            ::uPtr< ::uArray*>(__this->_values)->Item< float>(i) = ::uPtr< ::app::Uno::Content::Models::ModelParameter__float*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float*>(i))->Value();
        }
    }
}

void ModelParameterList__float__UpdateAnimInfo(ModelParameterList__float* __this)
{
    if (__this->_hasAnimInfo)
    {
        return;
    }

    __this->_start = 100000.0;
    __this->_end = -100000.0;
    __this->_isAnimated = false;

    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_items)->Length(); i++)
    {
        if (::uPtr< ::app::Uno::Content::Models::ModelParameter__float*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float*>(i))->IsAnimated())
        {
            __this->_start = ::app::Uno::Math__Min(NULL, ::uPtr< ::app::Uno::Content::Models::ModelParameter__float*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float*>(i))->StartTime(), __this->_start);
            __this->_end = ::app::Uno::Math__Max(NULL, ::uPtr< ::app::Uno::Content::Models::ModelParameter__float*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float*>(i))->EndTime(), __this->_end);
            __this->_isAnimated = true;
        }
    }

    __this->_hasAnimInfo = true;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelParameterList__float2__uType* ModelParameterList__float2__typeof()
{
    static ::uStaticStrong<ModelParameterList__float2__uType*> type;
    if (type != NULL) return type;

    type = (ModelParameterList__float2__uType*)::uAllocClassType(sizeof(ModelParameterList__float2__uType), "Uno.Content.Models.ModelParameterList<float2>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::Content::Models::ModelParameter__typeof());
    type->__fp_get_EndTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float2__get_EndTime;
    type->__fp_get_IsAnimated = (bool(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float2__get_IsAnimated;
    type->__fp_get_ListItemType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float2__get_ListItemType;
    type->__fp_get_ListLength = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float2__get_ListLength;
    type->__fp_get_ParameterType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float2__get_ParameterType;
    type->__fp_get_StartTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float2__get_StartTime;
    type->__fp_get_ValueType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float2__get_ValueType;
    type->__fp_GetListItem = (::app::Uno::Content::Models::ModelParameter*(*)(::app::Uno::Content::Models::ModelParameter*, int))ModelParameterList__float2__GetListItem;
    type->__fp_Update = (void(*)(::app::Uno::Content::Models::ModelParameter*, double))ModelParameterList__float2__Update;

    type->SetStrongRefs(
        "_items", offsetof(ModelParameterList__float2, _items),
        "_values", offsetof(ModelParameterList__float2, _values));

    type->SetFields(7,
        ::uNewField("_end", NULL, offsetof(ModelParameterList__float2, _end), ::app::Uno::Double__typeof()),
        ::uNewField("_hasAnimInfo", NULL, offsetof(ModelParameterList__float2, _hasAnimInfo), ::app::Uno::Bool__typeof()),
        ::uNewField("_isAnimated", NULL, offsetof(ModelParameterList__float2, _isAnimated), ::app::Uno::Bool__typeof()),
        ::uNewField("_items", NULL, offsetof(ModelParameterList__float2, _items), ::uGetArrayType(::app::Uno::Content::Models::ModelParameter__float2__typeof())),
        ::uNewField("_itemType", NULL, offsetof(ModelParameterList__float2, _itemType), ::app::Uno::Content::Models::ModelParameterValueType__typeof()),
        ::uNewField("_start", NULL, offsetof(ModelParameterList__float2, _start), ::app::Uno::Double__typeof()),
        ::uNewField("_values", NULL, offsetof(ModelParameterList__float2, _values), ::uGetArrayType(::app::Uno::Float2__typeof())));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ModelParameterList__float2__New_1, 0, true, ModelParameterList__float2__typeof(), ::app::Uno::Content::Models::ModelParameterValueType__typeof(), ::uGetArrayType(::app::Uno::Content::Models::ModelParameter__float2__typeof())));

    ::uRegisterType(type);
    return type;
}

void ModelParameterList__float2___ObjInit_1(ModelParameterList__float2* __this, int itemType, ::uArray* items)
{
    ::app::Uno::Content::Models::ModelParameter___ObjInit(__this);
    __this->_itemType = itemType;
    __this->_items = items;
    __this->_values = ::uNewArray(::app::Uno::Float2__typeof(), ::uPtr< ::uArray*>(items)->Length());
    __this->Update(__this->StartTime());
}

double ModelParameterList__float2__get_EndTime(ModelParameterList__float2* __this)
{
    __this->UpdateAnimInfo();
    return __this->_end;
}

bool ModelParameterList__float2__get_IsAnimated(ModelParameterList__float2* __this)
{
    __this->UpdateAnimInfo();
    return __this->_isAnimated;
}

int ModelParameterList__float2__get_ListItemType(ModelParameterList__float2* __this)
{
    return __this->_itemType;
}

int ModelParameterList__float2__get_ListLength(ModelParameterList__float2* __this)
{
    return ::uPtr< ::uArray*>(__this->_items)->Length();
}

int ModelParameterList__float2__get_ParameterType(ModelParameterList__float2* __this)
{
    return 2;
}

double ModelParameterList__float2__get_StartTime(ModelParameterList__float2* __this)
{
    __this->UpdateAnimInfo();
    return __this->_start;
}

int ModelParameterList__float2__get_ValueType(ModelParameterList__float2* __this)
{
    return 7;
}

::app::Uno::Content::Models::ModelParameter* ModelParameterList__float2__GetListItem(ModelParameterList__float2* __this, int index)
{
    return (::app::Uno::Content::Models::ModelParameter*)::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float2*>(index);
}

ModelParameterList__float2* ModelParameterList__float2__New_1(::uStatic* __this, int itemType, ::uArray* items)
{
    ModelParameterList__float2* inst = (ModelParameterList__float2*)::uAllocObject(sizeof(ModelParameterList__float2), ModelParameterList__float2__typeof());
    inst->_ObjInit_1(itemType, items);
    return inst;
}

void ModelParameterList__float2__Update(ModelParameterList__float2* __this, double time)
{
    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_items)->Length(); i++)
    {
        if (::uPtr< ::app::Uno::Content::Models::ModelParameter__float2*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float2*>(i))->IsAnimated())
        {
            ::uPtr< ::app::Uno::Content::Models::ModelParameter__float2*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float2*>(i))->Update(time);
            ::uPtr< ::uArray*>(__this->_values)->Item< ::app::Uno::Float2>(i) = ::uPtr< ::app::Uno::Content::Models::ModelParameter__float2*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float2*>(i))->Value();
        }
    }
}

void ModelParameterList__float2__UpdateAnimInfo(ModelParameterList__float2* __this)
{
    if (__this->_hasAnimInfo)
    {
        return;
    }

    __this->_start = 100000.0;
    __this->_end = -100000.0;
    __this->_isAnimated = false;

    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_items)->Length(); i++)
    {
        if (::uPtr< ::app::Uno::Content::Models::ModelParameter__float2*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float2*>(i))->IsAnimated())
        {
            __this->_start = ::app::Uno::Math__Min(NULL, ::uPtr< ::app::Uno::Content::Models::ModelParameter__float2*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float2*>(i))->StartTime(), __this->_start);
            __this->_end = ::app::Uno::Math__Max(NULL, ::uPtr< ::app::Uno::Content::Models::ModelParameter__float2*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float2*>(i))->EndTime(), __this->_end);
            __this->_isAnimated = true;
        }
    }

    __this->_hasAnimInfo = true;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelParameterList__float3__uType* ModelParameterList__float3__typeof()
{
    static ::uStaticStrong<ModelParameterList__float3__uType*> type;
    if (type != NULL) return type;

    type = (ModelParameterList__float3__uType*)::uAllocClassType(sizeof(ModelParameterList__float3__uType), "Uno.Content.Models.ModelParameterList<float3>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::Content::Models::ModelParameter__typeof());
    type->__fp_get_EndTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float3__get_EndTime;
    type->__fp_get_IsAnimated = (bool(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float3__get_IsAnimated;
    type->__fp_get_ListItemType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float3__get_ListItemType;
    type->__fp_get_ListLength = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float3__get_ListLength;
    type->__fp_get_ParameterType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float3__get_ParameterType;
    type->__fp_get_StartTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float3__get_StartTime;
    type->__fp_get_ValueType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float3__get_ValueType;
    type->__fp_GetListItem = (::app::Uno::Content::Models::ModelParameter*(*)(::app::Uno::Content::Models::ModelParameter*, int))ModelParameterList__float3__GetListItem;
    type->__fp_Update = (void(*)(::app::Uno::Content::Models::ModelParameter*, double))ModelParameterList__float3__Update;

    type->SetStrongRefs(
        "_items", offsetof(ModelParameterList__float3, _items),
        "_values", offsetof(ModelParameterList__float3, _values));

    type->SetFields(7,
        ::uNewField("_end", NULL, offsetof(ModelParameterList__float3, _end), ::app::Uno::Double__typeof()),
        ::uNewField("_hasAnimInfo", NULL, offsetof(ModelParameterList__float3, _hasAnimInfo), ::app::Uno::Bool__typeof()),
        ::uNewField("_isAnimated", NULL, offsetof(ModelParameterList__float3, _isAnimated), ::app::Uno::Bool__typeof()),
        ::uNewField("_items", NULL, offsetof(ModelParameterList__float3, _items), ::uGetArrayType(::app::Uno::Content::Models::ModelParameter__float3__typeof())),
        ::uNewField("_itemType", NULL, offsetof(ModelParameterList__float3, _itemType), ::app::Uno::Content::Models::ModelParameterValueType__typeof()),
        ::uNewField("_start", NULL, offsetof(ModelParameterList__float3, _start), ::app::Uno::Double__typeof()),
        ::uNewField("_values", NULL, offsetof(ModelParameterList__float3, _values), ::uGetArrayType(::app::Uno::Float3__typeof())));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ModelParameterList__float3__New_1, 0, true, ModelParameterList__float3__typeof(), ::app::Uno::Content::Models::ModelParameterValueType__typeof(), ::uGetArrayType(::app::Uno::Content::Models::ModelParameter__float3__typeof())));

    ::uRegisterType(type);
    return type;
}

void ModelParameterList__float3___ObjInit_1(ModelParameterList__float3* __this, int itemType, ::uArray* items)
{
    ::app::Uno::Content::Models::ModelParameter___ObjInit(__this);
    __this->_itemType = itemType;
    __this->_items = items;
    __this->_values = ::uNewArray(::app::Uno::Float3__typeof(), ::uPtr< ::uArray*>(items)->Length());
    __this->Update(__this->StartTime());
}

double ModelParameterList__float3__get_EndTime(ModelParameterList__float3* __this)
{
    __this->UpdateAnimInfo();
    return __this->_end;
}

bool ModelParameterList__float3__get_IsAnimated(ModelParameterList__float3* __this)
{
    __this->UpdateAnimInfo();
    return __this->_isAnimated;
}

int ModelParameterList__float3__get_ListItemType(ModelParameterList__float3* __this)
{
    return __this->_itemType;
}

int ModelParameterList__float3__get_ListLength(ModelParameterList__float3* __this)
{
    return ::uPtr< ::uArray*>(__this->_items)->Length();
}

int ModelParameterList__float3__get_ParameterType(ModelParameterList__float3* __this)
{
    return 2;
}

double ModelParameterList__float3__get_StartTime(ModelParameterList__float3* __this)
{
    __this->UpdateAnimInfo();
    return __this->_start;
}

int ModelParameterList__float3__get_ValueType(ModelParameterList__float3* __this)
{
    return 7;
}

::app::Uno::Content::Models::ModelParameter* ModelParameterList__float3__GetListItem(ModelParameterList__float3* __this, int index)
{
    return (::app::Uno::Content::Models::ModelParameter*)::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float3*>(index);
}

ModelParameterList__float3* ModelParameterList__float3__New_1(::uStatic* __this, int itemType, ::uArray* items)
{
    ModelParameterList__float3* inst = (ModelParameterList__float3*)::uAllocObject(sizeof(ModelParameterList__float3), ModelParameterList__float3__typeof());
    inst->_ObjInit_1(itemType, items);
    return inst;
}

void ModelParameterList__float3__Update(ModelParameterList__float3* __this, double time)
{
    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_items)->Length(); i++)
    {
        if (::uPtr< ::app::Uno::Content::Models::ModelParameter__float3*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float3*>(i))->IsAnimated())
        {
            ::uPtr< ::app::Uno::Content::Models::ModelParameter__float3*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float3*>(i))->Update(time);
            ::uPtr< ::uArray*>(__this->_values)->Item< ::app::Uno::Float3>(i) = ::uPtr< ::app::Uno::Content::Models::ModelParameter__float3*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float3*>(i))->Value();
        }
    }
}

void ModelParameterList__float3__UpdateAnimInfo(ModelParameterList__float3* __this)
{
    if (__this->_hasAnimInfo)
    {
        return;
    }

    __this->_start = 100000.0;
    __this->_end = -100000.0;
    __this->_isAnimated = false;

    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_items)->Length(); i++)
    {
        if (::uPtr< ::app::Uno::Content::Models::ModelParameter__float3*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float3*>(i))->IsAnimated())
        {
            __this->_start = ::app::Uno::Math__Min(NULL, ::uPtr< ::app::Uno::Content::Models::ModelParameter__float3*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float3*>(i))->StartTime(), __this->_start);
            __this->_end = ::app::Uno::Math__Max(NULL, ::uPtr< ::app::Uno::Content::Models::ModelParameter__float3*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float3*>(i))->EndTime(), __this->_end);
            __this->_isAnimated = true;
        }
    }

    __this->_hasAnimInfo = true;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelParameterList__float4__uType* ModelParameterList__float4__typeof()
{
    static ::uStaticStrong<ModelParameterList__float4__uType*> type;
    if (type != NULL) return type;

    type = (ModelParameterList__float4__uType*)::uAllocClassType(sizeof(ModelParameterList__float4__uType), "Uno.Content.Models.ModelParameterList<float4>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::Content::Models::ModelParameter__typeof());
    type->__fp_get_EndTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float4__get_EndTime;
    type->__fp_get_IsAnimated = (bool(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float4__get_IsAnimated;
    type->__fp_get_ListItemType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float4__get_ListItemType;
    type->__fp_get_ListLength = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float4__get_ListLength;
    type->__fp_get_ParameterType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float4__get_ParameterType;
    type->__fp_get_StartTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float4__get_StartTime;
    type->__fp_get_ValueType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float4__get_ValueType;
    type->__fp_GetListItem = (::app::Uno::Content::Models::ModelParameter*(*)(::app::Uno::Content::Models::ModelParameter*, int))ModelParameterList__float4__GetListItem;
    type->__fp_Update = (void(*)(::app::Uno::Content::Models::ModelParameter*, double))ModelParameterList__float4__Update;

    type->SetStrongRefs(
        "_items", offsetof(ModelParameterList__float4, _items),
        "_values", offsetof(ModelParameterList__float4, _values));

    type->SetFields(7,
        ::uNewField("_end", NULL, offsetof(ModelParameterList__float4, _end), ::app::Uno::Double__typeof()),
        ::uNewField("_hasAnimInfo", NULL, offsetof(ModelParameterList__float4, _hasAnimInfo), ::app::Uno::Bool__typeof()),
        ::uNewField("_isAnimated", NULL, offsetof(ModelParameterList__float4, _isAnimated), ::app::Uno::Bool__typeof()),
        ::uNewField("_items", NULL, offsetof(ModelParameterList__float4, _items), ::uGetArrayType(::app::Uno::Content::Models::ModelParameter__float4__typeof())),
        ::uNewField("_itemType", NULL, offsetof(ModelParameterList__float4, _itemType), ::app::Uno::Content::Models::ModelParameterValueType__typeof()),
        ::uNewField("_start", NULL, offsetof(ModelParameterList__float4, _start), ::app::Uno::Double__typeof()),
        ::uNewField("_values", NULL, offsetof(ModelParameterList__float4, _values), ::uGetArrayType(::app::Uno::Float4__typeof())));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ModelParameterList__float4__New_1, 0, true, ModelParameterList__float4__typeof(), ::app::Uno::Content::Models::ModelParameterValueType__typeof(), ::uGetArrayType(::app::Uno::Content::Models::ModelParameter__float4__typeof())));

    ::uRegisterType(type);
    return type;
}

void ModelParameterList__float4___ObjInit_1(ModelParameterList__float4* __this, int itemType, ::uArray* items)
{
    ::app::Uno::Content::Models::ModelParameter___ObjInit(__this);
    __this->_itemType = itemType;
    __this->_items = items;
    __this->_values = ::uNewArray(::app::Uno::Float4__typeof(), ::uPtr< ::uArray*>(items)->Length());
    __this->Update(__this->StartTime());
}

double ModelParameterList__float4__get_EndTime(ModelParameterList__float4* __this)
{
    __this->UpdateAnimInfo();
    return __this->_end;
}

bool ModelParameterList__float4__get_IsAnimated(ModelParameterList__float4* __this)
{
    __this->UpdateAnimInfo();
    return __this->_isAnimated;
}

int ModelParameterList__float4__get_ListItemType(ModelParameterList__float4* __this)
{
    return __this->_itemType;
}

int ModelParameterList__float4__get_ListLength(ModelParameterList__float4* __this)
{
    return ::uPtr< ::uArray*>(__this->_items)->Length();
}

int ModelParameterList__float4__get_ParameterType(ModelParameterList__float4* __this)
{
    return 2;
}

double ModelParameterList__float4__get_StartTime(ModelParameterList__float4* __this)
{
    __this->UpdateAnimInfo();
    return __this->_start;
}

int ModelParameterList__float4__get_ValueType(ModelParameterList__float4* __this)
{
    return 7;
}

::app::Uno::Content::Models::ModelParameter* ModelParameterList__float4__GetListItem(ModelParameterList__float4* __this, int index)
{
    return (::app::Uno::Content::Models::ModelParameter*)::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float4*>(index);
}

ModelParameterList__float4* ModelParameterList__float4__New_1(::uStatic* __this, int itemType, ::uArray* items)
{
    ModelParameterList__float4* inst = (ModelParameterList__float4*)::uAllocObject(sizeof(ModelParameterList__float4), ModelParameterList__float4__typeof());
    inst->_ObjInit_1(itemType, items);
    return inst;
}

void ModelParameterList__float4__Update(ModelParameterList__float4* __this, double time)
{
    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_items)->Length(); i++)
    {
        if (::uPtr< ::app::Uno::Content::Models::ModelParameter__float4*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float4*>(i))->IsAnimated())
        {
            ::uPtr< ::app::Uno::Content::Models::ModelParameter__float4*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float4*>(i))->Update(time);
            ::uPtr< ::uArray*>(__this->_values)->Item< ::app::Uno::Float4>(i) = ::uPtr< ::app::Uno::Content::Models::ModelParameter__float4*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float4*>(i))->Value();
        }
    }
}

void ModelParameterList__float4__UpdateAnimInfo(ModelParameterList__float4* __this)
{
    if (__this->_hasAnimInfo)
    {
        return;
    }

    __this->_start = 100000.0;
    __this->_end = -100000.0;
    __this->_isAnimated = false;

    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_items)->Length(); i++)
    {
        if (::uPtr< ::app::Uno::Content::Models::ModelParameter__float4*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float4*>(i))->IsAnimated())
        {
            __this->_start = ::app::Uno::Math__Min(NULL, ::uPtr< ::app::Uno::Content::Models::ModelParameter__float4*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float4*>(i))->StartTime(), __this->_start);
            __this->_end = ::app::Uno::Math__Max(NULL, ::uPtr< ::app::Uno::Content::Models::ModelParameter__float4*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float4*>(i))->EndTime(), __this->_end);
            __this->_isAnimated = true;
        }
    }

    __this->_hasAnimInfo = true;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelParameterList__float4x4__uType* ModelParameterList__float4x4__typeof()
{
    static ::uStaticStrong<ModelParameterList__float4x4__uType*> type;
    if (type != NULL) return type;

    type = (ModelParameterList__float4x4__uType*)::uAllocClassType(sizeof(ModelParameterList__float4x4__uType), "Uno.Content.Models.ModelParameterList<float4x4>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::Content::Models::ModelParameter__typeof());
    type->__fp_get_EndTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float4x4__get_EndTime;
    type->__fp_get_IsAnimated = (bool(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float4x4__get_IsAnimated;
    type->__fp_get_ListItemType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float4x4__get_ListItemType;
    type->__fp_get_ListLength = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float4x4__get_ListLength;
    type->__fp_get_ParameterType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float4x4__get_ParameterType;
    type->__fp_get_StartTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float4x4__get_StartTime;
    type->__fp_get_ValueType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__float4x4__get_ValueType;
    type->__fp_GetListItem = (::app::Uno::Content::Models::ModelParameter*(*)(::app::Uno::Content::Models::ModelParameter*, int))ModelParameterList__float4x4__GetListItem;
    type->__fp_Update = (void(*)(::app::Uno::Content::Models::ModelParameter*, double))ModelParameterList__float4x4__Update;

    type->SetStrongRefs(
        "_items", offsetof(ModelParameterList__float4x4, _items),
        "_values", offsetof(ModelParameterList__float4x4, _values));

    type->SetFields(7,
        ::uNewField("_end", NULL, offsetof(ModelParameterList__float4x4, _end), ::app::Uno::Double__typeof()),
        ::uNewField("_hasAnimInfo", NULL, offsetof(ModelParameterList__float4x4, _hasAnimInfo), ::app::Uno::Bool__typeof()),
        ::uNewField("_isAnimated", NULL, offsetof(ModelParameterList__float4x4, _isAnimated), ::app::Uno::Bool__typeof()),
        ::uNewField("_items", NULL, offsetof(ModelParameterList__float4x4, _items), ::uGetArrayType(::app::Uno::Content::Models::ModelParameter__float4x4__typeof())),
        ::uNewField("_itemType", NULL, offsetof(ModelParameterList__float4x4, _itemType), ::app::Uno::Content::Models::ModelParameterValueType__typeof()),
        ::uNewField("_start", NULL, offsetof(ModelParameterList__float4x4, _start), ::app::Uno::Double__typeof()),
        ::uNewField("_values", NULL, offsetof(ModelParameterList__float4x4, _values), ::uGetArrayType(::app::Uno::Float4x4__typeof())));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ModelParameterList__float4x4__New_1, 0, true, ModelParameterList__float4x4__typeof(), ::app::Uno::Content::Models::ModelParameterValueType__typeof(), ::uGetArrayType(::app::Uno::Content::Models::ModelParameter__float4x4__typeof())));

    ::uRegisterType(type);
    return type;
}

void ModelParameterList__float4x4___ObjInit_1(ModelParameterList__float4x4* __this, int itemType, ::uArray* items)
{
    ::app::Uno::Content::Models::ModelParameter___ObjInit(__this);
    __this->_itemType = itemType;
    __this->_items = items;
    __this->_values = ::uNewArray(::app::Uno::Float4x4__typeof(), ::uPtr< ::uArray*>(items)->Length());
    __this->Update(__this->StartTime());
}

double ModelParameterList__float4x4__get_EndTime(ModelParameterList__float4x4* __this)
{
    __this->UpdateAnimInfo();
    return __this->_end;
}

bool ModelParameterList__float4x4__get_IsAnimated(ModelParameterList__float4x4* __this)
{
    __this->UpdateAnimInfo();
    return __this->_isAnimated;
}

int ModelParameterList__float4x4__get_ListItemType(ModelParameterList__float4x4* __this)
{
    return __this->_itemType;
}

int ModelParameterList__float4x4__get_ListLength(ModelParameterList__float4x4* __this)
{
    return ::uPtr< ::uArray*>(__this->_items)->Length();
}

int ModelParameterList__float4x4__get_ParameterType(ModelParameterList__float4x4* __this)
{
    return 2;
}

double ModelParameterList__float4x4__get_StartTime(ModelParameterList__float4x4* __this)
{
    __this->UpdateAnimInfo();
    return __this->_start;
}

int ModelParameterList__float4x4__get_ValueType(ModelParameterList__float4x4* __this)
{
    return 7;
}

::app::Uno::Content::Models::ModelParameter* ModelParameterList__float4x4__GetListItem(ModelParameterList__float4x4* __this, int index)
{
    return (::app::Uno::Content::Models::ModelParameter*)::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float4x4*>(index);
}

ModelParameterList__float4x4* ModelParameterList__float4x4__New_1(::uStatic* __this, int itemType, ::uArray* items)
{
    ModelParameterList__float4x4* inst = (ModelParameterList__float4x4*)::uAllocObject(sizeof(ModelParameterList__float4x4), ModelParameterList__float4x4__typeof());
    inst->_ObjInit_1(itemType, items);
    return inst;
}

void ModelParameterList__float4x4__Update(ModelParameterList__float4x4* __this, double time)
{
    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_items)->Length(); i++)
    {
        if (::uPtr< ::app::Uno::Content::Models::ModelParameter__float4x4*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float4x4*>(i))->IsAnimated())
        {
            ::uPtr< ::app::Uno::Content::Models::ModelParameter__float4x4*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float4x4*>(i))->Update(time);
            ::uPtr< ::uArray*>(__this->_values)->Item< ::app::Uno::Float4x4>(i) = ::uPtr< ::app::Uno::Content::Models::ModelParameter__float4x4*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float4x4*>(i))->Value();
        }
    }
}

void ModelParameterList__float4x4__UpdateAnimInfo(ModelParameterList__float4x4* __this)
{
    if (__this->_hasAnimInfo)
    {
        return;
    }

    __this->_start = 100000.0;
    __this->_end = -100000.0;
    __this->_isAnimated = false;

    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_items)->Length(); i++)
    {
        if (::uPtr< ::app::Uno::Content::Models::ModelParameter__float4x4*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float4x4*>(i))->IsAnimated())
        {
            __this->_start = ::app::Uno::Math__Min(NULL, ::uPtr< ::app::Uno::Content::Models::ModelParameter__float4x4*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float4x4*>(i))->StartTime(), __this->_start);
            __this->_end = ::app::Uno::Math__Max(NULL, ::uPtr< ::app::Uno::Content::Models::ModelParameter__float4x4*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__float4x4*>(i))->EndTime(), __this->_end);
            __this->_isAnimated = true;
        }
    }

    __this->_hasAnimInfo = true;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelParameterList__string__uType* ModelParameterList__string__typeof()
{
    static ::uStaticStrong<ModelParameterList__string__uType*> type;
    if (type != NULL) return type;

    type = (ModelParameterList__string__uType*)::uAllocClassType(sizeof(ModelParameterList__string__uType), "Uno.Content.Models.ModelParameterList<string>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::Content::Models::ModelParameter__typeof());
    type->__fp_get_EndTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__string__get_EndTime;
    type->__fp_get_IsAnimated = (bool(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__string__get_IsAnimated;
    type->__fp_get_ListItemType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__string__get_ListItemType;
    type->__fp_get_ListLength = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__string__get_ListLength;
    type->__fp_get_ParameterType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__string__get_ParameterType;
    type->__fp_get_StartTime = (double(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__string__get_StartTime;
    type->__fp_get_ValueType = (int(*)(::app::Uno::Content::Models::ModelParameter*))ModelParameterList__string__get_ValueType;
    type->__fp_GetListItem = (::app::Uno::Content::Models::ModelParameter*(*)(::app::Uno::Content::Models::ModelParameter*, int))ModelParameterList__string__GetListItem;
    type->__fp_Update = (void(*)(::app::Uno::Content::Models::ModelParameter*, double))ModelParameterList__string__Update;

    type->SetStrongRefs(
        "_items", offsetof(ModelParameterList__string, _items),
        "_values", offsetof(ModelParameterList__string, _values));

    type->SetFields(7,
        ::uNewField("_end", NULL, offsetof(ModelParameterList__string, _end), ::app::Uno::Double__typeof()),
        ::uNewField("_hasAnimInfo", NULL, offsetof(ModelParameterList__string, _hasAnimInfo), ::app::Uno::Bool__typeof()),
        ::uNewField("_isAnimated", NULL, offsetof(ModelParameterList__string, _isAnimated), ::app::Uno::Bool__typeof()),
        ::uNewField("_items", NULL, offsetof(ModelParameterList__string, _items), ::uGetArrayType(::app::Uno::Content::Models::ModelParameter__string__typeof())),
        ::uNewField("_itemType", NULL, offsetof(ModelParameterList__string, _itemType), ::app::Uno::Content::Models::ModelParameterValueType__typeof()),
        ::uNewField("_start", NULL, offsetof(ModelParameterList__string, _start), ::app::Uno::Double__typeof()),
        ::uNewField("_values", NULL, offsetof(ModelParameterList__string, _values), ::uGetArrayType(::app::Uno::String__typeof())));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ModelParameterList__string__New_1, 0, true, ModelParameterList__string__typeof(), ::app::Uno::Content::Models::ModelParameterValueType__typeof(), ::uGetArrayType(::app::Uno::Content::Models::ModelParameter__string__typeof())));

    ::uRegisterType(type);
    return type;
}

void ModelParameterList__string___ObjInit_1(ModelParameterList__string* __this, int itemType, ::uArray* items)
{
    ::app::Uno::Content::Models::ModelParameter___ObjInit(__this);
    __this->_itemType = itemType;
    __this->_items = items;
    __this->_values = ::uNewArray(::app::Uno::String__typeof(), ::uPtr< ::uArray*>(items)->Length());
    __this->Update(__this->StartTime());
}

double ModelParameterList__string__get_EndTime(ModelParameterList__string* __this)
{
    __this->UpdateAnimInfo();
    return __this->_end;
}

bool ModelParameterList__string__get_IsAnimated(ModelParameterList__string* __this)
{
    __this->UpdateAnimInfo();
    return __this->_isAnimated;
}

int ModelParameterList__string__get_ListItemType(ModelParameterList__string* __this)
{
    return __this->_itemType;
}

int ModelParameterList__string__get_ListLength(ModelParameterList__string* __this)
{
    return ::uPtr< ::uArray*>(__this->_items)->Length();
}

int ModelParameterList__string__get_ParameterType(ModelParameterList__string* __this)
{
    return 2;
}

double ModelParameterList__string__get_StartTime(ModelParameterList__string* __this)
{
    __this->UpdateAnimInfo();
    return __this->_start;
}

int ModelParameterList__string__get_ValueType(ModelParameterList__string* __this)
{
    return 7;
}

::app::Uno::Content::Models::ModelParameter* ModelParameterList__string__GetListItem(ModelParameterList__string* __this, int index)
{
    return (::app::Uno::Content::Models::ModelParameter*)::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__string*>(index);
}

ModelParameterList__string* ModelParameterList__string__New_1(::uStatic* __this, int itemType, ::uArray* items)
{
    ModelParameterList__string* inst = (ModelParameterList__string*)::uAllocObject(sizeof(ModelParameterList__string), ModelParameterList__string__typeof());
    inst->_ObjInit_1(itemType, items);
    return inst;
}

void ModelParameterList__string__Update(ModelParameterList__string* __this, double time)
{
    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_items)->Length(); i++)
    {
        if (::uPtr< ::app::Uno::Content::Models::ModelParameter__string*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__string*>(i))->IsAnimated())
        {
            ::uPtr< ::app::Uno::Content::Models::ModelParameter__string*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__string*>(i))->Update(time);
            ::uPtr< ::uArray*>(__this->_values)->ItemStrong< ::uString*>(i) = ::uPtr< ::app::Uno::Content::Models::ModelParameter__string*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__string*>(i))->Value();
        }
    }
}

void ModelParameterList__string__UpdateAnimInfo(ModelParameterList__string* __this)
{
    if (__this->_hasAnimInfo)
    {
        return;
    }

    __this->_start = 100000.0;
    __this->_end = -100000.0;
    __this->_isAnimated = false;

    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_items)->Length(); i++)
    {
        if (::uPtr< ::app::Uno::Content::Models::ModelParameter__string*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__string*>(i))->IsAnimated())
        {
            __this->_start = ::app::Uno::Math__Min(NULL, ::uPtr< ::app::Uno::Content::Models::ModelParameter__string*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__string*>(i))->StartTime(), __this->_start);
            __this->_end = ::app::Uno::Math__Max(NULL, ::uPtr< ::app::Uno::Content::Models::ModelParameter__string*>(::uPtr< ::uArray*>(__this->_items)->Item< ::app::Uno::Content::Models::ModelParameter__string*>(i))->EndTime(), __this->_end);
            __this->_isAnimated = true;
        }
    }

    __this->_hasAnimInfo = true;
}

}}}}
