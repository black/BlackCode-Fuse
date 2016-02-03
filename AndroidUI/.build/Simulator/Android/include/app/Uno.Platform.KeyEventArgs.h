// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM_KEY_EVENT_ARGS_H__
#define __APP_UNO_PLATFORM_KEY_EVENT_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Platform {

struct KeyEventArgs;

struct KeyEventArgs__uType : ::app::Uno::EventArgs__uType
{
};

KeyEventArgs__uType* KeyEventArgs__typeof();

void KeyEventArgs___ObjInit_1(KeyEventArgs* __this, int key, int modifiers);
bool KeyEventArgs__get_Handled(KeyEventArgs* __this);
bool KeyEventArgs__get_IsAltKeyPressed(KeyEventArgs* __this);
bool KeyEventArgs__get_IsControlKeyPressed(KeyEventArgs* __this);
bool KeyEventArgs__get_IsMetaKeyPressed(KeyEventArgs* __this);
bool KeyEventArgs__get_IsShiftKeyPressed(KeyEventArgs* __this);
int KeyEventArgs__get_Key(KeyEventArgs* __this);
int KeyEventArgs__get_Modifiers(KeyEventArgs* __this);
KeyEventArgs* KeyEventArgs__New_2(::uStatic* __this, int key, int modifiers);
void KeyEventArgs__set_Handled(KeyEventArgs* __this, bool value);
void KeyEventArgs__set_Key(KeyEventArgs* __this, int value);
void KeyEventArgs__set_Modifiers(KeyEventArgs* __this, int value);

struct KeyEventArgs : ::app::Uno::EventArgs
{
    bool _Handled;
    int _Key;
    int _Modifiers;

    void _ObjInit_1(int key, int modifiers) { KeyEventArgs___ObjInit_1(this, key, modifiers); }
    bool Handled() { return KeyEventArgs__get_Handled(this); }
    bool IsAltKeyPressed() { return KeyEventArgs__get_IsAltKeyPressed(this); }
    bool IsControlKeyPressed() { return KeyEventArgs__get_IsControlKeyPressed(this); }
    bool IsMetaKeyPressed() { return KeyEventArgs__get_IsMetaKeyPressed(this); }
    bool IsShiftKeyPressed() { return KeyEventArgs__get_IsShiftKeyPressed(this); }
    int Key() { return KeyEventArgs__get_Key(this); }
    int Modifiers() { return KeyEventArgs__get_Modifiers(this); }
    void Handled(bool value) { KeyEventArgs__set_Handled(this, value); }
    void Key(int value) { KeyEventArgs__set_Key(this, value); }
    void Modifiers(int value) { KeyEventArgs__set_Modifiers(this, value); }
};

}}}


#endif
