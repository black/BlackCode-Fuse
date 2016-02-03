#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Uno_Platform_ClosingEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_KeyEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_PointerEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_SystemUIWillResizeEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_TextInputEventArgs.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.ClosingEventArgs.h>
#include <app/Uno.Platform.EventModifiers.h>
#include <app/Uno.Platform.FrameChangedEventArgs.h>
#include <app/Uno.Platform.Key.h>
#include <app/Uno.Platform.KeyEventArgs.h>
#include <app/Uno.Platform.MouseButton.h>
#include <app/Uno.Platform.PointerCursor.h>
#include <app/Uno.Platform.PointerEventArgs.h>
#include <app/Uno.Platform.PointerType.h>
#include <app/Uno.Platform.SystemUI.h>
#include <app/Uno.Platform.SystemUIID.h>
#include <app/Uno.Platform.SystemUIResizeReason.h>
#include <app/Uno.Platform.SystemUIWillResizeEventArgs.h>
#include <app/Uno.Platform.TextInputEventArgs.h>
#include <app/Uno.Platform.TextInputHint.h>
#include <app/Uno.Platform.TimerEventArgs.h>
#include <app/Uno.Platform.ViewNativeHandle.h>
#include <app/Uno.Platform.WheelDeltaMode.h>
#include <app/Uno.Platform.Window.h>
#include <app/Uno.Rect.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <app/Uno.String.h>
#include <Xli/Traits.h>

namespace app {
namespace Uno {
namespace Platform {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ClosingEventArgs__uType* ClosingEventArgs__typeof()
{
    static ::uStaticStrong<ClosingEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (ClosingEventArgs__uType*)::uAllocClassType(sizeof(ClosingEventArgs__uType), "Uno.Platform.ClosingEventArgs", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetFunctions(3,
        ::uNewFunction("get_Cancel", ClosingEventArgs__get_Cancel, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ClosingEventArgs__New_2, 0, true, ClosingEventArgs__typeof()),
        ::uNewFunctionVoid("set_Cancel", ClosingEventArgs__set_Cancel, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void ClosingEventArgs___ObjInit_1(ClosingEventArgs* __this)
{
    ::app::Uno::EventArgs___ObjInit(__this);
}

bool ClosingEventArgs__get_Cancel(ClosingEventArgs* __this)
{
    return __this->_Cancel;
}

ClosingEventArgs* ClosingEventArgs__New_2(::uStatic* __this)
{
    ClosingEventArgs* inst = (ClosingEventArgs*)::uAllocObject(sizeof(ClosingEventArgs), ClosingEventArgs__typeof());
    inst->_ObjInit_1();
    return inst;
}

void ClosingEventArgs__set_Cancel(ClosingEventArgs* __this, bool value)
{
    __this->_Cancel = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* EventModifiers__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Platform.EventModifiers", ::app::Uno::Int__typeof(), 9);

    type->SetLiterals(
        "MetaKey", 1LL,
        "ControlKey", 2LL,
        "ShiftKey", 4LL,
        "AltKey", 8LL,
        "LeftButton", 16LL,
        "MiddleButton", 32LL,
        "RightButton", 64LL,
        "X1Button", 128LL,
        "X2Button", 256LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FrameChangedEventArgs__uType* FrameChangedEventArgs__typeof()
{
    static ::uStaticStrong<FrameChangedEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (FrameChangedEventArgs__uType*)::uAllocClassType(sizeof(FrameChangedEventArgs__uType), "Uno.Platform.FrameChangedEventArgs", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetFunctions(3,
        ::uNewFunction("get_NewFrame", FrameChangedEventArgs__get_NewFrame, 0, false, ::app::Uno::Rect__typeof()),
        ::uNewFunction(".ctor", FrameChangedEventArgs__New_2, 0, true, FrameChangedEventArgs__typeof(), ::app::Uno::Rect__typeof()),
        ::uNewFunctionVoid("set_NewFrame", FrameChangedEventArgs__set_NewFrame, 0, false, ::app::Uno::Rect__typeof()));

    ::uRegisterType(type);
    return type;
}

void FrameChangedEventArgs___ObjInit_1(FrameChangedEventArgs* __this, ::app::Uno::Rect newFrame)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->NewFrame(newFrame);
}

::app::Uno::Rect FrameChangedEventArgs__get_NewFrame(FrameChangedEventArgs* __this)
{
    return __this->_NewFrame;
}

FrameChangedEventArgs* FrameChangedEventArgs__New_2(::uStatic* __this, ::app::Uno::Rect newFrame)
{
    FrameChangedEventArgs* inst = (FrameChangedEventArgs*)::uAllocObject(sizeof(FrameChangedEventArgs), FrameChangedEventArgs__typeof());
    inst->_ObjInit_1(newFrame);
    return inst;
}

void FrameChangedEventArgs__set_NewFrame(FrameChangedEventArgs* __this, ::app::Uno::Rect value)
{
    __this->_NewFrame = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Key__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Platform.Key", ::app::Uno::Int__typeof(), 82);

    type->SetLiterals(
        "Backspace", 8LL,
        "Tab", 9LL,
        "Enter", 13LL,
        "ShiftKey", 16LL,
        "ControlKey", 17LL,
        "AltKey", 18LL,
        "Break", 19LL,
        "CapsLock", 20LL,
        "Escape", 27LL,
        "Space", 32LL,
        "PageUp", 33LL,
        "PageDown", 34LL,
        "End", 35LL,
        "Home", 36LL,
        "Left", 37LL,
        "Up", 38LL,
        "Right", 39LL,
        "Down", 40LL,
        "Insert", 45LL,
        "Delete", 46LL,
        "D0", 48LL,
        "D1", 49LL,
        "D2", 50LL,
        "D3", 51LL,
        "D4", 52LL,
        "D5", 53LL,
        "D6", 54LL,
        "D7", 55LL,
        "D8", 56LL,
        "D9", 57LL,
        "A", 65LL,
        "B", 66LL,
        "C", 67LL,
        "D", 68LL,
        "E", 69LL,
        "F", 70LL,
        "G", 71LL,
        "H", 72LL,
        "I", 73LL,
        "J", 74LL,
        "K", 75LL,
        "L", 76LL,
        "M", 77LL,
        "N", 78LL,
        "O", 79LL,
        "P", 80LL,
        "Q", 81LL,
        "R", 82LL,
        "S", 83LL,
        "T", 84LL,
        "U", 85LL,
        "V", 86LL,
        "W", 87LL,
        "X", 88LL,
        "Y", 89LL,
        "Z", 90LL,
        "NumPad0", 96LL,
        "NumPad1", 97LL,
        "NumPad2", 98LL,
        "NumPad3", 99LL,
        "NumPad4", 100LL,
        "NumPad5", 101LL,
        "NumPad6", 102LL,
        "NumPad7", 103LL,
        "NumPad8", 104LL,
        "NumPad9", 105LL,
        "F1", 112LL,
        "F2", 113LL,
        "F3", 114LL,
        "F4", 115LL,
        "F5", 116LL,
        "F6", 117LL,
        "F7", 118LL,
        "F8", 119LL,
        "F9", 120LL,
        "F10", 121LL,
        "F11", 122LL,
        "F12", 123LL,
        "MenuButton", 200LL,
        "BackButton", 201LL,
        "OSKey", 202LL,
        "MetaKey", 203LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyEventArgs__uType* KeyEventArgs__typeof()
{
    static ::uStaticStrong<KeyEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (KeyEventArgs__uType*)::uAllocClassType(sizeof(KeyEventArgs__uType), "Uno.Platform.KeyEventArgs", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetFunctions(11,
        ::uNewFunction("get_Handled", KeyEventArgs__get_Handled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsAltKeyPressed", KeyEventArgs__get_IsAltKeyPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsControlKeyPressed", KeyEventArgs__get_IsControlKeyPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsMetaKeyPressed", KeyEventArgs__get_IsMetaKeyPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsShiftKeyPressed", KeyEventArgs__get_IsShiftKeyPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Key", KeyEventArgs__get_Key, 0, false, ::app::Uno::Platform::Key__typeof()),
        ::uNewFunction("get_Modifiers", KeyEventArgs__get_Modifiers, 0, false, ::app::Uno::Platform::EventModifiers__typeof()),
        ::uNewFunction(".ctor", KeyEventArgs__New_2, 0, true, KeyEventArgs__typeof(), ::app::Uno::Platform::Key__typeof(), ::app::Uno::Platform::EventModifiers__typeof()),
        ::uNewFunctionVoid("set_Handled", KeyEventArgs__set_Handled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Key", KeyEventArgs__set_Key, 0, false, ::app::Uno::Platform::Key__typeof()),
        ::uNewFunctionVoid("set_Modifiers", KeyEventArgs__set_Modifiers, 0, false, ::app::Uno::Platform::EventModifiers__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyEventArgs___ObjInit_1(KeyEventArgs* __this, int key, int modifiers)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Key(key);
    __this->Modifiers(modifiers);
}

bool KeyEventArgs__get_Handled(KeyEventArgs* __this)
{
    return __this->_Handled;
}

bool KeyEventArgs__get_IsAltKeyPressed(KeyEventArgs* __this)
{
    return (__this->Modifiers() & 8) == 8;
}

bool KeyEventArgs__get_IsControlKeyPressed(KeyEventArgs* __this)
{
    return (__this->Modifiers() & 2) == 2;
}

bool KeyEventArgs__get_IsMetaKeyPressed(KeyEventArgs* __this)
{
    return (__this->Modifiers() & 1) == 1;
}

bool KeyEventArgs__get_IsShiftKeyPressed(KeyEventArgs* __this)
{
    return (__this->Modifiers() & 4) == 4;
}

int KeyEventArgs__get_Key(KeyEventArgs* __this)
{
    return __this->_Key;
}

int KeyEventArgs__get_Modifiers(KeyEventArgs* __this)
{
    return __this->_Modifiers;
}

KeyEventArgs* KeyEventArgs__New_2(::uStatic* __this, int key, int modifiers)
{
    KeyEventArgs* inst = (KeyEventArgs*)::uAllocObject(sizeof(KeyEventArgs), KeyEventArgs__typeof());
    inst->_ObjInit_1(key, modifiers);
    return inst;
}

void KeyEventArgs__set_Handled(KeyEventArgs* __this, bool value)
{
    __this->_Handled = value;
}

void KeyEventArgs__set_Key(KeyEventArgs* __this, int value)
{
    __this->_Key = value;
}

void KeyEventArgs__set_Modifiers(KeyEventArgs* __this, int value)
{
    __this->_Modifiers = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* MouseButton__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Platform.MouseButton", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "Left", 1LL,
        "Middle", 2LL,
        "Right", 3LL,
        "X1", 4LL,
        "X2", 5LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* PointerCursor__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Platform.PointerCursor", ::app::Uno::Int__typeof(), 17);

    type->SetLiterals(
        "None", 0LL,
        "Default", 1LL,
        "Crosshair", 2LL,
        "Pointer", 3LL,
        "Help", 4LL,
        "Move", 5LL,
        "Wait", 6LL,
        "Progress", 7LL,
        "ResizeNorth", 8LL,
        "ResizeEast", 9LL,
        "ResizeSouth", 10LL,
        "ResizeWest", 11LL,
        "ResizeNorthEast", 12LL,
        "ResizeNorthWest", 13LL,
        "ResizeSouthEast", 14LL,
        "ResizeSouthWest", 15LL,
        "IBeam", 16LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerEventArgs__uType* PointerEventArgs__typeof()
{
    static ::uStaticStrong<PointerEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (PointerEventArgs__uType*)::uAllocClassType(sizeof(PointerEventArgs__uType), "Uno.Platform.PointerEventArgs", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetFunctions(26,
        ::uNewFunction("get_FingerId", PointerEventArgs__get_FingerId, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Handled", PointerEventArgs__get_Handled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsAltKeyPressed", PointerEventArgs__get_IsAltKeyPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsControlKeyPressed", PointerEventArgs__get_IsControlKeyPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsLeftButtonPressed", PointerEventArgs__get_IsLeftButtonPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsMetaKeyPressed", PointerEventArgs__get_IsMetaKeyPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsMiddleButtonPressed", PointerEventArgs__get_IsMiddleButtonPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsPrimary", PointerEventArgs__get_IsPrimary, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsRightButtonPressed", PointerEventArgs__get_IsRightButtonPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsShiftKeyPressed", PointerEventArgs__get_IsShiftKeyPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Modifiers", PointerEventArgs__get_Modifiers, 0, false, ::app::Uno::Platform::EventModifiers__typeof()),
        ::uNewFunction("get_MouseButton", PointerEventArgs__get_MouseButton, 0, false, ::app::Uno::Platform::MouseButton__typeof()),
        ::uNewFunction("get_PointerType", PointerEventArgs__get_PointerType, 0, false, ::app::Uno::Platform::PointerType__typeof()),
        ::uNewFunction("get_Position", PointerEventArgs__get_Position, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_WheelDelta", PointerEventArgs__get_WheelDelta, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_WheelDeltaMode", PointerEventArgs__get_WheelDeltaMode, 0, false, ::app::Uno::Platform::WheelDeltaMode__typeof()),
        ::uNewFunction(".ctor", PointerEventArgs__New_2, 0, true, PointerEventArgs__typeof(), ::app::Uno::Platform::PointerType__typeof(), ::app::Uno::Platform::EventModifiers__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Platform::MouseButton__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Platform::WheelDeltaMode__typeof()),
        ::uNewFunctionVoid("set_FingerId", PointerEventArgs__set_FingerId, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_Handled", PointerEventArgs__set_Handled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_IsPrimary", PointerEventArgs__set_IsPrimary, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Modifiers", PointerEventArgs__set_Modifiers, 0, false, ::app::Uno::Platform::EventModifiers__typeof()),
        ::uNewFunctionVoid("set_MouseButton", PointerEventArgs__set_MouseButton, 0, false, ::app::Uno::Platform::MouseButton__typeof()),
        ::uNewFunctionVoid("set_PointerType", PointerEventArgs__set_PointerType, 0, false, ::app::Uno::Platform::PointerType__typeof()),
        ::uNewFunctionVoid("set_Position", PointerEventArgs__set_Position, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_WheelDelta", PointerEventArgs__set_WheelDelta, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_WheelDeltaMode", PointerEventArgs__set_WheelDeltaMode, 0, false, ::app::Uno::Platform::WheelDeltaMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void PointerEventArgs___ObjInit_1(PointerEventArgs* __this, int type, int modifiers, bool primary, ::app::Uno::Float2 position, int fingerId, int mouseButton, ::app::Uno::Float2 wheelDelta, int wheelDeltaMode)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->PointerType(type);
    __this->Modifiers(modifiers);
    __this->IsPrimary(primary);
    __this->Position(position);
    __this->FingerId(fingerId);
    __this->MouseButton(mouseButton);
    __this->WheelDelta(wheelDelta);
    __this->WheelDeltaMode(wheelDeltaMode);
}

int PointerEventArgs__get_FingerId(PointerEventArgs* __this)
{
    return __this->_FingerId;
}

bool PointerEventArgs__get_Handled(PointerEventArgs* __this)
{
    return __this->_Handled;
}

bool PointerEventArgs__get_IsAltKeyPressed(PointerEventArgs* __this)
{
    return (__this->Modifiers() & 8) == 8;
}

bool PointerEventArgs__get_IsControlKeyPressed(PointerEventArgs* __this)
{
    return (__this->Modifiers() & 2) == 2;
}

bool PointerEventArgs__get_IsLeftButtonPressed(PointerEventArgs* __this)
{
    return (__this->Modifiers() & 16) == 16;
}

bool PointerEventArgs__get_IsMetaKeyPressed(PointerEventArgs* __this)
{
    return (__this->Modifiers() & 1) == 1;
}

bool PointerEventArgs__get_IsMiddleButtonPressed(PointerEventArgs* __this)
{
    return (__this->Modifiers() & 32) == 32;
}

bool PointerEventArgs__get_IsPrimary(PointerEventArgs* __this)
{
    return __this->_IsPrimary;
}

bool PointerEventArgs__get_IsRightButtonPressed(PointerEventArgs* __this)
{
    return (__this->Modifiers() & 64) == 64;
}

bool PointerEventArgs__get_IsShiftKeyPressed(PointerEventArgs* __this)
{
    return (__this->Modifiers() & 4) == 4;
}

int PointerEventArgs__get_Modifiers(PointerEventArgs* __this)
{
    return __this->_Modifiers;
}

int PointerEventArgs__get_MouseButton(PointerEventArgs* __this)
{
    return __this->_MouseButton;
}

int PointerEventArgs__get_PointerType(PointerEventArgs* __this)
{
    return __this->_PointerType;
}

::app::Uno::Float2 PointerEventArgs__get_Position(PointerEventArgs* __this)
{
    return __this->_Position;
}

::app::Uno::Float2 PointerEventArgs__get_WheelDelta(PointerEventArgs* __this)
{
    return __this->_WheelDelta;
}

int PointerEventArgs__get_WheelDeltaMode(PointerEventArgs* __this)
{
    return __this->_WheelDeltaMode;
}

PointerEventArgs* PointerEventArgs__New_2(::uStatic* __this, int type, int modifiers, bool primary, ::app::Uno::Float2 position, int fingerId, int mouseButton, ::app::Uno::Float2 wheelDelta, int wheelDeltaMode)
{
    PointerEventArgs* inst = (PointerEventArgs*)::uAllocObject(sizeof(PointerEventArgs), PointerEventArgs__typeof());
    inst->_ObjInit_1(type, modifiers, primary, position, fingerId, mouseButton, wheelDelta, wheelDeltaMode);
    return inst;
}

void PointerEventArgs__set_FingerId(PointerEventArgs* __this, int value)
{
    __this->_FingerId = value;
}

void PointerEventArgs__set_Handled(PointerEventArgs* __this, bool value)
{
    __this->_Handled = value;
}

void PointerEventArgs__set_IsPrimary(PointerEventArgs* __this, bool value)
{
    __this->_IsPrimary = value;
}

void PointerEventArgs__set_Modifiers(PointerEventArgs* __this, int value)
{
    __this->_Modifiers = value;
}

void PointerEventArgs__set_MouseButton(PointerEventArgs* __this, int value)
{
    __this->_MouseButton = value;
}

void PointerEventArgs__set_PointerType(PointerEventArgs* __this, int value)
{
    __this->_PointerType = value;
}

void PointerEventArgs__set_Position(PointerEventArgs* __this, ::app::Uno::Float2 value)
{
    __this->_Position = value;
}

void PointerEventArgs__set_WheelDelta(PointerEventArgs* __this, ::app::Uno::Float2 value)
{
    __this->_WheelDelta = value;
}

void PointerEventArgs__set_WheelDeltaMode(PointerEventArgs* __this, int value)
{
    __this->_WheelDeltaMode = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* PointerType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Platform.PointerType", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Mouse", 1LL,
        "Touch", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::app::Uno::Rect SystemUI___cachedBottomFrame;
::uStaticStrong< ::uDelegate*> SystemUI__BottomFrameWillResize;
::uStaticStrong< ::uDelegate*> SystemUI__TopFrameWillResize;

SystemUI__uType* SystemUI__typeof()
{
    static ::uStaticStrong<SystemUI__uType*> type;
    if (type != NULL) return type;

    type = (SystemUI__uType*)::uAllocClassType(sizeof(SystemUI__uType), "Uno.Platform.SystemUI");

    type->SetFields(1,
        ::uNewField("_cachedBottomFrame", &SystemUI___cachedBottomFrame, 0, ::app::Uno::Rect__typeof()));

    type->SetFunctions(14,
        ::uNewFunctionVoid("add_BottomFrameWillResize", SystemUI__add_BottomFrameWillResize, 0, true, ::app::Uno::EventHandler__Uno_Platform_SystemUIWillResizeEventArgs__typeof()),
        ::uNewFunctionVoid("add_TopFrameWillResize", SystemUI__add_TopFrameWillResize, 0, true, ::app::Uno::EventHandler__Uno_Platform_SystemUIWillResizeEventArgs__typeof()),
        ::uNewFunctionVoid("EnterFullscreen", SystemUI__EnterFullscreen, 0, true),
        ::uNewFunction("get_BottomFrame", SystemUI__get_BottomFrame, 0, true, ::app::Uno::Rect__typeof()),
        ::uNewFunction("get_IsBottomFrameVisible", SystemUI__get_IsBottomFrameVisible, 0, true, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsTopFrameVisible", SystemUI__get_IsTopFrameVisible, 0, true, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_TopFrame", SystemUI__get_TopFrame, 0, true, ::app::Uno::Rect__typeof()),
        ::uNewFunction("GetIsStatusBarVisible", SystemUI__GetIsStatusBarVisible, 0, true, ::app::Uno::Bool__typeof()),
        ::uNewFunction("GetStatusBarFrame", SystemUI__GetStatusBarFrame, 0, true, ::app::Uno::Rect__typeof()),
        ::uNewFunctionVoid("OnWillResize", SystemUI__OnWillResize, 0, true, ::app::Uno::Platform::SystemUIWillResizeEventArgs__typeof()),
        ::uNewFunctionVoid("remove_BottomFrameWillResize", SystemUI__remove_BottomFrameWillResize, 0, true, ::app::Uno::EventHandler__Uno_Platform_SystemUIWillResizeEventArgs__typeof()),
        ::uNewFunctionVoid("remove_TopFrameWillResize", SystemUI__remove_TopFrameWillResize, 0, true, ::app::Uno::EventHandler__Uno_Platform_SystemUIWillResizeEventArgs__typeof()),
        ::uNewFunctionVoid("set_IsTopFrameVisible", SystemUI__set_IsTopFrameVisible, 0, true, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("SetIsStatusBarVisible", SystemUI__SetIsStatusBarVisible, 0, true, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void SystemUI__add_BottomFrameWillResize(::uStatic* __this, ::uDelegate* value)
{
    SystemUI__BottomFrameWillResize = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)SystemUI__BottomFrameWillResize, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_SystemUIWillResizeEventArgs__typeof());
}

void SystemUI__add_TopFrameWillResize(::uStatic* __this, ::uDelegate* value)
{
    SystemUI__TopFrameWillResize = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)SystemUI__TopFrameWillResize, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_SystemUIWillResizeEventArgs__typeof());
}

void SystemUI__EnterFullscreen(::uStatic* __this)
{
    uPlatform2::Application::EnterFullscreen();
}

::app::Uno::Rect SystemUI__get_BottomFrame(::uStatic* __this)
{
    return SystemUI___cachedBottomFrame;
}

bool SystemUI__get_IsBottomFrameVisible(::uStatic* __this)
{
    return (SystemUI___cachedBottomFrame.Top - SystemUI___cachedBottomFrame.Bottom) > 0.0f;
}

bool SystemUI__get_IsTopFrameVisible(::uStatic* __this)
{
    return SystemUI__GetIsStatusBarVisible(NULL);
}

::app::Uno::Rect SystemUI__get_TopFrame(::uStatic* __this)
{
    return SystemUI__GetStatusBarFrame(NULL);
}

bool SystemUI__GetIsStatusBarVisible(::uStatic* __this)
{
    return uPlatform2::Application::GetIsStatusBarVisible();
}

::app::Uno::Rect SystemUI__GetStatusBarFrame(::uStatic* __this)
{
    return uPlatform2::Application::GetStatusBarFrame();
}

void SystemUI__OnWillResize(::uStatic* __this, ::app::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    if (::uPtr< ::app::Uno::Platform::SystemUIWillResizeEventArgs*>(args)->ID() == 0)
    {
        ::uDelegate* handler = SystemUI__TopFrameWillResize;

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
        {
            ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::Platform::SystemUIWillResizeEventArgs*>(NULL, args);
        }
    }
    else
    {
        SystemUI___cachedBottomFrame = ::uPtr< ::app::Uno::Platform::SystemUIWillResizeEventArgs*>(args)->EndFrame();
        ::uDelegate* handler = SystemUI__BottomFrameWillResize;

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
        {
            ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::Platform::SystemUIWillResizeEventArgs*>(NULL, args);
        }
    }
}

void SystemUI__remove_BottomFrameWillResize(::uStatic* __this, ::uDelegate* value)
{
    SystemUI__BottomFrameWillResize = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)SystemUI__BottomFrameWillResize, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_SystemUIWillResizeEventArgs__typeof());
}

void SystemUI__remove_TopFrameWillResize(::uStatic* __this, ::uDelegate* value)
{
    SystemUI__TopFrameWillResize = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)SystemUI__TopFrameWillResize, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_SystemUIWillResizeEventArgs__typeof());
}

void SystemUI__set_IsTopFrameVisible(::uStatic* __this, bool value)
{
    SystemUI__SetIsStatusBarVisible(NULL, value);
}

void SystemUI__SetIsStatusBarVisible(::uStatic* __this, bool visible_)
{
    uPlatform2::Application::SetStatusBarVisible(visible_);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* SystemUIID__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Platform.SystemUIID", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "TopFrame", 0LL,
        "BottomFrame", 1LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* SystemUIResizeReason__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Platform.SystemUIResizeReason", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "WillShow", 0LL,
        "WillChangeFrame", 1LL,
        "WillHide", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SystemUIWillResizeEventArgs__uType* SystemUIWillResizeEventArgs__typeof()
{
    static ::uStaticStrong<SystemUIWillResizeEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (SystemUIWillResizeEventArgs__uType*)::uAllocClassType(sizeof(SystemUIWillResizeEventArgs__uType), "Uno.Platform.SystemUIWillResizeEventArgs", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetFunctions(15,
        ::uNewFunction("get_AnimationCurve", SystemUIWillResizeEventArgs__get_AnimationCurve, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_AnimationDuration", SystemUIWillResizeEventArgs__get_AnimationDuration, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_EndFrame", SystemUIWillResizeEventArgs__get_EndFrame, 0, false, ::app::Uno::Rect__typeof()),
        ::uNewFunction("get_ID", SystemUIWillResizeEventArgs__get_ID, 0, false, ::app::Uno::Platform::SystemUIID__typeof()),
        ::uNewFunction("get_IsAnimated", SystemUIWillResizeEventArgs__get_IsAnimated, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_ResizeReason", SystemUIWillResizeEventArgs__get_ResizeReason, 0, false, ::app::Uno::Platform::SystemUIResizeReason__typeof()),
        ::uNewFunction("get_StartFrame", SystemUIWillResizeEventArgs__get_StartFrame, 0, false, ::app::Uno::Rect__typeof()),
        ::uNewFunction(".ctor", SystemUIWillResizeEventArgs__New_2, 0, true, SystemUIWillResizeEventArgs__typeof(), ::app::Uno::Platform::SystemUIID__typeof(), ::app::Uno::Platform::SystemUIResizeReason__typeof(), ::app::Uno::Rect__typeof(), ::app::Uno::Rect__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_AnimationCurve", SystemUIWillResizeEventArgs__set_AnimationCurve, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_AnimationDuration", SystemUIWillResizeEventArgs__set_AnimationDuration, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_EndFrame", SystemUIWillResizeEventArgs__set_EndFrame, 0, false, ::app::Uno::Rect__typeof()),
        ::uNewFunctionVoid("set_ID", SystemUIWillResizeEventArgs__set_ID, 0, false, ::app::Uno::Platform::SystemUIID__typeof()),
        ::uNewFunctionVoid("set_IsAnimated", SystemUIWillResizeEventArgs__set_IsAnimated, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_ResizeReason", SystemUIWillResizeEventArgs__set_ResizeReason, 0, false, ::app::Uno::Platform::SystemUIResizeReason__typeof()),
        ::uNewFunctionVoid("set_StartFrame", SystemUIWillResizeEventArgs__set_StartFrame, 0, false, ::app::Uno::Rect__typeof()));

    ::uRegisterType(type);
    return type;
}

void SystemUIWillResizeEventArgs___ObjInit_1(SystemUIWillResizeEventArgs* __this, int id, int resizeReason, ::app::Uno::Rect endFrame, ::app::Uno::Rect startFrame, double animationDuration, int animationCurve)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->ID(id);
    __this->ResizeReason(resizeReason);
    __this->StartFrame(startFrame);
    __this->EndFrame(endFrame);

    if (animationDuration != 0.0)
    {
        __this->IsAnimated(true);
        __this->AnimationDuration(animationDuration);
        __this->AnimationCurve(animationCurve);
    }
}

int SystemUIWillResizeEventArgs__get_AnimationCurve(SystemUIWillResizeEventArgs* __this)
{
    return __this->_AnimationCurve;
}

double SystemUIWillResizeEventArgs__get_AnimationDuration(SystemUIWillResizeEventArgs* __this)
{
    return __this->_AnimationDuration;
}

::app::Uno::Rect SystemUIWillResizeEventArgs__get_EndFrame(SystemUIWillResizeEventArgs* __this)
{
    return __this->_EndFrame;
}

int SystemUIWillResizeEventArgs__get_ID(SystemUIWillResizeEventArgs* __this)
{
    return __this->_ID;
}

bool SystemUIWillResizeEventArgs__get_IsAnimated(SystemUIWillResizeEventArgs* __this)
{
    return __this->_IsAnimated;
}

int SystemUIWillResizeEventArgs__get_ResizeReason(SystemUIWillResizeEventArgs* __this)
{
    return __this->_ResizeReason;
}

::app::Uno::Rect SystemUIWillResizeEventArgs__get_StartFrame(SystemUIWillResizeEventArgs* __this)
{
    return __this->_StartFrame;
}

SystemUIWillResizeEventArgs* SystemUIWillResizeEventArgs__New_2(::uStatic* __this, int id, int resizeReason, ::app::Uno::Rect endFrame, ::app::Uno::Rect startFrame, double animationDuration, int animationCurve)
{
    SystemUIWillResizeEventArgs* inst = (SystemUIWillResizeEventArgs*)::uAllocObject(sizeof(SystemUIWillResizeEventArgs), SystemUIWillResizeEventArgs__typeof());
    inst->_ObjInit_1(id, resizeReason, endFrame, startFrame, animationDuration, animationCurve);
    return inst;
}

void SystemUIWillResizeEventArgs__set_AnimationCurve(SystemUIWillResizeEventArgs* __this, int value)
{
    __this->_AnimationCurve = value;
}

void SystemUIWillResizeEventArgs__set_AnimationDuration(SystemUIWillResizeEventArgs* __this, double value)
{
    __this->_AnimationDuration = value;
}

void SystemUIWillResizeEventArgs__set_EndFrame(SystemUIWillResizeEventArgs* __this, ::app::Uno::Rect value)
{
    __this->_EndFrame = value;
}

void SystemUIWillResizeEventArgs__set_ID(SystemUIWillResizeEventArgs* __this, int value)
{
    __this->_ID = value;
}

void SystemUIWillResizeEventArgs__set_IsAnimated(SystemUIWillResizeEventArgs* __this, bool value)
{
    __this->_IsAnimated = value;
}

void SystemUIWillResizeEventArgs__set_ResizeReason(SystemUIWillResizeEventArgs* __this, int value)
{
    __this->_ResizeReason = value;
}

void SystemUIWillResizeEventArgs__set_StartFrame(SystemUIWillResizeEventArgs* __this, ::app::Uno::Rect value)
{
    __this->_StartFrame = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextInputEventArgs__uType* TextInputEventArgs__typeof()
{
    static ::uStaticStrong<TextInputEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (TextInputEventArgs__uType*)::uAllocClassType(sizeof(TextInputEventArgs__uType), "Uno.Platform.TextInputEventArgs", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Text", offsetof(TextInputEventArgs, _Text));

    type->SetFunctions(11,
        ::uNewFunction("get_Handled", TextInputEventArgs__get_Handled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsAltKeyPressed", TextInputEventArgs__get_IsAltKeyPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsControlKeyPressed", TextInputEventArgs__get_IsControlKeyPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsMetaKeyPressed", TextInputEventArgs__get_IsMetaKeyPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsShiftKeyPressed", TextInputEventArgs__get_IsShiftKeyPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Modifiers", TextInputEventArgs__get_Modifiers, 0, false, ::app::Uno::Platform::EventModifiers__typeof()),
        ::uNewFunction("get_Text", TextInputEventArgs__get_Text, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", TextInputEventArgs__New_2, 0, true, TextInputEventArgs__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Platform::EventModifiers__typeof()),
        ::uNewFunctionVoid("set_Handled", TextInputEventArgs__set_Handled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Modifiers", TextInputEventArgs__set_Modifiers, 0, false, ::app::Uno::Platform::EventModifiers__typeof()),
        ::uNewFunctionVoid("set_Text", TextInputEventArgs__set_Text, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextInputEventArgs___ObjInit_1(TextInputEventArgs* __this, ::uString* text, int modifiers)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Text(text);
    __this->Modifiers(modifiers);
}

bool TextInputEventArgs__get_Handled(TextInputEventArgs* __this)
{
    return __this->_Handled;
}

bool TextInputEventArgs__get_IsAltKeyPressed(TextInputEventArgs* __this)
{
    return (__this->Modifiers() & 8) == 8;
}

bool TextInputEventArgs__get_IsControlKeyPressed(TextInputEventArgs* __this)
{
    return (__this->Modifiers() & 2) == 2;
}

bool TextInputEventArgs__get_IsMetaKeyPressed(TextInputEventArgs* __this)
{
    return (__this->Modifiers() & 1) == 1;
}

bool TextInputEventArgs__get_IsShiftKeyPressed(TextInputEventArgs* __this)
{
    return (__this->Modifiers() & 4) == 4;
}

int TextInputEventArgs__get_Modifiers(TextInputEventArgs* __this)
{
    return __this->_Modifiers;
}

::uString* TextInputEventArgs__get_Text(TextInputEventArgs* __this)
{
    return __this->_Text;
}

TextInputEventArgs* TextInputEventArgs__New_2(::uStatic* __this, ::uString* text, int modifiers)
{
    TextInputEventArgs* inst = (TextInputEventArgs*)::uAllocObject(sizeof(TextInputEventArgs), TextInputEventArgs__typeof());
    inst->_ObjInit_1(text, modifiers);
    return inst;
}

void TextInputEventArgs__set_Handled(TextInputEventArgs* __this, bool value)
{
    __this->_Handled = value;
}

void TextInputEventArgs__set_Modifiers(TextInputEventArgs* __this, int value)
{
    __this->_Modifiers = value;
}

void TextInputEventArgs__set_Text(TextInputEventArgs* __this, ::uString* value)
{
    __this->_Text = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* TextInputHint__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Platform.TextInputHint", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "Default", 0LL,
        "Email", 1LL,
        "URL", 2LL,
        "Phone", 3LL,
        "Number", 4LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TimerEventArgs__uType* TimerEventArgs__typeof()
{
    static ::uStaticStrong<TimerEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (TimerEventArgs__uType*)::uAllocClassType(sizeof(TimerEventArgs__uType), "Uno.Platform.TimerEventArgs", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetFunctions(5,
        ::uNewFunction("get_LastTickTimestamp", TimerEventArgs__get_LastTickTimestamp, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_TickDuration", TimerEventArgs__get_TickDuration, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction(".ctor", TimerEventArgs__New_2, 0, true, TimerEventArgs__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_LastTickTimestamp", TimerEventArgs__set_LastTickTimestamp, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_TickDuration", TimerEventArgs__set_TickDuration, 0, false, ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

void TimerEventArgs___ObjInit_1(TimerEventArgs* __this, double lastTickTimestamp, double tickDuration)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->LastTickTimestamp(lastTickTimestamp);
    __this->TickDuration(tickDuration);
}

double TimerEventArgs__get_LastTickTimestamp(TimerEventArgs* __this)
{
    return __this->_LastTickTimestamp;
}

double TimerEventArgs__get_TickDuration(TimerEventArgs* __this)
{
    return __this->_TickDuration;
}

TimerEventArgs* TimerEventArgs__New_2(::uStatic* __this, double lastTickTimestamp, double tickDuration)
{
    TimerEventArgs* inst = (TimerEventArgs*)::uAllocObject(sizeof(TimerEventArgs), TimerEventArgs__typeof());
    inst->_ObjInit_1(lastTickTimestamp, tickDuration);
    return inst;
}

void TimerEventArgs__set_LastTickTimestamp(TimerEventArgs* __this, double value)
{
    __this->_LastTickTimestamp = value;
}

void TimerEventArgs__set_TickDuration(TimerEventArgs* __this, double value)
{
    __this->_TickDuration = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ViewNativeHandle__uType* ViewNativeHandle__typeof()
{
    static ::uStaticStrong<ViewNativeHandle__uType*> type;
    if (type != NULL) return type;

    type = (ViewNativeHandle__uType*)::uAllocStructType(sizeof(ViewNativeHandle__uType), "Uno.Platform.ViewNativeHandle", sizeof(uPlatform2::ViewNativeHandle), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))ViewNativeHandle__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))ViewNativeHandle__GetHashCode;

    type->SetFunctions(1,
        ::uNewFunction("IsSameView", ViewNativeHandle__IsSameView, 0, true, ::app::Uno::Bool__typeof(), ViewNativeHandle__typeof(), ViewNativeHandle__typeof()));

    ::uRegisterType(type);
    return type;
}

bool ViewNativeHandle__Equals(uPlatform2::ViewNativeHandle* __this, ::uObject* obj)
{
    return ::uIs(obj, ViewNativeHandle__typeof()) && ViewNativeHandle__op_Equality(NULL, ::uUnbox< uPlatform2::ViewNativeHandle>(ViewNativeHandle__typeof(), obj), *__this);
}

int ViewNativeHandle__GetHashCode(uPlatform2::ViewNativeHandle* __this)
{
    return ::Xli::DefaultTraits::Hash(__this);
}

bool ViewNativeHandle__IsSameView(::uStatic* __this, uPlatform2::ViewNativeHandle handle1, uPlatform2::ViewNativeHandle handle2)
{
    return ::app::Android::Base::JNI__IsSameObject(NULL, handle1, handle2);
}

bool ViewNativeHandle__op_Equality(::uStatic* __this, uPlatform2::ViewNativeHandle lhs, uPlatform2::ViewNativeHandle rhs)
{
    return ViewNativeHandle__IsSameView(NULL, lhs, rhs);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* WheelDeltaMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Platform.WheelDeltaMode", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "DeltaPixel", 0LL,
        "DeltaLine", 1LL,
        "DeltaPage", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Window__uType* Window__typeof()
{
    static ::uStaticStrong<Window__uType*> type;
    if (type != NULL) return type;

    type = (Window__uType*)::uAllocClassType(sizeof(Window__uType), "Uno.Platform.Window", false, 0, 16, 0);

    type->SetStrongRefs(
        "Closed", offsetof(Window, Closed),
        "Closing", offsetof(Window, Closing),
        "GotFocus", offsetof(Window, GotFocus),
        "KeyboardResized", offsetof(Window, KeyboardResized),
        "KeyPressed", offsetof(Window, KeyPressed),
        "KeyReleased", offsetof(Window, KeyReleased),
        "LostFocus", offsetof(Window, LostFocus),
        "PointerEntered", offsetof(Window, PointerEntered),
        "PointerLeft", offsetof(Window, PointerLeft),
        "PointerMoved", offsetof(Window, PointerMoved),
        "PointerPressed", offsetof(Window, PointerPressed),
        "PointerReleased", offsetof(Window, PointerReleased),
        "PointerWheelChanged", offsetof(Window, PointerWheelChanged),
        "Resized", offsetof(Window, Resized),
        "TextInput", offsetof(Window, TextInput),
        "Updating", offsetof(Window, Updating));

    type->SetFields(2,
        ::uNewField("_handle", NULL, offsetof(Window, _handle), ::app::Uno::Runtime::Implementation::PlatformWindowHandle__typeof()),
        ::uNewField("_hasPointerEntered", NULL, offsetof(Window, _hasPointerEntered), ::app::Uno::Bool__typeof()));

    type->SetFunctions(58,
        ::uNewFunctionVoid("add_Closed", Window__add_Closed, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_Closing", Window__add_Closing, 0, false, ::app::Uno::EventHandler__Uno_Platform_ClosingEventArgs__typeof()),
        ::uNewFunctionVoid("add_GotFocus", Window__add_GotFocus, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_KeyboardResized", Window__add_KeyboardResized, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_KeyPressed", Window__add_KeyPressed, 0, false, ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof()),
        ::uNewFunctionVoid("add_KeyReleased", Window__add_KeyReleased, 0, false, ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof()),
        ::uNewFunctionVoid("add_LostFocus", Window__add_LostFocus, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_PointerEntered", Window__add_PointerEntered, 0, false, ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof()),
        ::uNewFunctionVoid("add_PointerLeft", Window__add_PointerLeft, 0, false, ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof()),
        ::uNewFunctionVoid("add_PointerMoved", Window__add_PointerMoved, 0, false, ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof()),
        ::uNewFunctionVoid("add_PointerPressed", Window__add_PointerPressed, 0, false, ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof()),
        ::uNewFunctionVoid("add_PointerReleased", Window__add_PointerReleased, 0, false, ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof()),
        ::uNewFunctionVoid("add_PointerWheelChanged", Window__add_PointerWheelChanged, 0, false, ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof()),
        ::uNewFunctionVoid("add_Resized", Window__add_Resized, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_TextInput", Window__add_TextInput, 0, false, ::app::Uno::EventHandler__Uno_Platform_TextInputEventArgs__typeof()),
        ::uNewFunctionVoid("add_Updating", Window__add_Updating, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("Close", Window__Close, 0, false),
        ::uNewFunction("get_ClientSize", Window__get_ClientSize, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunction("get_Fullscreen", Window__get_Fullscreen, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsTextInputActive", Window__get_IsTextInputActive, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_PointerCursor", Window__get_PointerCursor, 0, false, ::app::Uno::Platform::PointerCursor__typeof()),
        ::uNewFunction("get_Title", Window__get_Title, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("OnClosed", Window__OnClosed, 0, false, ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnClosing", Window__OnClosing, 0, false, ::app::Uno::Platform::ClosingEventArgs__typeof()),
        ::uNewFunctionVoid("OnGotFocus", Window__OnGotFocus, 0, false, ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnKeyboardResized", Window__OnKeyboardResized, 0, false),
        ::uNewFunctionVoid("OnKeyPressed", Window__OnKeyPressed, 0, false, ::app::Uno::Platform::KeyEventArgs__typeof()),
        ::uNewFunctionVoid("OnKeyReleased", Window__OnKeyReleased, 0, false, ::app::Uno::Platform::KeyEventArgs__typeof()),
        ::uNewFunctionVoid("OnLostFocus", Window__OnLostFocus, 0, false, ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnPointerEntered", Window__OnPointerEntered, 0, false, ::app::Uno::Platform::PointerEventArgs__typeof()),
        ::uNewFunctionVoid("OnPointerLeft", Window__OnPointerLeft, 0, false, ::app::Uno::Platform::PointerEventArgs__typeof()),
        ::uNewFunctionVoid("OnPointerMoved", Window__OnPointerMoved, 0, false, ::app::Uno::Platform::PointerEventArgs__typeof()),
        ::uNewFunctionVoid("OnPointerPressed", Window__OnPointerPressed, 0, false, ::app::Uno::Platform::PointerEventArgs__typeof()),
        ::uNewFunctionVoid("OnPointerReleased", Window__OnPointerReleased, 0, false, ::app::Uno::Platform::PointerEventArgs__typeof()),
        ::uNewFunctionVoid("OnPointerWheelChanged", Window__OnPointerWheelChanged, 0, false, ::app::Uno::Platform::PointerEventArgs__typeof()),
        ::uNewFunctionVoid("OnResized", Window__OnResized, 0, false, ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnTextInput", Window__OnTextInput, 0, false, ::app::Uno::Platform::TextInputEventArgs__typeof()),
        ::uNewFunctionVoid("OnUpdating", Window__OnUpdating, 0, false, ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("remove_Closed", Window__remove_Closed, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_Closing", Window__remove_Closing, 0, false, ::app::Uno::EventHandler__Uno_Platform_ClosingEventArgs__typeof()),
        ::uNewFunctionVoid("remove_GotFocus", Window__remove_GotFocus, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_KeyboardResized", Window__remove_KeyboardResized, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_KeyPressed", Window__remove_KeyPressed, 0, false, ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof()),
        ::uNewFunctionVoid("remove_KeyReleased", Window__remove_KeyReleased, 0, false, ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof()),
        ::uNewFunctionVoid("remove_LostFocus", Window__remove_LostFocus, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_PointerEntered", Window__remove_PointerEntered, 0, false, ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof()),
        ::uNewFunctionVoid("remove_PointerLeft", Window__remove_PointerLeft, 0, false, ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof()),
        ::uNewFunctionVoid("remove_PointerMoved", Window__remove_PointerMoved, 0, false, ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof()),
        ::uNewFunctionVoid("remove_PointerPressed", Window__remove_PointerPressed, 0, false, ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof()),
        ::uNewFunctionVoid("remove_PointerReleased", Window__remove_PointerReleased, 0, false, ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof()),
        ::uNewFunctionVoid("remove_PointerWheelChanged", Window__remove_PointerWheelChanged, 0, false, ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof()),
        ::uNewFunctionVoid("remove_Resized", Window__remove_Resized, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_TextInput", Window__remove_TextInput, 0, false, ::app::Uno::EventHandler__Uno_Platform_TextInputEventArgs__typeof()),
        ::uNewFunctionVoid("remove_Updating", Window__remove_Updating, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("set_ClientSize", Window__set_ClientSize, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunctionVoid("set_Fullscreen", Window__set_Fullscreen, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_PointerCursor", Window__set_PointerCursor, 0, false, ::app::Uno::Platform::PointerCursor__typeof()),
        ::uNewFunctionVoid("set_Title", Window__set_Title, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void Window___ObjInit(Window* __this)
{
    __this->_handle = ::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetInstance(NULL);
}

void Window__add_Closed(Window* __this, ::uDelegate* value)
{
    __this->Closed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Closed, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Window__add_Closing(Window* __this, ::uDelegate* value)
{
    __this->Closing = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Closing, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_ClosingEventArgs__typeof());
}

void Window__add_GotFocus(Window* __this, ::uDelegate* value)
{
    __this->GotFocus = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->GotFocus, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Window__add_KeyboardResized(Window* __this, ::uDelegate* value)
{
    __this->KeyboardResized = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->KeyboardResized, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Window__add_KeyPressed(Window* __this, ::uDelegate* value)
{
    __this->KeyPressed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->KeyPressed, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof());
}

void Window__add_KeyReleased(Window* __this, ::uDelegate* value)
{
    __this->KeyReleased = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->KeyReleased, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof());
}

void Window__add_LostFocus(Window* __this, ::uDelegate* value)
{
    __this->LostFocus = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->LostFocus, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Window__add_PointerEntered(Window* __this, ::uDelegate* value)
{
    __this->PointerEntered = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PointerEntered, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof());
}

void Window__add_PointerLeft(Window* __this, ::uDelegate* value)
{
    __this->PointerLeft = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PointerLeft, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof());
}

void Window__add_PointerMoved(Window* __this, ::uDelegate* value)
{
    __this->PointerMoved = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PointerMoved, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof());
}

void Window__add_PointerPressed(Window* __this, ::uDelegate* value)
{
    __this->PointerPressed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PointerPressed, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof());
}

void Window__add_PointerReleased(Window* __this, ::uDelegate* value)
{
    __this->PointerReleased = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PointerReleased, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof());
}

void Window__add_PointerWheelChanged(Window* __this, ::uDelegate* value)
{
    __this->PointerWheelChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PointerWheelChanged, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof());
}

void Window__add_Resized(Window* __this, ::uDelegate* value)
{
    __this->Resized = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Resized, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Window__add_TextInput(Window* __this, ::uDelegate* value)
{
    __this->TextInput = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TextInput, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_TextInputEventArgs__typeof());
}

void Window__add_Updating(Window* __this, ::uDelegate* value)
{
    __this->Updating = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Updating, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Window__Close(Window* __this)
{
    ::app::Uno::Runtime::Implementation::PlatformWindowImpl__Close(NULL, __this->_handle);
}

::app::Uno::Int2 Window__get_ClientSize(Window* __this)
{
    return ::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetClientSize(NULL, __this->_handle);
}

bool Window__get_Fullscreen(Window* __this)
{
    return ::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetFullscreen(NULL, __this->_handle);
}

bool Window__get_IsTextInputActive(Window* __this)
{
    return ::app::Uno::Runtime::Implementation::PlatformWindowImpl__IsTextInputActive(NULL, __this->_handle);
}

int Window__get_PointerCursor(Window* __this)
{
    return ::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetPointerCursor(NULL, __this->_handle);
}

::uString* Window__get_Title(Window* __this)
{
    return ::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetTitle(NULL, __this->_handle);
}

Window* Window__New_1(::uStatic* __this)
{
    Window* inst = (Window*)::uAllocObject(sizeof(Window), Window__typeof());
    inst->_ObjInit();
    return inst;
}

void Window__OnClosed(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Closed, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Closed)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnClosing(Window* __this, ::app::Uno::Platform::ClosingEventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Closing, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Closing)->InvokeVoid< ::uObject*, ::app::Uno::Platform::ClosingEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnGotFocus(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->GotFocus, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->GotFocus)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnKeyboardResized(Window* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->KeyboardResized, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->KeyboardResized)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void Window__OnKeyPressed(Window* __this, ::app::Uno::Platform::KeyEventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->KeyPressed, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->KeyPressed)->InvokeVoid< ::uObject*, ::app::Uno::Platform::KeyEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnKeyReleased(Window* __this, ::app::Uno::Platform::KeyEventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->KeyReleased, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->KeyReleased)->InvokeVoid< ::uObject*, ::app::Uno::Platform::KeyEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnLostFocus(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->LostFocus, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->LostFocus)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnPointerEntered(Window* __this, ::app::Uno::Platform::PointerEventArgs* args)
{
    __this->_hasPointerEntered = true;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PointerEntered, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PointerEntered)->InvokeVoid< ::uObject*, ::app::Uno::Platform::PointerEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnPointerLeft(Window* __this, ::app::Uno::Platform::PointerEventArgs* args)
{
    __this->_hasPointerEntered = false;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PointerLeft, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PointerLeft)->InvokeVoid< ::uObject*, ::app::Uno::Platform::PointerEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnPointerMoved(Window* __this, ::app::Uno::Platform::PointerEventArgs* args)
{
    if (!__this->_hasPointerEntered)
    {
        __this->OnPointerEntered(args);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PointerMoved, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PointerMoved)->InvokeVoid< ::uObject*, ::app::Uno::Platform::PointerEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnPointerPressed(Window* __this, ::app::Uno::Platform::PointerEventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PointerPressed, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PointerPressed)->InvokeVoid< ::uObject*, ::app::Uno::Platform::PointerEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnPointerReleased(Window* __this, ::app::Uno::Platform::PointerEventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PointerReleased, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PointerReleased)->InvokeVoid< ::uObject*, ::app::Uno::Platform::PointerEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnPointerWheelChanged(Window* __this, ::app::Uno::Platform::PointerEventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PointerWheelChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PointerWheelChanged)->InvokeVoid< ::uObject*, ::app::Uno::Platform::PointerEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnResized(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Resized, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Resized)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnTextInput(Window* __this, ::app::Uno::Platform::TextInputEventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TextInput, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->TextInput)->InvokeVoid< ::uObject*, ::app::Uno::Platform::TextInputEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnUpdating(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Updating, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Updating)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window__remove_Closed(Window* __this, ::uDelegate* value)
{
    __this->Closed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Closed, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Window__remove_Closing(Window* __this, ::uDelegate* value)
{
    __this->Closing = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Closing, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_ClosingEventArgs__typeof());
}

void Window__remove_GotFocus(Window* __this, ::uDelegate* value)
{
    __this->GotFocus = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->GotFocus, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Window__remove_KeyboardResized(Window* __this, ::uDelegate* value)
{
    __this->KeyboardResized = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->KeyboardResized, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Window__remove_KeyPressed(Window* __this, ::uDelegate* value)
{
    __this->KeyPressed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->KeyPressed, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof());
}

void Window__remove_KeyReleased(Window* __this, ::uDelegate* value)
{
    __this->KeyReleased = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->KeyReleased, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof());
}

void Window__remove_LostFocus(Window* __this, ::uDelegate* value)
{
    __this->LostFocus = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->LostFocus, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Window__remove_PointerEntered(Window* __this, ::uDelegate* value)
{
    __this->PointerEntered = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->PointerEntered, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof());
}

void Window__remove_PointerLeft(Window* __this, ::uDelegate* value)
{
    __this->PointerLeft = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->PointerLeft, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof());
}

void Window__remove_PointerMoved(Window* __this, ::uDelegate* value)
{
    __this->PointerMoved = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->PointerMoved, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof());
}

void Window__remove_PointerPressed(Window* __this, ::uDelegate* value)
{
    __this->PointerPressed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->PointerPressed, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof());
}

void Window__remove_PointerReleased(Window* __this, ::uDelegate* value)
{
    __this->PointerReleased = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->PointerReleased, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof());
}

void Window__remove_PointerWheelChanged(Window* __this, ::uDelegate* value)
{
    __this->PointerWheelChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->PointerWheelChanged, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof());
}

void Window__remove_Resized(Window* __this, ::uDelegate* value)
{
    __this->Resized = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Resized, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Window__remove_TextInput(Window* __this, ::uDelegate* value)
{
    __this->TextInput = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->TextInput, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_TextInputEventArgs__typeof());
}

void Window__remove_Updating(Window* __this, ::uDelegate* value)
{
    __this->Updating = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Updating, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Window__set_ClientSize(Window* __this, ::app::Uno::Int2 value)
{
    ::app::Uno::Runtime::Implementation::PlatformWindowImpl__SetClientSize(NULL, __this->_handle, value);
}

void Window__set_Fullscreen(Window* __this, bool value)
{
    ::app::Uno::Runtime::Implementation::PlatformWindowImpl__SetFullscreen(NULL, __this->_handle, value);
}

void Window__set_PointerCursor(Window* __this, int value)
{
    ::app::Uno::Runtime::Implementation::PlatformWindowImpl__SetPointerCursor(NULL, __this->_handle, value);
}

void Window__set_Title(Window* __this, ::uString* value)
{
    ::app::Uno::Runtime::Implementation::PlatformWindowImpl__SetTitle(NULL, __this->_handle, value);
}

}}}
