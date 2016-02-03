// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PHYSICS_WORLD_H__
#define __APP_FUSE_PHYSICS_WORLD_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Physics { struct Body; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Physics_Body; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Physics_IRule; } } }

namespace app {
namespace Fuse {
namespace Physics {

struct World;

extern ::uStaticStrong< World*> World___globalWorld;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> World___worldHandle;

struct World__uType : ::uClassType
{
};

World__uType* World__typeof();

void World___ObjInit(World* __this);
void World___TypeInit(::uStatic* __this);
void World__AddRule(World* __this, ::uObject* rule);
void World__EndSimulation(World* __this);
void World__EnsureSimulation(World* __this);
World* World__FindWorld(::uStatic* __this, ::app::Fuse::Node* n);
::app::Uno::Collections::List__Fuse_Physics_Body* World__get_Bodies(World* __this);
::uObject* World__get_Rules(World* __this);
bool World__GetIsPhysicsWorld(::uStatic* __this, ::app::Fuse::Node* n);
World* World__New_1(::uStatic* __this);
void World__OnUpdate(World* __this);
::app::Fuse::Physics::Body* World__PinBody(World* __this, ::app::Fuse::Node* node);
void World__RemoveRule(World* __this, ::uObject* rule);
void World__SetIsPhysicsWorld(::uStatic* __this, ::app::Fuse::Node* n, bool isPhysicsWorld);
void World__SetIsPhysicsWorldStyle(::uStatic* __this, ::app::Fuse::Node* n, bool isPhysicsWorld);
::app::Fuse::Physics::Body* World__TryGetBody(World* __this, ::app::Fuse::Node* node);
void World__UnpinBody(World* __this, ::app::Fuse::Physics::Body* body);

struct World : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Physics_Body*> _bodies;
    ::uStrong< ::app::Fuse::PropertyHandle*> _bodyHandle;
    bool _isSimulating;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Physics_IRule*> _rules;
    bool _firstFrame;

    void _ObjInit() { World___ObjInit(this); }
    void AddRule(::uObject* rule) { World__AddRule(this, rule); }
    void EndSimulation() { World__EndSimulation(this); }
    void EnsureSimulation() { World__EnsureSimulation(this); }
    ::app::Uno::Collections::List__Fuse_Physics_Body* Bodies() { return World__get_Bodies(this); }
    ::uObject* Rules() { return World__get_Rules(this); }
    void OnUpdate() { World__OnUpdate(this); }
    ::app::Fuse::Physics::Body* PinBody(::app::Fuse::Node* node) { return World__PinBody(this, node); }
    void RemoveRule(::uObject* rule) { World__RemoveRule(this, rule); }
    ::app::Fuse::Physics::Body* TryGetBody(::app::Fuse::Node* node) { return World__TryGetBody(this, node); }
    void UnpinBody(::app::Fuse::Physics::Body* body) { World__UnpinBody(this, body); }
};

}}}


#endif
