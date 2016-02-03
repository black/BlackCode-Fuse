// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PHYSICS_FORCE_FIELD_EVENT_ARGS_H__
#define __APP_FUSE_PHYSICS_FORCE_FIELD_EVENT_ARGS_H__

#include <app/Fuse.Scripting.IScriptEvent.h>
#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Physics { struct Body; } } }
namespace app { namespace Fuse { namespace Physics { struct ForceField; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Physics {

struct ForceFieldEventArgs;

struct ForceFieldEventArgs__uType : ::app::Uno::EventArgs__uType
{
    ::app::Fuse::Scripting::IScriptEvent __interface_0;
};

ForceFieldEventArgs__uType* ForceFieldEventArgs__typeof();

void ForceFieldEventArgs___ObjInit_1(ForceFieldEventArgs* __this, ::app::Fuse::Physics::Body* body, ::app::Fuse::Physics::ForceField* field);
void ForceFieldEventArgs__Fuse_Scripting_IScriptEvent_Serialize(ForceFieldEventArgs* __this, ::uObject* s);
::app::Fuse::Physics::Body* ForceFieldEventArgs__get_Body(ForceFieldEventArgs* __this);
::app::Fuse::Physics::ForceField* ForceFieldEventArgs__get_ForceField(ForceFieldEventArgs* __this);
::app::Fuse::Node* ForceFieldEventArgs__get_Node(ForceFieldEventArgs* __this);
ForceFieldEventArgs* ForceFieldEventArgs__New_2(::uStatic* __this, ::app::Fuse::Physics::Body* body, ::app::Fuse::Physics::ForceField* field);
void ForceFieldEventArgs__set_Body(ForceFieldEventArgs* __this, ::app::Fuse::Physics::Body* value);
void ForceFieldEventArgs__set_ForceField(ForceFieldEventArgs* __this, ::app::Fuse::Physics::ForceField* value);

struct ForceFieldEventArgs : ::app::Uno::EventArgs
{
    ::uStrong< ::app::Fuse::Physics::Body*> _Body;
    ::uStrong< ::app::Fuse::Physics::ForceField*> _ForceField;

    void _ObjInit_1(::app::Fuse::Physics::Body* body, ::app::Fuse::Physics::ForceField* field) { ForceFieldEventArgs___ObjInit_1(this, body, field); }
    ::app::Fuse::Physics::Body* Body() { return ForceFieldEventArgs__get_Body(this); }
    ::app::Fuse::Physics::ForceField* ForceField() { return ForceFieldEventArgs__get_ForceField(this); }
    ::app::Fuse::Node* Node() { return ForceFieldEventArgs__get_Node(this); }
    void Body(::app::Fuse::Physics::Body* value) { ForceFieldEventArgs__set_Body(this, value); }
    void ForceField(::app::Fuse::Physics::ForceField* value) { ForceFieldEventArgs__set_ForceField(this, value); }
};

}}}


#endif
