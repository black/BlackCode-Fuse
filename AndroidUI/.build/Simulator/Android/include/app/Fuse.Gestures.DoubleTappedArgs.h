// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_DOUBLE_TAPPED_ARGS_H__
#define __APP_FUSE_GESTURES_DOUBLE_TAPPED_ARGS_H__

#include <app/Fuse.Input.CustomPointerEventArgs.h>
#include <app/Fuse.Scripting.IScriptEvent.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEventArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct DoubleTappedArgs;

struct DoubleTappedArgs__uType : ::app::Fuse::Input::CustomPointerEventArgs__uType
{
};

DoubleTappedArgs__uType* DoubleTappedArgs__typeof();

void DoubleTappedArgs___ObjInit_4(DoubleTappedArgs* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node);
DoubleTappedArgs* DoubleTappedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node);

struct DoubleTappedArgs : ::app::Fuse::Input::CustomPointerEventArgs
{
    void _ObjInit_4(::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node) { DoubleTappedArgs___ObjInit_4(this, args, node); }
};

}}}


#endif
