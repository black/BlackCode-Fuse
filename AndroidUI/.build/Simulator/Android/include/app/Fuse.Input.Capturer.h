// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_CAPTURER_H__
#define __APP_FUSE_INPUT_CAPTURER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Input {

struct Capturer;

struct Capturer__uType : ::uClassType
{
};

Capturer__uType* Capturer__typeof();

void Capturer___ObjInit(Capturer* __this, ::app::Fuse::Node* n, ::uObject* identity, ::uDelegate* lostCallback);
::uObject* Capturer__get_Identity(Capturer* __this);
bool Capturer__get_IsSuitable(Capturer* __this);
::uDelegate* Capturer__get_LostCallback(Capturer* __this);
::app::Fuse::Node* Capturer__get_Node(Capturer* __this);
Capturer* Capturer__New_1(::uStatic* __this, ::app::Fuse::Node* n, ::uObject* identity, ::uDelegate* lostCallback);
void Capturer__set_Identity(Capturer* __this, ::uObject* value);
void Capturer__set_LostCallback(Capturer* __this, ::uDelegate* value);
void Capturer__set_Node(Capturer* __this, ::app::Fuse::Node* value);

struct Capturer : ::uObject
{
    ::uStrong< ::app::Fuse::Node*> _Node;
    ::uStrong< ::uObject*> _Identity;
    ::uStrong< ::uDelegate*> _LostCallback;

    void _ObjInit(::app::Fuse::Node* n, ::uObject* identity, ::uDelegate* lostCallback) { Capturer___ObjInit(this, n, identity, lostCallback); }
    ::uObject* Identity() { return Capturer__get_Identity(this); }
    bool IsSuitable() { return Capturer__get_IsSuitable(this); }
    ::uDelegate* LostCallback() { return Capturer__get_LostCallback(this); }
    ::app::Fuse::Node* Node() { return Capturer__get_Node(this); }
    void Identity(::uObject* value) { Capturer__set_Identity(this, value); }
    void LostCallback(::uDelegate* value) { Capturer__set_LostCallback(this, value); }
    void Node(::app::Fuse::Node* value) { Capturer__set_Node(this, value); }
};

}}}


#endif
