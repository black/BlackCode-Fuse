// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM_WINDOW_H__
#define __APP_UNO_PLATFORM_WINDOW_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Platform { struct ClosingEventArgs; } } }
namespace app { namespace Uno { namespace Platform { struct KeyEventArgs; } } }
namespace app { namespace Uno { namespace Platform { struct PointerEventArgs; } } }
namespace app { namespace Uno { namespace Platform { struct TextInputEventArgs; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Int2; } }
namespace Xli { class Window; }

namespace app {
namespace Uno {
namespace Platform {

struct Window;

struct Window__uType : ::uClassType
{
};

Window__uType* Window__typeof();

void Window___ObjInit(Window* __this);
void Window__add_Closed(Window* __this, ::uDelegate* value);
void Window__add_Closing(Window* __this, ::uDelegate* value);
void Window__add_GotFocus(Window* __this, ::uDelegate* value);
void Window__add_KeyboardResized(Window* __this, ::uDelegate* value);
void Window__add_KeyPressed(Window* __this, ::uDelegate* value);
void Window__add_KeyReleased(Window* __this, ::uDelegate* value);
void Window__add_LostFocus(Window* __this, ::uDelegate* value);
void Window__add_PointerEntered(Window* __this, ::uDelegate* value);
void Window__add_PointerLeft(Window* __this, ::uDelegate* value);
void Window__add_PointerMoved(Window* __this, ::uDelegate* value);
void Window__add_PointerPressed(Window* __this, ::uDelegate* value);
void Window__add_PointerReleased(Window* __this, ::uDelegate* value);
void Window__add_PointerWheelChanged(Window* __this, ::uDelegate* value);
void Window__add_Resized(Window* __this, ::uDelegate* value);
void Window__add_TextInput(Window* __this, ::uDelegate* value);
void Window__add_Updating(Window* __this, ::uDelegate* value);
void Window__Close(Window* __this);
::app::Uno::Int2 Window__get_ClientSize(Window* __this);
bool Window__get_Fullscreen(Window* __this);
bool Window__get_IsTextInputActive(Window* __this);
int Window__get_PointerCursor(Window* __this);
::uString* Window__get_Title(Window* __this);
Window* Window__New_1(::uStatic* __this);
void Window__OnClosed(Window* __this, ::app::Uno::EventArgs* args);
void Window__OnClosing(Window* __this, ::app::Uno::Platform::ClosingEventArgs* args);
void Window__OnGotFocus(Window* __this, ::app::Uno::EventArgs* args);
void Window__OnKeyboardResized(Window* __this);
void Window__OnKeyPressed(Window* __this, ::app::Uno::Platform::KeyEventArgs* args);
void Window__OnKeyReleased(Window* __this, ::app::Uno::Platform::KeyEventArgs* args);
void Window__OnLostFocus(Window* __this, ::app::Uno::EventArgs* args);
void Window__OnPointerEntered(Window* __this, ::app::Uno::Platform::PointerEventArgs* args);
void Window__OnPointerLeft(Window* __this, ::app::Uno::Platform::PointerEventArgs* args);
void Window__OnPointerMoved(Window* __this, ::app::Uno::Platform::PointerEventArgs* args);
void Window__OnPointerPressed(Window* __this, ::app::Uno::Platform::PointerEventArgs* args);
void Window__OnPointerReleased(Window* __this, ::app::Uno::Platform::PointerEventArgs* args);
void Window__OnPointerWheelChanged(Window* __this, ::app::Uno::Platform::PointerEventArgs* args);
void Window__OnResized(Window* __this, ::app::Uno::EventArgs* args);
void Window__OnTextInput(Window* __this, ::app::Uno::Platform::TextInputEventArgs* args);
void Window__OnUpdating(Window* __this, ::app::Uno::EventArgs* args);
void Window__remove_Closed(Window* __this, ::uDelegate* value);
void Window__remove_Closing(Window* __this, ::uDelegate* value);
void Window__remove_GotFocus(Window* __this, ::uDelegate* value);
void Window__remove_KeyboardResized(Window* __this, ::uDelegate* value);
void Window__remove_KeyPressed(Window* __this, ::uDelegate* value);
void Window__remove_KeyReleased(Window* __this, ::uDelegate* value);
void Window__remove_LostFocus(Window* __this, ::uDelegate* value);
void Window__remove_PointerEntered(Window* __this, ::uDelegate* value);
void Window__remove_PointerLeft(Window* __this, ::uDelegate* value);
void Window__remove_PointerMoved(Window* __this, ::uDelegate* value);
void Window__remove_PointerPressed(Window* __this, ::uDelegate* value);
void Window__remove_PointerReleased(Window* __this, ::uDelegate* value);
void Window__remove_PointerWheelChanged(Window* __this, ::uDelegate* value);
void Window__remove_Resized(Window* __this, ::uDelegate* value);
void Window__remove_TextInput(Window* __this, ::uDelegate* value);
void Window__remove_Updating(Window* __this, ::uDelegate* value);
void Window__set_ClientSize(Window* __this, ::app::Uno::Int2 value);
void Window__set_Fullscreen(Window* __this, bool value);
void Window__set_PointerCursor(Window* __this, int value);
void Window__set_Title(Window* __this, ::uString* value);

struct Window : ::uObject
{
    ::Xli::Window* _handle;
    bool _hasPointerEntered;
    ::uStrong< ::uDelegate*> Closed;
    ::uStrong< ::uDelegate*> PointerPressed;
    ::uStrong< ::uDelegate*> PointerReleased;
    ::uStrong< ::uDelegate*> PointerMoved;
    ::uStrong< ::uDelegate*> PointerWheelChanged;
    ::uStrong< ::uDelegate*> PointerLeft;
    ::uStrong< ::uDelegate*> PointerEntered;
    ::uStrong< ::uDelegate*> KeyPressed;
    ::uStrong< ::uDelegate*> KeyReleased;
    ::uStrong< ::uDelegate*> TextInput;
    ::uStrong< ::uDelegate*> KeyboardResized;
    ::uStrong< ::uDelegate*> Resized;
    ::uStrong< ::uDelegate*> Closing;
    ::uStrong< ::uDelegate*> Updating;
    ::uStrong< ::uDelegate*> GotFocus;
    ::uStrong< ::uDelegate*> LostFocus;

    void _ObjInit() { Window___ObjInit(this); }
    void add_Closed(::uDelegate* value) { Window__add_Closed(this, value); }
    void add_Closing(::uDelegate* value) { Window__add_Closing(this, value); }
    void add_GotFocus(::uDelegate* value) { Window__add_GotFocus(this, value); }
    void add_KeyboardResized(::uDelegate* value) { Window__add_KeyboardResized(this, value); }
    void add_KeyPressed(::uDelegate* value) { Window__add_KeyPressed(this, value); }
    void add_KeyReleased(::uDelegate* value) { Window__add_KeyReleased(this, value); }
    void add_LostFocus(::uDelegate* value) { Window__add_LostFocus(this, value); }
    void add_PointerEntered(::uDelegate* value) { Window__add_PointerEntered(this, value); }
    void add_PointerLeft(::uDelegate* value) { Window__add_PointerLeft(this, value); }
    void add_PointerMoved(::uDelegate* value) { Window__add_PointerMoved(this, value); }
    void add_PointerPressed(::uDelegate* value) { Window__add_PointerPressed(this, value); }
    void add_PointerReleased(::uDelegate* value) { Window__add_PointerReleased(this, value); }
    void add_PointerWheelChanged(::uDelegate* value) { Window__add_PointerWheelChanged(this, value); }
    void add_Resized(::uDelegate* value) { Window__add_Resized(this, value); }
    void add_TextInput(::uDelegate* value) { Window__add_TextInput(this, value); }
    void add_Updating(::uDelegate* value) { Window__add_Updating(this, value); }
    void Close() { Window__Close(this); }
    ::app::Uno::Int2 ClientSize();
    bool Fullscreen() { return Window__get_Fullscreen(this); }
    bool IsTextInputActive() { return Window__get_IsTextInputActive(this); }
    int PointerCursor() { return Window__get_PointerCursor(this); }
    ::uString* Title() { return Window__get_Title(this); }
    void OnClosed(::app::Uno::EventArgs* args) { Window__OnClosed(this, args); }
    void OnClosing(::app::Uno::Platform::ClosingEventArgs* args) { Window__OnClosing(this, args); }
    void OnGotFocus(::app::Uno::EventArgs* args) { Window__OnGotFocus(this, args); }
    void OnKeyboardResized() { Window__OnKeyboardResized(this); }
    void OnKeyPressed(::app::Uno::Platform::KeyEventArgs* args) { Window__OnKeyPressed(this, args); }
    void OnKeyReleased(::app::Uno::Platform::KeyEventArgs* args) { Window__OnKeyReleased(this, args); }
    void OnLostFocus(::app::Uno::EventArgs* args) { Window__OnLostFocus(this, args); }
    void OnPointerEntered(::app::Uno::Platform::PointerEventArgs* args) { Window__OnPointerEntered(this, args); }
    void OnPointerLeft(::app::Uno::Platform::PointerEventArgs* args) { Window__OnPointerLeft(this, args); }
    void OnPointerMoved(::app::Uno::Platform::PointerEventArgs* args) { Window__OnPointerMoved(this, args); }
    void OnPointerPressed(::app::Uno::Platform::PointerEventArgs* args) { Window__OnPointerPressed(this, args); }
    void OnPointerReleased(::app::Uno::Platform::PointerEventArgs* args) { Window__OnPointerReleased(this, args); }
    void OnPointerWheelChanged(::app::Uno::Platform::PointerEventArgs* args) { Window__OnPointerWheelChanged(this, args); }
    void OnResized(::app::Uno::EventArgs* args) { Window__OnResized(this, args); }
    void OnTextInput(::app::Uno::Platform::TextInputEventArgs* args) { Window__OnTextInput(this, args); }
    void OnUpdating(::app::Uno::EventArgs* args) { Window__OnUpdating(this, args); }
    void remove_Closed(::uDelegate* value) { Window__remove_Closed(this, value); }
    void remove_Closing(::uDelegate* value) { Window__remove_Closing(this, value); }
    void remove_GotFocus(::uDelegate* value) { Window__remove_GotFocus(this, value); }
    void remove_KeyboardResized(::uDelegate* value) { Window__remove_KeyboardResized(this, value); }
    void remove_KeyPressed(::uDelegate* value) { Window__remove_KeyPressed(this, value); }
    void remove_KeyReleased(::uDelegate* value) { Window__remove_KeyReleased(this, value); }
    void remove_LostFocus(::uDelegate* value) { Window__remove_LostFocus(this, value); }
    void remove_PointerEntered(::uDelegate* value) { Window__remove_PointerEntered(this, value); }
    void remove_PointerLeft(::uDelegate* value) { Window__remove_PointerLeft(this, value); }
    void remove_PointerMoved(::uDelegate* value) { Window__remove_PointerMoved(this, value); }
    void remove_PointerPressed(::uDelegate* value) { Window__remove_PointerPressed(this, value); }
    void remove_PointerReleased(::uDelegate* value) { Window__remove_PointerReleased(this, value); }
    void remove_PointerWheelChanged(::uDelegate* value) { Window__remove_PointerWheelChanged(this, value); }
    void remove_Resized(::uDelegate* value) { Window__remove_Resized(this, value); }
    void remove_TextInput(::uDelegate* value) { Window__remove_TextInput(this, value); }
    void remove_Updating(::uDelegate* value) { Window__remove_Updating(this, value); }
    void ClientSize(::app::Uno::Int2 value);
    void Fullscreen(bool value) { Window__set_Fullscreen(this, value); }
    void PointerCursor(int value) { Window__set_PointerCursor(this, value); }
    void Title(::uString* value) { Window__set_Title(this, value); }
};

}}}

#include <app/Uno.Int2.h>

namespace app {
namespace Uno {
namespace Platform {

inline ::app::Uno::Int2 Window::ClientSize() { return Window__get_ClientSize(this); }
inline void Window::ClientSize(::app::Uno::Int2 value) { Window__set_ClientSize(this, value); }

}}}


#endif
