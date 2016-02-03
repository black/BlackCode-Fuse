// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_COMPONENT_H__
#define __APP_FUSE_ENTITIES_COMPONENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct Component;

struct Component__uType : ::uClassType
{
    void(*__fp_OnAdded)(Component*, ::app::Fuse::Entities::Entity*);
    void(*__fp_OnRemoved)(Component*, ::app::Fuse::Entities::Entity*);
};

Component__uType* Component__typeof();

void Component___ObjInit(Component* __this);
void Component__Added(Component* __this, ::app::Fuse::Entities::Entity* e);
::app::Fuse::Entities::Entity* Component__get_Entity(Component* __this);
void Component__Removed(Component* __this, ::app::Fuse::Entities::Entity* e);

struct Component : ::uObject
{
    ::uStrong< ::app::Fuse::Entities::Entity*> _entity;

    void _ObjInit() { Component___ObjInit(this); }
    void Added(::app::Fuse::Entities::Entity* e) { Component__Added(this, e); }
    ::app::Fuse::Entities::Entity* Entity() { return Component__get_Entity(this); }
    void OnAdded(::app::Fuse::Entities::Entity* e) { (((Component__uType*)this->__obj_type)->__fp_OnAdded)(this, e); }
    void OnRemoved(::app::Fuse::Entities::Entity* e) { (((Component__uType*)this->__obj_type)->__fp_OnRemoved)(this, e); }
    void Removed(::app::Fuse::Entities::Entity* e) { Component__Removed(this, e); }
};

}}}


#endif
