// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_KEY_RELEASED_ARGS_H__
#define __APP_FUSE_INPUT_KEY_RELEASED_ARGS_H__

#include <app/Fuse.Input.KeyEventArgs.h>
#include <app/Fuse.Scripting.IScriptEvent.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Input {

struct KeyReleasedArgs;

struct KeyReleasedArgs__uType : ::app::Fuse::Input::KeyEventArgs__uType
{
};

KeyReleasedArgs__uType* KeyReleasedArgs__typeof();

void KeyReleasedArgs___ObjInit_3(KeyReleasedArgs* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::app::Fuse::Node* node);
KeyReleasedArgs* KeyReleasedArgs__New_3(::uStatic* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::app::Fuse::Node* node);

struct KeyReleasedArgs : ::app::Fuse::Input::KeyEventArgs
{
    void _ObjInit_3(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::app::Fuse::Node* node) { KeyReleasedArgs___ObjInit_3(this, key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, node); }
};

}}}


#endif
