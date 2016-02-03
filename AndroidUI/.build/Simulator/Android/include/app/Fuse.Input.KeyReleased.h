// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_KEY_RELEASED_H__
#define __APP_FUSE_INPUT_KEY_RELEASED_H__

#include <app/Fuse.NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyRe-25c1dec.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct KeyReleasedArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct KeyReleased;

struct KeyReleased__uType : ::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__uType
{
};

KeyReleased__uType* KeyReleased__typeof();

void KeyReleased___ObjInit_1(KeyReleased* __this);
void KeyReleased__Invoke(KeyReleased* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::KeyReleasedArgs* args);
KeyReleased* KeyReleased__New_1(::uStatic* __this);

struct KeyReleased : ::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs
{
    void _ObjInit_1() { KeyReleased___ObjInit_1(this); }
};

}}}


#endif
