// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_KEY_EVENT_ARGS_H__
#define __APP_FUSE_INPUT_KEY_EVENT_ARGS_H__

#include <app/Fuse.NodeEventArgs.h>
#include <app/Fuse.Scripting.IScriptEvent.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Input {

struct KeyEventArgs;

struct KeyEventArgs__uType : ::app::Fuse::NodeEventArgs__uType
{
};

KeyEventArgs__uType* KeyEventArgs__typeof();

void KeyEventArgs___ObjInit_2(KeyEventArgs* __this, int key, ::app::Fuse::Node* node);
bool KeyEventArgs__get_IsAltKeyPressed(KeyEventArgs* __this);
bool KeyEventArgs__get_IsControlKeyPressed(KeyEventArgs* __this);
bool KeyEventArgs__get_IsMetaKeyPressed(KeyEventArgs* __this);
bool KeyEventArgs__get_IsShiftKeyPressed(KeyEventArgs* __this);
int KeyEventArgs__get_Key(KeyEventArgs* __this);
void KeyEventArgs__set_IsAltKeyPressed(KeyEventArgs* __this, bool value);
void KeyEventArgs__set_IsControlKeyPressed(KeyEventArgs* __this, bool value);
void KeyEventArgs__set_IsMetaKeyPressed(KeyEventArgs* __this, bool value);
void KeyEventArgs__set_IsShiftKeyPressed(KeyEventArgs* __this, bool value);
void KeyEventArgs__set_Key(KeyEventArgs* __this, int value);

struct KeyEventArgs : ::app::Fuse::NodeEventArgs
{
    int _Key;
    bool _IsMetaKeyPressed;
    bool _IsControlKeyPressed;
    bool _IsShiftKeyPressed;
    bool _IsAltKeyPressed;

    void _ObjInit_2(int key, ::app::Fuse::Node* node) { KeyEventArgs___ObjInit_2(this, key, node); }
    bool IsAltKeyPressed() { return KeyEventArgs__get_IsAltKeyPressed(this); }
    bool IsControlKeyPressed() { return KeyEventArgs__get_IsControlKeyPressed(this); }
    bool IsMetaKeyPressed() { return KeyEventArgs__get_IsMetaKeyPressed(this); }
    bool IsShiftKeyPressed() { return KeyEventArgs__get_IsShiftKeyPressed(this); }
    int Key() { return KeyEventArgs__get_Key(this); }
    void IsAltKeyPressed(bool value) { KeyEventArgs__set_IsAltKeyPressed(this, value); }
    void IsControlKeyPressed(bool value) { KeyEventArgs__set_IsControlKeyPressed(this, value); }
    void IsMetaKeyPressed(bool value) { KeyEventArgs__set_IsMetaKeyPressed(this, value); }
    void IsShiftKeyPressed(bool value) { KeyEventArgs__set_IsShiftKeyPressed(this, value); }
    void Key(int value) { KeyEventArgs__set_Key(this, value); }
};

}}}


#endif
