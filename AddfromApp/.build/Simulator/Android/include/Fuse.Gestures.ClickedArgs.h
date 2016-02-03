// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.CustomPointerEventArgs.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Gestures{struct ClickedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class ClickedArgs :9
// {
::g::Fuse::NodeEventArgs_type* ClickedArgs_typeof();
void ClickedArgs__ctor_4_fn(ClickedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node);
void ClickedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node, ClickedArgs** __retval);

struct ClickedArgs : ::g::Fuse::Input::CustomPointerEventArgs
{
    void ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node);
    static ClickedArgs* New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node);
};
// }

}}} // ::g::Fuse::Gestures
