// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Desktop\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DESKTOP_DESKTOP_ROOT_VIEWPORT_H__
#define __APP_FUSE_DESKTOP_DESKTOP_ROOT_VIEWPORT_H__

#include <app/Fuse.IViewport.h>
#include <app/Fuse.RootViewport.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEventData; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Platform { struct PointerEventArgs; } } }
namespace app { namespace Uno { namespace Platform { struct Window; } } }

namespace app {
namespace Fuse {
namespace Desktop {

struct DesktopRootViewport;

struct DesktopRootViewport__uType : ::app::Fuse::RootViewport__uType
{
};

DesktopRootViewport__uType* DesktopRootViewport__typeof();

void DesktopRootViewport___ObjInit_2(DesktopRootViewport* __this, ::app::Uno::Platform::Window* window);
void DesktopRootViewport__Draw_1(DesktopRootViewport* __this);
DesktopRootViewport* DesktopRootViewport__New_2(::uStatic* __this, ::app::Uno::Platform::Window* window);
void DesktopRootViewport__OnPointerLeft(DesktopRootViewport* __this, ::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args);
void DesktopRootViewport__OnPointerMoved(DesktopRootViewport* __this, ::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args);
void DesktopRootViewport__OnPointerPressed(DesktopRootViewport* __this, ::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args);
void DesktopRootViewport__OnPointerReleased(DesktopRootViewport* __this, ::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args);
void DesktopRootViewport__OnPointerWheelChanged(DesktopRootViewport* __this, ::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args);
::app::Fuse::Input::PointerEventData* DesktopRootViewport__TranslatePointerEvent(DesktopRootViewport* __this, ::app::Uno::Platform::PointerEventArgs* args);

struct DesktopRootViewport : ::app::Fuse::RootViewport
{
    ::uStrong< ::app::Fuse::DrawContext*> _dc;

    void _ObjInit_2(::app::Uno::Platform::Window* window) { DesktopRootViewport___ObjInit_2(this, window); }
    void Draw_1() { DesktopRootViewport__Draw_1(this); }
    void OnPointerLeft(::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args) { DesktopRootViewport__OnPointerLeft(this, sender, args); }
    void OnPointerMoved(::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args) { DesktopRootViewport__OnPointerMoved(this, sender, args); }
    void OnPointerPressed(::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args) { DesktopRootViewport__OnPointerPressed(this, sender, args); }
    void OnPointerReleased(::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args) { DesktopRootViewport__OnPointerReleased(this, sender, args); }
    void OnPointerWheelChanged(::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args) { DesktopRootViewport__OnPointerWheelChanged(this, sender, args); }
    ::app::Fuse::Input::PointerEventData* TranslatePointerEvent(::app::Uno::Platform::PointerEventArgs* args) { return DesktopRootViewport__TranslatePointerEvent(this, args); }
};

}}}


#endif
