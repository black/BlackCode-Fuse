// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_LONG_PRESSED_ARGS_H__
#define __APP_FUSE_GESTURES_LONG_PRESSED_ARGS_H__

#include <app/Fuse.Input.CustomPointerEventArgs.h>
#include <app/Fuse.Scripting.IScriptEvent.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEventArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct LongPressedArgs;

struct LongPressedArgs__uType : ::app::Fuse::Input::CustomPointerEventArgs__uType
{
};

LongPressedArgs__uType* LongPressedArgs__typeof();

void LongPressedArgs___ObjInit_4(LongPressedArgs* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node);
LongPressedArgs* LongPressedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node);

struct LongPressedArgs : ::app::Fuse::Input::CustomPointerEventArgs
{
    void _ObjInit_4(::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node) { LongPressedArgs___ObjInit_4(this, args, node); }
};

}}}


#endif
