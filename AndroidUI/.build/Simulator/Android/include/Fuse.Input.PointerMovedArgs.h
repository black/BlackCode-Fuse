// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class PointerMovedArgs :781
// {
::g::Fuse::NodeEventArgs_type* PointerMovedArgs_typeof();
void PointerMovedArgs__ctor_3_fn(PointerMovedArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node);
void PointerMovedArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node, PointerMovedArgs** __retval);

struct PointerMovedArgs : ::g::Fuse::Input::PointerEventArgs
{
    void ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node);
    static PointerMovedArgs* New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node);
};
// }

}}} // ::g::Fuse::Input
