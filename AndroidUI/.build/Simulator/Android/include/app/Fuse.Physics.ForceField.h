// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PHYSICS_FORCE_FIELD_H__
#define __APP_FUSE_PHYSICS_FORCE_FIELD_H__

#include <app/Fuse.Behavior.h>
#include <app/Fuse.Physics.IRule.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Physics { struct World; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Physics {

struct ForceField;

struct ForceField__uType : ::app::Fuse::Behavior__uType
{
    ::app::Fuse::Physics::IRule __interface_0;
    void(*__fp_OnUpdate)(ForceField*, double, ::app::Fuse::Physics::World*);
};

ForceField__uType* ForceField__typeof();

void ForceField___ObjInit_1(ForceField* __this);
void ForceField__Fuse_Physics_IRule_Update(ForceField* __this, double deltaTime, ::app::Fuse::Physics::World* world);
::app::Fuse::Node* ForceField__get_Node(ForceField* __this);
::app::Fuse::Physics::World* ForceField__get_World(ForceField* __this);
void ForceField__OnRooted(ForceField* __this, ::app::Fuse::Node* n);
void ForceField__OnUnrooted(ForceField* __this, ::app::Fuse::Node* n);

struct ForceField : ::app::Fuse::Behavior
{
    ::uStrong< ::app::Fuse::Physics::World*> _world;
    ::uStrong< ::app::Fuse::Node*> _node;

    void _ObjInit_1() { ForceField___ObjInit_1(this); }
    ::app::Fuse::Node* Node() { return ForceField__get_Node(this); }
    ::app::Fuse::Physics::World* World() { return ForceField__get_World(this); }
    void OnUpdate(double deltaTime, ::app::Fuse::Physics::World* world) { (((ForceField__uType*)this->__obj_type)->__fp_OnUpdate)(this, deltaTime, world); }
};

}}}


#endif
