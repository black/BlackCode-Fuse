// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NODE_EVENT_ARGS_H__
#define __APP_FUSE_NODE_EVENT_ARGS_H__

#include <app/Fuse.Scripting.IScriptEvent.h>
#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {

struct NodeEventArgs;

struct NodeEventArgs__uType : ::app::Uno::EventArgs__uType
{
    ::app::Fuse::Scripting::IScriptEvent __interface_0;
};

NodeEventArgs__uType* NodeEventArgs__typeof();

void NodeEventArgs___ObjInit_1(NodeEventArgs* __this, ::app::Fuse::Node* node);
void NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize(NodeEventArgs* __this, ::uObject* s);
bool NodeEventArgs__get_IsHandled(NodeEventArgs* __this);
::app::Fuse::Node* NodeEventArgs__get_Node(NodeEventArgs* __this);
NodeEventArgs* NodeEventArgs__New_2(::uStatic* __this, ::app::Fuse::Node* node);
void NodeEventArgs__set_IsHandled(NodeEventArgs* __this, bool value);
void NodeEventArgs__set_Node(NodeEventArgs* __this, ::app::Fuse::Node* value);

struct NodeEventArgs : ::app::Uno::EventArgs
{
    bool _IsHandled;
    ::uStrong< ::app::Fuse::Node*> _Node;

    void _ObjInit_1(::app::Fuse::Node* node) { NodeEventArgs___ObjInit_1(this, node); }
    bool IsHandled() { return NodeEventArgs__get_IsHandled(this); }
    ::app::Fuse::Node* Node() { return NodeEventArgs__get_Node(this); }
    void IsHandled(bool value) { NodeEventArgs__set_IsHandled(this, value); }
    void Node(::app::Fuse::Node* value) { NodeEventArgs__set_Node(this, value); }
};

}}


#endif
