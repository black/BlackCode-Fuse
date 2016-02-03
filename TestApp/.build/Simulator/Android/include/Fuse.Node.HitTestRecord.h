// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct HitTestResult;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Node__HitTestRecord;}}

namespace g{
namespace Fuse{

// private sealed class Node.HitTestRecord :2508
// {
uType* Node__HitTestRecord_typeof();
void Node__HitTestRecord__ctor__fn(Node__HitTestRecord* __this);
void Node__HitTestRecord__HitTestCallback_fn(Node__HitTestRecord* __this, ::g::Fuse::HitTestResult* result);
void Node__HitTestRecord__New1_fn(Node__HitTestRecord** __retval);

struct Node__HitTestRecord : uObject
{
    uStrong< ::g::Fuse::Node*> Node;

    void ctor_();
    void HitTestCallback(::g::Fuse::HitTestResult* result);
    static Node__HitTestRecord* New1();
};
// }

}} // ::g::Fuse
