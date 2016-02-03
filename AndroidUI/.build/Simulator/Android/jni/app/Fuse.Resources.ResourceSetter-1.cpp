#include <app/Fuse.Node.h>
#include <app/Fuse.Resources.ResourceSetter__bool.h>
#include <app/Fuse.Resources.ResourceSetter__float.h>
#include <app/Fuse.Resources.ResourceSetter__float2.h>
#include <app/Fuse.Resources.ResourceSetter__float3.h>
#include <app/Fuse.Resources.ResourceSetter__float4.h>
#include <app/Fuse.Resources.ResourceSetter__object.h>
#include <app/Fuse.Resources.ResourceSetter__string.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Resources {

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceSetter__bool__uType* ResourceSetter__bool__typeof()
{
    static ::uStaticStrong<ResourceSetter__bool__uType*> type;
    if (type != NULL) return type;

    type = (ResourceSetter__bool__uType*)::uAllocClassType(sizeof(ResourceSetter__bool__uType), "Fuse.Resources.ResourceSetter<bool>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__bool__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__bool__OnUnrooted;

    type->SetStrongRefs(
        "_key", offsetof(ResourceSetter__bool, _key),
        "_node", offsetof(ResourceSetter__bool, _node));

    type->SetFields(3,
        ::uNewField("_key", NULL, offsetof(ResourceSetter__bool, _key), ::app::Uno::String__typeof()),
        ::uNewField("_node", NULL, offsetof(ResourceSetter__bool, _node), ::app::Fuse::Node__typeof()),
        ::uNewField("_value", NULL, offsetof(ResourceSetter__bool, _value), ::app::Uno::Bool__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_Key", ResourceSetter__bool__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", ResourceSetter__bool__get_Value, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Key", ResourceSetter__bool__set_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Value", ResourceSetter__bool__set_Value, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void ResourceSetter__bool___ObjInit_1(ResourceSetter__bool* __this)
{
    ::app::Fuse::Behavior___ObjInit(__this);
}

::uString* ResourceSetter__bool__get_Key(ResourceSetter__bool* __this)
{
    return __this->_key;
}

bool ResourceSetter__bool__get_Value(ResourceSetter__bool* __this)
{
    return __this->_value;
}

void ResourceSetter__bool__OnChanged(ResourceSetter__bool* __this)
{
    if ((__this->_node != NULL) && ::app::Uno::String__op_Inequality(NULL, __this->_key, NULL))
    {
        ::uPtr< ::app::Fuse::Node*>(__this->_node)->SetResource(__this->_key, ::uBox(::app::Uno::Bool__typeof(), __this->_value));
    }
}

void ResourceSetter__bool__OnRooted(ResourceSetter__bool* __this, ::app::Fuse::Node* n)
{
    __this->_node = n;
    __this->OnChanged();
}

void ResourceSetter__bool__OnUnrooted(ResourceSetter__bool* __this, ::app::Fuse::Node* n)
{
    __this->_node = NULL;
}

void ResourceSetter__bool__set_Key(ResourceSetter__bool* __this, ::uString* value)
{
    __this->_key = value;
    __this->OnChanged();
}

void ResourceSetter__bool__set_Value(ResourceSetter__bool* __this, bool value)
{
    if (!::app::Uno::Object__Equals_1(NULL, ::uBox(::app::Uno::Bool__typeof(), __this->_value), ::uBox(::app::Uno::Bool__typeof(), value)))
    {
        __this->_value = value;
        __this->OnChanged();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceSetter__float__uType* ResourceSetter__float__typeof()
{
    static ::uStaticStrong<ResourceSetter__float__uType*> type;
    if (type != NULL) return type;

    type = (ResourceSetter__float__uType*)::uAllocClassType(sizeof(ResourceSetter__float__uType), "Fuse.Resources.ResourceSetter<float>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__float__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__float__OnUnrooted;

    type->SetStrongRefs(
        "_key", offsetof(ResourceSetter__float, _key),
        "_node", offsetof(ResourceSetter__float, _node));

    type->SetFields(3,
        ::uNewField("_key", NULL, offsetof(ResourceSetter__float, _key), ::app::Uno::String__typeof()),
        ::uNewField("_node", NULL, offsetof(ResourceSetter__float, _node), ::app::Fuse::Node__typeof()),
        ::uNewField("_value", NULL, offsetof(ResourceSetter__float, _value), ::app::Uno::Float__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_Key", ResourceSetter__float__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", ResourceSetter__float__get_Value, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Key", ResourceSetter__float__set_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Value", ResourceSetter__float__set_Value, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void ResourceSetter__float___ObjInit_1(ResourceSetter__float* __this)
{
    ::app::Fuse::Behavior___ObjInit(__this);
}

::uString* ResourceSetter__float__get_Key(ResourceSetter__float* __this)
{
    return __this->_key;
}

float ResourceSetter__float__get_Value(ResourceSetter__float* __this)
{
    return __this->_value;
}

void ResourceSetter__float__OnChanged(ResourceSetter__float* __this)
{
    if ((__this->_node != NULL) && ::app::Uno::String__op_Inequality(NULL, __this->_key, NULL))
    {
        ::uPtr< ::app::Fuse::Node*>(__this->_node)->SetResource(__this->_key, ::uBox(::app::Uno::Float__typeof(), __this->_value));
    }
}

void ResourceSetter__float__OnRooted(ResourceSetter__float* __this, ::app::Fuse::Node* n)
{
    __this->_node = n;
    __this->OnChanged();
}

void ResourceSetter__float__OnUnrooted(ResourceSetter__float* __this, ::app::Fuse::Node* n)
{
    __this->_node = NULL;
}

void ResourceSetter__float__set_Key(ResourceSetter__float* __this, ::uString* value)
{
    __this->_key = value;
    __this->OnChanged();
}

void ResourceSetter__float__set_Value(ResourceSetter__float* __this, float value)
{
    if (!::app::Uno::Object__Equals_1(NULL, ::uBox(::app::Uno::Float__typeof(), __this->_value), ::uBox(::app::Uno::Float__typeof(), value)))
    {
        __this->_value = value;
        __this->OnChanged();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceSetter__float2__uType* ResourceSetter__float2__typeof()
{
    static ::uStaticStrong<ResourceSetter__float2__uType*> type;
    if (type != NULL) return type;

    type = (ResourceSetter__float2__uType*)::uAllocClassType(sizeof(ResourceSetter__float2__uType), "Fuse.Resources.ResourceSetter<float2>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__float2__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__float2__OnUnrooted;

    type->SetStrongRefs(
        "_key", offsetof(ResourceSetter__float2, _key),
        "_node", offsetof(ResourceSetter__float2, _node));

    type->SetFields(3,
        ::uNewField("_key", NULL, offsetof(ResourceSetter__float2, _key), ::app::Uno::String__typeof()),
        ::uNewField("_node", NULL, offsetof(ResourceSetter__float2, _node), ::app::Fuse::Node__typeof()),
        ::uNewField("_value", NULL, offsetof(ResourceSetter__float2, _value), ::app::Uno::Float2__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_Key", ResourceSetter__float2__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", ResourceSetter__float2__get_Value, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Key", ResourceSetter__float2__set_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Value", ResourceSetter__float2__set_Value, 0, false, ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void ResourceSetter__float2___ObjInit_1(ResourceSetter__float2* __this)
{
    ::app::Fuse::Behavior___ObjInit(__this);
}

::uString* ResourceSetter__float2__get_Key(ResourceSetter__float2* __this)
{
    return __this->_key;
}

::app::Uno::Float2 ResourceSetter__float2__get_Value(ResourceSetter__float2* __this)
{
    return __this->_value;
}

void ResourceSetter__float2__OnChanged(ResourceSetter__float2* __this)
{
    if ((__this->_node != NULL) && ::app::Uno::String__op_Inequality(NULL, __this->_key, NULL))
    {
        ::uPtr< ::app::Fuse::Node*>(__this->_node)->SetResource(__this->_key, ::uBox(::app::Uno::Float2__typeof(), __this->_value));
    }
}

void ResourceSetter__float2__OnRooted(ResourceSetter__float2* __this, ::app::Fuse::Node* n)
{
    __this->_node = n;
    __this->OnChanged();
}

void ResourceSetter__float2__OnUnrooted(ResourceSetter__float2* __this, ::app::Fuse::Node* n)
{
    __this->_node = NULL;
}

void ResourceSetter__float2__set_Key(ResourceSetter__float2* __this, ::uString* value)
{
    __this->_key = value;
    __this->OnChanged();
}

void ResourceSetter__float2__set_Value(ResourceSetter__float2* __this, ::app::Uno::Float2 value)
{
    if (!::app::Uno::Object__Equals_1(NULL, ::uBox(::app::Uno::Float2__typeof(), __this->_value), ::uBox(::app::Uno::Float2__typeof(), value)))
    {
        __this->_value = value;
        __this->OnChanged();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceSetter__float3__uType* ResourceSetter__float3__typeof()
{
    static ::uStaticStrong<ResourceSetter__float3__uType*> type;
    if (type != NULL) return type;

    type = (ResourceSetter__float3__uType*)::uAllocClassType(sizeof(ResourceSetter__float3__uType), "Fuse.Resources.ResourceSetter<float3>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__float3__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__float3__OnUnrooted;

    type->SetStrongRefs(
        "_key", offsetof(ResourceSetter__float3, _key),
        "_node", offsetof(ResourceSetter__float3, _node));

    type->SetFields(3,
        ::uNewField("_key", NULL, offsetof(ResourceSetter__float3, _key), ::app::Uno::String__typeof()),
        ::uNewField("_node", NULL, offsetof(ResourceSetter__float3, _node), ::app::Fuse::Node__typeof()),
        ::uNewField("_value", NULL, offsetof(ResourceSetter__float3, _value), ::app::Uno::Float3__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_Key", ResourceSetter__float3__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", ResourceSetter__float3__get_Value, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("set_Key", ResourceSetter__float3__set_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Value", ResourceSetter__float3__set_Value, 0, false, ::app::Uno::Float3__typeof()));

    ::uRegisterType(type);
    return type;
}

void ResourceSetter__float3___ObjInit_1(ResourceSetter__float3* __this)
{
    ::app::Fuse::Behavior___ObjInit(__this);
}

::uString* ResourceSetter__float3__get_Key(ResourceSetter__float3* __this)
{
    return __this->_key;
}

::app::Uno::Float3 ResourceSetter__float3__get_Value(ResourceSetter__float3* __this)
{
    return __this->_value;
}

void ResourceSetter__float3__OnChanged(ResourceSetter__float3* __this)
{
    if ((__this->_node != NULL) && ::app::Uno::String__op_Inequality(NULL, __this->_key, NULL))
    {
        ::uPtr< ::app::Fuse::Node*>(__this->_node)->SetResource(__this->_key, ::uBox(::app::Uno::Float3__typeof(), __this->_value));
    }
}

void ResourceSetter__float3__OnRooted(ResourceSetter__float3* __this, ::app::Fuse::Node* n)
{
    __this->_node = n;
    __this->OnChanged();
}

void ResourceSetter__float3__OnUnrooted(ResourceSetter__float3* __this, ::app::Fuse::Node* n)
{
    __this->_node = NULL;
}

void ResourceSetter__float3__set_Key(ResourceSetter__float3* __this, ::uString* value)
{
    __this->_key = value;
    __this->OnChanged();
}

void ResourceSetter__float3__set_Value(ResourceSetter__float3* __this, ::app::Uno::Float3 value)
{
    if (!::app::Uno::Object__Equals_1(NULL, ::uBox(::app::Uno::Float3__typeof(), __this->_value), ::uBox(::app::Uno::Float3__typeof(), value)))
    {
        __this->_value = value;
        __this->OnChanged();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceSetter__float4__uType* ResourceSetter__float4__typeof()
{
    static ::uStaticStrong<ResourceSetter__float4__uType*> type;
    if (type != NULL) return type;

    type = (ResourceSetter__float4__uType*)::uAllocClassType(sizeof(ResourceSetter__float4__uType), "Fuse.Resources.ResourceSetter<float4>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__float4__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__float4__OnUnrooted;

    type->SetStrongRefs(
        "_key", offsetof(ResourceSetter__float4, _key),
        "_node", offsetof(ResourceSetter__float4, _node));

    type->SetFields(3,
        ::uNewField("_key", NULL, offsetof(ResourceSetter__float4, _key), ::app::Uno::String__typeof()),
        ::uNewField("_node", NULL, offsetof(ResourceSetter__float4, _node), ::app::Fuse::Node__typeof()),
        ::uNewField("_value", NULL, offsetof(ResourceSetter__float4, _value), ::app::Uno::Float4__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_Key", ResourceSetter__float4__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", ResourceSetter__float4__get_Value, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_Key", ResourceSetter__float4__set_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Value", ResourceSetter__float4__set_Value, 0, false, ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void ResourceSetter__float4___ObjInit_1(ResourceSetter__float4* __this)
{
    ::app::Fuse::Behavior___ObjInit(__this);
}

::uString* ResourceSetter__float4__get_Key(ResourceSetter__float4* __this)
{
    return __this->_key;
}

::app::Uno::Float4 ResourceSetter__float4__get_Value(ResourceSetter__float4* __this)
{
    return __this->_value;
}

void ResourceSetter__float4__OnChanged(ResourceSetter__float4* __this)
{
    if ((__this->_node != NULL) && ::app::Uno::String__op_Inequality(NULL, __this->_key, NULL))
    {
        ::uPtr< ::app::Fuse::Node*>(__this->_node)->SetResource(__this->_key, ::uBox(::app::Uno::Float4__typeof(), __this->_value));
    }
}

void ResourceSetter__float4__OnRooted(ResourceSetter__float4* __this, ::app::Fuse::Node* n)
{
    __this->_node = n;
    __this->OnChanged();
}

void ResourceSetter__float4__OnUnrooted(ResourceSetter__float4* __this, ::app::Fuse::Node* n)
{
    __this->_node = NULL;
}

void ResourceSetter__float4__set_Key(ResourceSetter__float4* __this, ::uString* value)
{
    __this->_key = value;
    __this->OnChanged();
}

void ResourceSetter__float4__set_Value(ResourceSetter__float4* __this, ::app::Uno::Float4 value)
{
    if (!::app::Uno::Object__Equals_1(NULL, ::uBox(::app::Uno::Float4__typeof(), __this->_value), ::uBox(::app::Uno::Float4__typeof(), value)))
    {
        __this->_value = value;
        __this->OnChanged();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceSetter__object__uType* ResourceSetter__object__typeof()
{
    static ::uStaticStrong<ResourceSetter__object__uType*> type;
    if (type != NULL) return type;

    type = (ResourceSetter__object__uType*)::uAllocClassType(sizeof(ResourceSetter__object__uType), "Fuse.Resources.ResourceSetter<object>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__object__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__object__OnUnrooted;

    type->SetStrongRefs(
        "_key", offsetof(ResourceSetter__object, _key),
        "_node", offsetof(ResourceSetter__object, _node),
        "_value", offsetof(ResourceSetter__object, _value));

    type->SetFields(3,
        ::uNewField("_key", NULL, offsetof(ResourceSetter__object, _key), ::app::Uno::String__typeof()),
        ::uNewField("_node", NULL, offsetof(ResourceSetter__object, _node), ::app::Fuse::Node__typeof()),
        ::uNewField("_value", NULL, offsetof(ResourceSetter__object, _value), ::uObject__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_Key", ResourceSetter__object__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", ResourceSetter__object__get_Value, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Key", ResourceSetter__object__set_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Value", ResourceSetter__object__set_Value, 0, false, ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void ResourceSetter__object___ObjInit_1(ResourceSetter__object* __this)
{
    ::app::Fuse::Behavior___ObjInit(__this);
}

::uString* ResourceSetter__object__get_Key(ResourceSetter__object* __this)
{
    return __this->_key;
}

::uObject* ResourceSetter__object__get_Value(ResourceSetter__object* __this)
{
    return __this->_value;
}

void ResourceSetter__object__OnChanged(ResourceSetter__object* __this)
{
    if ((__this->_node != NULL) && ::app::Uno::String__op_Inequality(NULL, __this->_key, NULL))
    {
        ::uPtr< ::app::Fuse::Node*>(__this->_node)->SetResource(__this->_key, __this->_value);
    }
}

void ResourceSetter__object__OnRooted(ResourceSetter__object* __this, ::app::Fuse::Node* n)
{
    __this->_node = n;
    __this->OnChanged();
}

void ResourceSetter__object__OnUnrooted(ResourceSetter__object* __this, ::app::Fuse::Node* n)
{
    __this->_node = NULL;
}

void ResourceSetter__object__set_Key(ResourceSetter__object* __this, ::uString* value)
{
    __this->_key = value;
    __this->OnChanged();
}

void ResourceSetter__object__set_Value(ResourceSetter__object* __this, ::uObject* value)
{
    if (!::app::Uno::Object__Equals_1(NULL, __this->_value, value))
    {
        __this->_value = value;
        __this->OnChanged();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceSetter__string__uType* ResourceSetter__string__typeof()
{
    static ::uStaticStrong<ResourceSetter__string__uType*> type;
    if (type != NULL) return type;

    type = (ResourceSetter__string__uType*)::uAllocClassType(sizeof(ResourceSetter__string__uType), "Fuse.Resources.ResourceSetter<string>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__string__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__string__OnUnrooted;

    type->SetStrongRefs(
        "_key", offsetof(ResourceSetter__string, _key),
        "_node", offsetof(ResourceSetter__string, _node),
        "_value", offsetof(ResourceSetter__string, _value));

    type->SetFields(3,
        ::uNewField("_key", NULL, offsetof(ResourceSetter__string, _key), ::app::Uno::String__typeof()),
        ::uNewField("_node", NULL, offsetof(ResourceSetter__string, _node), ::app::Fuse::Node__typeof()),
        ::uNewField("_value", NULL, offsetof(ResourceSetter__string, _value), ::app::Uno::String__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_Key", ResourceSetter__string__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", ResourceSetter__string__get_Value, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Key", ResourceSetter__string__set_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Value", ResourceSetter__string__set_Value, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void ResourceSetter__string___ObjInit_1(ResourceSetter__string* __this)
{
    ::app::Fuse::Behavior___ObjInit(__this);
}

::uString* ResourceSetter__string__get_Key(ResourceSetter__string* __this)
{
    return __this->_key;
}

::uString* ResourceSetter__string__get_Value(ResourceSetter__string* __this)
{
    return __this->_value;
}

void ResourceSetter__string__OnChanged(ResourceSetter__string* __this)
{
    if ((__this->_node != NULL) && ::app::Uno::String__op_Inequality(NULL, __this->_key, NULL))
    {
        ::uPtr< ::app::Fuse::Node*>(__this->_node)->SetResource(__this->_key, (::uObject*)__this->_value);
    }
}

void ResourceSetter__string__OnRooted(ResourceSetter__string* __this, ::app::Fuse::Node* n)
{
    __this->_node = n;
    __this->OnChanged();
}

void ResourceSetter__string__OnUnrooted(ResourceSetter__string* __this, ::app::Fuse::Node* n)
{
    __this->_node = NULL;
}

void ResourceSetter__string__set_Key(ResourceSetter__string* __this, ::uString* value)
{
    __this->_key = value;
    __this->OnChanged();
}

void ResourceSetter__string__set_Value(ResourceSetter__string* __this, ::uString* value)
{
    if (!::app::Uno::Object__Equals_1(NULL, (::uObject*)__this->_value, (::uObject*)value))
    {
        __this->_value = value;
        __this->OnChanged();
    }
}

}}}
