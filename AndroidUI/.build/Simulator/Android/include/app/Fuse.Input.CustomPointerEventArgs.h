// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_CUSTOM_POINTER_EVENT_ARGS_H__
#define __APP_FUSE_INPUT_CUSTOM_POINTER_EVENT_ARGS_H__

#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Scripting.IScriptEvent.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Input {

struct CustomPointerEventArgs;

struct CustomPointerEventArgs__uType : ::app::Fuse::Input::PointerEventArgs__uType
{
};

CustomPointerEventArgs__uType* CustomPointerEventArgs__typeof();

void CustomPointerEventArgs___ObjInit_3(CustomPointerEventArgs* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node);

struct CustomPointerEventArgs : ::app::Fuse::Input::PointerEventArgs
{
    void _ObjInit_3(::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node) { CustomPointerEventArgs___ObjInit_3(this, args, node); }
};

}}}


#endif
