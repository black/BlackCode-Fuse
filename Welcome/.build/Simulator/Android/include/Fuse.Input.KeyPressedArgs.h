// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.KeyEventArgs.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Input{struct KeyPressedArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class KeyPressedArgs :559
// {
::g::Fuse::NodeEventArgs_type* KeyPressedArgs_typeof();
void KeyPressedArgs__ctor_3_fn(KeyPressedArgs* __this, int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Node* node);
void KeyPressedArgs__New3_fn(int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Node* node, KeyPressedArgs** __retval);

struct KeyPressedArgs : ::g::Fuse::Input::KeyEventArgs
{
    void ctor_3(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Node* node);
    static KeyPressedArgs* New3(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Node* node);
};
// }

}}} // ::g::Fuse::Input
