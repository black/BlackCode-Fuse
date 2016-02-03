// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.KeyEventArgs.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Input{struct KeyReleasedArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class KeyReleasedArgs :580
// {
::g::Fuse::NodeEventArgs_type* KeyReleasedArgs_typeof();
void KeyReleasedArgs__ctor_3_fn(KeyReleasedArgs* __this, int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Node* node);
void KeyReleasedArgs__New3_fn(int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Node* node, KeyReleasedArgs** __retval);

struct KeyReleasedArgs : ::g::Fuse::Input::KeyEventArgs
{
    void ctor_3(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Node* node);
    static KeyReleasedArgs* New3(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Node* node);
};
// }

}}} // ::g::Fuse::Input
