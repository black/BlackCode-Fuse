// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PHYSICS_FORCE_FIELD_EVENT_TRIGGER_H__
#define __APP_FUSE_PHYSICS_FORCE_FIELD_EVENT_TRIGGER_H__

#include <app/Fuse.Physics.ForceFieldTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Physics { struct Body; } } }

namespace app {
namespace Fuse {
namespace Physics {

struct ForceFieldEventTrigger;

struct ForceFieldEventTrigger__uType : ::app::Fuse::Physics::ForceFieldTrigger__uType
{
};

ForceFieldEventTrigger__uType* ForceFieldEventTrigger__typeof();

void ForceFieldEventTrigger___ObjInit_3(ForceFieldEventTrigger* __this);
void ForceFieldEventTrigger__add_Handler(ForceFieldEventTrigger* __this, ::uDelegate* value);
void ForceFieldEventTrigger__OnTriggered(ForceFieldEventTrigger* __this, ::app::Fuse::Physics::Body* body);
void ForceFieldEventTrigger__remove_Handler(ForceFieldEventTrigger* __this, ::uDelegate* value);

struct ForceFieldEventTrigger : ::app::Fuse::Physics::ForceFieldTrigger
{
    ::uStrong< ::uDelegate*> Handler;

    void _ObjInit_3() { ForceFieldEventTrigger___ObjInit_3(this); }
    void add_Handler(::uDelegate* value) { ForceFieldEventTrigger__add_Handler(this, value); }
    void OnTriggered(::app::Fuse::Physics::Body* body) { ForceFieldEventTrigger__OnTriggered(this, body); }
    void remove_Handler(::uDelegate* value) { ForceFieldEventTrigger__remove_Handler(this, value); }
};

}}}


#endif
