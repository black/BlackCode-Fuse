// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct NodeEventArgs;}}

namespace g{
namespace Fuse{

// public class NodeEventArgs :978
// {
uType* NodeEventArgs_typeof();
void NodeEventArgs__ctor_1_fn(NodeEventArgs* __this, ::g::Fuse::Node* node);
void NodeEventArgs__get_IsHandled_fn(NodeEventArgs* __this, bool* __retval);
void NodeEventArgs__set_IsHandled_fn(NodeEventArgs* __this, bool* value);
void NodeEventArgs__New2_fn(::g::Fuse::Node* node, NodeEventArgs** __retval);
void NodeEventArgs__get_Node_fn(NodeEventArgs* __this, ::g::Fuse::Node** __retval);
void NodeEventArgs__set_Node_fn(NodeEventArgs* __this, ::g::Fuse::Node* value);

struct NodeEventArgs : ::g::Uno::EventArgs
{
    bool _IsHandled;
    uStrong< ::g::Fuse::Node*> _Node;

    void ctor_1(::g::Fuse::Node* node);
    bool IsHandled();
    void IsHandled(bool value);
    ::g::Fuse::Node* Node();
    void Node(::g::Fuse::Node* value);
    static NodeEventArgs* New2(::g::Fuse::Node* node);
};
// }

}} // ::g::Fuse
