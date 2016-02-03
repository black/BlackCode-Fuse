// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigatedArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class NavigatedArgs :377
// {
struct NavigatedArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
};

NavigatedArgs_type* NavigatedArgs_typeof();
void NavigatedArgs__ctor_1_fn(NavigatedArgs* __this, ::g::Fuse::Node* newNode);
void NavigatedArgs__Fuse_Scripting_IScriptEvent_Serialize_fn(NavigatedArgs* __this, uObject* s);
void NavigatedArgs__New2_fn(::g::Fuse::Node* newNode, NavigatedArgs** __retval);
void NavigatedArgs__get_NewNode_fn(NavigatedArgs* __this, ::g::Fuse::Node** __retval);
void NavigatedArgs__set_NewNode_fn(NavigatedArgs* __this, ::g::Fuse::Node* value);

struct NavigatedArgs : ::g::Uno::EventArgs
{
    uStrong< ::g::Fuse::Node*> _NewNode;

    void ctor_1(::g::Fuse::Node* newNode);
    ::g::Fuse::Node* NewNode();
    void NewNode(::g::Fuse::Node* value);
    static NavigatedArgs* New2(::g::Fuse::Node* newNode);
};
// }

}}} // ::g::Fuse::Navigation
