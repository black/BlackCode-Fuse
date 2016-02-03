// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PHYSICS_I_RULE_H__
#define __APP_FUSE_PHYSICS_I_RULE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Physics { struct World; } } }

namespace app {
namespace Fuse {
namespace Physics {

::uInterfaceType* IRule__typeof();

struct IRule
{
    void(*__fp_Update)(void*, double, ::app::Fuse::Physics::World*);

    static void Update(::uObject* __this, double deltaTime, ::app::Fuse::Physics::World* world) { ((IRule*)uGetInterfacePtr(__this, IRule__typeof()))->__fp_Update((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), deltaTime, world); }
};

}}}


#endif
