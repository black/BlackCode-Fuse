// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_POINTER_RELEASED_ARGS_H__
#define __APP_FUSE_INPUT_POINTER_RELEASED_ARGS_H__

#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Scripting.IScriptEvent.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEventData; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Input {

struct PointerReleasedArgs;

struct PointerReleasedArgs__uType : ::app::Fuse::Input::PointerEventArgs__uType
{
};

PointerReleasedArgs__uType* PointerReleasedArgs__typeof();

void PointerReleasedArgs___ObjInit_3(PointerReleasedArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node);
PointerReleasedArgs* PointerReleasedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node);

struct PointerReleasedArgs : ::app::Fuse::Input::PointerEventArgs
{
    void _ObjInit_3(::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node) { PointerReleasedArgs___ObjInit_3(this, data, node); }
};

}}}


#endif
