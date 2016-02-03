// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_PLATFORM_WINDOW_IMPL_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_PLATFORM_WINDOW_IMPL_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Platform { struct SystemUIWillResizeEventArgs; } } }
namespace app { namespace Uno { struct Int2; } }
namespace app { namespace Uno { struct Rect; } }
namespace Xli { class Window; }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

extern ::app::Uno::Rect PlatformWindowImpl__keyboardFrame;
extern bool PlatformWindowImpl__keyboardVisible;

struct PlatformWindowImpl__uType : ::uClassType
{
};

PlatformWindowImpl__uType* PlatformWindowImpl__typeof();

void PlatformWindowImpl___TypeInit(::uStatic* __this);
void PlatformWindowImpl__Close(::uStatic* __this, ::Xli::Window* handle_);
::app::Uno::Int2 PlatformWindowImpl__GetClientSize(::uStatic* __this, ::Xli::Window* handle);
float PlatformWindowImpl__GetDensity(::uStatic* __this, ::Xli::Window* handle);
bool PlatformWindowImpl__GetFullscreen(::uStatic* __this, ::Xli::Window* handle_);
::Xli::Window* PlatformWindowImpl__GetInstance(::uStatic* __this);
bool PlatformWindowImpl__GetKeyState(::uStatic* __this, ::Xli::Window* handle_, int key_);
bool PlatformWindowImpl__GetMouseButtonState(::uStatic* __this, ::Xli::Window* handle_, int button_);
::app::Uno::Int2 PlatformWindowImpl__GetOnscreenKeyboardPosition(::uStatic* __this, ::Xli::Window* handle);
::app::Uno::Int2 PlatformWindowImpl__GetOnscreenKeyboardSize(::uStatic* __this, ::Xli::Window* handle);
int PlatformWindowImpl__GetPointerCursor(::uStatic* __this, ::Xli::Window* handle_);
::app::Uno::Int2 PlatformWindowImpl__GetStatusBarPosition(::uStatic* __this, ::Xli::Window* handle);
::app::Uno::Int2 PlatformWindowImpl__GetStatusBarSize(::uStatic* __this, ::Xli::Window* handle);
::uString* PlatformWindowImpl__GetTitle(::uStatic* __this, ::Xli::Window* handle_);
bool PlatformWindowImpl__HasOnscreenKeyboardSupport(::uStatic* __this, ::Xli::Window* handle);
bool PlatformWindowImpl__IsOnscreenKeyboardVisible(::uStatic* __this, ::Xli::Window* handle);
bool PlatformWindowImpl__IsStatusBarVisible(::uStatic* __this, ::Xli::Window* handle);
bool PlatformWindowImpl__IsTextInputActive(::uStatic* __this, ::Xli::Window* handle);
void PlatformWindowImpl__OnSoftKeyboardWillResize(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform::SystemUIWillResizeEventArgs* args);
void PlatformWindowImpl__SetClientSize(::uStatic* __this, ::Xli::Window* handle_, ::app::Uno::Int2 clientSize_);
void PlatformWindowImpl__SetFullscreen(::uStatic* __this, ::Xli::Window* handle_, bool fullscreen_);
void PlatformWindowImpl__SetOnscreenKeyboardPosition(::uStatic* __this, ::Xli::Window* handle, ::app::Uno::Int2 position);
void PlatformWindowImpl__SetPointerCursor(::uStatic* __this, ::Xli::Window* handle_, int cursor_);
void PlatformWindowImpl__SetTitle(::uStatic* __this, ::Xli::Window* handle_, ::uString* title_);

}}}}


#endif
