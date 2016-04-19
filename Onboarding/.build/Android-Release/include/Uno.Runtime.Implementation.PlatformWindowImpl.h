// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Platform{struct SystemUIWillResizeEventArgs;}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{struct PlatformWindowImpl;}}}}
namespace g{namespace Uno{struct Int2;}}
namespace g{namespace Uno{struct Rect;}}
namespace Xli { class Window; }

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// public static class PlatformWindowImpl :385
// {
uClassType* PlatformWindowImpl_typeof();
void PlatformWindowImpl__GetClientSize_fn(::Xli::Window** handle, ::g::Uno::Int2* __retval);
void PlatformWindowImpl__GetDensity_fn(::Xli::Window** handle, float* __retval);
void PlatformWindowImpl__GetInstance_fn(::Xli::Window** __retval);
void PlatformWindowImpl__GetKeyState_fn(::Xli::Window** handle_, int* key_, bool* __retval);
void PlatformWindowImpl__GetMouseButtonState_fn(::Xli::Window** handle_, int* button_, bool* __retval);
void PlatformWindowImpl__OnSoftKeyboardWillResize_fn(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args);
void PlatformWindowImpl__SetClientSize_fn(::Xli::Window** handle_, ::g::Uno::Int2* clientSize_);

struct PlatformWindowImpl : uObject
{
    static ::g::Uno::Rect keyboardFrame_;
    static ::g::Uno::Rect& keyboardFrame() { return PlatformWindowImpl_typeof()->Init(), keyboardFrame_; }
    static bool keyboardVisible_;
    static bool& keyboardVisible() { return PlatformWindowImpl_typeof()->Init(), keyboardVisible_; }

    static ::g::Uno::Int2 GetClientSize(::Xli::Window* handle);
    static float GetDensity(::Xli::Window* handle);
    static ::Xli::Window* GetInstance();
    static bool GetKeyState(::Xli::Window* handle_, int key_);
    static bool GetMouseButtonState(::Xli::Window* handle_, int button_);
    static void OnSoftKeyboardWillResize(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args);
    static void SetClientSize(::Xli::Window* handle_, ::g::Uno::Int2 clientSize_);
};
// }

}}}} // ::g::Uno::Runtime::Implementation
