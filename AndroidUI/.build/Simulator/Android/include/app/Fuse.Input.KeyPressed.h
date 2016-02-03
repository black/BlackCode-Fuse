// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_KEY_PRESSED_H__
#define __APP_FUSE_INPUT_KEY_PRESSED_H__

#include <app/Fuse.NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct KeyPressedArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct KeyPressed;

struct KeyPressed__uType : ::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__uType
{
};

KeyPressed__uType* KeyPressed__typeof();

void KeyPressed___ObjInit_1(KeyPressed* __this);
void KeyPressed__Invoke(KeyPressed* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::KeyPressedArgs* args);
KeyPressed* KeyPressed__New_1(::uStatic* __this);

struct KeyPressed : ::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs
{
    void _ObjInit_1() { KeyPressed___ObjInit_1(this); }
};

}}}


#endif
