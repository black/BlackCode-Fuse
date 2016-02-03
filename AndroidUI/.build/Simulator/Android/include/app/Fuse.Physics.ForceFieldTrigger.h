// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PHYSICS_FORCE_FIELD_TRIGGER_H__
#define __APP_FUSE_PHYSICS_FORCE_FIELD_TRIGGER_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Physics { struct Body; } } }
namespace app { namespace Fuse { namespace Physics { struct ForceField; } } }

namespace app {
namespace Fuse {
namespace Physics {

struct ForceFieldTrigger;

struct ForceFieldTrigger__uType : ::app::Fuse::Triggers::Trigger__uType
{
    void(*__fp_SetForce)(ForceFieldTrigger*, ::app::Fuse::Physics::Body*, float);
};

ForceFieldTrigger__uType* ForceFieldTrigger__typeof();

void ForceFieldTrigger___ObjInit_2(ForceFieldTrigger* __this);
::app::Fuse::Physics::ForceField* ForceFieldTrigger__get_ForceField(ForceFieldTrigger* __this);
void ForceFieldTrigger__set_ForceField(ForceFieldTrigger* __this, ::app::Fuse::Physics::ForceField* value);
void ForceFieldTrigger__SetForce_1(::uStatic* __this, ::app::Fuse::Physics::ForceField* field, ::app::Fuse::Physics::Body* body, float force);

struct ForceFieldTrigger : ::app::Fuse::Triggers::Trigger
{
    ::uStrong< ::app::Fuse::Physics::ForceField*> _ForceField;

    void _ObjInit_2() { ForceFieldTrigger___ObjInit_2(this); }
    ::app::Fuse::Physics::ForceField* ForceField() { return ForceFieldTrigger__get_ForceField(this); }
    void ForceField(::app::Fuse::Physics::ForceField* value) { ForceFieldTrigger__set_ForceField(this, value); }
    void SetForce(::app::Fuse::Physics::Body* n, float force) { (((ForceFieldTrigger__uType*)this->__obj_type)->__fp_SetForce)(this, n, force); }
};

}}}


#endif
