// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
namespace g{namespace Fuse{namespace Resources{struct ResourceBinding;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class ResourceBinding<T> :378
// {
::g::Fuse::Behavior_type* ResourceBinding_typeof();
void ResourceBinding__ctor_1_fn(ResourceBinding* __this, ::g::Uno::UX::Property* target, uString* key);
void ResourceBinding__get_Key_fn(ResourceBinding* __this, uString** __retval);
void ResourceBinding__set_Key_fn(ResourceBinding* __this, uString* value);
void ResourceBinding__New1_fn(uType* __type, ::g::Uno::UX::Property* target, uString* key, ResourceBinding** __retval);
void ResourceBinding__OnChanged_fn(ResourceBinding* __this);
void ResourceBinding__OnRooted_fn(ResourceBinding* __this, ::g::Fuse::Node* parentNode);
void ResourceBinding__OnUnrooted_fn(ResourceBinding* __this, ::g::Fuse::Node* parentNode);
void ResourceBinding__get_Target_fn(ResourceBinding* __this, ::g::Uno::UX::Property** __retval);
void ResourceBinding__set_Target_fn(ResourceBinding* __this, ::g::Uno::UX::Property* value);

struct ResourceBinding : ::g::Fuse::Behavior
{
    uStrong<uObject*> _converter;
    uStrong<uString*> _Key;
    uStrong< ::g::Uno::UX::Property*> _Target;

    void ctor_1(::g::Uno::UX::Property* target, uString* key);
    uString* Key();
    void Key(uString* value);
    void OnChanged();
    ::g::Uno::UX::Property* Target();
    void Target(::g::Uno::UX::Property* value);
    static ResourceBinding* New1(uType* __type, ::g::Uno::UX::Property* target, uString* key);
};
// }

}}} // ::g::Fuse::Resources
