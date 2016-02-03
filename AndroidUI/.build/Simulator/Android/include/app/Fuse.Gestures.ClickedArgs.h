// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_CLICKED_ARGS_H__
#define __APP_FUSE_GESTURES_CLICKED_ARGS_H__

#include <app/Fuse.Input.CustomPointerEventArgs.h>
#include <app/Fuse.Scripting.IScriptEvent.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEventArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct ClickedArgs;

struct ClickedArgs__uType : ::app::Fuse::Input::CustomPointerEventArgs__uType
{
};

ClickedArgs__uType* ClickedArgs__typeof();

void ClickedArgs___ObjInit_4(ClickedArgs* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node);
ClickedArgs* ClickedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node);

struct ClickedArgs : ::app::Fuse::Input::CustomPointerEventArgs
{
    void _ObjInit_4(::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node) { ClickedArgs___ObjInit_4(this, args, node); }
};

}}}


#endif
