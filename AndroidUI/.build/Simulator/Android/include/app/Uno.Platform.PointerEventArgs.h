// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM_POINTER_EVENT_ARGS_H__
#define __APP_UNO_PLATFORM_POINTER_EVENT_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <app/Uno.Float2.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Platform {

struct PointerEventArgs;

struct PointerEventArgs__uType : ::app::Uno::EventArgs__uType
{
};

PointerEventArgs__uType* PointerEventArgs__typeof();

void PointerEventArgs___ObjInit_1(PointerEventArgs* __this, int type, int modifiers, bool primary, ::app::Uno::Float2 position, int fingerId, int mouseButton, ::app::Uno::Float2 wheelDelta, int wheelDeltaMode);
int PointerEventArgs__get_FingerId(PointerEventArgs* __this);
bool PointerEventArgs__get_Handled(PointerEventArgs* __this);
bool PointerEventArgs__get_IsAltKeyPressed(PointerEventArgs* __this);
bool PointerEventArgs__get_IsControlKeyPressed(PointerEventArgs* __this);
bool PointerEventArgs__get_IsLeftButtonPressed(PointerEventArgs* __this);
bool PointerEventArgs__get_IsMetaKeyPressed(PointerEventArgs* __this);
bool PointerEventArgs__get_IsMiddleButtonPressed(PointerEventArgs* __this);
bool PointerEventArgs__get_IsPrimary(PointerEventArgs* __this);
bool PointerEventArgs__get_IsRightButtonPressed(PointerEventArgs* __this);
bool PointerEventArgs__get_IsShiftKeyPressed(PointerEventArgs* __this);
int PointerEventArgs__get_Modifiers(PointerEventArgs* __this);
int PointerEventArgs__get_MouseButton(PointerEventArgs* __this);
int PointerEventArgs__get_PointerType(PointerEventArgs* __this);
::app::Uno::Float2 PointerEventArgs__get_Position(PointerEventArgs* __this);
::app::Uno::Float2 PointerEventArgs__get_WheelDelta(PointerEventArgs* __this);
int PointerEventArgs__get_WheelDeltaMode(PointerEventArgs* __this);
PointerEventArgs* PointerEventArgs__New_2(::uStatic* __this, int type, int modifiers, bool primary, ::app::Uno::Float2 position, int fingerId, int mouseButton, ::app::Uno::Float2 wheelDelta, int wheelDeltaMode);
void PointerEventArgs__set_FingerId(PointerEventArgs* __this, int value);
void PointerEventArgs__set_Handled(PointerEventArgs* __this, bool value);
void PointerEventArgs__set_IsPrimary(PointerEventArgs* __this, bool value);
void PointerEventArgs__set_Modifiers(PointerEventArgs* __this, int value);
void PointerEventArgs__set_MouseButton(PointerEventArgs* __this, int value);
void PointerEventArgs__set_PointerType(PointerEventArgs* __this, int value);
void PointerEventArgs__set_Position(PointerEventArgs* __this, ::app::Uno::Float2 value);
void PointerEventArgs__set_WheelDelta(PointerEventArgs* __this, ::app::Uno::Float2 value);
void PointerEventArgs__set_WheelDeltaMode(PointerEventArgs* __this, int value);

struct PointerEventArgs : ::app::Uno::EventArgs
{
    bool _Handled;
    int _PointerType;
    bool _IsPrimary;
    ::app::Uno::Float2 _Position;
    int _FingerId;
    int _MouseButton;
    ::app::Uno::Float2 _WheelDelta;
    int _WheelDeltaMode;
    int _Modifiers;

    void _ObjInit_1(int type, int modifiers, bool primary, ::app::Uno::Float2 position, int fingerId, int mouseButton, ::app::Uno::Float2 wheelDelta, int wheelDeltaMode) { PointerEventArgs___ObjInit_1(this, type, modifiers, primary, position, fingerId, mouseButton, wheelDelta, wheelDeltaMode); }
    int FingerId() { return PointerEventArgs__get_FingerId(this); }
    bool Handled() { return PointerEventArgs__get_Handled(this); }
    bool IsAltKeyPressed() { return PointerEventArgs__get_IsAltKeyPressed(this); }
    bool IsControlKeyPressed() { return PointerEventArgs__get_IsControlKeyPressed(this); }
    bool IsLeftButtonPressed() { return PointerEventArgs__get_IsLeftButtonPressed(this); }
    bool IsMetaKeyPressed() { return PointerEventArgs__get_IsMetaKeyPressed(this); }
    bool IsMiddleButtonPressed() { return PointerEventArgs__get_IsMiddleButtonPressed(this); }
    bool IsPrimary() { return PointerEventArgs__get_IsPrimary(this); }
    bool IsRightButtonPressed() { return PointerEventArgs__get_IsRightButtonPressed(this); }
    bool IsShiftKeyPressed() { return PointerEventArgs__get_IsShiftKeyPressed(this); }
    int Modifiers() { return PointerEventArgs__get_Modifiers(this); }
    int MouseButton() { return PointerEventArgs__get_MouseButton(this); }
    int PointerType() { return PointerEventArgs__get_PointerType(this); }
    ::app::Uno::Float2 Position() { return PointerEventArgs__get_Position(this); }
    ::app::Uno::Float2 WheelDelta() { return PointerEventArgs__get_WheelDelta(this); }
    int WheelDeltaMode() { return PointerEventArgs__get_WheelDeltaMode(this); }
    void FingerId(int value) { PointerEventArgs__set_FingerId(this, value); }
    void Handled(bool value) { PointerEventArgs__set_Handled(this, value); }
    void IsPrimary(bool value) { PointerEventArgs__set_IsPrimary(this, value); }
    void Modifiers(int value) { PointerEventArgs__set_Modifiers(this, value); }
    void MouseButton(int value) { PointerEventArgs__set_MouseButton(this, value); }
    void PointerType(int value) { PointerEventArgs__set_PointerType(this, value); }
    void Position(::app::Uno::Float2 value) { PointerEventArgs__set_Position(this, value); }
    void WheelDelta(::app::Uno::Float2 value) { PointerEventArgs__set_WheelDelta(this, value); }
    void WheelDeltaMode(int value) { PointerEventArgs__set_WheelDeltaMode(this, value); }
};

}}}


#endif
