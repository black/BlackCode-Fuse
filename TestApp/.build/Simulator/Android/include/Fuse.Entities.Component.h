// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Entities{struct Component;}}}
namespace g{namespace Fuse{namespace Entities{struct Entity;}}}

namespace g{
namespace Fuse{
namespace Entities{

// public abstract class Component :10
// {
struct Component_type : uType
{
    void(*fp_OnAdded)(::g::Fuse::Entities::Component*, ::g::Fuse::Entities::Entity*);
    void(*fp_OnRemoved)(::g::Fuse::Entities::Component*, ::g::Fuse::Entities::Entity*);
};

Component_type* Component_typeof();
void Component__ctor__fn(Component* __this);
void Component__Added_fn(Component* __this, ::g::Fuse::Entities::Entity* e);
void Component__get_Entity_fn(Component* __this, ::g::Fuse::Entities::Entity** __retval);
void Component__Removed_fn(Component* __this, ::g::Fuse::Entities::Entity* e);

struct Component : uObject
{
    uStrong< ::g::Fuse::Entities::Entity*> _entity;

    void ctor_();
    void Added(::g::Fuse::Entities::Entity* e);
    ::g::Fuse::Entities::Entity* Entity();
    void OnAdded(::g::Fuse::Entities::Entity* e) { (((Component_type*)__type)->fp_OnAdded)(this, e); }
    void OnRemoved(::g::Fuse::Entities::Entity* e) { (((Component_type*)__type)->fp_OnRemoved)(this, e); }
    void Removed(::g::Fuse::Entities::Entity* e);
};
// }

}}} // ::g::Fuse::Entities
