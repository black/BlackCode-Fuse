// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Object.h>
#include <Uno.Platform.ClosingEventArgs.h>
#include <Uno.Platform.EventModifiers.h>
#include <Uno.Platform.FrameChangedEventArgs.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.KeyEventArgs.h>
#include <Uno.Platform.MouseButton.h>
#include <Uno.Platform.PointerCursor.h>
#include <Uno.Platform.PointerEventArgs.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Platform.SystemUI.h>
#include <Uno.Platform.SystemUIID.h>
#include <Uno.Platform.SystemUIResizeReason.h>
#include <Uno.Platform.SystemUIWillResizeEventArgs.h>
#include <Uno.Platform.TextInputEventArgs.h>
#include <Uno.Platform.TextInputHint.h>
#include <Uno.Platform.TimerEventArgs.h>
#include <Uno.Platform.ViewNativeHandle.h>
#include <Uno.Platform.WheelDeltaMode.h>
#include <Uno.Platform.Window.h>
#include <Uno.Rect.h>
#include <Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <Uno.String.h>
#include <Xli/Traits.h>
static uType* TYPES[12];

namespace g{
namespace Uno{
namespace Platform{

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform\$.uno(5)
// -----------------------------------------------------------------------

// public sealed class ClosingEventArgs :5
// {
uType* ClosingEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ClosingEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.ClosingEventArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->fp_ctor_ = (void*)ClosingEventArgs__New2_fn;
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Platform::ClosingEventArgs, _Cancel), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Cancel", NULL, (void*)ClosingEventArgs__get_Cancel_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Cancel", NULL, (void*)ClosingEventArgs__set_Cancel_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)ClosingEventArgs__New2_fn, 0, true, ClosingEventArgs_typeof(), 0));
    return type;
}

// public generated ClosingEventArgs() :5
void ClosingEventArgs__ctor_1_fn(ClosingEventArgs* __this)
{
    __this->ctor_1();
}

// public generated bool get_Cancel() :7
void ClosingEventArgs__get_Cancel_fn(ClosingEventArgs* __this, bool* __retval)
{
    *__retval = __this->Cancel();
}

// public generated void set_Cancel(bool value) :7
void ClosingEventArgs__set_Cancel_fn(ClosingEventArgs* __this, bool* value)
{
    __this->Cancel(*value);
}

// public generated ClosingEventArgs New() :5
void ClosingEventArgs__New2_fn(ClosingEventArgs** __retval)
{
    *__retval = ClosingEventArgs::New2();
}

// public generated ClosingEventArgs() [instance] :5
void ClosingEventArgs::ctor_1()
{
    ctor_();
}

// public generated bool get_Cancel() [instance] :7
bool ClosingEventArgs::Cancel()
{
    return _Cancel;
}

// public generated void set_Cancel(bool value) [instance] :7
void ClosingEventArgs::Cancel(bool value)
{
    _Cancel = value;
}

// public generated ClosingEventArgs New() [static] :5
ClosingEventArgs* ClosingEventArgs::New2()
{
    ClosingEventArgs* obj1 = (ClosingEventArgs*)uNew(ClosingEventArgs_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform\$.uno(152)
// -------------------------------------------------------------------------

// public enum EventModifiers :152
uEnumType* EventModifiers_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.EventModifiers", ::g::Uno::Int_typeof(), 9);
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
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform\$.uno(170)
// -------------------------------------------------------------------------

// public sealed class FrameChangedEventArgs :170
// {
uType* FrameChangedEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FrameChangedEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.FrameChangedEventArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Uno::Platform::FrameChangedEventArgs, _NewFrame), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)FrameChangedEventArgs__New2_fn, 0, true, FrameChangedEventArgs_typeof(), 1, ::g::Uno::Rect_typeof()),
        new uFunction("get_NewFrame", NULL, (void*)FrameChangedEventArgs__get_NewFrame_fn, 0, false, ::g::Uno::Rect_typeof(), 0));
    return type;
}

// public FrameChangedEventArgs(Uno.Rect newFrame) :172
void FrameChangedEventArgs__ctor_1_fn(FrameChangedEventArgs* __this, ::g::Uno::Rect* newFrame)
{
    __this->ctor_1(*newFrame);
}

// public FrameChangedEventArgs New(Uno.Rect newFrame) :172
void FrameChangedEventArgs__New2_fn(::g::Uno::Rect* newFrame, FrameChangedEventArgs** __retval)
{
    *__retval = FrameChangedEventArgs::New2(*newFrame);
}

// public generated Uno.Rect get_NewFrame() :177
void FrameChangedEventArgs__get_NewFrame_fn(FrameChangedEventArgs* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->NewFrame();
}

// private generated void set_NewFrame(Uno.Rect value) :177
void FrameChangedEventArgs__set_NewFrame_fn(FrameChangedEventArgs* __this, ::g::Uno::Rect* value)
{
    __this->NewFrame(*value);
}

// public FrameChangedEventArgs(Uno.Rect newFrame) [instance] :172
void FrameChangedEventArgs::ctor_1(::g::Uno::Rect newFrame)
{
    ctor_();
    NewFrame(newFrame);
}

// public generated Uno.Rect get_NewFrame() [instance] :177
::g::Uno::Rect FrameChangedEventArgs::NewFrame()
{
    return _NewFrame;
}

// private generated void set_NewFrame(Uno.Rect value) [instance] :177
void FrameChangedEventArgs::NewFrame(::g::Uno::Rect value)
{
    _NewFrame = value;
}

// public FrameChangedEventArgs New(Uno.Rect newFrame) [static] :172
FrameChangedEventArgs* FrameChangedEventArgs::New2(::g::Uno::Rect newFrame)
{
    FrameChangedEventArgs* obj1 = (FrameChangedEventArgs*)uNew(FrameChangedEventArgs_typeof());
    obj1->ctor_1(newFrame);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform\$.uno(15)
// ------------------------------------------------------------------------

// public enum Key :15
uEnumType* Key_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.Key", ::g::Uno::Int_typeof(), 82);
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
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform\$.uno(409)
// -------------------------------------------------------------------------

// public sealed class KeyEventArgs :409
// {
uType* KeyEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(KeyEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.KeyEventArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    ::TYPES[0] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Platform::KeyEventArgs, _Handled), 0,
        ::g::Uno::Platform::Key_typeof(), offsetof(::g::Uno::Platform::KeyEventArgs, _Key), 0,
        ::g::Uno::Platform::EventModifiers_typeof(), offsetof(::g::Uno::Platform::KeyEventArgs, _Modifiers), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("get_Handled", NULL, (void*)KeyEventArgs__get_Handled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Handled", NULL, (void*)KeyEventArgs__set_Handled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_IsAltKeyPressed", NULL, (void*)KeyEventArgs__get_IsAltKeyPressed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsControlKeyPressed", NULL, (void*)KeyEventArgs__get_IsControlKeyPressed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsMetaKeyPressed", NULL, (void*)KeyEventArgs__get_IsMetaKeyPressed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsShiftKeyPressed", NULL, (void*)KeyEventArgs__get_IsShiftKeyPressed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Key", NULL, (void*)KeyEventArgs__get_Key_fn, 0, false, ::g::Uno::Platform::Key_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)KeyEventArgs__New2_fn, 0, true, KeyEventArgs_typeof(), 2, ::g::Uno::Platform::Key_typeof(), ::g::Uno::Platform::EventModifiers_typeof()));
    return type;
}

// public KeyEventArgs(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) :411
void KeyEventArgs__ctor_1_fn(KeyEventArgs* __this, int* key, int* modifiers)
{
    __this->ctor_1(*key, *modifiers);
}

// public generated bool get_Handled() :419
void KeyEventArgs__get_Handled_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->Handled();
}

// public generated void set_Handled(bool value) :419
void KeyEventArgs__set_Handled_fn(KeyEventArgs* __this, bool* value)
{
    __this->Handled(*value);
}

// public bool get_IsAltKeyPressed() :449
void KeyEventArgs__get_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsAltKeyPressed();
}

// public bool get_IsControlKeyPressed() :439
void KeyEventArgs__get_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsControlKeyPressed();
}

// public bool get_IsMetaKeyPressed() :434
void KeyEventArgs__get_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsMetaKeyPressed();
}

// public bool get_IsShiftKeyPressed() :444
void KeyEventArgs__get_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsShiftKeyPressed();
}

// public generated Uno.Platform.Key get_Key() :424
void KeyEventArgs__get_Key_fn(KeyEventArgs* __this, int* __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(Uno.Platform.Key value) :424
void KeyEventArgs__set_Key_fn(KeyEventArgs* __this, int* value)
{
    __this->Key(*value);
}

// internal generated Uno.Platform.EventModifiers get_Modifiers() :429
void KeyEventArgs__get_Modifiers_fn(KeyEventArgs* __this, int* __retval)
{
    *__retval = __this->Modifiers();
}

// private generated void set_Modifiers(Uno.Platform.EventModifiers value) :429
void KeyEventArgs__set_Modifiers_fn(KeyEventArgs* __this, int* value)
{
    __this->Modifiers(*value);
}

// public KeyEventArgs New(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) :411
void KeyEventArgs__New2_fn(int* key, int* modifiers, KeyEventArgs** __retval)
{
    *__retval = KeyEventArgs::New2(*key, *modifiers);
}

// public KeyEventArgs(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) [instance] :411
void KeyEventArgs::ctor_1(int key, int modifiers)
{
    ctor_();
    Key(key);
    Modifiers(modifiers);
}

// public generated bool get_Handled() [instance] :419
bool KeyEventArgs::Handled()
{
    return _Handled;
}

// public generated void set_Handled(bool value) [instance] :419
void KeyEventArgs::Handled(bool value)
{
    _Handled = value;
}

// public bool get_IsAltKeyPressed() [instance] :449
bool KeyEventArgs::IsAltKeyPressed()
{
    return (Modifiers() & 8) == 8;
}

// public bool get_IsControlKeyPressed() [instance] :439
bool KeyEventArgs::IsControlKeyPressed()
{
    return (Modifiers() & 2) == 2;
}

// public bool get_IsMetaKeyPressed() [instance] :434
bool KeyEventArgs::IsMetaKeyPressed()
{
    return (Modifiers() & 1) == 1;
}

// public bool get_IsShiftKeyPressed() [instance] :444
bool KeyEventArgs::IsShiftKeyPressed()
{
    return (Modifiers() & 4) == 4;
}

// public generated Uno.Platform.Key get_Key() [instance] :424
int KeyEventArgs::Key()
{
    return _Key;
}

// private generated void set_Key(Uno.Platform.Key value) [instance] :424
void KeyEventArgs::Key(int value)
{
    _Key = value;
}

// internal generated Uno.Platform.EventModifiers get_Modifiers() [instance] :429
int KeyEventArgs::Modifiers()
{
    return _Modifiers;
}

// private generated void set_Modifiers(Uno.Platform.EventModifiers value) [instance] :429
void KeyEventArgs::Modifiers(int value)
{
    _Modifiers = value;
}

// public KeyEventArgs New(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) [static] :411
KeyEventArgs* KeyEventArgs::New2(int key, int modifiers)
{
    KeyEventArgs* obj1 = (KeyEventArgs*)uNew(KeyEventArgs_typeof());
    obj1->ctor_1(key, modifiers);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform\$.uno(106)
// -------------------------------------------------------------------------

// public enum MouseButton :106
uEnumType* MouseButton_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.MouseButton", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Left", 1LL,
        "Middle", 2LL,
        "Right", 3LL,
        "X1", 4LL,
        "X2", 5LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform\$.uno(115)
// -------------------------------------------------------------------------

// public enum PointerCursor :115
uEnumType* PointerCursor_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.PointerCursor", ::g::Uno::Int_typeof(), 17);
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
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform\$.uno(465)
// -------------------------------------------------------------------------

// public sealed class PointerEventArgs :465
// {
uType* PointerEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PointerEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.PointerEventArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Platform::PointerEventArgs, _FingerId), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Platform::PointerEventArgs, _Handled), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Platform::PointerEventArgs, _IsPrimary), 0,
        ::g::Uno::Platform::EventModifiers_typeof(), offsetof(::g::Uno::Platform::PointerEventArgs, _Modifiers), 0,
        ::g::Uno::Platform::MouseButton_typeof(), offsetof(::g::Uno::Platform::PointerEventArgs, _MouseButton), 0,
        ::g::Uno::Platform::PointerType_typeof(), offsetof(::g::Uno::Platform::PointerEventArgs, _PointerType), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Uno::Platform::PointerEventArgs, _Position), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Uno::Platform::PointerEventArgs, _WheelDelta), 0,
        ::g::Uno::Platform::WheelDeltaMode_typeof(), offsetof(::g::Uno::Platform::PointerEventArgs, _WheelDeltaMode), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_FingerId", NULL, (void*)PointerEventArgs__get_FingerId_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Handled", NULL, (void*)PointerEventArgs__get_Handled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Handled", NULL, (void*)PointerEventArgs__set_Handled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_IsPrimary", NULL, (void*)PointerEventArgs__get_IsPrimary_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_MouseButton", NULL, (void*)PointerEventArgs__get_MouseButton_fn, 0, false, ::g::Uno::Platform::MouseButton_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)PointerEventArgs__New2_fn, 0, true, PointerEventArgs_typeof(), 8, ::g::Uno::Platform::PointerType_typeof(), ::g::Uno::Platform::EventModifiers_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Platform::MouseButton_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Platform::WheelDeltaMode_typeof()),
        new uFunction("get_PointerType", NULL, (void*)PointerEventArgs__get_PointerType_fn, 0, false, ::g::Uno::Platform::PointerType_typeof(), 0),
        new uFunction("get_Position", NULL, (void*)PointerEventArgs__get_Position_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_WheelDelta", NULL, (void*)PointerEventArgs__get_WheelDelta_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_WheelDeltaMode", NULL, (void*)PointerEventArgs__get_WheelDeltaMode_fn, 0, false, ::g::Uno::Platform::WheelDeltaMode_typeof(), 0));
    return type;
}

// public PointerEventArgs(Uno.Platform.PointerType type, Uno.Platform.EventModifiers modifiers, bool primary, float2 position, int fingerId, Uno.Platform.MouseButton mouseButton, float2 wheelDelta, Uno.Platform.WheelDeltaMode wheelDeltaMode) :467
void PointerEventArgs__ctor_1_fn(PointerEventArgs* __this, int* type, int* modifiers, bool* primary, ::g::Uno::Float2* position, int* fingerId, int* mouseButton, ::g::Uno::Float2* wheelDelta, int* wheelDeltaMode)
{
    __this->ctor_1(*type, *modifiers, *primary, *position, *fingerId, *mouseButton, *wheelDelta, *wheelDeltaMode);
}

// public generated int get_FingerId() :502
void PointerEventArgs__get_FingerId_fn(PointerEventArgs* __this, int* __retval)
{
    *__retval = __this->FingerId();
}

// private generated void set_FingerId(int value) :502
void PointerEventArgs__set_FingerId_fn(PointerEventArgs* __this, int* value)
{
    __this->FingerId(*value);
}

// public generated bool get_Handled() :481
void PointerEventArgs__get_Handled_fn(PointerEventArgs* __this, bool* __retval)
{
    *__retval = __this->Handled();
}

// public generated void set_Handled(bool value) :481
void PointerEventArgs__set_Handled_fn(PointerEventArgs* __this, bool* value)
{
    __this->Handled(*value);
}

// public generated bool get_IsPrimary() :492
void PointerEventArgs__get_IsPrimary_fn(PointerEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsPrimary();
}

// private generated void set_IsPrimary(bool value) :492
void PointerEventArgs__set_IsPrimary_fn(PointerEventArgs* __this, bool* value)
{
    __this->IsPrimary(*value);
}

// internal generated Uno.Platform.EventModifiers get_Modifiers() :522
void PointerEventArgs__get_Modifiers_fn(PointerEventArgs* __this, int* __retval)
{
    *__retval = __this->Modifiers();
}

// private generated void set_Modifiers(Uno.Platform.EventModifiers value) :522
void PointerEventArgs__set_Modifiers_fn(PointerEventArgs* __this, int* value)
{
    __this->Modifiers(*value);
}

// public generated Uno.Platform.MouseButton get_MouseButton() :507
void PointerEventArgs__get_MouseButton_fn(PointerEventArgs* __this, int* __retval)
{
    *__retval = __this->MouseButton();
}

// private generated void set_MouseButton(Uno.Platform.MouseButton value) :507
void PointerEventArgs__set_MouseButton_fn(PointerEventArgs* __this, int* value)
{
    __this->MouseButton(*value);
}

// public PointerEventArgs New(Uno.Platform.PointerType type, Uno.Platform.EventModifiers modifiers, bool primary, float2 position, int fingerId, Uno.Platform.MouseButton mouseButton, float2 wheelDelta, Uno.Platform.WheelDeltaMode wheelDeltaMode) :467
void PointerEventArgs__New2_fn(int* type, int* modifiers, bool* primary, ::g::Uno::Float2* position, int* fingerId, int* mouseButton, ::g::Uno::Float2* wheelDelta, int* wheelDeltaMode, PointerEventArgs** __retval)
{
    *__retval = PointerEventArgs::New2(*type, *modifiers, *primary, *position, *fingerId, *mouseButton, *wheelDelta, *wheelDeltaMode);
}

// public generated Uno.Platform.PointerType get_PointerType() :486
void PointerEventArgs__get_PointerType_fn(PointerEventArgs* __this, int* __retval)
{
    *__retval = __this->PointerType();
}

// private generated void set_PointerType(Uno.Platform.PointerType value) :486
void PointerEventArgs__set_PointerType_fn(PointerEventArgs* __this, int* value)
{
    __this->PointerType(*value);
}

// public generated float2 get_Position() :497
void PointerEventArgs__get_Position_fn(PointerEventArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Position();
}

// private generated void set_Position(float2 value) :497
void PointerEventArgs__set_Position_fn(PointerEventArgs* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// public generated float2 get_WheelDelta() :512
void PointerEventArgs__get_WheelDelta_fn(PointerEventArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WheelDelta();
}

// private generated void set_WheelDelta(float2 value) :512
void PointerEventArgs__set_WheelDelta_fn(PointerEventArgs* __this, ::g::Uno::Float2* value)
{
    __this->WheelDelta(*value);
}

// public generated Uno.Platform.WheelDeltaMode get_WheelDeltaMode() :517
void PointerEventArgs__get_WheelDeltaMode_fn(PointerEventArgs* __this, int* __retval)
{
    *__retval = __this->WheelDeltaMode();
}

// private generated void set_WheelDeltaMode(Uno.Platform.WheelDeltaMode value) :517
void PointerEventArgs__set_WheelDeltaMode_fn(PointerEventArgs* __this, int* value)
{
    __this->WheelDeltaMode(*value);
}

// public PointerEventArgs(Uno.Platform.PointerType type, Uno.Platform.EventModifiers modifiers, bool primary, float2 position, int fingerId, Uno.Platform.MouseButton mouseButton, float2 wheelDelta, Uno.Platform.WheelDeltaMode wheelDeltaMode) [instance] :467
void PointerEventArgs::ctor_1(int type, int modifiers, bool primary, ::g::Uno::Float2 position, int fingerId, int mouseButton, ::g::Uno::Float2 wheelDelta, int wheelDeltaMode)
{
    ctor_();
    PointerType(type);
    Modifiers(modifiers);
    IsPrimary(primary);
    Position(position);
    FingerId(fingerId);
    MouseButton(mouseButton);
    WheelDelta(wheelDelta);
    WheelDeltaMode(wheelDeltaMode);
}

// public generated int get_FingerId() [instance] :502
int PointerEventArgs::FingerId()
{
    return _FingerId;
}

// private generated void set_FingerId(int value) [instance] :502
void PointerEventArgs::FingerId(int value)
{
    _FingerId = value;
}

// public generated bool get_Handled() [instance] :481
bool PointerEventArgs::Handled()
{
    return _Handled;
}

// public generated void set_Handled(bool value) [instance] :481
void PointerEventArgs::Handled(bool value)
{
    _Handled = value;
}

// public generated bool get_IsPrimary() [instance] :492
bool PointerEventArgs::IsPrimary()
{
    return _IsPrimary;
}

// private generated void set_IsPrimary(bool value) [instance] :492
void PointerEventArgs::IsPrimary(bool value)
{
    _IsPrimary = value;
}

// internal generated Uno.Platform.EventModifiers get_Modifiers() [instance] :522
int PointerEventArgs::Modifiers()
{
    return _Modifiers;
}

// private generated void set_Modifiers(Uno.Platform.EventModifiers value) [instance] :522
void PointerEventArgs::Modifiers(int value)
{
    _Modifiers = value;
}

// public generated Uno.Platform.MouseButton get_MouseButton() [instance] :507
int PointerEventArgs::MouseButton()
{
    return _MouseButton;
}

// private generated void set_MouseButton(Uno.Platform.MouseButton value) [instance] :507
void PointerEventArgs::MouseButton(int value)
{
    _MouseButton = value;
}

// public generated Uno.Platform.PointerType get_PointerType() [instance] :486
int PointerEventArgs::PointerType()
{
    return _PointerType;
}

// private generated void set_PointerType(Uno.Platform.PointerType value) [instance] :486
void PointerEventArgs::PointerType(int value)
{
    _PointerType = value;
}

// public generated float2 get_Position() [instance] :497
::g::Uno::Float2 PointerEventArgs::Position()
{
    return _Position;
}

// private generated void set_Position(float2 value) [instance] :497
void PointerEventArgs::Position(::g::Uno::Float2 value)
{
    _Position = value;
}

// public generated float2 get_WheelDelta() [instance] :512
::g::Uno::Float2 PointerEventArgs::WheelDelta()
{
    return _WheelDelta;
}

// private generated void set_WheelDelta(float2 value) [instance] :512
void PointerEventArgs::WheelDelta(::g::Uno::Float2 value)
{
    _WheelDelta = value;
}

// public generated Uno.Platform.WheelDeltaMode get_WheelDeltaMode() [instance] :517
int PointerEventArgs::WheelDeltaMode()
{
    return _WheelDeltaMode;
}

// private generated void set_WheelDeltaMode(Uno.Platform.WheelDeltaMode value) [instance] :517
void PointerEventArgs::WheelDeltaMode(int value)
{
    _WheelDeltaMode = value;
}

// public PointerEventArgs New(Uno.Platform.PointerType type, Uno.Platform.EventModifiers modifiers, bool primary, float2 position, int fingerId, Uno.Platform.MouseButton mouseButton, float2 wheelDelta, Uno.Platform.WheelDeltaMode wheelDeltaMode) [static] :467
PointerEventArgs* PointerEventArgs::New2(int type, int modifiers, bool primary, ::g::Uno::Float2 position, int fingerId, int mouseButton, ::g::Uno::Float2 wheelDelta, int wheelDeltaMode)
{
    PointerEventArgs* obj1 = (PointerEventArgs*)uNew(PointerEventArgs_typeof());
    obj1->ctor_1(type, modifiers, primary, position, fingerId, mouseButton, wheelDelta, wheelDeltaMode);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform\$.uno(136)
// -------------------------------------------------------------------------

// public enum PointerType :136
uEnumType* PointerType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.PointerType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Mouse", 1LL,
        "Touch", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform\$.uno(620)
// -------------------------------------------------------------------------

// public static extern class SystemUI :620
// {
uClassType* SystemUI_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Platform.SystemUI", options);
    ::TYPES[0] = ::g::Uno::Int_typeof();
    ::TYPES[1] = ::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof();
    ::TYPES[2] = ::g::Uno::Delegate_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Rect_typeof(), (uintptr_t)&::g::Uno::Platform::SystemUI::_cachedBottomFrame_, uFieldFlagsStatic,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof()), (uintptr_t)&::g::Uno::Platform::SystemUI::BottomFrameWillResize1_, uFieldFlagsStatic,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof()), (uintptr_t)&::g::Uno::Platform::SystemUI::TopFrameWillResize1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(6,
        new uFunction("get_BottomFrame", NULL, (void*)SystemUI__get_BottomFrame_fn, 0, true, ::g::Uno::Rect_typeof(), 0),
        new uFunction("add_BottomFrameWillResize", NULL, (void*)SystemUI__add_BottomFrameWillResize_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof())),
        new uFunction("remove_BottomFrameWillResize", NULL, (void*)SystemUI__remove_BottomFrameWillResize_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof())),
        new uFunction("get_TopFrame", NULL, (void*)SystemUI__get_TopFrame_fn, 0, true, ::g::Uno::Rect_typeof(), 0),
        new uFunction("add_TopFrameWillResize", NULL, (void*)SystemUI__add_TopFrameWillResize_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof())),
        new uFunction("remove_TopFrameWillResize", NULL, (void*)SystemUI__remove_TopFrameWillResize_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof())));
    return type;
}

// public static Uno.Rect get_BottomFrame() :626
void SystemUI__get_BottomFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::BottomFrame();
}

// public static generated void add_BottomFrameWillResize(Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs> value) :645
void SystemUI__add_BottomFrameWillResize_fn(uDelegate* value)
{
    SystemUI::add_BottomFrameWillResize(value);
}

// public static generated void remove_BottomFrameWillResize(Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs> value) :645
void SystemUI__remove_BottomFrameWillResize_fn(uDelegate* value)
{
    SystemUI::remove_BottomFrameWillResize(value);
}

// private static extern void EnterFullscreen() :641
void SystemUI__EnterFullscreen_fn()
{
    SystemUI::EnterFullscreen();
}

// private static extern Uno.Rect GetStatusBarFrame() :642
void SystemUI__GetStatusBarFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::GetStatusBarFrame();
}

// private static void OnWillResize(Uno.Platform.SystemUIWillResizeEventArgs args) :647
void SystemUI__OnWillResize_fn(::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    SystemUI::OnWillResize(args);
}

// public static Uno.Rect get_TopFrame() :625
void SystemUI__get_TopFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::TopFrame();
}

// public static generated void add_TopFrameWillResize(Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs> value) :644
void SystemUI__add_TopFrameWillResize_fn(uDelegate* value)
{
    SystemUI::add_TopFrameWillResize(value);
}

// public static generated void remove_TopFrameWillResize(Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs> value) :644
void SystemUI__remove_TopFrameWillResize_fn(uDelegate* value)
{
    SystemUI::remove_TopFrameWillResize(value);
}

::g::Uno::Rect SystemUI::_cachedBottomFrame_;
uSStrong<uDelegate*> SystemUI::BottomFrameWillResize1_;
uSStrong<uDelegate*> SystemUI::TopFrameWillResize1_;

// private static extern void EnterFullscreen() [static] :641
void SystemUI::EnterFullscreen()
{
    uPlatform2::Application::EnterFullscreen();
}

// private static extern Uno.Rect GetStatusBarFrame() [static] :642
::g::Uno::Rect SystemUI::GetStatusBarFrame()
{
    return uPlatform2::Application::GetStatusBarFrame();
}

// private static void OnWillResize(Uno.Platform.SystemUIWillResizeEventArgs args) [static] :647
void SystemUI::OnWillResize(::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    if (uPtr(args)->ID() == 0)
    {
        uDelegate* handler = SystemUI::TopFrameWillResize1();

        if (::g::Uno::Delegate::op_Inequality(handler, NULL))
            uPtr(handler)->Invoke(2, NULL, args);
    }
    else
    {
        SystemUI::_cachedBottomFrame() = uPtr(args)->EndFrame();
        uDelegate* handler1 = SystemUI::BottomFrameWillResize1();

        if (::g::Uno::Delegate::op_Inequality(handler1, NULL))
            uPtr(handler1)->Invoke(2, NULL, args);
    }
}

// public static Uno.Rect get_BottomFrame() [static] :626
::g::Uno::Rect SystemUI::BottomFrame()
{
    return SystemUI::_cachedBottomFrame();
}

// public static Uno.Rect get_TopFrame() [static] :625
::g::Uno::Rect SystemUI::TopFrame()
{
    return SystemUI::GetStatusBarFrame();
}

// public static generated void add_BottomFrameWillResize(Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs> value) [static] :645
void SystemUI::add_BottomFrameWillResize(uDelegate* value)
{
    SystemUI::BottomFrameWillResize1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::BottomFrameWillResize1(), value), ::TYPES[3/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/]);
}

// public static generated void remove_BottomFrameWillResize(Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs> value) [static] :645
void SystemUI::remove_BottomFrameWillResize(uDelegate* value)
{
    SystemUI::BottomFrameWillResize1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::BottomFrameWillResize1(), value), ::TYPES[3/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/]);
}

// public static generated void add_TopFrameWillResize(Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs> value) [static] :644
void SystemUI::add_TopFrameWillResize(uDelegate* value)
{
    SystemUI::TopFrameWillResize1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::TopFrameWillResize1(), value), ::TYPES[3/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/]);
}

// public static generated void remove_TopFrameWillResize(Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs> value) [static] :644
void SystemUI::remove_TopFrameWillResize(uDelegate* value)
{
    SystemUI::TopFrameWillResize1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::TopFrameWillResize1(), value), ::TYPES[3/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/]);
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform\$.uno(575)
// -------------------------------------------------------------------------

// public enum SystemUIID :575
uEnumType* SystemUIID_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.SystemUIID", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "TopFrame", 0LL,
        "BottomFrame", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform\$.uno(580)
// -------------------------------------------------------------------------

// public enum SystemUIResizeReason :580
uEnumType* SystemUIResizeReason_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.SystemUIResizeReason", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "WillShow", 0LL,
        "WillChangeFrame", 1LL,
        "WillHide", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform\$.uno(587)
// -------------------------------------------------------------------------

// public sealed class SystemUIWillResizeEventArgs :587
// {
uType* SystemUIWillResizeEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(SystemUIWillResizeEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.SystemUIWillResizeEventArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Platform::SystemUIWillResizeEventArgs, _AnimationCurve), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Uno::Platform::SystemUIWillResizeEventArgs, _AnimationDuration), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Uno::Platform::SystemUIWillResizeEventArgs, _EndFrame), 0,
        ::g::Uno::Platform::SystemUIID_typeof(), offsetof(::g::Uno::Platform::SystemUIWillResizeEventArgs, _ID), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Platform::SystemUIWillResizeEventArgs, _IsAnimated), 0,
        ::g::Uno::Platform::SystemUIResizeReason_typeof(), offsetof(::g::Uno::Platform::SystemUIWillResizeEventArgs, _ResizeReason), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Uno::Platform::SystemUIWillResizeEventArgs, _StartFrame), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("get_AnimationCurve", NULL, (void*)SystemUIWillResizeEventArgs__get_AnimationCurve_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_AnimationDuration", NULL, (void*)SystemUIWillResizeEventArgs__get_AnimationDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_EndFrame", NULL, (void*)SystemUIWillResizeEventArgs__get_EndFrame_fn, 0, false, ::g::Uno::Rect_typeof(), 0),
        new uFunction("get_ID", NULL, (void*)SystemUIWillResizeEventArgs__get_ID_fn, 0, false, ::g::Uno::Platform::SystemUIID_typeof(), 0),
        new uFunction("get_IsAnimated", NULL, (void*)SystemUIWillResizeEventArgs__get_IsAnimated_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)SystemUIWillResizeEventArgs__New2_fn, 0, true, SystemUIWillResizeEventArgs_typeof(), 6, ::g::Uno::Platform::SystemUIID_typeof(), ::g::Uno::Platform::SystemUIResizeReason_typeof(), ::g::Uno::Rect_typeof(), ::g::Uno::Rect_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("get_ResizeReason", NULL, (void*)SystemUIWillResizeEventArgs__get_ResizeReason_fn, 0, false, ::g::Uno::Platform::SystemUIResizeReason_typeof(), 0),
        new uFunction("get_StartFrame", NULL, (void*)SystemUIWillResizeEventArgs__get_StartFrame_fn, 0, false, ::g::Uno::Rect_typeof(), 0));
    return type;
}

// public SystemUIWillResizeEventArgs(Uno.Platform.SystemUIID id, Uno.Platform.SystemUIResizeReason resizeReason, Uno.Rect endFrame, [Uno.Rect startFrame], [double animationDuration], [int animationCurve]) :590
void SystemUIWillResizeEventArgs__ctor_1_fn(SystemUIWillResizeEventArgs* __this, int* id, int* resizeReason, ::g::Uno::Rect* endFrame, ::g::Uno::Rect* startFrame, double* animationDuration, int* animationCurve)
{
    __this->ctor_1(*id, *resizeReason, *endFrame, *startFrame, *animationDuration, *animationCurve);
}

// public generated int get_AnimationCurve() :616
void SystemUIWillResizeEventArgs__get_AnimationCurve_fn(SystemUIWillResizeEventArgs* __this, int* __retval)
{
    *__retval = __this->AnimationCurve();
}

// private generated void set_AnimationCurve(int value) :616
void SystemUIWillResizeEventArgs__set_AnimationCurve_fn(SystemUIWillResizeEventArgs* __this, int* value)
{
    __this->AnimationCurve(*value);
}

// public generated double get_AnimationDuration() :615
void SystemUIWillResizeEventArgs__get_AnimationDuration_fn(SystemUIWillResizeEventArgs* __this, double* __retval)
{
    *__retval = __this->AnimationDuration();
}

// private generated void set_AnimationDuration(double value) :615
void SystemUIWillResizeEventArgs__set_AnimationDuration_fn(SystemUIWillResizeEventArgs* __this, double* value)
{
    __this->AnimationDuration(*value);
}

// public generated Uno.Rect get_EndFrame() :612
void SystemUIWillResizeEventArgs__get_EndFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->EndFrame();
}

// private generated void set_EndFrame(Uno.Rect value) :612
void SystemUIWillResizeEventArgs__set_EndFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* value)
{
    __this->EndFrame(*value);
}

// public generated Uno.Platform.SystemUIID get_ID() :609
void SystemUIWillResizeEventArgs__get_ID_fn(SystemUIWillResizeEventArgs* __this, int* __retval)
{
    *__retval = __this->ID();
}

// private generated void set_ID(Uno.Platform.SystemUIID value) :609
void SystemUIWillResizeEventArgs__set_ID_fn(SystemUIWillResizeEventArgs* __this, int* value)
{
    __this->ID(*value);
}

// public generated bool get_IsAnimated() :614
void SystemUIWillResizeEventArgs__get_IsAnimated_fn(SystemUIWillResizeEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsAnimated();
}

// private generated void set_IsAnimated(bool value) :614
void SystemUIWillResizeEventArgs__set_IsAnimated_fn(SystemUIWillResizeEventArgs* __this, bool* value)
{
    __this->IsAnimated(*value);
}

// public SystemUIWillResizeEventArgs New(Uno.Platform.SystemUIID id, Uno.Platform.SystemUIResizeReason resizeReason, Uno.Rect endFrame, [Uno.Rect startFrame], [double animationDuration], [int animationCurve]) :590
void SystemUIWillResizeEventArgs__New2_fn(int* id, int* resizeReason, ::g::Uno::Rect* endFrame, ::g::Uno::Rect* startFrame, double* animationDuration, int* animationCurve, SystemUIWillResizeEventArgs** __retval)
{
    *__retval = SystemUIWillResizeEventArgs::New2(*id, *resizeReason, *endFrame, *startFrame, *animationDuration, *animationCurve);
}

// public generated Uno.Platform.SystemUIResizeReason get_ResizeReason() :610
void SystemUIWillResizeEventArgs__get_ResizeReason_fn(SystemUIWillResizeEventArgs* __this, int* __retval)
{
    *__retval = __this->ResizeReason();
}

// private generated void set_ResizeReason(Uno.Platform.SystemUIResizeReason value) :610
void SystemUIWillResizeEventArgs__set_ResizeReason_fn(SystemUIWillResizeEventArgs* __this, int* value)
{
    __this->ResizeReason(*value);
}

// public generated Uno.Rect get_StartFrame() :611
void SystemUIWillResizeEventArgs__get_StartFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->StartFrame();
}

// private generated void set_StartFrame(Uno.Rect value) :611
void SystemUIWillResizeEventArgs__set_StartFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* value)
{
    __this->StartFrame(*value);
}

// public SystemUIWillResizeEventArgs(Uno.Platform.SystemUIID id, Uno.Platform.SystemUIResizeReason resizeReason, Uno.Rect endFrame, [Uno.Rect startFrame], [double animationDuration], [int animationCurve]) [instance] :590
void SystemUIWillResizeEventArgs::ctor_1(int id, int resizeReason, ::g::Uno::Rect endFrame, ::g::Uno::Rect startFrame, double animationDuration, int animationCurve)
{
    ctor_();
    ID(id);
    ResizeReason(resizeReason);
    StartFrame(startFrame);
    EndFrame(endFrame);

    if (animationDuration != 0.0)
    {
        IsAnimated(true);
        AnimationDuration(animationDuration);
        AnimationCurve(animationCurve);
    }
}

// public generated int get_AnimationCurve() [instance] :616
int SystemUIWillResizeEventArgs::AnimationCurve()
{
    return _AnimationCurve;
}

// private generated void set_AnimationCurve(int value) [instance] :616
void SystemUIWillResizeEventArgs::AnimationCurve(int value)
{
    _AnimationCurve = value;
}

// public generated double get_AnimationDuration() [instance] :615
double SystemUIWillResizeEventArgs::AnimationDuration()
{
    return _AnimationDuration;
}

// private generated void set_AnimationDuration(double value) [instance] :615
void SystemUIWillResizeEventArgs::AnimationDuration(double value)
{
    _AnimationDuration = value;
}

// public generated Uno.Rect get_EndFrame() [instance] :612
::g::Uno::Rect SystemUIWillResizeEventArgs::EndFrame()
{
    return _EndFrame;
}

// private generated void set_EndFrame(Uno.Rect value) [instance] :612
void SystemUIWillResizeEventArgs::EndFrame(::g::Uno::Rect value)
{
    _EndFrame = value;
}

// public generated Uno.Platform.SystemUIID get_ID() [instance] :609
int SystemUIWillResizeEventArgs::ID()
{
    return _ID;
}

// private generated void set_ID(Uno.Platform.SystemUIID value) [instance] :609
void SystemUIWillResizeEventArgs::ID(int value)
{
    _ID = value;
}

// public generated bool get_IsAnimated() [instance] :614
bool SystemUIWillResizeEventArgs::IsAnimated()
{
    return _IsAnimated;
}

// private generated void set_IsAnimated(bool value) [instance] :614
void SystemUIWillResizeEventArgs::IsAnimated(bool value)
{
    _IsAnimated = value;
}

// public generated Uno.Platform.SystemUIResizeReason get_ResizeReason() [instance] :610
int SystemUIWillResizeEventArgs::ResizeReason()
{
    return _ResizeReason;
}

// private generated void set_ResizeReason(Uno.Platform.SystemUIResizeReason value) [instance] :610
void SystemUIWillResizeEventArgs::ResizeReason(int value)
{
    _ResizeReason = value;
}

// public generated Uno.Rect get_StartFrame() [instance] :611
::g::Uno::Rect SystemUIWillResizeEventArgs::StartFrame()
{
    return _StartFrame;
}

// private generated void set_StartFrame(Uno.Rect value) [instance] :611
void SystemUIWillResizeEventArgs::StartFrame(::g::Uno::Rect value)
{
    _StartFrame = value;
}

// public SystemUIWillResizeEventArgs New(Uno.Platform.SystemUIID id, Uno.Platform.SystemUIResizeReason resizeReason, Uno.Rect endFrame, [Uno.Rect startFrame], [double animationDuration], [int animationCurve]) [static] :590
SystemUIWillResizeEventArgs* SystemUIWillResizeEventArgs::New2(int id, int resizeReason, ::g::Uno::Rect endFrame, ::g::Uno::Rect startFrame, double animationDuration, int animationCurve)
{
    SystemUIWillResizeEventArgs* obj1 = (SystemUIWillResizeEventArgs*)uNew(SystemUIWillResizeEventArgs_typeof());
    obj1->ctor_1(id, resizeReason, endFrame, startFrame, animationDuration, animationCurve);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform\$.uno(667)
// -------------------------------------------------------------------------

// public sealed class TextInputEventArgs :667
// {
uType* TextInputEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TextInputEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.TextInputEventArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Platform::TextInputEventArgs, _Handled), 0,
        ::g::Uno::Platform::EventModifiers_typeof(), offsetof(::g::Uno::Platform::TextInputEventArgs, _Modifiers), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Platform::TextInputEventArgs, _Text), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Handled", NULL, (void*)TextInputEventArgs__get_Handled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Handled", NULL, (void*)TextInputEventArgs__set_Handled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)TextInputEventArgs__New2_fn, 0, true, TextInputEventArgs_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Platform::EventModifiers_typeof()),
        new uFunction("get_Text", NULL, (void*)TextInputEventArgs__get_Text_fn, 0, false, ::g::Uno::String_typeof(), 0));
    return type;
}

// public TextInputEventArgs(string text, Uno.Platform.EventModifiers modifiers) :669
void TextInputEventArgs__ctor_1_fn(TextInputEventArgs* __this, uString* text, int* modifiers)
{
    __this->ctor_1(text, *modifiers);
}

// public generated bool get_Handled() :677
void TextInputEventArgs__get_Handled_fn(TextInputEventArgs* __this, bool* __retval)
{
    *__retval = __this->Handled();
}

// public generated void set_Handled(bool value) :677
void TextInputEventArgs__set_Handled_fn(TextInputEventArgs* __this, bool* value)
{
    __this->Handled(*value);
}

// internal generated Uno.Platform.EventModifiers get_Modifiers() :687
void TextInputEventArgs__get_Modifiers_fn(TextInputEventArgs* __this, int* __retval)
{
    *__retval = __this->Modifiers();
}

// private generated void set_Modifiers(Uno.Platform.EventModifiers value) :687
void TextInputEventArgs__set_Modifiers_fn(TextInputEventArgs* __this, int* value)
{
    __this->Modifiers(*value);
}

// public TextInputEventArgs New(string text, Uno.Platform.EventModifiers modifiers) :669
void TextInputEventArgs__New2_fn(uString* text, int* modifiers, TextInputEventArgs** __retval)
{
    *__retval = TextInputEventArgs::New2(text, *modifiers);
}

// public generated string get_Text() :682
void TextInputEventArgs__get_Text_fn(TextInputEventArgs* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// private generated void set_Text(string value) :682
void TextInputEventArgs__set_Text_fn(TextInputEventArgs* __this, uString* value)
{
    __this->Text(value);
}

// public TextInputEventArgs(string text, Uno.Platform.EventModifiers modifiers) [instance] :669
void TextInputEventArgs::ctor_1(uString* text, int modifiers)
{
    ctor_();
    Text(text);
    Modifiers(modifiers);
}

// public generated bool get_Handled() [instance] :677
bool TextInputEventArgs::Handled()
{
    return _Handled;
}

// public generated void set_Handled(bool value) [instance] :677
void TextInputEventArgs::Handled(bool value)
{
    _Handled = value;
}

// internal generated Uno.Platform.EventModifiers get_Modifiers() [instance] :687
int TextInputEventArgs::Modifiers()
{
    return _Modifiers;
}

// private generated void set_Modifiers(Uno.Platform.EventModifiers value) [instance] :687
void TextInputEventArgs::Modifiers(int value)
{
    _Modifiers = value;
}

// public generated string get_Text() [instance] :682
uString* TextInputEventArgs::Text()
{
    return _Text;
}

// private generated void set_Text(string value) [instance] :682
void TextInputEventArgs::Text(uString* value)
{
    _Text = value;
}

// public TextInputEventArgs New(string text, Uno.Platform.EventModifiers modifiers) [static] :669
TextInputEventArgs* TextInputEventArgs::New2(uString* text, int modifiers)
{
    TextInputEventArgs* obj1 = (TextInputEventArgs*)uNew(TextInputEventArgs_typeof());
    obj1->ctor_1(text, modifiers);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform\$.uno(142)
// -------------------------------------------------------------------------

// public enum TextInputHint :142
uEnumType* TextInputHint_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.TextInputHint", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Default", 0LL,
        "Email", 1LL,
        "URL", 2LL,
        "Phone", 3LL,
        "Number", 4LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform\$.uno(716)
// -------------------------------------------------------------------------

// public sealed class TimerEventArgs :716
// {
uType* TimerEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TimerEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.TimerEventArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Uno::Platform::TimerEventArgs, _LastTickTimestamp), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Uno::Platform::TimerEventArgs, _TickDuration), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_LastTickTimestamp", NULL, (void*)TimerEventArgs__get_LastTickTimestamp_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)TimerEventArgs__New2_fn, 0, true, TimerEventArgs_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("get_TickDuration", NULL, (void*)TimerEventArgs__get_TickDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0));
    return type;
}

// public TimerEventArgs(double lastTickTimestamp, double tickDuration) :718
void TimerEventArgs__ctor_1_fn(TimerEventArgs* __this, double* lastTickTimestamp, double* tickDuration)
{
    __this->ctor_1(*lastTickTimestamp, *tickDuration);
}

// public generated double get_LastTickTimestamp() :724
void TimerEventArgs__get_LastTickTimestamp_fn(TimerEventArgs* __this, double* __retval)
{
    *__retval = __this->LastTickTimestamp();
}

// private generated void set_LastTickTimestamp(double value) :724
void TimerEventArgs__set_LastTickTimestamp_fn(TimerEventArgs* __this, double* value)
{
    __this->LastTickTimestamp(*value);
}

// public TimerEventArgs New(double lastTickTimestamp, double tickDuration) :718
void TimerEventArgs__New2_fn(double* lastTickTimestamp, double* tickDuration, TimerEventArgs** __retval)
{
    *__retval = TimerEventArgs::New2(*lastTickTimestamp, *tickDuration);
}

// public generated double get_TickDuration() :725
void TimerEventArgs__get_TickDuration_fn(TimerEventArgs* __this, double* __retval)
{
    *__retval = __this->TickDuration();
}

// private generated void set_TickDuration(double value) :725
void TimerEventArgs__set_TickDuration_fn(TimerEventArgs* __this, double* value)
{
    __this->TickDuration(*value);
}

// public TimerEventArgs(double lastTickTimestamp, double tickDuration) [instance] :718
void TimerEventArgs::ctor_1(double lastTickTimestamp, double tickDuration)
{
    ctor_();
    LastTickTimestamp(lastTickTimestamp);
    TickDuration(tickDuration);
}

// public generated double get_LastTickTimestamp() [instance] :724
double TimerEventArgs::LastTickTimestamp()
{
    return _LastTickTimestamp;
}

// private generated void set_LastTickTimestamp(double value) [instance] :724
void TimerEventArgs::LastTickTimestamp(double value)
{
    _LastTickTimestamp = value;
}

// public generated double get_TickDuration() [instance] :725
double TimerEventArgs::TickDuration()
{
    return _TickDuration;
}

// private generated void set_TickDuration(double value) [instance] :725
void TimerEventArgs::TickDuration(double value)
{
    _TickDuration = value;
}

// public TimerEventArgs New(double lastTickTimestamp, double tickDuration) [static] :718
TimerEventArgs* TimerEventArgs::New2(double lastTickTimestamp, double tickDuration)
{
    TimerEventArgs* obj1 = (TimerEventArgs*)uNew(TimerEventArgs_typeof());
    obj1->ctor_1(lastTickTimestamp, tickDuration);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform\$.uno(739)
// -------------------------------------------------------------------------

// public extern struct ViewNativeHandle :739
// {
uStructType* ViewNativeHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uPlatform2::ViewNativeHandle);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Platform.ViewNativeHandle", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))ViewNativeHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))ViewNativeHandle__GetHashCode_fn;
    return type;
}

// public override sealed bool Equals(object obj) :768
void ViewNativeHandle__Equals_fn(uPlatform2::ViewNativeHandle* __this, uType* __type, uObject* obj, bool* __retval)
{
    return *__retval = uIs(obj, ViewNativeHandle_typeof()) && ViewNativeHandle::op_Equality(uUnbox<uPlatform2::ViewNativeHandle>(ViewNativeHandle_typeof(), obj), *__this), void();
}

// public override sealed extern int GetHashCode() :774
void ViewNativeHandle__GetHashCode_fn(uPlatform2::ViewNativeHandle* __this, uType* __type, int* __retval)
{
    return *__retval = ::Xli::DefaultTraits::Hash(__this), void();
}

// private static extern bool IsSameView(Uno.Platform.ViewNativeHandle handle1, Uno.Platform.ViewNativeHandle handle2) :781
void ViewNativeHandle__IsSameView_fn(uPlatform2::ViewNativeHandle* handle1, uPlatform2::ViewNativeHandle* handle2, bool* __retval)
{
    *__retval = ViewNativeHandle::IsSameView(*handle1, *handle2);
}

// public static operator ==(Uno.Platform.ViewNativeHandle lhs, Uno.Platform.ViewNativeHandle rhs) :756
void ViewNativeHandle__op_Equality_fn(uPlatform2::ViewNativeHandle* lhs, uPlatform2::ViewNativeHandle* rhs, bool* __retval)
{
    *__retval = ViewNativeHandle::op_Equality(*lhs, *rhs);
}

// private static extern bool IsSameView(Uno.Platform.ViewNativeHandle handle1, Uno.Platform.ViewNativeHandle handle2) [static] :781
bool ViewNativeHandle::IsSameView(uPlatform2::ViewNativeHandle handle1, uPlatform2::ViewNativeHandle handle2)
{
    return ::g::Android::Base::JNI::IsSameObject(handle1, handle2);
}

// public static operator ==(Uno.Platform.ViewNativeHandle lhs, Uno.Platform.ViewNativeHandle rhs) [static] :756
bool ViewNativeHandle::op_Equality(uPlatform2::ViewNativeHandle lhs, uPlatform2::ViewNativeHandle rhs)
{
    return ViewNativeHandle::IsSameView(lhs, rhs);
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform\$.uno(458)
// -------------------------------------------------------------------------

// public enum WheelDeltaMode :458
uEnumType* WheelDeltaMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.WheelDeltaMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "DeltaPixel", 0LL,
        "DeltaLine", 1LL,
        "DeltaPage", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform\$.uno(806)
// -------------------------------------------------------------------------

// public sealed class Window :806
// {
uType* Window_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(Window);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.Window", options);
    type->fp_ctor_ = (void*)Window__New1_fn;
    ::TYPES[2] = ::g::Uno::Delegate_typeof();
    ::TYPES[4] = ::g::Uno::EventHandler_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[6] = ::g::Uno::EventArgs_typeof();
    ::TYPES[7] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof());
    ::TYPES[8] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof());
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[10] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TextInputEventArgs_typeof());
    ::TYPES[11] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::ClosingEventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), offsetof(::g::Uno::Platform::Window, _handle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Platform::Window, _hasPointerEntered), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Uno::Platform::Window, Closed1), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::ClosingEventArgs_typeof()), offsetof(::g::Uno::Platform::Window, Closing1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Uno::Platform::Window, GotFocus1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Uno::Platform::Window, KeyboardResized1), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof()), offsetof(::g::Uno::Platform::Window, KeyPressed1), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof()), offsetof(::g::Uno::Platform::Window, KeyReleased1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Uno::Platform::Window, LostFocus1), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof()), offsetof(::g::Uno::Platform::Window, PointerEntered1), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof()), offsetof(::g::Uno::Platform::Window, PointerLeft1), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof()), offsetof(::g::Uno::Platform::Window, PointerMoved1), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof()), offsetof(::g::Uno::Platform::Window, PointerPressed1), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof()), offsetof(::g::Uno::Platform::Window, PointerReleased1), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof()), offsetof(::g::Uno::Platform::Window, PointerWheelChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Uno::Platform::Window, Resized1), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TextInputEventArgs_typeof()), offsetof(::g::Uno::Platform::Window, TextInput1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Uno::Platform::Window, Updating1), 0);
    type->Reflection.SetFunctions(42,
        new uFunction("get_ClientSize", NULL, (void*)Window__get_ClientSize_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_ClientSize", NULL, (void*)Window__set_ClientSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction("Close", NULL, (void*)Window__Close_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("add_Closed", NULL, (void*)Window__add_Closed_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_Closed", NULL, (void*)Window__remove_Closed_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("add_Closing", NULL, (void*)Window__add_Closing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::ClosingEventArgs_typeof())),
        new uFunction("remove_Closing", NULL, (void*)Window__remove_Closing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::ClosingEventArgs_typeof())),
        new uFunction("get_Fullscreen", NULL, (void*)Window__get_Fullscreen_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Fullscreen", NULL, (void*)Window__set_Fullscreen_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("add_GotFocus", NULL, (void*)Window__add_GotFocus_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_GotFocus", NULL, (void*)Window__remove_GotFocus_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_IsTextInputActive", NULL, (void*)Window__get_IsTextInputActive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("add_KeyboardResized", NULL, (void*)Window__add_KeyboardResized_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_KeyboardResized", NULL, (void*)Window__remove_KeyboardResized_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("add_KeyPressed", NULL, (void*)Window__add_KeyPressed_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof())),
        new uFunction("remove_KeyPressed", NULL, (void*)Window__remove_KeyPressed_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof())),
        new uFunction("add_KeyReleased", NULL, (void*)Window__add_KeyReleased_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof())),
        new uFunction("remove_KeyReleased", NULL, (void*)Window__remove_KeyReleased_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof())),
        new uFunction("add_LostFocus", NULL, (void*)Window__add_LostFocus_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_LostFocus", NULL, (void*)Window__remove_LostFocus_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_PointerCursor", NULL, (void*)Window__get_PointerCursor_fn, 0, false, ::g::Uno::Platform::PointerCursor_typeof(), 0),
        new uFunction("set_PointerCursor", NULL, (void*)Window__set_PointerCursor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Platform::PointerCursor_typeof()),
        new uFunction("add_PointerEntered", NULL, (void*)Window__add_PointerEntered_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof())),
        new uFunction("remove_PointerEntered", NULL, (void*)Window__remove_PointerEntered_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof())),
        new uFunction("add_PointerLeft", NULL, (void*)Window__add_PointerLeft_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof())),
        new uFunction("remove_PointerLeft", NULL, (void*)Window__remove_PointerLeft_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof())),
        new uFunction("add_PointerMoved", NULL, (void*)Window__add_PointerMoved_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof())),
        new uFunction("remove_PointerMoved", NULL, (void*)Window__remove_PointerMoved_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof())),
        new uFunction("add_PointerPressed", NULL, (void*)Window__add_PointerPressed_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof())),
        new uFunction("remove_PointerPressed", NULL, (void*)Window__remove_PointerPressed_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof())),
        new uFunction("add_PointerReleased", NULL, (void*)Window__add_PointerReleased_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof())),
        new uFunction("remove_PointerReleased", NULL, (void*)Window__remove_PointerReleased_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof())),
        new uFunction("add_PointerWheelChanged", NULL, (void*)Window__add_PointerWheelChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof())),
        new uFunction("remove_PointerWheelChanged", NULL, (void*)Window__remove_PointerWheelChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof())),
        new uFunction("add_Resized", NULL, (void*)Window__add_Resized_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_Resized", NULL, (void*)Window__remove_Resized_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("add_TextInput", NULL, (void*)Window__add_TextInput_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TextInputEventArgs_typeof())),
        new uFunction("remove_TextInput", NULL, (void*)Window__remove_TextInput_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TextInputEventArgs_typeof())),
        new uFunction("get_Title", NULL, (void*)Window__get_Title_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Title", NULL, (void*)Window__set_Title_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_Updating", NULL, (void*)Window__add_Updating_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_Updating", NULL, (void*)Window__remove_Updating_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()));
    return type;
}

// internal Window() :810
void Window__ctor__fn(Window* __this)
{
    __this->ctor_();
}

// public int2 get_ClientSize() :834
void Window__get_ClientSize_fn(Window* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->ClientSize();
}

// public void set_ClientSize(int2 value) :835
void Window__set_ClientSize_fn(Window* __this, ::g::Uno::Int2* value)
{
    __this->ClientSize(*value);
}

// public void Close() :815
void Window__Close_fn(Window* __this)
{
    __this->Close();
}

// public generated void add_Closed(Uno.EventHandler value) :873
void Window__add_Closed_fn(Window* __this, uDelegate* value)
{
    __this->add_Closed(value);
}

// public generated void remove_Closed(Uno.EventHandler value) :873
void Window__remove_Closed_fn(Window* __this, uDelegate* value)
{
    __this->remove_Closed(value);
}

// public generated void add_Closing(Uno.EventHandler<Uno.Platform.ClosingEventArgs> value) :872
void Window__add_Closing_fn(Window* __this, uDelegate* value)
{
    __this->add_Closing(value);
}

// public generated void remove_Closing(Uno.EventHandler<Uno.Platform.ClosingEventArgs> value) :872
void Window__remove_Closing_fn(Window* __this, uDelegate* value)
{
    __this->remove_Closing(value);
}

// public bool get_Fullscreen() :840
void Window__get_Fullscreen_fn(Window* __this, bool* __retval)
{
    *__retval = __this->Fullscreen();
}

// public void set_Fullscreen(bool value) :841
void Window__set_Fullscreen_fn(Window* __this, bool* value)
{
    __this->Fullscreen(*value);
}

// public generated void add_GotFocus(Uno.EventHandler value) :877
void Window__add_GotFocus_fn(Window* __this, uDelegate* value)
{
    __this->add_GotFocus(value);
}

// public generated void remove_GotFocus(Uno.EventHandler value) :877
void Window__remove_GotFocus_fn(Window* __this, uDelegate* value)
{
    __this->remove_GotFocus(value);
}

// public bool get_IsTextInputActive() :846
void Window__get_IsTextInputActive_fn(Window* __this, bool* __retval)
{
    *__retval = __this->IsTextInputActive();
}

// public generated void add_KeyboardResized(Uno.EventHandler value) :869
void Window__add_KeyboardResized_fn(Window* __this, uDelegate* value)
{
    __this->add_KeyboardResized(value);
}

// public generated void remove_KeyboardResized(Uno.EventHandler value) :869
void Window__remove_KeyboardResized_fn(Window* __this, uDelegate* value)
{
    __this->remove_KeyboardResized(value);
}

// public generated void add_KeyPressed(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :866
void Window__add_KeyPressed_fn(Window* __this, uDelegate* value)
{
    __this->add_KeyPressed(value);
}

// public generated void remove_KeyPressed(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :866
void Window__remove_KeyPressed_fn(Window* __this, uDelegate* value)
{
    __this->remove_KeyPressed(value);
}

// public generated void add_KeyReleased(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :867
void Window__add_KeyReleased_fn(Window* __this, uDelegate* value)
{
    __this->add_KeyReleased(value);
}

// public generated void remove_KeyReleased(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :867
void Window__remove_KeyReleased_fn(Window* __this, uDelegate* value)
{
    __this->remove_KeyReleased(value);
}

// public generated void add_LostFocus(Uno.EventHandler value) :878
void Window__add_LostFocus_fn(Window* __this, uDelegate* value)
{
    __this->add_LostFocus(value);
}

// public generated void remove_LostFocus(Uno.EventHandler value) :878
void Window__remove_LostFocus_fn(Window* __this, uDelegate* value)
{
    __this->remove_LostFocus(value);
}

// internal Window New() :810
void Window__New1_fn(Window** __retval)
{
    *__retval = Window::New1();
}

// internal void OnClosed(Uno.EventArgs args) :958
void Window__OnClosed_fn(Window* __this, ::g::Uno::EventArgs* args)
{
    __this->OnClosed(args);
}

// internal void OnGotFocus(Uno.EventArgs args) :970
void Window__OnGotFocus_fn(Window* __this, ::g::Uno::EventArgs* args)
{
    __this->OnGotFocus(args);
}

// internal void OnKeyboardResized() :922
void Window__OnKeyboardResized_fn(Window* __this)
{
    __this->OnKeyboardResized();
}

// internal void OnKeyPressed(Uno.Platform.KeyEventArgs args) :928
void Window__OnKeyPressed_fn(Window* __this, ::g::Uno::Platform::KeyEventArgs* args)
{
    __this->OnKeyPressed(args);
}

// internal void OnKeyReleased(Uno.Platform.KeyEventArgs args) :934
void Window__OnKeyReleased_fn(Window* __this, ::g::Uno::Platform::KeyEventArgs* args)
{
    __this->OnKeyReleased(args);
}

// internal void OnLostFocus(Uno.EventArgs args) :976
void Window__OnLostFocus_fn(Window* __this, ::g::Uno::EventArgs* args)
{
    __this->OnLostFocus(args);
}

// internal void OnPointerEntered(Uno.Platform.PointerEventArgs args) :909
void Window__OnPointerEntered_fn(Window* __this, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerEntered(args);
}

// internal void OnPointerMoved(Uno.Platform.PointerEventArgs args) :893
void Window__OnPointerMoved_fn(Window* __this, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerMoved(args);
}

// internal void OnPointerPressed(Uno.Platform.PointerEventArgs args) :880
void Window__OnPointerPressed_fn(Window* __this, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerPressed(args);
}

// internal void OnPointerReleased(Uno.Platform.PointerEventArgs args) :886
void Window__OnPointerReleased_fn(Window* __this, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerReleased(args);
}

// internal void OnPointerWheelChanged(Uno.Platform.PointerEventArgs args) :916
void Window__OnPointerWheelChanged_fn(Window* __this, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerWheelChanged(args);
}

// internal void OnResized(Uno.EventArgs args) :946
void Window__OnResized_fn(Window* __this, ::g::Uno::EventArgs* args)
{
    __this->OnResized(args);
}

// internal void OnTextInput(Uno.Platform.TextInputEventArgs args) :940
void Window__OnTextInput_fn(Window* __this, ::g::Uno::Platform::TextInputEventArgs* args)
{
    __this->OnTextInput(args);
}

// internal void OnUpdating(Uno.EventArgs args) :964
void Window__OnUpdating_fn(Window* __this, ::g::Uno::EventArgs* args)
{
    __this->OnUpdating(args);
}

// public Uno.Platform.PointerCursor get_PointerCursor() :828
void Window__get_PointerCursor_fn(Window* __this, int* __retval)
{
    *__retval = __this->PointerCursor();
}

// public void set_PointerCursor(Uno.Platform.PointerCursor value) :829
void Window__set_PointerCursor_fn(Window* __this, int* value)
{
    __this->PointerCursor(*value);
}

// public generated void add_PointerEntered(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :864
void Window__add_PointerEntered_fn(Window* __this, uDelegate* value)
{
    __this->add_PointerEntered(value);
}

// public generated void remove_PointerEntered(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :864
void Window__remove_PointerEntered_fn(Window* __this, uDelegate* value)
{
    __this->remove_PointerEntered(value);
}

// public generated void add_PointerLeft(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :863
void Window__add_PointerLeft_fn(Window* __this, uDelegate* value)
{
    __this->add_PointerLeft(value);
}

// public generated void remove_PointerLeft(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :863
void Window__remove_PointerLeft_fn(Window* __this, uDelegate* value)
{
    __this->remove_PointerLeft(value);
}

// public generated void add_PointerMoved(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :861
void Window__add_PointerMoved_fn(Window* __this, uDelegate* value)
{
    __this->add_PointerMoved(value);
}

// public generated void remove_PointerMoved(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :861
void Window__remove_PointerMoved_fn(Window* __this, uDelegate* value)
{
    __this->remove_PointerMoved(value);
}

// public generated void add_PointerPressed(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :859
void Window__add_PointerPressed_fn(Window* __this, uDelegate* value)
{
    __this->add_PointerPressed(value);
}

// public generated void remove_PointerPressed(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :859
void Window__remove_PointerPressed_fn(Window* __this, uDelegate* value)
{
    __this->remove_PointerPressed(value);
}

// public generated void add_PointerReleased(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :860
void Window__add_PointerReleased_fn(Window* __this, uDelegate* value)
{
    __this->add_PointerReleased(value);
}

// public generated void remove_PointerReleased(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :860
void Window__remove_PointerReleased_fn(Window* __this, uDelegate* value)
{
    __this->remove_PointerReleased(value);
}

// public generated void add_PointerWheelChanged(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :862
void Window__add_PointerWheelChanged_fn(Window* __this, uDelegate* value)
{
    __this->add_PointerWheelChanged(value);
}

// public generated void remove_PointerWheelChanged(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :862
void Window__remove_PointerWheelChanged_fn(Window* __this, uDelegate* value)
{
    __this->remove_PointerWheelChanged(value);
}

// public generated void add_Resized(Uno.EventHandler value) :871
void Window__add_Resized_fn(Window* __this, uDelegate* value)
{
    __this->add_Resized(value);
}

// public generated void remove_Resized(Uno.EventHandler value) :871
void Window__remove_Resized_fn(Window* __this, uDelegate* value)
{
    __this->remove_Resized(value);
}

// public generated void add_TextInput(Uno.EventHandler<Uno.Platform.TextInputEventArgs> value) :868
void Window__add_TextInput_fn(Window* __this, uDelegate* value)
{
    __this->add_TextInput(value);
}

// public generated void remove_TextInput(Uno.EventHandler<Uno.Platform.TextInputEventArgs> value) :868
void Window__remove_TextInput_fn(Window* __this, uDelegate* value)
{
    __this->remove_TextInput(value);
}

// public string get_Title() :822
void Window__get_Title_fn(Window* __this, uString** __retval)
{
    *__retval = __this->Title();
}

// public void set_Title(string value) :823
void Window__set_Title_fn(Window* __this, uString* value)
{
    __this->Title(value);
}

// public generated void add_Updating(Uno.EventHandler value) :875
void Window__add_Updating_fn(Window* __this, uDelegate* value)
{
    __this->add_Updating(value);
}

// public generated void remove_Updating(Uno.EventHandler value) :875
void Window__remove_Updating_fn(Window* __this, uDelegate* value)
{
    __this->remove_Updating(value);
}

// internal Window() [instance] :810
void Window::ctor_()
{
    _handle = ::g::Uno::Runtime::Implementation::PlatformWindowImpl::GetInstance();
}

// public int2 get_ClientSize() [instance] :834
::g::Uno::Int2 Window::ClientSize()
{
    return ::g::Uno::Runtime::Implementation::PlatformWindowImpl::GetClientSize(_handle);
}

// public void set_ClientSize(int2 value) [instance] :835
void Window::ClientSize(::g::Uno::Int2 value)
{
    ::g::Uno::Runtime::Implementation::PlatformWindowImpl::SetClientSize(_handle, value);
}

// public void Close() [instance] :815
void Window::Close()
{
    ::g::Uno::Runtime::Implementation::PlatformWindowImpl::Close(_handle);
}

// public generated void add_Closed(Uno.EventHandler value) [instance] :873
void Window::add_Closed(uDelegate* value)
{
    Closed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Closed1, value), ::TYPES[4/*Uno.EventHandler*/]);
}

// public generated void remove_Closed(Uno.EventHandler value) [instance] :873
void Window::remove_Closed(uDelegate* value)
{
    Closed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Closed1, value), ::TYPES[4/*Uno.EventHandler*/]);
}

// public generated void add_Closing(Uno.EventHandler<Uno.Platform.ClosingEventArgs> value) [instance] :872
void Window::add_Closing(uDelegate* value)
{
    Closing1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Closing1, value), ::TYPES[11/*Uno.EventHandler<Uno.Platform.ClosingEventArgs>*/]);
}

// public generated void remove_Closing(Uno.EventHandler<Uno.Platform.ClosingEventArgs> value) [instance] :872
void Window::remove_Closing(uDelegate* value)
{
    Closing1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Closing1, value), ::TYPES[11/*Uno.EventHandler<Uno.Platform.ClosingEventArgs>*/]);
}

// public bool get_Fullscreen() [instance] :840
bool Window::Fullscreen()
{
    return ::g::Uno::Runtime::Implementation::PlatformWindowImpl::GetFullscreen(_handle);
}

// public void set_Fullscreen(bool value) [instance] :841
void Window::Fullscreen(bool value)
{
    ::g::Uno::Runtime::Implementation::PlatformWindowImpl::SetFullscreen(_handle, value);
}

// public generated void add_GotFocus(Uno.EventHandler value) [instance] :877
void Window::add_GotFocus(uDelegate* value)
{
    GotFocus1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(GotFocus1, value), ::TYPES[4/*Uno.EventHandler*/]);
}

// public generated void remove_GotFocus(Uno.EventHandler value) [instance] :877
void Window::remove_GotFocus(uDelegate* value)
{
    GotFocus1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(GotFocus1, value), ::TYPES[4/*Uno.EventHandler*/]);
}

// public bool get_IsTextInputActive() [instance] :846
bool Window::IsTextInputActive()
{
    return ::g::Uno::Runtime::Implementation::PlatformWindowImpl::IsTextInputActive(_handle);
}

// public generated void add_KeyboardResized(Uno.EventHandler value) [instance] :869
void Window::add_KeyboardResized(uDelegate* value)
{
    KeyboardResized1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(KeyboardResized1, value), ::TYPES[4/*Uno.EventHandler*/]);
}

// public generated void remove_KeyboardResized(Uno.EventHandler value) [instance] :869
void Window::remove_KeyboardResized(uDelegate* value)
{
    KeyboardResized1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(KeyboardResized1, value), ::TYPES[4/*Uno.EventHandler*/]);
}

// public generated void add_KeyPressed(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [instance] :866
void Window::add_KeyPressed(uDelegate* value)
{
    KeyPressed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(KeyPressed1, value), ::TYPES[7/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public generated void remove_KeyPressed(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [instance] :866
void Window::remove_KeyPressed(uDelegate* value)
{
    KeyPressed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(KeyPressed1, value), ::TYPES[7/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public generated void add_KeyReleased(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [instance] :867
void Window::add_KeyReleased(uDelegate* value)
{
    KeyReleased1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(KeyReleased1, value), ::TYPES[7/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public generated void remove_KeyReleased(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [instance] :867
void Window::remove_KeyReleased(uDelegate* value)
{
    KeyReleased1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(KeyReleased1, value), ::TYPES[7/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public generated void add_LostFocus(Uno.EventHandler value) [instance] :878
void Window::add_LostFocus(uDelegate* value)
{
    LostFocus1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LostFocus1, value), ::TYPES[4/*Uno.EventHandler*/]);
}

// public generated void remove_LostFocus(Uno.EventHandler value) [instance] :878
void Window::remove_LostFocus(uDelegate* value)
{
    LostFocus1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LostFocus1, value), ::TYPES[4/*Uno.EventHandler*/]);
}

// internal void OnClosed(Uno.EventArgs args) [instance] :958
void Window::OnClosed(::g::Uno::EventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(Closed1, NULL))
        uPtr(Closed1)->Invoke(2, this, args);
}

// internal void OnGotFocus(Uno.EventArgs args) [instance] :970
void Window::OnGotFocus(::g::Uno::EventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(GotFocus1, NULL))
        uPtr(GotFocus1)->Invoke(2, this, args);
}

// internal void OnKeyboardResized() [instance] :922
void Window::OnKeyboardResized()
{
    if (::g::Uno::Delegate::op_Inequality(KeyboardResized1, NULL))
        uPtr(KeyboardResized1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// internal void OnKeyPressed(Uno.Platform.KeyEventArgs args) [instance] :928
void Window::OnKeyPressed(::g::Uno::Platform::KeyEventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(KeyPressed1, NULL))
        uPtr(KeyPressed1)->Invoke(2, this, args);
}

// internal void OnKeyReleased(Uno.Platform.KeyEventArgs args) [instance] :934
void Window::OnKeyReleased(::g::Uno::Platform::KeyEventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(KeyReleased1, NULL))
        uPtr(KeyReleased1)->Invoke(2, this, args);
}

// internal void OnLostFocus(Uno.EventArgs args) [instance] :976
void Window::OnLostFocus(::g::Uno::EventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(LostFocus1, NULL))
        uPtr(LostFocus1)->Invoke(2, this, args);
}

// internal void OnPointerEntered(Uno.Platform.PointerEventArgs args) [instance] :909
void Window::OnPointerEntered(::g::Uno::Platform::PointerEventArgs* args)
{
    _hasPointerEntered = true;

    if (::g::Uno::Delegate::op_Inequality(PointerEntered1, NULL))
        uPtr(PointerEntered1)->Invoke(2, this, args);
}

// internal void OnPointerMoved(Uno.Platform.PointerEventArgs args) [instance] :893
void Window::OnPointerMoved(::g::Uno::Platform::PointerEventArgs* args)
{
    if (!_hasPointerEntered)
        OnPointerEntered(args);

    if (::g::Uno::Delegate::op_Inequality(PointerMoved1, NULL))
        uPtr(PointerMoved1)->Invoke(2, this, args);
}

// internal void OnPointerPressed(Uno.Platform.PointerEventArgs args) [instance] :880
void Window::OnPointerPressed(::g::Uno::Platform::PointerEventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(PointerPressed1, NULL))
        uPtr(PointerPressed1)->Invoke(2, this, args);
}

// internal void OnPointerReleased(Uno.Platform.PointerEventArgs args) [instance] :886
void Window::OnPointerReleased(::g::Uno::Platform::PointerEventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(PointerReleased1, NULL))
        uPtr(PointerReleased1)->Invoke(2, this, args);
}

// internal void OnPointerWheelChanged(Uno.Platform.PointerEventArgs args) [instance] :916
void Window::OnPointerWheelChanged(::g::Uno::Platform::PointerEventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(PointerWheelChanged1, NULL))
        uPtr(PointerWheelChanged1)->Invoke(2, this, args);
}

// internal void OnResized(Uno.EventArgs args) [instance] :946
void Window::OnResized(::g::Uno::EventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(Resized1, NULL))
        uPtr(Resized1)->Invoke(2, this, args);
}

// internal void OnTextInput(Uno.Platform.TextInputEventArgs args) [instance] :940
void Window::OnTextInput(::g::Uno::Platform::TextInputEventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(TextInput1, NULL))
        uPtr(TextInput1)->Invoke(2, this, args);
}

// internal void OnUpdating(Uno.EventArgs args) [instance] :964
void Window::OnUpdating(::g::Uno::EventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(Updating1, NULL))
        uPtr(Updating1)->Invoke(2, this, args);
}

// public Uno.Platform.PointerCursor get_PointerCursor() [instance] :828
int Window::PointerCursor()
{
    return ::g::Uno::Runtime::Implementation::PlatformWindowImpl::GetPointerCursor(_handle);
}

// public void set_PointerCursor(Uno.Platform.PointerCursor value) [instance] :829
void Window::PointerCursor(int value)
{
    ::g::Uno::Runtime::Implementation::PlatformWindowImpl::SetPointerCursor(_handle, value);
}

// public generated void add_PointerEntered(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :864
void Window::add_PointerEntered(uDelegate* value)
{
    PointerEntered1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PointerEntered1, value), ::TYPES[8/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void remove_PointerEntered(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :864
void Window::remove_PointerEntered(uDelegate* value)
{
    PointerEntered1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PointerEntered1, value), ::TYPES[8/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void add_PointerLeft(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :863
void Window::add_PointerLeft(uDelegate* value)
{
    PointerLeft1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PointerLeft1, value), ::TYPES[8/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void remove_PointerLeft(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :863
void Window::remove_PointerLeft(uDelegate* value)
{
    PointerLeft1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PointerLeft1, value), ::TYPES[8/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void add_PointerMoved(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :861
void Window::add_PointerMoved(uDelegate* value)
{
    PointerMoved1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PointerMoved1, value), ::TYPES[8/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void remove_PointerMoved(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :861
void Window::remove_PointerMoved(uDelegate* value)
{
    PointerMoved1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PointerMoved1, value), ::TYPES[8/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void add_PointerPressed(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :859
void Window::add_PointerPressed(uDelegate* value)
{
    PointerPressed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PointerPressed1, value), ::TYPES[8/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void remove_PointerPressed(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :859
void Window::remove_PointerPressed(uDelegate* value)
{
    PointerPressed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PointerPressed1, value), ::TYPES[8/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void add_PointerReleased(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :860
void Window::add_PointerReleased(uDelegate* value)
{
    PointerReleased1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PointerReleased1, value), ::TYPES[8/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void remove_PointerReleased(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :860
void Window::remove_PointerReleased(uDelegate* value)
{
    PointerReleased1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PointerReleased1, value), ::TYPES[8/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void add_PointerWheelChanged(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :862
void Window::add_PointerWheelChanged(uDelegate* value)
{
    PointerWheelChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PointerWheelChanged1, value), ::TYPES[8/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void remove_PointerWheelChanged(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :862
void Window::remove_PointerWheelChanged(uDelegate* value)
{
    PointerWheelChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PointerWheelChanged1, value), ::TYPES[8/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void add_Resized(Uno.EventHandler value) [instance] :871
void Window::add_Resized(uDelegate* value)
{
    Resized1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Resized1, value), ::TYPES[4/*Uno.EventHandler*/]);
}

// public generated void remove_Resized(Uno.EventHandler value) [instance] :871
void Window::remove_Resized(uDelegate* value)
{
    Resized1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Resized1, value), ::TYPES[4/*Uno.EventHandler*/]);
}

// public generated void add_TextInput(Uno.EventHandler<Uno.Platform.TextInputEventArgs> value) [instance] :868
void Window::add_TextInput(uDelegate* value)
{
    TextInput1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TextInput1, value), ::TYPES[10/*Uno.EventHandler<Uno.Platform.TextInputEventArgs>*/]);
}

// public generated void remove_TextInput(Uno.EventHandler<Uno.Platform.TextInputEventArgs> value) [instance] :868
void Window::remove_TextInput(uDelegate* value)
{
    TextInput1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TextInput1, value), ::TYPES[10/*Uno.EventHandler<Uno.Platform.TextInputEventArgs>*/]);
}

// public string get_Title() [instance] :822
uString* Window::Title()
{
    return ::g::Uno::Runtime::Implementation::PlatformWindowImpl::GetTitle(_handle);
}

// public void set_Title(string value) [instance] :823
void Window::Title(uString* value)
{
    ::g::Uno::Runtime::Implementation::PlatformWindowImpl::SetTitle(_handle, value);
}

// public generated void add_Updating(Uno.EventHandler value) [instance] :875
void Window::add_Updating(uDelegate* value)
{
    Updating1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Updating1, value), ::TYPES[4/*Uno.EventHandler*/]);
}

// public generated void remove_Updating(Uno.EventHandler value) [instance] :875
void Window::remove_Updating(uDelegate* value)
{
    Updating1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Updating1, value), ::TYPES[4/*Uno.EventHandler*/]);
}

// internal Window New() [static] :810
Window* Window::New1()
{
    Window* obj1 = (Window*)uNew(Window_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}} // ::g::Uno::Platform
