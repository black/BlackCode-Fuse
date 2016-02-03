// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.CustomPointerEventArgs.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Gestures{struct LongPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class LongPressedArgs :221
// {
::g::Fuse::NodeEventArgs_type* LongPressedArgs_typeof();
void LongPressedArgs__ctor_4_fn(LongPressedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node);
void LongPressedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node, LongPressedArgs** __retval);

struct LongPressedArgs : ::g::Fuse::Input::CustomPointerEventArgs
{
    void ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node);
    static LongPressedArgs* New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node);
};
// }

}}} // ::g::Fuse::Gestures
