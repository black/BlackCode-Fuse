// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Physics\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Physics{struct Body;}}}
namespace g{namespace Fuse{namespace Physics{struct ForceField;}}}
namespace g{namespace Fuse{namespace Physics{struct ForceFieldEventArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Physics{

// public sealed class ForceFieldEventArgs :361
// {
struct ForceFieldEventArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
};

ForceFieldEventArgs_type* ForceFieldEventArgs_typeof();
void ForceFieldEventArgs__ctor_1_fn(ForceFieldEventArgs* __this, ::g::Fuse::Physics::Body* body, ::g::Fuse::Physics::ForceField* field);
void ForceFieldEventArgs__get_Body_fn(ForceFieldEventArgs* __this, ::g::Fuse::Physics::Body** __retval);
void ForceFieldEventArgs__set_Body_fn(ForceFieldEventArgs* __this, ::g::Fuse::Physics::Body* value);
void ForceFieldEventArgs__get_ForceField_fn(ForceFieldEventArgs* __this, ::g::Fuse::Physics::ForceField** __retval);
void ForceFieldEventArgs__set_ForceField_fn(ForceFieldEventArgs* __this, ::g::Fuse::Physics::ForceField* value);
void ForceFieldEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn(ForceFieldEventArgs* __this, uObject* s);
void ForceFieldEventArgs__New2_fn(::g::Fuse::Physics::Body* body, ::g::Fuse::Physics::ForceField* field, ForceFieldEventArgs** __retval);
void ForceFieldEventArgs__get_Node_fn(ForceFieldEventArgs* __this, ::g::Fuse::Node** __retval);

struct ForceFieldEventArgs : ::g::Uno::EventArgs
{
    uStrong< ::g::Fuse::Physics::Body*> _Body;
    uStrong< ::g::Fuse::Physics::ForceField*> _ForceField;

    void ctor_1(::g::Fuse::Physics::Body* body, ::g::Fuse::Physics::ForceField* field);
    ::g::Fuse::Physics::Body* Body();
    void Body(::g::Fuse::Physics::Body* value);
    ::g::Fuse::Physics::ForceField* ForceField();
    void ForceField(::g::Fuse::Physics::ForceField* value);
    ::g::Fuse::Node* Node();
    static ForceFieldEventArgs* New2(::g::Fuse::Physics::Body* body, ::g::Fuse::Physics::ForceField* field);
};
// }

}}} // ::g::Fuse::Physics
