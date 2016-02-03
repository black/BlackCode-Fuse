// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_POINTER_ENTERED_ARGS_H__
#define __APP_FUSE_INPUT_POINTER_ENTERED_ARGS_H__

#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Scripting.IScriptEvent.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEventData; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Input {

struct PointerEnteredArgs;

struct PointerEnteredArgs__uType : ::app::Fuse::Input::PointerEventArgs__uType
{
};

PointerEnteredArgs__uType* PointerEnteredArgs__typeof();

void PointerEnteredArgs___ObjInit_3(PointerEnteredArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node);
PointerEnteredArgs* PointerEnteredArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node);

struct PointerEnteredArgs : ::app::Fuse::Input::PointerEventArgs
{
    void _ObjInit_3(::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node) { PointerEnteredArgs___ObjInit_3(this, data, node); }
};

}}}


#endif
