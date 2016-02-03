// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct RequestBringIntoViewArgs;}}

namespace g{
namespace Fuse{

// public sealed class RequestBringIntoViewArgs :2812
// {
uType* RequestBringIntoViewArgs_typeof();
void RequestBringIntoViewArgs__ctor_1_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Node* elm);
void RequestBringIntoViewArgs__New2_fn(::g::Fuse::Node* elm, RequestBringIntoViewArgs** __retval);
void RequestBringIntoViewArgs__get_Node_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Node** __retval);
void RequestBringIntoViewArgs__set_Node_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Node* value);

struct RequestBringIntoViewArgs : ::g::Uno::EventArgs
{
    uStrong< ::g::Fuse::Node*> _Node;

    void ctor_1(::g::Fuse::Node* elm);
    ::g::Fuse::Node* Node();
    void Node(::g::Fuse::Node* value);
    static RequestBringIntoViewArgs* New2(::g::Fuse::Node* elm);
};
// }

}} // ::g::Fuse
