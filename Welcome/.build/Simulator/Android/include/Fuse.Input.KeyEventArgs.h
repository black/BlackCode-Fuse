// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.NodeEventArgs.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Input{struct KeyEventArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Input{

// public abstract class KeyEventArgs :521
// {
::g::Fuse::NodeEventArgs_type* KeyEventArgs_typeof();
void KeyEventArgs__ctor_2_fn(KeyEventArgs* __this, int* key, ::g::Fuse::Node* node);
void KeyEventArgs__get_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__set_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* value);
void KeyEventArgs__get_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__set_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* value);
void KeyEventArgs__get_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__set_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* value);
void KeyEventArgs__get_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__set_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* value);
void KeyEventArgs__get_Key_fn(KeyEventArgs* __this, int* __retval);
void KeyEventArgs__set_Key_fn(KeyEventArgs* __this, int* value);

struct KeyEventArgs : ::g::Fuse::NodeEventArgs
{
    bool _IsAltKeyPressed;
    bool _IsControlKeyPressed;
    bool _IsMetaKeyPressed;
    bool _IsShiftKeyPressed;
    int _Key;

    void ctor_2(int key, ::g::Fuse::Node* node);
    bool IsAltKeyPressed();
    void IsAltKeyPressed(bool value);
    bool IsControlKeyPressed();
    void IsControlKeyPressed(bool value);
    bool IsMetaKeyPressed();
    void IsMetaKeyPressed(bool value);
    bool IsShiftKeyPressed();
    void IsShiftKeyPressed(bool value);
    int Key();
    void Key(int value);
};
// }

}}} // ::g::Fuse::Input
