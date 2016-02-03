// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct Capturer;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class Capturer :885
// {
uType* Capturer_typeof();
void Capturer__ctor__fn(Capturer* __this, ::g::Fuse::Node* n, uObject* identity, uDelegate* lostCallback);
void Capturer__get_Identity_fn(Capturer* __this, uObject** __retval);
void Capturer__set_Identity_fn(Capturer* __this, uObject* value);
void Capturer__get_IsSuitable_fn(Capturer* __this, bool* __retval);
void Capturer__get_LostCallback_fn(Capturer* __this, uDelegate** __retval);
void Capturer__set_LostCallback_fn(Capturer* __this, uDelegate* value);
void Capturer__New1_fn(::g::Fuse::Node* n, uObject* identity, uDelegate* lostCallback, Capturer** __retval);
void Capturer__get_Node_fn(Capturer* __this, ::g::Fuse::Node** __retval);
void Capturer__set_Node_fn(Capturer* __this, ::g::Fuse::Node* value);

struct Capturer : uObject
{
    uStrong<uObject*> _Identity;
    uStrong<uDelegate*> _LostCallback;
    uStrong< ::g::Fuse::Node*> _Node;

    void ctor_(::g::Fuse::Node* n, uObject* identity, uDelegate* lostCallback);
    uObject* Identity();
    void Identity(uObject* value);
    bool IsSuitable();
    uDelegate* LostCallback();
    void LostCallback(uDelegate* value);
    ::g::Fuse::Node* Node();
    void Node(::g::Fuse::Node* value);
    static Capturer* New1(::g::Fuse::Node* n, uObject* identity, uDelegate* lostCallback);
};
// }

}}} // ::g::Fuse::Input
