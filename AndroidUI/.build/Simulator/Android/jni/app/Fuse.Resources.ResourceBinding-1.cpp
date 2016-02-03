#include <app/Fuse.Node.h>
#include <app/Fuse.Resources.ResourceBinding__float4.h>
#include <app/Fuse.Resources.ResourceRegistry.h>
#include <app/Uno.Action.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <app/Uno.Predicate__object.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Property__float4.h>

namespace app {
namespace Fuse {
namespace Resources {

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceBinding__float4__uType* ResourceBinding__float4__typeof()
{
    static ::uStaticStrong<ResourceBinding__float4__uType*> type;
    if (type != NULL) return type;

    type = (ResourceBinding__float4__uType*)::uAllocClassType(sizeof(ResourceBinding__float4__uType), "Fuse.Resources.ResourceBinding<float4>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceBinding__float4__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceBinding__float4__OnUnrooted;

    type->SetStrongRefs(
        "_Key", offsetof(ResourceBinding__float4, _Key),
        "_n", offsetof(ResourceBinding__float4, _n),
        "_Target", offsetof(ResourceBinding__float4, _Target));

    type->SetFields(1,
        ::uNewField("_n", NULL, offsetof(ResourceBinding__float4, _n), ::app::Fuse::Node__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_Key", ResourceBinding__float4__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Target", ResourceBinding__float4__get_Target, 0, false, ::app::Uno::UX::Property__float4__typeof()),
        ::uNewFunction(".ctor", ResourceBinding__float4__New_1, 0, true, ResourceBinding__float4__typeof(), ::app::Uno::UX::Property__float4__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Key", ResourceBinding__float4__set_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", ResourceBinding__float4__set_Target, 0, false, ::app::Uno::UX::Property__float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void ResourceBinding__float4___ObjInit_1(ResourceBinding__float4* __this, ::app::Uno::UX::Property__float4* target, ::uString* key)
{
    ::app::Fuse::Behavior___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
    __this->Key(key);
}

bool ResourceBinding__float4__Acceptor(ResourceBinding__float4* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::Float4__typeof());
}

::uString* ResourceBinding__float4__get_Key(ResourceBinding__float4* __this)
{
    return __this->_Key;
}

::app::Uno::UX::Property__float4* ResourceBinding__float4__get_Target(ResourceBinding__float4* __this)
{
    return __this->_Target;
}

ResourceBinding__float4* ResourceBinding__float4__New_1(::uStatic* __this, ::app::Uno::UX::Property__float4* target, ::uString* key)
{
    ResourceBinding__float4* inst = (ResourceBinding__float4*)::uAllocObject(sizeof(ResourceBinding__float4), ResourceBinding__float4__typeof());
    inst->_ObjInit_1(target, key);
    return inst;
}

void ResourceBinding__float4__OnChanged(ResourceBinding__float4* __this)
{
    if (__this->_n != NULL)
    {
        ::uObject* resource;

        if (::uPtr< ::app::Fuse::Node*>(__this->_n)->TryGetResource(__this->Key(), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)ResourceBinding__float4__Acceptor, __this), &resource))
        {
            ::uPtr< ::app::Uno::UX::Property__float4*>(__this->Target())->SetRestState(::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), resource), (::uObject*)__this);
        }
    }
}

void ResourceBinding__float4__OnRooted(ResourceBinding__float4* __this, ::app::Fuse::Node* n)
{
    __this->_n = n;
    ::app::Fuse::Resources::ResourceRegistry__AddResourceChangedHandler(NULL, __this->Key(), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)ResourceBinding__float4__OnChanged, __this));
    __this->OnChanged();
}

void ResourceBinding__float4__OnUnrooted(ResourceBinding__float4* __this, ::app::Fuse::Node* n)
{
    __this->_n = NULL;
    ::app::Fuse::Resources::ResourceRegistry__RemoveResourceChangedHandler(NULL, __this->Key(), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)ResourceBinding__float4__OnChanged, __this));
}

void ResourceBinding__float4__set_Key(ResourceBinding__float4* __this, ::uString* value)
{
    __this->_Key = value;
}

void ResourceBinding__float4__set_Target(ResourceBinding__float4* __this, ::app::Uno::UX::Property__float4* value)
{
    __this->_Target = value;
}

}}}
